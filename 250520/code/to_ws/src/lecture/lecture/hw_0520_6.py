import sys
import random
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from action_msgs.msg import GoalStatus
from dobot_msgs.action import PointToPoint
from dobot_msgs.srv import GripperControl


class PickAndPlaceRandom(Node):
    def __init__(self):
        super().__init__("pick_and_place_random")
        # ActionClient: PTP_action (Move)
        self._action_client = ActionClient(
            self, PointToPoint, "PTP_action", callback_group=ReentrantCallbackGroup()
        )
        # ServiceClient: dobot_gripper_service (Gripper on/off)
        self.cli = self.create_client(GripperControl, "dobot_gripper_service")
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Gripper service not available, retrying...")
        self.req = GripperControl.Request()

        # 작업 영역(예: X:[10,200], Y:[50,250], Z:[10,80])
        self.x_range = (10.0, 200.0)
        self.y_range = (50.0, 250.0)
        self.z_range = (10.0, 80.0)

        # 1회 픽앤플레이스: 두 좌표만 생성
        self.pick_pose = self._gen_random_pose()
        self.place_pose = self._gen_random_pose()

        self.get_logger().info(f"Generated Pick  pose: {self.pick_pose}")
        self.get_logger().info(f"Generated Place pose: {self.place_pose}")

        # 단계 구분: 0=move→pick, 1=move→place, 2=done
        self.step = 0
        self.execute()

    def _gen_random_pose(self):
        """작업 영역 내에서 랜덤 좌표 [X, Y, Z, R] 생성 (R: 회전 각도)"""
        x = random.uniform(*self.x_range)
        y = random.uniform(*self.y_range)
        z = random.uniform(*self.z_range)
        r = 0.0
        return [x, y, z, r]

    def execute(self):
        if self.step == 0:
            # 1) 픽 위치로 이동
            self.get_logger().info(f"[STEP 0] Moving to pick pose: {self.pick_pose}")
            self.send_move(self.pick_pose, motion_type=1)
        elif self.step == 1:
            # 2) 그리퍼 켜서 픽
            self.get_logger().info("[STEP 1] Activating gripper to pick")
            self.send_gripper(True)
        elif self.step == 2:
            # 3) 플레이스 위치로 이동
            self.get_logger().info(f"[STEP 2] Moving to place pose: {self.place_pose}")
            self.send_move(self.place_pose, motion_type=1)
        elif self.step == 3:
            # 4) 그리퍼 끄기
            self.get_logger().info("[STEP 3] Deactivating gripper to place")
            self.send_gripper(False)
        else:
            self.get_logger().info("All done. Shutting down.")
            rclpy.shutdown()
            sys.exit()

    def send_move(self, target, motion_type):
        goal_msg = PointToPoint.Goal()
        goal_msg.target_pose = target
        goal_msg.motion_type = motion_type

        # 서버 대기 및 전송
        self._action_client.wait_for_server()
        send_goal_future = self._action_client.send_goal_async(
            goal_msg, feedback_callback=self.feedback_callback
        )
        send_goal_future.add_done_callback(self.move_response)

    def move_response(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error("Move goal rejected")
            return
        self.get_logger().info("Move goal accepted")
        get_result_future = goal_handle.get_result_async()
        get_result_future.add_done_callback(self.get_result_callback)

    def send_gripper(self, gripper_state):
        if gripper_state:
            self.req.gripper_state = "open"
        else:
            self.req.gripper_state = "close"

        self.srv_future = self.cli.call_async(self.req)
        self.step += 1

    def gripper_response(self, future):
        status = future.result().status
        result = future.result().result
        if status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info("Result of action call: {0}".format(result))
            self.step += 1
            self.execute()

    def get_result_callback(self, future):
        print("ggg")
        status = future.result().status
        result = future.result().result
        if status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info("Result of action call: {0}".format(result))
            print("????")
            self.step += 1
            self.execute()

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info("Received feedback: {0}".format(feedback))


def main(args=None):
    rclpy.init(args=args)
    node = PickAndPlaceRandom()
    executor = MultiThreadedExecutor()
    rclpy.spin(node, executor=executor)


if __name__ == "__main__":
    main()
