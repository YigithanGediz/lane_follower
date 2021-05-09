// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spark_msgs:msg/LaneWaypoints.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__LANE_WAYPOINTS__STRUCT_HPP_
#define SPARK_MSGS__MSG__LANE_WAYPOINTS__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__spark_msgs__msg__LaneWaypoints __attribute__((deprecated))
#else
# define DEPRECATED__spark_msgs__msg__LaneWaypoints __declspec(deprecated)
#endif

namespace spark_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneWaypoints_
{
  using Type = LaneWaypoints_<ContainerAllocator>;

  explicit LaneWaypoints_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit LaneWaypoints_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _forward_x_type =
    std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other>;
  _forward_x_type forward_x;
  using _forward_y_type =
    std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other>;
  _forward_y_type forward_y;
  using _right_x_type =
    std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other>;
  _right_x_type right_x;
  using _right_y_type =
    std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other>;
  _right_y_type right_y;
  using _left_x_type =
    std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other>;
  _left_x_type left_x;
  using _left_y_type =
    std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other>;
  _left_y_type left_y;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__forward_x(
    const std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other> & _arg)
  {
    this->forward_x = _arg;
    return *this;
  }
  Type & set__forward_y(
    const std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other> & _arg)
  {
    this->forward_y = _arg;
    return *this;
  }
  Type & set__right_x(
    const std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other> & _arg)
  {
    this->right_x = _arg;
    return *this;
  }
  Type & set__right_y(
    const std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other> & _arg)
  {
    this->right_y = _arg;
    return *this;
  }
  Type & set__left_x(
    const std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other> & _arg)
  {
    this->left_x = _arg;
    return *this;
  }
  Type & set__left_y(
    const std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other> & _arg)
  {
    this->left_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spark_msgs::msg::LaneWaypoints_<ContainerAllocator> *;
  using ConstRawPtr =
    const spark_msgs::msg::LaneWaypoints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spark_msgs::msg::LaneWaypoints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spark_msgs::msg::LaneWaypoints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spark_msgs::msg::LaneWaypoints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spark_msgs::msg::LaneWaypoints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spark_msgs::msg::LaneWaypoints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spark_msgs::msg::LaneWaypoints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spark_msgs::msg::LaneWaypoints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spark_msgs::msg::LaneWaypoints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spark_msgs__msg__LaneWaypoints
    std::shared_ptr<spark_msgs::msg::LaneWaypoints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spark_msgs__msg__LaneWaypoints
    std::shared_ptr<spark_msgs::msg::LaneWaypoints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneWaypoints_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->forward_x != other.forward_x) {
      return false;
    }
    if (this->forward_y != other.forward_y) {
      return false;
    }
    if (this->right_x != other.right_x) {
      return false;
    }
    if (this->right_y != other.right_y) {
      return false;
    }
    if (this->left_x != other.left_x) {
      return false;
    }
    if (this->left_y != other.left_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneWaypoints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneWaypoints_

// alias to use template instance with default allocator
using LaneWaypoints =
  spark_msgs::msg::LaneWaypoints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace spark_msgs

#endif  // SPARK_MSGS__MSG__LANE_WAYPOINTS__STRUCT_HPP_
