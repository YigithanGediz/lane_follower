// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spark_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__LANE__STRUCT_H_
#define SPARK_MSGS__MSG__LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lane'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in msg/Lane in the package spark_msgs.
typedef struct spark_msgs__msg__Lane
{
  rosidl_generator_c__int16__Sequence lane;
} spark_msgs__msg__Lane;

// Struct for a sequence of spark_msgs__msg__Lane.
typedef struct spark_msgs__msg__Lane__Sequence
{
  spark_msgs__msg__Lane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spark_msgs__msg__Lane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPARK_MSGS__MSG__LANE__STRUCT_H_
