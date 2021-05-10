import rclpy
from rclpy.node import Node
from lgsvl_msgs.msg import VehicleControlData
from spark_msgs.msg import LaneCoeffs

class ControlPublisherNode(Node):
    def __init__(self):
        super().__init__("ControlPublisher")

        self.publisher = self.create_publisher(
            VehicleControlData,
            "/vehicle_cmd",
            1
        )

        self.left_subscriber = self.create_subscription(
            LaneCoeffs,
            "/lane_detection/left_coeffs",
            self.callback,
            1
        )


    def callback(self, msg):
        slope = msg.slope
        bias = msg.bias

        t_slope, t_bias = self.transform(slope, bias)

        control = VehicleControlData()
        control.acceleration_pct = 0.5
        self.publisher.publish(control)

    def transform(self, slope, bias, vertical_slope_thresh=20):
        # Rotate the line 90 degrees
        rot_slope = (1/slope)
        rot_bias = bias

        # If slope's absolute value is greater than threshold, the line is vertical
        if abs(rot_slope) >= vertical_slope_thresh:
            rot_slope = np.inf

        return (rot_slope, rot_bias)

