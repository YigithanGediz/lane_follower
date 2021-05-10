// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lgsvl_msgs:msg/Detection2D.idl
// generated code does not contain a copyright notice

#ifndef LGSVL_MSGS__MSG__DETECTION2_D__STRUCT_H_
#define LGSVL_MSGS__MSG__DETECTION2_D__STRUCT_H_

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
// Member 'label'
#include "rosidl_generator_c/string.h"
// Member 'bbox'
#include "lgsvl_msgs/msg/bounding_box2_d__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/twist__struct.h"

// Struct defined in msg/Detection2D in the package lgsvl_msgs.
typedef struct lgsvl_msgs__msg__Detection2D
{
  std_msgs__msg__Header header;
  uint32_t id;
  rosidl_generator_c__String label;
  float score;
  lgsvl_msgs__msg__BoundingBox2D bbox;
  geometry_msgs__msg__Twist velocity;
} lgsvl_msgs__msg__Detection2D;

// Struct for a sequence of lgsvl_msgs__msg__Detection2D.
typedef struct lgsvl_msgs__msg__Detection2D__Sequence
{
  lgsvl_msgs__msg__Detection2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lgsvl_msgs__msg__Detection2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LGSVL_MSGS__MSG__DETECTION2_D__STRUCT_H_
