// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from spark_msgs:msg/Lane.idl
// generated code does not contain a copyright notice
#include "spark_msgs/msg/lane__rosidl_typesupport_fastrtps_cpp.hpp"
#include "spark_msgs/msg/lane__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace spark_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spark_msgs
cdr_serialize(
  const spark_msgs::msg::Lane & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: lane
  {
    cdr << ros_message.lane;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spark_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  spark_msgs::msg::Lane & ros_message)
{
  // Member: lane
  {
    cdr >> ros_message.lane;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spark_msgs
get_serialized_size(
  const spark_msgs::msg::Lane & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: lane
  {
    size_t array_size = ros_message.lane.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.lane[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spark_msgs
max_serialized_size_Lane(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: lane
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

static bool _Lane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const spark_msgs::msg::Lane *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Lane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<spark_msgs::msg::Lane *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Lane__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const spark_msgs::msg::Lane *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Lane__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Lane(full_bounded, 0);
}

static message_type_support_callbacks_t _Lane__callbacks = {
  "spark_msgs::msg",
  "Lane",
  _Lane__cdr_serialize,
  _Lane__cdr_deserialize,
  _Lane__get_serialized_size,
  _Lane__max_serialized_size
};

static rosidl_message_type_support_t _Lane__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Lane__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace spark_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_spark_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<spark_msgs::msg::Lane>()
{
  return &spark_msgs::msg::typesupport_fastrtps_cpp::_Lane__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, spark_msgs, msg, Lane)() {
  return &spark_msgs::msg::typesupport_fastrtps_cpp::_Lane__handle;
}

#ifdef __cplusplus
}
#endif
