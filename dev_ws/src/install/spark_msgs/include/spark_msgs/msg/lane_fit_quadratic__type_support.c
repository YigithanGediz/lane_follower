// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from spark_msgs:msg/LaneFitQuadratic.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "spark_msgs/msg/lane_fit_quadratic__rosidl_typesupport_introspection_c.h"
#include "spark_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "spark_msgs/msg/lane_fit_quadratic__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `left`
// Member `right`
#include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember LaneFitQuadratic__rosidl_typesupport_introspection_c__LaneFitQuadratic_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spark_msgs__msg__LaneFitQuadratic, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spark_msgs__msg__LaneFitQuadratic, left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spark_msgs__msg__LaneFitQuadratic, right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LaneFitQuadratic__rosidl_typesupport_introspection_c__LaneFitQuadratic_message_members = {
  "spark_msgs__msg",  // message namespace
  "LaneFitQuadratic",  // message name
  3,  // number of fields
  sizeof(spark_msgs__msg__LaneFitQuadratic),
  LaneFitQuadratic__rosidl_typesupport_introspection_c__LaneFitQuadratic_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LaneFitQuadratic__rosidl_typesupport_introspection_c__LaneFitQuadratic_message_type_support_handle = {
  0,
  &LaneFitQuadratic__rosidl_typesupport_introspection_c__LaneFitQuadratic_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spark_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spark_msgs, msg, LaneFitQuadratic)() {
  LaneFitQuadratic__rosidl_typesupport_introspection_c__LaneFitQuadratic_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!LaneFitQuadratic__rosidl_typesupport_introspection_c__LaneFitQuadratic_message_type_support_handle.typesupport_identifier) {
    LaneFitQuadratic__rosidl_typesupport_introspection_c__LaneFitQuadratic_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LaneFitQuadratic__rosidl_typesupport_introspection_c__LaneFitQuadratic_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
