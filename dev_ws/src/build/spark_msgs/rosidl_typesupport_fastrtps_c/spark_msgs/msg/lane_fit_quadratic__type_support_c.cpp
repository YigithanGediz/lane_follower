// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from spark_msgs:msg/LaneFitQuadratic.idl
// generated code does not contain a copyright notice
#include "spark_msgs/msg/lane_fit_quadratic__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "spark_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "spark_msgs/msg/lane_fit_quadratic__struct.h"
#include "spark_msgs/msg/lane_fit_quadratic__functions.h"
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

#include "rosidl_generator_c/primitives_sequence.h"  // left, right
#include "rosidl_generator_c/primitives_sequence_functions.h"  // left, right
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


using _LaneFitQuadratic__ros_msg_type = spark_msgs__msg__LaneFitQuadratic;

static bool _LaneFitQuadratic__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LaneFitQuadratic__ros_msg_type * ros_message = static_cast<const _LaneFitQuadratic__ros_msg_type *>(untyped_ros_message);
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

  // Field name: left
  {
    size_t size = ros_message->left.size;
    auto array_ptr = ros_message->left.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: right
  {
    size_t size = ros_message->right.size;
    auto array_ptr = ros_message->right.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _LaneFitQuadratic__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LaneFitQuadratic__ros_msg_type * ros_message = static_cast<_LaneFitQuadratic__ros_msg_type *>(untyped_ros_message);
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

  // Field name: left
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->left.data) {
      rosidl_generator_c__double__Sequence__fini(&ros_message->left);
    }
    if (!rosidl_generator_c__double__Sequence__init(&ros_message->left, size)) {
      return "failed to create array for field 'left'";
    }
    auto array_ptr = ros_message->left.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: right
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->right.data) {
      rosidl_generator_c__double__Sequence__fini(&ros_message->right);
    }
    if (!rosidl_generator_c__double__Sequence__init(&ros_message->right, size)) {
      return "failed to create array for field 'right'";
    }
    auto array_ptr = ros_message->right.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spark_msgs
size_t get_serialized_size_spark_msgs__msg__LaneFitQuadratic(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LaneFitQuadratic__ros_msg_type * ros_message = static_cast<const _LaneFitQuadratic__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name left
  {
    size_t array_size = ros_message->left.size;
    auto array_ptr = ros_message->left.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right
  {
    size_t array_size = ros_message->right.size;
    auto array_ptr = ros_message->right.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LaneFitQuadratic__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_spark_msgs__msg__LaneFitQuadratic(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spark_msgs
size_t max_serialized_size_spark_msgs__msg__LaneFitQuadratic(
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
  // member: left
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _LaneFitQuadratic__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_spark_msgs__msg__LaneFitQuadratic(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LaneFitQuadratic = {
  "spark_msgs::msg",
  "LaneFitQuadratic",
  _LaneFitQuadratic__cdr_serialize,
  _LaneFitQuadratic__cdr_deserialize,
  _LaneFitQuadratic__get_serialized_size,
  _LaneFitQuadratic__max_serialized_size
};

static rosidl_message_type_support_t _LaneFitQuadratic__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LaneFitQuadratic,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spark_msgs, msg, LaneFitQuadratic)() {
  return &_LaneFitQuadratic__type_support;
}

#if defined(__cplusplus)
}
#endif
