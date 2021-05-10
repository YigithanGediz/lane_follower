from setuptools import setup
import os
from glob import glob
package_name = 'lane_detector'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yigithan',
    maintainer_email='yigithangediz@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'left_lane_detection = lane_detector.LeftLaneDetectorNode:main',
            'right_lane_detection = lane_detector.RightLaneDetectorNode:main',
            'process_lanes = lane_detector.ProcessLaneNode:main',
            'left_waypoints = lane_detector.LeftWaypointsNode:main',
            'show_left_waypoints = lane_detector.ShowLeftWaypointsNode:main',
            "right_waypoints = lane_detector.RightWaypointsNode:main",
            "show_right_waypoints = lane_detector.ShowRightWaypointsNode:main",
            "merge = lane_detector.MergerNode:main",
            'publish_control = lane_detector.ControlPublisherNode:main',
            "move_with_same_velocity = lane_detector.VelocityControllerNode:main"
        ],
    },
)
