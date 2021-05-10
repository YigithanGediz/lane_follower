import rclpy
from rclpy.node import Node
from lgsvl_msgs.msg import VehicleControlData
from nav_msgs.msg import Odometry
from spark_msgs.msg import LaneCoeffs
import numpy as np
import math

deneme = Odometry()


class ControlPublisherNode(Node):
    def __init__(self):
        super().__init__("ControlPublisher")

        self.publisher = self.create_publisher(
            VehicleControlData,
            "/vehicle_cmd",
            1
        )

        self.odom_subscriber = self.create_subscription(
            Odometry,
            "/odom",
            self.vehicle_callback,
            1
        )

        self.left_subscriber = self.create_subscription(
            LaneCoeffs,
            "/lane_detection/left_coeffs",
            self.callback,
            1
        )


    def callback(self, msg, y_intercept = 200, x_interval = (0,256)):
        coeffs = np.array(list(msg.coeffs))
        coeffs[2] -= y_intercept

        roots = np.roots(coeffs)

        root = [number for number in roots if (np.isreal(number) and number < x_interval[1] and number > x_interval[0])]

        if len(root) == 0:
            root = -1

        else:
            root = root[0]

        control = VehicleControlData()



        #control.acceleration_pct = 0.1

        self.publisher.publish(control)

    def vehicle_callback(self, msg):
        speed = msg.twist.twist.linear.x
        control = VehicleControlData()
        if speed < 1:
            control.acceleration_pct = 0.2

        elif speed < 1:
            control.braking_pct = 0.2

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

