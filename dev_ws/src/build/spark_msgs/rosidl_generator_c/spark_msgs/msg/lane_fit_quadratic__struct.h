// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spark_msgs:msg/LaneFitQuadratic.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__LANE_FIT_QUADRATIC__STRUCT_H_
#define SPARK_MSGS__MSG__LANE_FIT_QUADRATIC__STRUCT_H_

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
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in msg/LaneFitQuadratic in the package spark_msgs.
typedef struct spark_msgs__msg__LaneFitQuadratic
{
  std_msgs__msg__Header header;
  rosidl_generator_c__double__Sequence left;
  rosidl_generator_c__double__Sequence right;
} spark_msgs__msg__LaneFitQuadratic;

// Struct for a sequence of spark_msgs__msg__LaneFitQuadratic.
typedef struct spark_msgs__msg__LaneFitQuadratic__Sequence
{
  spark_msgs__msg__LaneFitQuadratic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spark_msgs__msg__LaneFitQuadratic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPARK_MSGS__MSG__LANE_FIT_QUADRATIC__STRUCT_H_