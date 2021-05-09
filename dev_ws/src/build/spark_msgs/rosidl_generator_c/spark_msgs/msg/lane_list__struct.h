// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spark_msgs:msg/LaneList.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__LANE_LIST__STRUCT_H_
#define SPARK_MSGS__MSG__LANE_LIST__STRUCT_H_

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
// Member 'x_coords'
// Member 'y_coords'
#include "spark_msgs/msg/lane__struct.h"

// Struct defined in msg/LaneList in the package spark_msgs.
typedef struct spark_msgs__msg__LaneList
{
  std_msgs__msg__Header header;
  spark_msgs__msg__Lane__Sequence x_coords;
  spark_msgs__msg__Lane__Sequence y_coords;
} spark_msgs__msg__LaneList;

// Struct for a sequence of spark_msgs__msg__LaneList.
typedef struct spark_msgs__msg__LaneList__Sequence
{
  spark_msgs__msg__LaneList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spark_msgs__msg__LaneList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPARK_MSGS__MSG__LANE_LIST__STRUCT_H_
