// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spark_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__POSE__STRUCT_H_
#define SPARK_MSGS__MSG__POSE__STRUCT_H_

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

// Struct defined in msg/Pose in the package spark_msgs.
typedef struct spark_msgs__msg__Pose
{
  std_msgs__msg__Header header;
  float closed_speed;
  float open_speed;
  double x;
  double y;
  double yaw;
} spark_msgs__msg__Pose;

// Struct for a sequence of spark_msgs__msg__Pose.
typedef struct spark_msgs__msg__Pose__Sequence
{
  spark_msgs__msg__Pose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spark_msgs__msg__Pose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPARK_MSGS__MSG__POSE__STRUCT_H_
