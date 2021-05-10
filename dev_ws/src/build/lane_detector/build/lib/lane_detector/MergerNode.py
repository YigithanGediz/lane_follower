import rclpy
import numpy as np
from rclpy.node import Node

class MergerNode(Node):
    def __init__(self):
        super().__init__("Merger")

