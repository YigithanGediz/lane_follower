import rclpy
from rclpy.node import Node
from spark_msgs.msg import WaypointData, LaneCoeffs
import numpy as np
import cv2


class LeftWaypointsNode(Node):
    def __init__(self):
        super().__init__("LeftWaypoints")

        self.subscriber = self.create_subscription(
            LaneCoeffs,
            "/lane_detection/left_coeffs",
            self.callback,
            1
        )

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


        # Implement the line near the middle of the x axis
        n_samples = 100

        x_space = np.linspace(1080-(n_samples/2),1080+(n_samples/2) ,n_samples + 1, dtype="float64")
        y_space = line(x_space)

        data = WaypointData()
        data.x = list(x_space)
        data.y = list(y_space)

        self.publisher.publish(data)


    def transform(self, slope, bias, vertical_slope_thresh=40):
        # Rotate the line 90 degrees clockwise
        rot_slope = (-1/slope)
        rot_bias = (bias/slope)

        # If slope's absolute value is greater than threshold, the line is vertical
        if abs(rot_slope) >= vertical_slope_thresh:
            rot_slope = np.inf
            rot_bias = bias

        return (rot_slope, rot_bias)


def main(args=None):
    rclpy.init(args=args)

    subscriber = LeftWaypointsNode()

    rclpy.spin(subscriber)

    subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()