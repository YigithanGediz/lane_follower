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

        n_samples = 40

        x_space = np.linspace(0, 1080, 1080, dtype="float64")
        y_space = line(x_space)

        data = WaypointData()
        data.x = list(x_space)
        data.y = list(y_space)

        self.publisher.publish(data)


    def transform(self, slope, bias):
        return (1/slope),bias



def main(args=None):
    rclpy.init(args=args)

    subscriber = LeftWaypointsNode()

    rclpy.spin(subscriber)

    subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()