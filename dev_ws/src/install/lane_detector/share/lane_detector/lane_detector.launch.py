from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    ld = LaunchDescription()

    right_lane_detection_node = Node(
        package="lane_detector",
        node_executable="right_lane_detection",
        output="screen"
    )

    left_lane_detection_node = Node(
        package="lane_detector",
        node_executable="left_lane_detection",
        output="screen"
    )

    process_lane_node = Node(
        package="lane_detector",
        node_executable="process_lanes",
        output="screen"
    )

    left_waypoints_node = Node(
        package="lane_detector",
        node_executable="left_waypoints",
        output="screen"
    )

    show_left_waypoints_node = Node(
        package="lane_detector",
        node_executable="show_left_waypoints",
        output="screen"
    )

    ld.add_action(process_lane_node)
    ld.add_action(left_lane_detection_node)
    ld.add_action(right_lane_detection_node)
    ld.add_action(left_waypoints_node)
    ld.add_action(show_left_waypoints_node)

    return ld

