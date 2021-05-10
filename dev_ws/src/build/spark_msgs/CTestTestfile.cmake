# CMake generated Testfile for 
# Source directory: /home/yigithan/Desktop/PID_lane_follower/dev_ws/src/spark_msgs
# Build directory: /home/yigithan/Desktop/PID_lane_follower/dev_ws/src/build/spark_msgs
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/yigithan/Desktop/PID_lane_follower/dev_ws/src/build/spark_msgs/test_results/spark_msgs/lint_cmake.xunit.xml" "--package-name" "spark_msgs" "--output-file" "/home/yigithan/Desktop/PID_lane_follower/dev_ws/src/build/spark_msgs/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/dashing/bin/ament_lint_cmake" "--xunit-file" "/home/yigithan/Desktop/PID_lane_follower/dev_ws/src/build/spark_msgs/test_results/spark_msgs/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/yigithan/Desktop/PID_lane_follower/dev_ws/src/spark_msgs")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/yigithan/Desktop/PID_lane_follower/dev_ws/src/build/spark_msgs/test_results/spark_msgs/xmllint.xunit.xml" "--package-name" "spark_msgs" "--output-file" "/home/yigithan/Desktop/PID_lane_follower/dev_ws/src/build/spark_msgs/ament_xmllint/xmllint.txt" "--command" "/opt/ros/dashing/bin/ament_xmllint" "--xunit-file" "/home/yigithan/Desktop/PID_lane_follower/dev_ws/src/build/spark_msgs/test_results/spark_msgs/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/yigithan/Desktop/PID_lane_follower/dev_ws/src/spark_msgs")
subdirs("spark_msgs__py")
