from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():

    rviz_config_file = "/home/ssafy/ml_ws/src/lecture/rviz/prac_3907.rviz"
    urdf_file = "/home/ssafy/ml_ws/src/lecture/urdf/prac_3907.urdf"

    with open(urdf_file, "r") as infp:
        robot_description = infp.read()

    return LaunchDescription(
        [
            Node(
                package="rviz2",
                executable="rviz2",
                output="screen",
                name="rviz2",
                arguments=["-d", rviz_config_file],
            ),
            Node(
                package="robot_state_publisher",
                executable="robot_state_publisher",
                output="screen",
                parameters=[{"robot_description": robot_description}],
            ),
            Node(
                package="joint_state_publisher_gui",
                executable="joint_state_publisher_gui",
                output="screen",
                parameters=[{"robot_description": robot_description}],
            ),
        ]
    )
