import rclpy
from rclpy.node import Node
import cv2
import numpy as np
import pyrealsense2 as rs

from std_msgs.msg import String
from sensor_msgs.msg import Image
from geometry_msgs.msg import Point, TransformStamped
from tf2_ros import TransformBroadcaster
from cv_bridge import CvBridge
import torch


class RealSenseYoloTfNode(Node):
    def __init__(self):
        super().__init__("realsense_yolo_tf_node")

        # YOLO 모델 로드
        self.yolo_model = torch.hub.load(
            "ultralytics/yolov5",
            "custom",
            path="/home/ssafy/pjt9_ws/best.pt",
        )

        # RealSense 초기화
        self.pipeline = rs.pipeline()
        cfg = rs.config()
        cfg.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)
        cfg.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30)
        self.profile = self.pipeline.start(cfg)
        self.depth_scale = 0.001  # depth unit → meter

        # ROS2 퍼블리셔 & 브로드캐스터
        self.detection_publisher = self.create_publisher(
            String, "detection_results", 10
        )
        self.image_publisher = self.create_publisher(Image, "detection_image", 10)
        self.coord_publisher = self.create_publisher(
            Point, "/detected_object_coordinates", 10
        )
        self.tf_broadcaster = TransformBroadcaster(self)

        self.bridge = CvBridge()
        self.timer = self.create_timer(0.1, self.timer_callback)

        # 카메라 프레임 이름
        self.camera_frame = "camera_link"

    def timer_callback(self):
        frames = self.pipeline.wait_for_frames()
        color_frame = frames.get_color_frame()
        depth_frame = frames.get_depth_frame()
        if not color_frame or not depth_frame:
            return

        color_image = np.asanyarray(color_frame.get_data())
        depth_image = np.asanyarray(depth_frame.get_data())
        depth_intrin = depth_frame.profile.as_video_stream_profile().intrinsics

        results = self.yolo_model(color_image)

        for det in results.xyxy[0]:
            # det: [x1, y1, x2, y2, conf, cls]
            x1, y1, x2, y2, _, cls = det.cpu().numpy().astype(int)
            cx = (x1 + x2) // 2
            cy = (y1 + y2) // 2
            depth_m = depth_image[cy, cx] * self.depth_scale

            # 픽셀 → 카메라 좌표계
            x_rel, y_rel, z_rel = rs.rs2_deproject_pixel_to_point(
                depth_intrin, [cx, cy], depth_m
            )

            # 라벨(프레임명) 생성 (스페이스 제거)
            label = self.yolo_model.names[int(cls)].replace(" ", "_")

            # 1) TF 메시지 생성 및 브로드캐스트
            t = TransformStamped()
            t.header.stamp = self.get_clock().now().to_msg()
            t.header.frame_id = self.camera_frame
            t.child_frame_id = label
            t.transform.translation.x = float(x_rel)
            t.transform.translation.y = float(y_rel)
            t.transform.translation.z = float(z_rel)
            # 회전은 단위쿼터니언
            t.transform.rotation.x = 0.0
            t.transform.rotation.y = 0.0
            t.transform.rotation.z = 0.0
            t.transform.rotation.w = 1.0

            self.tf_broadcaster.sendTransform(t)

            # 2) geometry_msgs/Point 퍼블리시
            pt = Point(x=x_rel, y=y_rel, z=z_rel)
            self.coord_publisher.publish(pt)

            # 디버그 로깅 & 이미지 렌더링
            info = f"{label}: ({x_rel:.3f}, {y_rel:.3f}, {z_rel:.3f}) m"
            self.get_logger().info(info)
            cv2.rectangle(color_image, (x1, y1), (x2, y2), (0, 255, 0), 2)
            cv2.putText(
                color_image,
                info,
                (x1, y1 - 10),
                cv2.FONT_HERSHEY_SIMPLEX,
                0.5,
                (0, 255, 0),
                2,
            )

        # 3) 이미지 퍼블리시
        img_msg = self.bridge.cv2_to_imgmsg(color_image, encoding="bgr8")
        self.image_publisher.publish(img_msg)

    def destroy_node(self):
        self.pipeline.stop()
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = RealSenseYoloTfNode()
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
