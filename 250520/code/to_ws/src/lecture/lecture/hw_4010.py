#!/usr/bin/env python3

import time

import rclpy
from rclpy.node import Node

import numpy as np
import pyrealsense2 as rs

from sensor_msgs.msg import Image
from geometry_msgs.msg import Point, TransformStamped
from cv_bridge import CvBridge
from tf2_ros import TransformBroadcaster
import cv2


class RealSenseFaceTfPublisher(Node):
    def __init__(self):
        super().__init__("realsense_face_tf_publisher")

        # RealSense 파이프라인 & 설정 (컬러 + 깊이)
        self.pipeline = rs.pipeline()
        cfg = rs.config()
        cfg.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)
        cfg.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30)
        self.cfg = cfg

        # cv_bridge & Haar face detector
        self.bridge = CvBridge()
        self.face_cascade = cv2.CascadeClassifier(
            cv2.data.haarcascades + "haarcascade_frontalface_default.xml"
        )

        # ROS 퍼블리셔들
        self.image_pub = self.create_publisher(Image, "/camera/color/image_raw", 10)
        self.coord_pub = self.create_publisher(
            Point, "/detected_object_coordinates", 10
        )
        self.tf_broadcaster = TransformBroadcaster(self)

        # 내부 상태
        self.started = False

        # 주기적 콜백 (10Hz)
        self.create_timer(0.1, self.timer_callback)

        # 카메라 프레임 아이디
        self.camera_frame = "camera_color_frame"

    def timer_callback(self):
        # 1) 파이프라인 시작 & 워밍업
        if not self.started:
            self.profile = self.pipeline.start(self.cfg)
            time.sleep(1.0)
            # intrinsics 한 번만 추출
            depth_stream = self.profile.get_stream(
                rs.stream.depth
            ).as_video_stream_profile()
            self.depth_intrin = depth_stream.get_intrinsics()
            self.depth_scale = (
                self.profile.get_device().first_depth_sensor().get_depth_scale()
            )
            self.get_logger().info("▶ RealSense pipeline started and warmed up")
            self.started = True
            return

        # 2) 프레임 수신
        try:
            frames = self.pipeline.wait_for_frames(timeout_ms=2000)
        except RuntimeError as e:
            self.get_logger().warn(f"⏱ Timeout waiting for frames: {e}")
            return

        color_frame = frames.get_color_frame()
        depth_frame = frames.get_depth_frame()
        if not color_frame or not depth_frame:
            self.get_logger().warn("⚠️ Incomplete frames")
            return

        # 3) OpenCV 이미지 변환 & 얼굴 검출
        img = np.asanyarray(color_frame.get_data())
        gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        faces = self.face_cascade.detectMultiScale(gray, 1.1, 5, minSize=(30, 30))

        # 최대 3개까지만 처리
        for idx, (x, y, w, h) in enumerate(faces):
            if idx >= 3:
                break

            # 얼굴 중심 픽셀 좌표
            cx = x + w // 2
            cy = y + h // 2

            # 깊이(m) 읽기
            depth_value = depth_frame.get_distance(cx, cy)

            # 카메라 좌표로 변환
            x_rel, y_rel, z_rel = rs.rs2_deproject_pixel_to_point(
                self.depth_intrin, [cx, cy], depth_value
            )

            # TF 브로드캐스트 (child_frame_id 에 idx 포함)
            t = TransformStamped()
            t.header.stamp = self.get_clock().now().to_msg()
            t.header.frame_id = self.camera_frame
            t.child_frame_id = f"face_{idx}"
            t.transform.translation.x = x_rel
            t.transform.translation.y = y_rel
            t.transform.translation.z = z_rel
            t.transform.rotation.w = 1.0
            self.tf_broadcaster.sendTransform(t)

            # Point 메시지 퍼블리시
            pt = Point(x=x_rel, y=y_rel, z=z_rel)
            self.coord_pub.publish(pt)

            # 디버그용 렌더링
            cv2.rectangle(img, (x, y), (x + w, y + h), (0, 255, 0), 2)
            cv2.putText(
                img,
                f"[{idx}] ({x_rel:.2f},{y_rel:.2f},{z_rel:.2f})m",
                (x, y - 10),
                cv2.FONT_HERSHEY_SIMPLEX,
                0.5,
                (0, 255, 0),
                2,
            )
        # 7) 이미지 퍼블리시
        img_msg = self.bridge.cv2_to_imgmsg(img, encoding="bgr8")
        img_msg.header.stamp = self.get_clock().now().to_msg()
        img_msg.header.frame_id = self.camera_frame
        self.image_pub.publish(img_msg)

    def destroy_node(self):
        if self.started:
            self.pipeline.stop()
        super().destroy_node()


def main(args=None):
    import cv2  # 위에서 사용하므로 main에 임포트

    rclpy.init(args=args)
    node = RealSenseFaceTfPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
        cv2.destroyAllWindows()


if __name__ == "__main__":
    main()
