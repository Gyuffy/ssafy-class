import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseStamped

import websocket
import json
import threading

import math

SERVER_URL = "robots.mincodinglab.com"


class WebSocketClientNode(Node):
    def __init__(self):
        super().__init__("websocket_client_node")

        # Initialize WebSocket connection during node creation
        self.ws = self.connect()

        self.join_state_subscription = self.create_subscription(
            JointState,
            "/joint_states",  # ROS 2 topic name
            self.joint_state_callback,
            10,
        )
        self.join_state_subscription

    def connect(self):
        uri = f"ws://{SERVER_URL}/socket/ws/common/"
        print(uri)
        ws = websocket.WebSocket()
        try:
            ws.connect(uri)
            self.get_logger().info("WebSocket connection established!")
            return ws
        except Exception as e:
            self.get_logger().error(f"WebSocket Error: {e}")
            return None

    # Function to send a message through WebSocket
    def send(self, message):
        try:
            if self.ws:
                request_obj = {"message": message}
                json_parsed_obj = json.dumps(request_obj)
                self.ws.send(json_parsed_obj)
                self.get_logger().info(f"Sent message: {message}")
        except Exception as e:
            self.get_logger().error(f"WebSocket send error: {e}")

    def joint_state_callback(self, msg):
        if len(msg.position) >= 4:
            motor_1 = round(math.degrees(msg.position[0]), 2)  # Motor 1 position
            motor_2 = round(math.degrees(msg.position[1]), 2)  # Motor 2 position
            motor_3 = round(math.degrees(msg.position[2]), 2)  # Motor 3 position
            motor_4 = round(math.degrees(msg.position[3]), 2)  # Motor 4 position

            # Create a dictionary with motor values to send as JSON
            motor_values = {
                "joint_angle": {
                    "motor_1": motor_1,
                    "motor_2": motor_2,
                    "motor_3": motor_3,
                    "motor_4": motor_4,
                }
            }

            # Convert the dictionary to a JSON string
            motor_values_json = json.dumps(motor_values)

            # Send the JSON string via WebSocket
            self.get_logger().info(f"Sending motor values: {motor_values_json}")
            threading.Thread(target=self.send, args=(motor_values_json,)).start()
        else:
            self.get_logger().warn(
                "Received joint_state message with insufficient motor values"
            )

    # Function to continuously receive responses from WebSocket in a separate thread
    def receive(self):
        try:
            while True:
                if self.ws:
                    response = self.ws.recv()
                    if response:
                        data = json.loads(response)
                        self.get_logger().info(f"Received response: {data['message']}")

                        # Process the received data and publish to /joint_states
                        self.process_received_data(data["message"])
        except Exception as e:
            self.get_logger().error(f"WebSocket receive error: {e}")
        finally:
            if self.ws:
                self.ws.close()

    # Process received data and publish as JointState message
    def process_received_data(self, data):
        try:
            # Split the received data (comma-separated motor values)
            print("data: ", data)
            cleaned_data = data.replace("[joint_angle]", "").strip()
            motor_values = cleaned_data.split(",")
            if len(motor_values) == 4:
                motor_1 = float(motor_values[0])
                motor_2 = float(motor_values[1])
                motor_3 = float(motor_values[2])
                motor_4 = float(motor_values[3])

                # Create a JointState message
                joint_state_msg = JointState()
                joint_state_msg.header.stamp = self.get_clock().now().to_msg()
                joint_state_msg.name = ["motor_1", "motor_2", "motor_3", "motor_4"]
                joint_state_msg.position = [
                    math.radians(motor_1),
                    math.radians(motor_2),
                    math.radians(motor_3),
                    math.radians(motor_4),
                ]

                # Publish the JointState message
                # self.joint_state_publisher.publish(joint_state_msg)
                # self.get_logger().info(f"Published joint state: {joint_state_msg.position}")
            else:
                self.get_logger().warn(
                    "Received message with incorrect number of motor values"
                )
        except Exception as e:
            self.get_logger().error(f"Error processing received data: {e}")


def main(args=None):
    rclpy.init(args=args)

    websocket_client_node = WebSocketClientNode()

    try:
        rclpy.spin(websocket_client_node)
    except KeyboardInterrupt:
        websocket_client_node.get_logger().info("Shutting down WebSocket client node")
    finally:
        if websocket_client_node.ws:
            websocket_client_node.ws.close()
        websocket_client_node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
