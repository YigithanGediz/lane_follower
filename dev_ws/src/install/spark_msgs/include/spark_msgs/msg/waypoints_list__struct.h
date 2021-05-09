// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spark_msgs:msg/WaypointsList.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__WAYPOINTS_LIST__STRUCT_H_
#define SPARK_MSGS__MSG__WAYPOINTS_LIST__STRUCT_H_

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
// Member 'left'
// Member 'right'
// Member 'forward'
#include "spark_msgs/msg/waypoints__struct.h"

// Struct defined in msg/WaypointsList in the package spark_msgs.
typedef struct spark_msgs__msg__WaypointsList
{
  std_msgs__msg__Header header;
  spark_msgs__msg__Waypoints left;
  spark_msgs__msg__Waypoints right;
  spark_msgs__msg__Waypoints forward;
} spark_msgs__msg__WaypointsList;

// Struct for a sequence of spark_msgs__msg__WaypointsList.
typedef struct spark_msgs__msg__WaypointsList__Sequence
{
  spark_msgs__msg__WaypointsList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spark_msgs__msg__WaypointsList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPARK_MSGS__MSG__WAYPOINTS_LIST__STRUCT_H_
