import rclpy
from rclpy.node import Node
from lgsvl_msgs.msg import VehicleControlData
from nav_msgs.msg import Odometry
from spark_msgs.msg import LaneCoeffs
import numpy as np
import math


class ControlPublisherNode(Node):
    def __init__(self):
        super().__init__("ControlPublisher")

        self.left_subscriber = self.create_subscription(
            LaneCoeffs,
            "/lane_detection/left_coeffs",
            self.callback,
            1
        )

        self.publisher = self.create_publisher(
            VehicleControlData,
            "/vehicle_cmd",
            1
        )

        self.constant = 107


    def callback(self, msg, y_intercept = 256, x_interval = (0,512)):
        coeffs = np.array(list(msg.coeffs))
        poly = np.poly1d(coeffs)
        root = poly(y_intercept)



        control = VehicleControlData()

        #control.acceleration_pct = 0.1

        self.publisher.publish(control)

    def transform(self, slope, bias, vertical_slope_thresh=20):
        # Rotate the line 90 degrees
        rot_slope = (1/slope)
        rot_bias = bias

        # If slope's absolute value is greater than threshold, the line is vertical
        if abs(rot_slope) >= vertical_slope_thresh:
            rot_slope = np.inf

        return (rot_slope, rot_bias)


def main(args=None):
    rclpy.init(args=args)

    subscriber = ControlPublisherNode()

    rclpy.spin(subscriber)

    subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()

