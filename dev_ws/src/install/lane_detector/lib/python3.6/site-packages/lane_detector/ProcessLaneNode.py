import cv2

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
from cv_bridge import CvBridge
from spark_msgs.msg import LaneCoeffs

import numpy as np
import time

from .BinaryToFit import BinaryToFit


class ProcessLaneNode(Node):

    def __init__(self):
        super().__init__("ProcessLane")

        self.right_publisher = self.create_publisher(
            LaneCoeffs,
            "/lane_detection/right_coeffs",
            1
        )

        self.subscription_right = self.create_subscription(
            CompressedImage,
            '/lane_detection/right_view',
            self.right_listener_callback,
            1)

        self.left_publisher = self.create_publisher(
            LaneCoeffs,
            "/lane_detection/left_coeffs",
            1
        )

        self.subscription_left = self.create_subscription(
            CompressedImage,
            '/lane_detection/left_view',
            self.left_listener_callback,
            1)

        self.leftCameraFitter = BinaryToFit(show_results=False,camera_type="left")
        self.rightCameraFitter = BinaryToFit(show_results=False, camera_type="right")
        self.bridge = CvBridge()

    def left_listener_callback(self, msg, histogram=True):
        image = np.array(self.bridge.compressed_imgmsg_to_cv2(msg))
        fit_params = self.leftCameraFitter.getFitParams(image) if histogram else self.line_fitter(image)

        coeffs = LaneCoeffs()
        coeffs.coeffs = fit_params.astype("float32").tolist()
        self.left_publisher.publish(coeffs)


    def right_listener_callback(self, msg, histogram=True):
        image = np.array(self.bridge.compressed_imgmsg_to_cv2(msg))
        fit_params = self.rightCameraFitter.getFitParams(image) if histogram else self.line_fitter(image)

        coeffs = LaneCoeffs()
        coeffs.coeffs = fit_params.astype("float32").tolist()
        self.right_publisher.publish(coeffs)

    def line_fitter(self, image):

        y,x = np.where(image == 1)
        coeffs = np.polyfit(x,-1*y,2)

        return coeffs


def main(args=None):
    rclpy.init(args=args)

    subscriber = ProcessLaneNode()

    rclpy.spin(subscriber)

    subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
