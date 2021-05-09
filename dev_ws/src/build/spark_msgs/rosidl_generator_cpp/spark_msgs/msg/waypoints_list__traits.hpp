// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spark_msgs:msg/WaypointsList.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__WAYPOINTS_LIST__TRAITS_HPP_
#define SPARK_MSGS__MSG__WAYPOINTS_LIST__TRAITS_HPP_

#include "spark_msgs/msg/waypoints_list__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"
// Member 'left'
// Member 'right'
// Member 'forward'
#include "spark_msgs/msg/waypoints__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<spark_msgs::msg::WaypointsList>()
{
  return "spark_msgs::msg::WaypointsList";
}

template<>
struct has_fixed_size<spark_msgs::msg::WaypointsList>
  : std::integral_constant<bool, has_fixed_size<spark_msgs::msg::Waypoints>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<spark_msgs::msg::WaypointsList>
  : std::integral_constant<bool, has_bounded_size<spark_msgs::msg::Waypoints>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

}  // namespace rosidl_generator_traits

#endif  // SPARK_MSGS__MSG__WAYPOINTS_LIST__TRAITS_HPP_
