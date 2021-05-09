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

    left_lane_waypoint_extraction = Node(
        package="lane_detector",
        node_executable="left_waypoints_extraction",
        output="screen"
    )

    process_lane_node = Node(
        package="lane_detector",
        node_executable="process_lanes",
        output="screen"
    )

    ld.add_action(process_lane_node)
    ld.add_action(left_lane_detection_node)
    ld.add_action(right_lane_detection_node)
    ld.add_action(left_lane_waypoint_extraction)

    return ld

