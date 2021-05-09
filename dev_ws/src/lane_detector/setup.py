from setuptools import setup

package_name = 'lane_detector'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
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
            'lane_detection = lane_detector.LaneDetectorNode:main',
            'process_lanes = lane_detector.ProcessLaneNode:main'
        ],
    },
)
