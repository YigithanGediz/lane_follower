import cv2

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
from cv_bridge import CvBridge

import numpy as np
import time

from .BinaryToFit import BinaryToFit


class ProcessLaneNode(Node):

    def __init__(self):
        super().__init__("ProcessLane")
        self.subscription_right = self.create_subscription(
            CompressedImage,
            '/lane_detection/right_view',
            self.right_listener_callback,
            1)
        self.subscription_left = self.create_subscription(
            CompressedImage,
            '/lane_detection/left_view',
            self.left_listener_callback,
            1)


        self.leftCameraFitter = BinaryToFit(show_results=True,camera_type="left")
        self.rightCameraFitter = BinaryToFit(show_results=True, camera_type="right")
        self.bridge = CvBridge()

    def left_listener_callback(self, msg):
        image = np.array(self.bridge.compressed_imgmsg_to_cv2(msg))
        fit_params = self.leftCameraFitter.getFitParams(image)


    def right_listener_callback(self, msg):
        image = np.array(self.bridge.compressed_imgmsg_to_cv2(msg))
        fit_params = self.rightCameraFitter.getFitParams(image)



def main(args=None):
    rclpy.init(args=args)

    subscriber = ProcessLaneNode()

    rclpy.spin(subscriber)

    subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
