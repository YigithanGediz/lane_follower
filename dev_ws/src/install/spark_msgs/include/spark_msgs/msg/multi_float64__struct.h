// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spark_msgs:msg/MultiFloat64.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__MULTI_FLOAT64__STRUCT_H_
#define SPARK_MSGS__MSG__MULTI_FLOAT64__STRUCT_H_

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
// Member 'dimensions'
// Member 'data'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in msg/MultiFloat64 in the package spark_msgs.
typedef struct spark_msgs__msg__MultiFloat64
{
  std_msgs__msg__Header header;
  rosidl_generator_c__int16__Sequence dimensions;
  rosidl_generator_c__double__Sequence data;
} spark_msgs__msg__MultiFloat64;

// Struct for a sequence of spark_msgs__msg__MultiFloat64.
typedef struct spark_msgs__msg__MultiFloat64__Sequence
{
  spark_msgs__msg__MultiFloat64 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spark_msgs__msg__MultiFloat64__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPARK_MSGS__MSG__MULTI_FLOAT64__STRUCT_H_
