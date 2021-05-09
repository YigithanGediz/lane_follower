// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from spark_msgs:msg/LaneList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "spark_msgs/msg/lane_list__rosidl_typesupport_introspection_c.h"
#include "spark_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "spark_msgs/msg/lane_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `x_coords`
// Member `y_coords`
#include "spark_msgs/msg/lane.h"
// Member `x_coords`
// Member `y_coords`
#include "spark_msgs/msg/lane__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t LaneList__rosidl_typesupport_introspection_c__size_function__Lane__x_coords(
  const void * untyped_member)
{
  const spark_msgs__msg__Lane__Sequence * member =
    (const spark_msgs__msg__Lane__Sequence *)(untyped_member);
  return member->size;
}

const void * LaneList__rosidl_typesupport_introspection_c__get_const_function__Lane__x_coords(
  const void * untyped_member, size_t index)
{
  const spark_msgs__msg__Lane__Sequence * member =
    (const spark_msgs__msg__Lane__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LaneList__rosidl_typesupport_introspection_c__get_function__Lane__x_coords(
  void * untyped_member, size_t index)
{
  spark_msgs__msg__Lane__Sequence * member =
    (spark_msgs__msg__Lane__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LaneList__rosidl_typesupport_introspection_c__resize_function__Lane__x_coords(
  void * untyped_member, size_t size)
{
  spark_msgs__msg__Lane__Sequence * member =
    (spark_msgs__msg__Lane__Sequence *)(untyped_member);
  spark_msgs__msg__Lane__Sequence__fini(member);
  return spark_msgs__msg__Lane__Sequence__init(member, size);
}

size_t LaneList__rosidl_typesupport_introspection_c__size_function__Lane__y_coords(
  const void * untyped_member)
{
  const spark_msgs__msg__Lane__Sequence * member =
    (const spark_msgs__msg__Lane__Sequence *)(untyped_member);
  return member->size;
}

const void * LaneList__rosidl_typesupport_introspection_c__get_const_function__Lane__y_coords(
  const void * untyped_member, size_t index)
{
  const spark_msgs__msg__Lane__Sequence * member =
    (const spark_msgs__msg__Lane__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LaneList__rosidl_typesupport_introspection_c__get_function__Lane__y_coords(
  void * untyped_member, size_t index)
{
  spark_msgs__msg__Lane__Sequence * member =
    (spark_msgs__msg__Lane__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LaneList__rosidl_typesupport_introspection_c__resize_function__Lane__y_coords(
  void * untyped_member, size_t size)
{
  spark_msgs__msg__Lane__Sequence * member =
    (spark_msgs__msg__Lane__Sequence *)(untyped_member);
  spark_msgs__msg__Lane__Sequence__fini(member);
  return spark_msgs__msg__Lane__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember LaneList__rosidl_typesupport_introspection_c__LaneList_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spark_msgs__msg__LaneList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_coords",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spark_msgs__msg__LaneList, x_coords),  // bytes offset in struct
    NULL,  // default value
    LaneList__rosidl_typesupport_introspection_c__size_function__Lane__x_coords,  // size() function pointer
    LaneList__rosidl_typesupport_introspection_c__get_const_function__Lane__x_coords,  // get_const(index) function pointer
    LaneList__rosidl_typesupport_introspection_c__get_function__Lane__x_coords,  // get(index) function pointer
    LaneList__rosidl_typesupport_introspection_c__resize_function__Lane__x_coords  // resize(index) function pointer
  },
  {
    "y_coords",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spark_msgs__msg__LaneList, y_coords),  // bytes offset in struct
    NULL,  // default value
    LaneList__rosidl_typesupport_introspection_c__size_function__Lane__y_coords,  // size() function pointer
    LaneList__rosidl_typesupport_introspection_c__get_const_function__Lane__y_coords,  // get_const(index) function pointer
    LaneList__rosidl_typesupport_introspection_c__get_function__Lane__y_coords,  // get(index) function pointer
    LaneList__rosidl_typesupport_introspection_c__resize_function__Lane__y_coords  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LaneList__rosidl_typesupport_introspection_c__LaneList_message_members = {
  "spark_msgs__msg",  // message namespace
  "LaneList",  // message name
  3,  // number of fields
  sizeof(spark_msgs__msg__LaneList),
  LaneList__rosidl_typesupport_introspection_c__LaneList_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LaneList__rosidl_typesupport_introspection_c__LaneList_message_type_support_handle = {
  0,
  &LaneList__rosidl_typesupport_introspection_c__LaneList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spark_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spark_msgs, msg, LaneList)() {
  LaneList__rosidl_typesupport_introspection_c__LaneList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  LaneList__rosidl_typesupport_introspection_c__LaneList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spark_msgs, msg, Lane)();
  LaneList__rosidl_typesupport_introspection_c__LaneList_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spark_msgs, msg, Lane)();
  if (!LaneList__rosidl_typesupport_introspection_c__LaneList_message_type_support_handle.typesupport_identifier) {
    LaneList__rosidl_typesupport_introspection_c__LaneList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LaneList__rosidl_typesupport_introspection_c__LaneList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
