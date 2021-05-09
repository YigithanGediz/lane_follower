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

        t_slope, t_bias = self.transform(slope, bias)

        line = np.poly1d([t_slope, t_bias])
        x_space = np.linspace(0, 1080, 1080, dtype="int32")
        y_space = line(x_space)

        data = WaypointData()
        data.x = x_space
        data.y = y_space

        self.publisher.publish(data)

    def transform(self, slope, bias):
        return 1/slope, bias


def main(args=None):
    rclpy.init(args=args)

    subscriber = LeftWaypointExtractNode()

    rclpy.spin(subscriber)

    subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
