// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lgsvl_msgs:msg/Detection2DArray.idl
// generated code does not contain a copyright notice

#ifndef LGSVL_MSGS__MSG__DETECTION2_D_ARRAY__TRAITS_HPP_
#define LGSVL_MSGS__MSG__DETECTION2_D_ARRAY__TRAITS_HPP_

#include "lgsvl_msgs/msg/detection2_d_array__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lgsvl_msgs::msg::Detection2DArray>()
{
  return "lgsvl_msgs::msg::Detection2DArray";
}

template<>
struct has_fixed_size<lgsvl_msgs::msg::Detection2DArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lgsvl_msgs::msg::Detection2DArray>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // LGSVL_MSGS__MSG__DETECTION2_D_ARRAY__TRAITS_HPP_
