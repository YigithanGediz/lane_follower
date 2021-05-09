// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spark_msgs:msg/GoalState.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__GOAL_STATE__STRUCT_H_
#define SPARK_MSGS__MSG__GOAL_STATE__STRUCT_H_

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
// Member 'goal_state'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in msg/GoalState in the package spark_msgs.
typedef struct spark_msgs__msg__GoalState
{
  std_msgs__msg__Header header;
  int32_t goal_index;
  rosidl_generator_c__double__Sequence goal_state;
} spark_msgs__msg__GoalState;

// Struct for a sequence of spark_msgs__msg__GoalState.
typedef struct spark_msgs__msg__GoalState__Sequence
{
  spark_msgs__msg__GoalState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spark_msgs__msg__GoalState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPARK_MSGS__MSG__GOAL_STATE__STRUCT_H_
