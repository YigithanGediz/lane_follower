// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spark_msgs:msg/WaypointData.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__WAYPOINT_DATA__TRAITS_HPP_
#define SPARK_MSGS__MSG__WAYPOINT_DATA__TRAITS_HPP_

#include "spark_msgs/msg/waypoint_data__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<spark_msgs::msg::WaypointData>()
{
  return "spark_msgs::msg::WaypointData";
}

template<>
struct has_fixed_size<spark_msgs::msg::WaypointData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spark_msgs::msg::WaypointData>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // SPARK_MSGS__MSG__WAYPOINT_DATA__TRAITS_HPP_
