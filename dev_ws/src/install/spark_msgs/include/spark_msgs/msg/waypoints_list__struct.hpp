// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spark_msgs:msg/WaypointsList.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__WAYPOINTS_LIST__STRUCT_HPP_
#define SPARK_MSGS__MSG__WAYPOINTS_LIST__STRUCT_HPP_

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
// Member 'left'
// Member 'right'
// Member 'forward'
#include "spark_msgs/msg/waypoints__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__spark_msgs__msg__WaypointsList __attribute__((deprecated))
#else
# define DEPRECATED__spark_msgs__msg__WaypointsList __declspec(deprecated)
#endif

namespace spark_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaypointsList_
{
  using Type = WaypointsList_<ContainerAllocator>;

  explicit WaypointsList_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init),
    left(_init),
    right(_init),
    forward(_init)
  {
    (void)_init;
  }

  explicit WaypointsList_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    left(_alloc, _init),
    right(_alloc, _init),
    forward(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _left_type =
    spark_msgs::msg::Waypoints_<ContainerAllocator>;
  _left_type left;
  using _right_type =
    spark_msgs::msg::Waypoints_<ContainerAllocator>;
  _right_type right;
  using _forward_type =
    spark_msgs::msg::Waypoints_<ContainerAllocator>;
  _forward_type forward;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__left(
    const spark_msgs::msg::Waypoints_<ContainerAllocator> & _arg)
  {
    this->left = _arg;
    return *this;
  }
  Type & set__right(
    const spark_msgs::msg::Waypoints_<ContainerAllocator> & _arg)
  {
    this->right = _arg;
    return *this;
  }
  Type & set__forward(
    const spark_msgs::msg::Waypoints_<ContainerAllocator> & _arg)
  {
    this->forward = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spark_msgs::msg::WaypointsList_<ContainerAllocator> *;
  using ConstRawPtr =
    const spark_msgs::msg::WaypointsList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spark_msgs::msg::WaypointsList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spark_msgs::msg::WaypointsList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spark_msgs::msg::WaypointsList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spark_msgs::msg::WaypointsList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spark_msgs::msg::WaypointsList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spark_msgs::msg::WaypointsList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spark_msgs::msg::WaypointsList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spark_msgs::msg::WaypointsList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spark_msgs__msg__WaypointsList
    std::shared_ptr<spark_msgs::msg::WaypointsList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spark_msgs__msg__WaypointsList
    std::shared_ptr<spark_msgs::msg::WaypointsList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointsList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->left != other.left) {
      return false;
    }
    if (this->right != other.right) {
      return false;
    }
    if (this->forward != other.forward) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointsList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointsList_

// alias to use template instance with default allocator
using WaypointsList =
  spark_msgs::msg::WaypointsList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace spark_msgs

#endif  // SPARK_MSGS__MSG__WAYPOINTS_LIST__STRUCT_HPP_
