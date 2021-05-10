import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image, CompressedImage
from spark_msgs.msg import WaypointData
import numpy as np
from cv_bridge import CvBridge
import cv2

class ShowLeftWaypointsNode(Node):

    def __init__(self):
        super().__init__("ShowLeftWaypoints")

        self.image_subscription = self.create_subscription(
            CompressedImage,
            "/simulator/camera_node/image/compressed",
            self.image_callback,
            1
        )

        self.waypoint_subscription = self.create_subscription(
            WaypointData,
            "/lane_detection/left_waypoints",
            self.waypoint_callback,
            1
        )

        self.waypoint_image_publisher = self.create_publisher(
            Image,
            "/lane_detection/waypoint_view",
            1
        )

        self.image = None

        self.bridge = CvBridge()

    def image_callback(self, msg):
        img = self.bridge.compressed_imgmsg_to_cv2(msg)
        self.image = img

    def waypoint_callback(self, msg):
        if self.image is not None:
            img = np.copy(self.image)
            x_space = msg.x
            y_space = msg.y

            for x,y in zip(x_space, y_space):
                cv2.circle(img, center=(x,y), radius=3, thickness=3,color=(255,0,0))

            self.waypoint_image_publisher.publish(self.bridge.cv2_to_imgmsg(img))


def main(args=None):
    rclpy.init(args=args)

    subscriber = ShowLeftWaypointsNode()

    rclpy.spin(subscriber)

    subscriber.destroy_node()

    rclpy.shutdown()

if __name__ == "__main__":
    main()