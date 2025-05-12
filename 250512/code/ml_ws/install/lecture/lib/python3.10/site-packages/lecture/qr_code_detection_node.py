import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import pyrealsense2 as rs
import numpy as np
from pyzbar.pyzbar import decode


class ImagePublisher(Node):
    def __init__(self):
        super().__init__("image_publisher")

        self.publisher_ = self.create_publisher(Image, "camera/color/image_raw", 10)
        self.br = CvBridge()

        self.pipeline = rs.pipeline()
        config = rs.config()
        config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)
        self.pipeline.start(config)

        self.timer = self.create_timer(1.0 / 30, self.timer_callback)

    def timer_callback(self):
        frames = self.pipeline.wait_for_frames()
        color_frame = frames.get_color_frame()
        if not color_frame:
            return

        color_image = np.asanyarray(color_frame.get_data())

        decoded_objects = decode(color_image)
        for obj in decoded_objects:
            qr_data = obj.data.decode("utf-8")

            points = obj.polygon
            if len(points) > 4:
                hull = cv2.convexHull(np.array([p for p in points], dtype=np.float32))
                hull = list(map(tuple, np.squeeze(hull)))

            else:
                hull = points

            n = len(hull)
            for j in range(0, n):
                cv2.line(color_image, hull[j], hull[(j + 1) % n], (0, 255, 0), 3)

            x, y, w, h = obj.rect
            cv2.putText(
                color_image,
                "Customized QR Code!",
                (x, y - 10),
                cv2.FONT_HERSHEY_SIMPLEX,
                0.9,
                (255, 0, 0),
                2,
            )

        img_msg = self.br.cv2_to_imgmsg(color_image, encoding="bgr8")
        self.publisher_.publish(img_msg)
        self.get_logger().info("Published RGB frame")


def main(args=None):
    rclpy.init(args=args)
    node = ImagePublisher()
    rclpy.spin(node)
    node.pipeline.stop()
    node.destroy_node()
    rclpy.shutdown()
