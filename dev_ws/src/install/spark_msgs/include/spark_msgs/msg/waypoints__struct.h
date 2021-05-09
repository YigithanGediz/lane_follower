// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spark_msgs:msg/Waypoints.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__WAYPOINTS__STRUCT_H_
#define SPARK_MSGS__MSG__WAYPOINTS__STRUCT_H_

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
// Member 'waypoints'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in msg/Waypoints in the package spark_msgs.
typedef struct spark_msgs__msg__Waypoints
{
  std_msgs__msg__Header header;
  int64_t waypoint_count;
  rosidl_generator_c__double__Sequence waypoints;
} spark_msgs__msg__Waypoints;

// Struct for a sequence of spark_msgs__msg__Waypoints.
typedef struct spark_msgs__msg__Waypoints__Sequence
{
  spark_msgs__msg__Waypoints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spark_msgs__msg__Waypoints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPARK_MSGS__MSG__WAYPOINTS__STRUCT_H_
