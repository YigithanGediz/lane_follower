// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from spark_msgs:msg/OpenLoopSpeed.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "spark_msgs/msg/open_loop_speed__rosidl_typesupport_introspection_c.h"
#include "spark_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "spark_msgs/msg/open_loop_speed__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember OpenLoopSpeed__rosidl_typesupport_introspection_c__OpenLoopSpeed_message_member_array[1] = {
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spark_msgs__msg__OpenLoopSpeed, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OpenLoopSpeed__rosidl_typesupport_introspection_c__OpenLoopSpeed_message_members = {
  "spark_msgs__msg",  // message namespace
  "OpenLoopSpeed",  // message name
  1,  // number of fields
  sizeof(spark_msgs__msg__OpenLoopSpeed),
  OpenLoopSpeed__rosidl_typesupport_introspection_c__OpenLoopSpeed_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OpenLoopSpeed__rosidl_typesupport_introspection_c__OpenLoopSpeed_message_type_support_handle = {
  0,
  &OpenLoopSpeed__rosidl_typesupport_introspection_c__OpenLoopSpeed_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spark_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spark_msgs, msg, OpenLoopSpeed)() {
  if (!OpenLoopSpeed__rosidl_typesupport_introspection_c__OpenLoopSpeed_message_type_support_handle.typesupport_identifier) {
    OpenLoopSpeed__rosidl_typesupport_introspection_c__OpenLoopSpeed_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OpenLoopSpeed__rosidl_typesupport_introspection_c__OpenLoopSpeed_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
