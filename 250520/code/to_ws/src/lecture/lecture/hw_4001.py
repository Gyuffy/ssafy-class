import rclpy
from rclpy.node import Node
import cv2
import numpy as np

import pyrealsense2 as rs

from std_msgs.msg import String
from sensor_msgs.msg import Image

from cv_bridge import CvBridge

import torch


class RealSenseYoloNode(Node):
    def __init__(self):
        super().__init__("realsense_yolov5_node")

        # custom 모델 로드
        self.yolo_model = torch.hub.load(
            "ultralytics/yolov5",
            "custom",
            path="/home/ssafy/pjt9_ws/best.pt",
        )

        # RealSense 초기 설정
        self.pipeline = rs.pipeline()
        config = rs.config()
        config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)
        config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30)
        profile = self.pipeline.start(config)
        depth_sensor = profile.get_device().first_depth_sensor()
        self.depth_scale = depth_sensor.get_depth_scale()

        self.detection_publisher = self.create_publisher(
            String, "detection_results", 10
        )
        self.image_publisher = self.create_publisher(Image, "detection_image", 10)

        self.bridge = CvBridge()
        self.timer = self.create_timer(0.1, self.timer_callback)
        # ROI 영역 (x1, y1, x2, y2)
        self.roi_position = (90, 121, 468, 309)

    def get_color_name(self, hsv_color):
        h, s, v = hsv_color
        if 70 < h < 120 and 0 < s < 40 and 100 < v < 170:
            return "white"
        elif (h > 160 or h < 50) and (s > 60) and (170 > v > 60):
            return "red"
        elif 80 < h < 150 and s > 150 and 30 < v < 140:
            return "blue"
        return "unknown"

    def get_color_bgr(self, color_name):
        if color_name == "white":
            return (255, 255, 255)
        elif color_name == "red":
            return (0, 0, 255)
        elif color_name == "blue":
            return (255, 0, 0)
        return (0, 255, 0)

    def get_center_color(self, image):
        # 방어 코드: 빈 이미지 처리
        if image is None or image.size == 0:
            self.get_logger().warn("get_center_color: 입력 이미지가 비어 있습니다.")
            return np.array([0, 0, 0])

        h, w, _ = image.shape
        cy, cx = h // 2, w // 2
        sample = min(h, w) // 4
        region = image[
            cy - sample // 2 : cy + sample // 2, cx - sample // 2 : cx + sample // 2
        ]
        if region is None or region.size == 0:
            self.get_logger().warn("get_center_color: 샘플링 영역이 비어 있습니다.")
            return np.array([0, 0, 0])
        hsv = cv2.cvtColor(region, cv2.COLOR_BGR2HSV)
        return np.mean(hsv, axis=(0, 1))

    def timer_callback(self):
        frames = self.pipeline.wait_for_frames()
        color_frame = frames.get_color_frame()
        depth_frame = frames.get_depth_frame()
        if not color_frame or not depth_frame:
            self.get_logger().warn("프레임을 가져오지 못했습니다.")
            return

        color_image = np.asanyarray(color_frame.get_data())
        if color_image is None or color_image.size == 0:
            self.get_logger().warn("color_image가 비어 있습니다.")
            return

        roi_x1, roi_y1, roi_x2, roi_y2 = self.roi_position
        # ROI가 유효한지 확인
        h, w, _ = color_image.shape
        if roi_x1 < 0 or roi_y1 < 0 or roi_x2 > w or roi_y2 > h:
            self.get_logger().error(
                f"ROI 좌표가 유효 범위를 벗어났습니다: {self.roi_position}, 이미지 크기: {(w,h)}"
            )
            return

        cv2.rectangle(color_image, (roi_x1, roi_y1), (roi_x2, roi_y2), (255, 0, 0), 2)
        roi = color_image[roi_y1:roi_y2, roi_x1:roi_x2]
        if roi is None or roi.size == 0:
            self.get_logger().warn("ROI가 비어 있습니다.")
            return

        # YOLOv5 추론
        results = self.yolo_model(roi)
        msg = String()

        for det in results.xyxy[0]:
            x1, y1, x2, y2, conf, cls = det.cpu().numpy()
            x1, y1, x2, y2 = map(int, (x1, y1, x2, y2))

            # 바운딩 박스 유효성 검사
            if x2 <= x1 or y2 <= y1:
                self.get_logger().warn(f"잘못된 박스 좌표: {(x1,y1,x2,y2)}")
                continue

            cx = roi_x1 + (x1 + x2) // 2
            cy = roi_y1 + (y1 + y2) // 2

            distance = depth_frame.get_distance(cx, cy)

            obj = color_image[roi_y1 + y1 : roi_y1 + y2, roi_x1 + x1 : roi_x1 + x2]
            if obj is None or obj.size == 0:
                self.get_logger().warn("객체 영역 obj가 비어 있습니다.")
                continue

            avg_hsv = self.get_center_color(obj)
            color_name = self.get_color_name(avg_hsv)
            color_bgr = self.get_color_bgr(color_name)

            label = self.yolo_model.names[int(cls)]
            msg.data = f"{label} {color_name} {distance:.2f}m"

            cv2.rectangle(
                color_image,
                (roi_x1 + x1, roi_y1 + y1),
                (roi_x1 + x2, roi_y1 + y2),
                color_bgr,
                2,
            )
            cv2.putText(
                color_image,
                f"{label}-{color_name}-{distance:.2f}m",
                (roi_x1 + x1, roi_y1 + y1 - 10),
                cv2.FONT_HERSHEY_SIMPLEX,
                0.5,
                color_bgr,
                2,
            )

        # 퍼블리시
        self.detection_publisher.publish(msg)
        ros_img = self.bridge.cv2_to_imgmsg(color_image, encoding="bgr8")
        self.image_publisher.publish(ros_img)

    def destroy_node(self):
        self.pipeline.stop()
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = RealSenseYoloNode()

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
