// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spark_msgs:msg/WaypointData.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__WAYPOINT_DATA__STRUCT_H_
#define SPARK_MSGS__MSG__WAYPOINT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in msg/WaypointData in the package spark_msgs.
typedef struct spark_msgs__msg__WaypointData
{
  bool is_inf;
  rosidl_generator_c__double__Sequence x;
  rosidl_generator_c__double__Sequence y;
} spark_msgs__msg__WaypointData;

// Struct for a sequence of spark_msgs__msg__WaypointData.
typedef struct spark_msgs__msg__WaypointData__Sequence
{
  spark_msgs__msg__WaypointData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spark_msgs__msg__WaypointData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPARK_MSGS__MSG__WAYPOINT_DATA__STRUCT_H_
