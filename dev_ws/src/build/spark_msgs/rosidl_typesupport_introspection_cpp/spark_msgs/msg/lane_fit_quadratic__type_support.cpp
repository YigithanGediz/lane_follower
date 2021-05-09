// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from spark_msgs:msg/LaneFitQuadratic.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "spark_msgs/msg/lane_fit_quadratic__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace spark_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__LaneFitQuadratic__left(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneFitQuadratic__left(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneFitQuadratic__left(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__LaneFitQuadratic__left(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneFitQuadratic__right(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneFitQuadratic__right(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneFitQuadratic__right(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__LaneFitQuadratic__right(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LaneFitQuadratic_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spark_msgs::msg::LaneFitQuadratic, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spark_msgs::msg::LaneFitQuadratic, left),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneFitQuadratic__left,  // size() function pointer
    get_const_function__LaneFitQuadratic__left,  // get_const(index) function pointer
    get_function__LaneFitQuadratic__left,  // get(index) function pointer
    resize_function__LaneFitQuadratic__left  // resize(index) function pointer
  },
  {
    "right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spark_msgs::msg::LaneFitQuadratic, right),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneFitQuadratic__right,  // size() function pointer
    get_const_function__LaneFitQuadratic__right,  // get_const(index) function pointer
    get_function__LaneFitQuadratic__right,  // get(index) function pointer
    resize_function__LaneFitQuadratic__right  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LaneFitQuadratic_message_members = {
  "spark_msgs::msg",  // message namespace
  "LaneFitQuadratic",  // message name
  3,  // number of fields
  sizeof(spark_msgs::msg::LaneFitQuadratic),
  LaneFitQuadratic_message_member_array  // message members
};

static const rosidl_message_type_support_t LaneFitQuadratic_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LaneFitQuadratic_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace spark_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<spark_msgs::msg::LaneFitQuadratic>()
{
  return &::spark_msgs::msg::rosidl_typesupport_introspection_cpp::LaneFitQuadratic_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, spark_msgs, msg, LaneFitQuadratic)() {
  return &::spark_msgs::msg::rosidl_typesupport_introspection_cpp::LaneFitQuadratic_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
