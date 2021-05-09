import rclpy
from rclpy import Node
import numpy as np
import cv2
from spark_msgs.msg import LaneCoeffs, WaypointData

class LeftWaypointExtractNode(Node):

    def __init__(self):
        super().__init__("LeftWaypointExtract")

        self.subscriber = self.create_subscription(
            LaneCoeffs,
            "/lane_detection/left_coeffs",
            self.callback,
            1)

        self.publisher = self.create_publisher(
            WaypointData,
            "/lane_detection/left_waypoints",
            1
        )


    def callback(self, msg):
        slope = msg.slope
        bias = msg.bias



def main(args=None):
    rclpy.init(args=args)

    subscriber = LeftWaypointExtractNode()

    rclpy.spin(subscriber)

    subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
