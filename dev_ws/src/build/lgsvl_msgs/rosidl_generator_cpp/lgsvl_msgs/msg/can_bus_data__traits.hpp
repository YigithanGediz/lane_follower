// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lgsvl_msgs:msg/CanBusData.idl
// generated code does not contain a copyright notice

#ifndef LGSVL_MSGS__MSG__CAN_BUS_DATA__TRAITS_HPP_
#define LGSVL_MSGS__MSG__CAN_BUS_DATA__TRAITS_HPP_

#include "lgsvl_msgs/msg/can_bus_data__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/quaternion__traits.hpp"
// Member 'linear_velocities'
#include "geometry_msgs/msg/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lgsvl_msgs::msg::CanBusData>()
{
  return "lgsvl_msgs::msg::CanBusData";
}

template<>
struct has_fixed_size<lgsvl_msgs::msg::CanBusData>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<lgsvl_msgs::msg::CanBusData>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

}  // namespace rosidl_generator_traits

#endif  // LGSVL_MSGS__MSG__CAN_BUS_DATA__TRAITS_HPP_
