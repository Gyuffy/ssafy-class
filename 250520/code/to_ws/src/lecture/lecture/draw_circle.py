import math
import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from dobot_msgs.action import PointToPoint


class PTP_MOVE(Node):

    def __init__(self):
        super().__init__("dobot_PTP_client")
        self._action_client = ActionClient(self, PointToPoint, "PTP_action")

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


def generate_circle_points(radius, center_x, center_y, fixed_z, num_points=36):
    """
    Generate a list of points on a circle in the XY plane with fixed Z.
    :param radius: Radius of the circle.
    :param center_x: X-coordinate of the circle's center.
    :param center_y: Y-coordinate of the circle's center.
    :param fixed_z: Fixed Z-coordinate for all points.
    :param num_points: Number of points to generate on the circle.
    :return: List of points [(x, y, z)].
    """
    points = []
    for i in range(num_points):
        theta = 2 * math.pi * i / num_points  # Angle in radians
        x = center_x + radius * math.cos(theta)
        y = center_y + radius * math.sin(theta)
        points.append([x, y, fixed_z, 0.0])  # We keep the rotation (r) at 0
    return points


def main(args=None):
    rclpy.init(args=args)
    action_client = PTP_MOVE()

    # Circle parameters
    radius = 50.0  # Radius of the circle in mm
    center_x = 200.0  # X center of the circle
    center_y = 0.0  # Y center of the circle
    fixed_z = 100.0  # Fixed Z height for all points
    num_points = 36  # Number of points to generate around the circle

    # Generate circular path points
    circle_points = generate_circle_points(
        radius, center_x, center_y, fixed_z, num_points
    )

    # Send each point as a goal with some delay to simulate continuous motion
    for point in circle_points:
        action_client.send_goal(target=point, mode=1)  # Using mode 1 (PTP)
        time.sleep(0.5)  # Small delay between sending goals

    rclpy.spin(action_client)


if __name__ == "__main__":
    main()
