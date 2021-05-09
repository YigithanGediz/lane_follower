// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from spark_msgs:msg/LaneWaypoints.idl
// generated code does not contain a copyright notice
#include "spark_msgs/msg/lane_waypoints__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "spark_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "spark_msgs/msg/lane_waypoints__struct.h"
#include "spark_msgs/msg/lane_waypoints__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_generator_c/primitives_sequence.h"  // forward_x, forward_y, left_x, left_y, right_x, right_y
#include "rosidl_generator_c/primitives_sequence_functions.h"  // forward_x, forward_y, left_x, left_y, right_x, right_y
#include "std_msgs/msg/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_spark_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_spark_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_spark_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _LaneWaypoints__ros_msg_type = spark_msgs__msg__LaneWaypoints;

static bool _LaneWaypoints__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LaneWaypoints__ros_msg_type * ros_message = static_cast<const _LaneWaypoints__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: forward_x
  {
    size_t size = ros_message->forward_x.size;
    auto array_ptr = ros_message->forward_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: forward_y
  {
    size_t size = ros_message->forward_y.size;
    auto array_ptr = ros_message->forward_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: right_x
  {
    size_t size = ros_message->right_x.size;
    auto array_ptr = ros_message->right_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: right_y
  {
    size_t size = ros_message->right_y.size;
    auto array_ptr = ros_message->right_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: left_x
  {
    size_t size = ros_message->left_x.size;
    auto array_ptr = ros_message->left_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: left_y
  {
    size_t size = ros_message->left_y.size;
    auto array_ptr = ros_message->left_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _LaneWaypoints__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LaneWaypoints__ros_msg_type * ros_message = static_cast<_LaneWaypoints__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: forward_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->forward_x.data) {
      rosidl_generator_c__int16__Sequence__fini(&ros_message->forward_x);
    }
    if (!rosidl_generator_c__int16__Sequence__init(&ros_message->forward_x, size)) {
      return "failed to create array for field 'forward_x'";
    }
    auto array_ptr = ros_message->forward_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: forward_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->forward_y.data) {
      rosidl_generator_c__int16__Sequence__fini(&ros_message->forward_y);
    }
    if (!rosidl_generator_c__int16__Sequence__init(&ros_message->forward_y, size)) {
      return "failed to create array for field 'forward_y'";
    }
    auto array_ptr = ros_message->forward_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: right_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->right_x.data) {
      rosidl_generator_c__int16__Sequence__fini(&ros_message->right_x);
    }
    if (!rosidl_generator_c__int16__Sequence__init(&ros_message->right_x, size)) {
      return "failed to create array for field 'right_x'";
    }
    auto array_ptr = ros_message->right_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: right_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->right_y.data) {
      rosidl_generator_c__int16__Sequence__fini(&ros_message->right_y);
    }
    if (!rosidl_generator_c__int16__Sequence__init(&ros_message->right_y, size)) {
      return "failed to create array for field 'right_y'";
    }
    auto array_ptr = ros_message->right_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: left_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->left_x.data) {
      rosidl_generator_c__int16__Sequence__fini(&ros_message->left_x);
    }
    if (!rosidl_generator_c__int16__Sequence__init(&ros_message->left_x, size)) {
      return "failed to create array for field 'left_x'";
    }
    auto array_ptr = ros_message->left_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: left_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->left_y.data) {
      rosidl_generator_c__int16__Sequence__fini(&ros_message->left_y);
    }
    if (!rosidl_generator_c__int16__Sequence__init(&ros_message->left_y, size)) {
      return "failed to create array for field 'left_y'";
    }
    auto array_ptr = ros_message->left_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spark_msgs
size_t get_serialized_size_spark_msgs__msg__LaneWaypoints(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LaneWaypoints__ros_msg_type * ros_message = static_cast<const _LaneWaypoints__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name forward_x
  {
    size_t array_size = ros_message->forward_x.size;
    auto array_ptr = ros_message->forward_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name forward_y
  {
    size_t array_size = ros_message->forward_y.size;
    auto array_ptr = ros_message->forward_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_x
  {
    size_t array_size = ros_message->right_x.size;
    auto array_ptr = ros_message->right_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_y
  {
    size_t array_size = ros_message->right_y.size;
    auto array_ptr = ros_message->right_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_x
  {
    size_t array_size = ros_message->left_x.size;
    auto array_ptr = ros_message->left_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_y
  {
    size_t array_size = ros_message->left_y.size;
    auto array_ptr = ros_message->left_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LaneWaypoints__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_spark_msgs__msg__LaneWaypoints(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spark_msgs
size_t max_serialized_size_spark_msgs__msg__LaneWaypoints(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: forward_x
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: forward_y
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: right_x
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: right_y
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: left_x
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: left_y
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _LaneWaypoints__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_spark_msgs__msg__LaneWaypoints(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LaneWaypoints = {
  "spark_msgs::msg",
  "LaneWaypoints",
  _LaneWaypoints__cdr_serialize,
  _LaneWaypoints__cdr_deserialize,
  _LaneWaypoints__get_serialized_size,
  _LaneWaypoints__max_serialized_size
};

static rosidl_message_type_support_t _LaneWaypoints__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LaneWaypoints,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spark_msgs, msg, LaneWaypoints)() {
  return &_LaneWaypoints__type_support;
}

#if defined(__cplusplus)
}
#endif
