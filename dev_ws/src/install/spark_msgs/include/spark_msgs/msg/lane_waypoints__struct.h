// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spark_msgs:msg/LaneWaypoints.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__LANE_WAYPOINTS__STRUCT_H_
#define SPARK_MSGS__MSG__LANE_WAYPOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.h"
// Member 'forward_x'
// Member 'forward_y'
// Member 'right_x'
// Member 'right_y'
// Member 'left_x'
// Member 'left_y'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in msg/LaneWaypoints in the package spark_msgs.
typedef struct spark_msgs__msg__LaneWaypoints
{
  std_msgs__msg__Header header;
  rosidl_generator_c__int16__Sequence forward_x;
  rosidl_generator_c__int16__Sequence forward_y;
  rosidl_generator_c__int16__Sequence right_x;
  rosidl_generator_c__int16__Sequence right_y;
  rosidl_generator_c__int16__Sequence left_x;
  rosidl_generator_c__int16__Sequence left_y;
} spark_msgs__msg__LaneWaypoints;

// Struct for a sequence of spark_msgs__msg__LaneWaypoints.
typedef struct spark_msgs__msg__LaneWaypoints__Sequence
{
  spark_msgs__msg__LaneWaypoints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spark_msgs__msg__LaneWaypoints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPARK_MSGS__MSG__LANE_WAYPOINTS__STRUCT_H_
