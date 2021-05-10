import rclpy
from rclpy.node import Node
import numpy as np
from nav_msgs.msg import Odometry
from lgsvl_msgs.msg import VehicleControlData

class VelocityControllerNode(Node):

    def __init__(self):
        super().__init__("VelocityController")

        self.odom_subscriber = self.create_subscription(
            Odometry,
            "/odom",
            self.vehicle_callback,
            1
        )

        self.publisher = self.create_publisher(
            VehicleControlData,
            "/vehicle_cmd",
            1
        )

        self.limit_speed = 4


    def vehicle_callback(self, msg):
        speed = msg.twist.twist.linear.x
        control = VehicleControlData()
        if speed < self.limit_speed:
            control.acceleration_pct = 0.2

        elif speed > self.limit_speed:
            control.braking_pct = 0.2

        self.publisher.publish(control)


def main(args=None):
    rclpy.init(args=args)

    subscriber = VelocityControllerNode()

    rclpy.spin(subscriber)

    subscriber.destroy_node()
    rclpy.shutdown()