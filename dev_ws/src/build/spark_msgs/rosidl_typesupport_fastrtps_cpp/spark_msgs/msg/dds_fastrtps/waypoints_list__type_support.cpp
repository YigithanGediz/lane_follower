// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from spark_msgs:msg/WaypointsList.idl
// generated code does not contain a copyright notice
#include "spark_msgs/msg/waypoints_list__rosidl_typesupport_fastrtps_cpp.hpp"
#include "spark_msgs/msg/waypoints_list__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace spark_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const spark_msgs::msg::Waypoints &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  spark_msgs::msg::Waypoints &);
size_t get_serialized_size(
  const spark_msgs::msg::Waypoints &,
  size_t current_alignment);
size_t
max_serialized_size_Waypoints(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace spark_msgs

namespace spark_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const spark_msgs::msg::Waypoints &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  spark_msgs::msg::Waypoints &);
size_t get_serialized_size(
  const spark_msgs::msg::Waypoints &,
  size_t current_alignment);
size_t
max_serialized_size_Waypoints(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace spark_msgs

namespace spark_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const spark_msgs::msg::Waypoints &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  spark_msgs::msg::Waypoints &);
size_t get_serialized_size(
  const spark_msgs::msg::Waypoints &,
  size_t current_alignment);
size_t
max_serialized_size_Waypoints(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace spark_msgs


namespace spark_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spark_msgs
cdr_serialize(
  const spark_msgs::msg::WaypointsList & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: left
  spark_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.left,
    cdr);
  // Member: right
  spark_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.right,
    cdr);
  // Member: forward
  spark_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.forward,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spark_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  spark_msgs::msg::WaypointsList & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: left
  spark_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.left);

  // Member: right
  spark_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.right);

  // Member: forward
  spark_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.forward);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spark_msgs
get_serialized_size(
  const spark_msgs::msg::WaypointsList & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: left

  current_alignment +=
    spark_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.left, current_alignment);
  // Member: right

  current_alignment +=
    spark_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.right, current_alignment);
  // Member: forward

  current_alignment +=
    spark_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.forward, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spark_msgs
max_serialized_size_WaypointsList(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: left
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        spark_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Waypoints(
        full_bounded, current_alignment);
    }
  }

  // Member: right
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        spark_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Waypoints(
        full_bounded, current_alignment);
    }
  }

  // Member: forward
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        spark_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Waypoints(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _WaypointsList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const spark_msgs::msg::WaypointsList *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WaypointsList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<spark_msgs::msg::WaypointsList *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WaypointsList__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const spark_msgs::msg::WaypointsList *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WaypointsList__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_WaypointsList(full_bounded, 0);
}

static message_type_support_callbacks_t _WaypointsList__callbacks = {
  "spark_msgs::msg",
  "WaypointsList",
  _WaypointsList__cdr_serialize,
  _WaypointsList__cdr_deserialize,
  _WaypointsList__get_serialized_size,
  _WaypointsList__max_serialized_size
};

static rosidl_message_type_support_t _WaypointsList__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WaypointsList__callbacks,
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
get_message_type_support_handle<spark_msgs::msg::WaypointsList>()
{
  return &spark_msgs::msg::typesupport_fastrtps_cpp::_WaypointsList__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, spark_msgs, msg, WaypointsList)() {
  return &spark_msgs::msg::typesupport_fastrtps_cpp::_WaypointsList__handle;
}

#ifdef __cplusplus
}
#endif
