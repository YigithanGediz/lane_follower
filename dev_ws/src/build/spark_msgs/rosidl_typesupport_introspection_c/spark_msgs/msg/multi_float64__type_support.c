// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from spark_msgs:msg/MultiFloat64.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "spark_msgs/msg/multi_float64__rosidl_typesupport_introspection_c.h"
#include "spark_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "spark_msgs/msg/multi_float64__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `dimensions`
// Member `data`
#include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember MultiFloat64__rosidl_typesupport_introspection_c__MultiFloat64_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spark_msgs__msg__MultiFloat64, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dimensions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spark_msgs__msg__MultiFloat64, dimensions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spark_msgs__msg__MultiFloat64, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MultiFloat64__rosidl_typesupport_introspection_c__MultiFloat64_message_members = {
  "spark_msgs__msg",  // message namespace
  "MultiFloat64",  // message name
  3,  // number of fields
  sizeof(spark_msgs__msg__MultiFloat64),
  MultiFloat64__rosidl_typesupport_introspection_c__MultiFloat64_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MultiFloat64__rosidl_typesupport_introspection_c__MultiFloat64_message_type_support_handle = {
  0,
  &MultiFloat64__rosidl_typesupport_introspection_c__MultiFloat64_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spark_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spark_msgs, msg, MultiFloat64)() {
  MultiFloat64__rosidl_typesupport_introspection_c__MultiFloat64_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!MultiFloat64__rosidl_typesupport_introspection_c__MultiFloat64_message_type_support_handle.typesupport_identifier) {
    MultiFloat64__rosidl_typesupport_introspection_c__MultiFloat64_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MultiFloat64__rosidl_typesupport_introspection_c__MultiFloat64_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
