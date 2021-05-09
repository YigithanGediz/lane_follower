// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from spark_msgs:msg/WaypointsList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "spark_msgs/msg/waypoints_list__rosidl_typesupport_introspection_c.h"
#include "spark_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "spark_msgs/msg/waypoints_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `left`
// Member `right`
// Member `forward`
#include "spark_msgs/msg/waypoints.h"
// Member `left`
// Member `right`
// Member `forward`
#include "spark_msgs/msg/waypoints__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember WaypointsList__rosidl_typesupport_introspection_c__WaypointsList_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spark_msgs__msg__WaypointsList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spark_msgs__msg__WaypointsList, left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spark_msgs__msg__WaypointsList, right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "forward",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spark_msgs__msg__WaypointsList, forward),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WaypointsList__rosidl_typesupport_introspection_c__WaypointsList_message_members = {
  "spark_msgs__msg",  // message namespace
  "WaypointsList",  // message name
  4,  // number of fields
  sizeof(spark_msgs__msg__WaypointsList),
  WaypointsList__rosidl_typesupport_introspection_c__WaypointsList_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WaypointsList__rosidl_typesupport_introspection_c__WaypointsList_message_type_support_handle = {
  0,
  &WaypointsList__rosidl_typesupport_introspection_c__WaypointsList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spark_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spark_msgs, msg, WaypointsList)() {
  WaypointsList__rosidl_typesupport_introspection_c__WaypointsList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  WaypointsList__rosidl_typesupport_introspection_c__WaypointsList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spark_msgs, msg, Waypoints)();
  WaypointsList__rosidl_typesupport_introspection_c__WaypointsList_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spark_msgs, msg, Waypoints)();
  WaypointsList__rosidl_typesupport_introspection_c__WaypointsList_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spark_msgs, msg, Waypoints)();
  if (!WaypointsList__rosidl_typesupport_introspection_c__WaypointsList_message_type_support_handle.typesupport_identifier) {
    WaypointsList__rosidl_typesupport_introspection_c__WaypointsList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WaypointsList__rosidl_typesupport_introspection_c__WaypointsList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
