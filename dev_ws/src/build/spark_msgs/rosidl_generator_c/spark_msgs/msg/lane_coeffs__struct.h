// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spark_msgs:msg/LaneCoeffs.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__LANE_COEFFS__STRUCT_H_
#define SPARK_MSGS__MSG__LANE_COEFFS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_generator_c/string.h"

// Struct defined in msg/LaneCoeffs in the package spark_msgs.
typedef struct spark_msgs__msg__LaneCoeffs
{
  rosidl_generator_c__String name;
  float slope;
  float bias;
} spark_msgs__msg__LaneCoeffs;

// Struct for a sequence of spark_msgs__msg__LaneCoeffs.
typedef struct spark_msgs__msg__LaneCoeffs__Sequence
{
  spark_msgs__msg__LaneCoeffs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spark_msgs__msg__LaneCoeffs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPARK_MSGS__MSG__LANE_COEFFS__STRUCT_H_
