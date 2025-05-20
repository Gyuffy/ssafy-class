import math
import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from std_msgs.msg import String
from dobot_msgs.action import PointToPoint


class ObjectTriggerPTP(Node):

    def __init__(self):
        super().__init__("object_trigger_ptp")
        self._action_client = ActionClient(self, PointToPoint, "PTP_action")
        self.create_subscription(
            String, "detection_results", self.detection_callback, 10
        )
        self.home_pose = [200.0, 0.0, 50.0, 0.0]

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info("Goal rejected :(")
            return
        self.get_logger().info("Goal accepted :)")

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info("Result: {0}".format(result))

    def feedback_callback(self, feedback):
        self.get_logger().info(
            "Received feedback: {0}".format(feedback.feedback.current_pose)
        )

    def send_goal(self, target, mode):
        self.get_logger().info("Waiting for action server...")
        self._action_client.wait_for_server()

        goal_msg = PointToPoint.Goal()
        goal_msg.target_pose = target
        goal_msg.motion_type = mode

        self.get_logger().info(f"Sending goal: {target}")

        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg, feedback_callback=self.feedback_callback
        )
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def detection_callback(self, msg: String):
        # 메시지 포맷: "label color distance(m)"
        parts = msg.data.split()
        if len(parts) < 3:
            self.get_logger().warn(f"잘못된 포맷: {msg.data}")
            return

        parts[2] = parts[2][:-1]
        print(parts[2])

        try:
            distance = float(parts[2])  # 예: "0.45"
        except ValueError:
            self.get_logger().warn(f"거리 파싱 실패: {parts[2]}")
            return

        target_pose = [200.0, 50.0, 50.0, 0.0]

        # 목표 포즈 생성
        if distance < 0.3:
            target_pose = [200.0, 100.0, 50.0, 0.0]
        elif distance < 0.4:
            target_pose = [200.0, 0.0, 50.0, 0.0]
        else:
            target_pose = [200.0, -100.0, 50.0, 0.0]

        self.send_goal(target=target_pose, mode=1)
        self.get_logger().info(f"{target_pose} 로 이동 요청")
        time.sleep(1)


def main(args=None):
    rclpy.init(args=args)
    node = ObjectTriggerPTP()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
