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

        self.publisher2 = self.create_publisher(
            LaneCoeffs,
            "/lane_detection/left_waypoint_coeffs",
            1
        )


    def callback(self, msg,n_samples = 100):
        slope = msg.slope
        bias = msg.bias

        t_slope, t_bias = self.transform(slope, bias)

        if t_slope is not np.inf:
            line = np.poly1d([t_slope, t_bias])

            # Implement the line near the middle of the x axis
            x_space = np.linspace(540-(n_samples/2),540+(n_samples/2) ,n_samples + 1, dtype="float64")
            y_space = line(x_space)

            data = WaypointData()
            data2 = LaneCoeffs()

            data.is_inf = False
            data.x = list(x_space)
            data.y = list(y_space)

            data2.name = "Rotated"
            data2.slope = t_slope
            data2.bias = t_bias

            self.publisher2.publish(data2)
            self.publisher.publish(data)

        else:
            data = WaypointData()
            data2 = LaneCoeffs()

            data.is_inf = True
            data.x = [t_bias+200]*n_samples
            data.y = list(np.linspace(1920-n_samples, 1920, n_samples+1).astype("float64"))

            data2.name = "Vertical"
            data2.slope = 999999999999999.
            data2.bias = t_bias

            self.publisher2.publish(data2)
            self.publisher.publish(data)


    def transform(self, slope, bias, vertical_slope_thresh=20):
        # Rotate the line 90 degrees clockwise
        rot_slope = (1/slope)
        rot_bias = (-1*bias/slope)

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