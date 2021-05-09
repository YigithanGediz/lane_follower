// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spark_msgs:msg/LaneList.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__LANE_LIST__STRUCT_HPP_
#define SPARK_MSGS__MSG__LANE_LIST__STRUCT_HPP_

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
// Member 'x_coords'
// Member 'y_coords'
#include "spark_msgs/msg/lane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__spark_msgs__msg__LaneList __attribute__((deprecated))
#else
# define DEPRECATED__spark_msgs__msg__LaneList __declspec(deprecated)
#endif

namespace spark_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneList_
{
  using Type = LaneList_<ContainerAllocator>;

  explicit LaneList_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit LaneList_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _x_coords_type =
    std::vector<spark_msgs::msg::Lane_<ContainerAllocator>, typename ContainerAllocator::template rebind<spark_msgs::msg::Lane_<ContainerAllocator>>::other>;
  _x_coords_type x_coords;
  using _y_coords_type =
    std::vector<spark_msgs::msg::Lane_<ContainerAllocator>, typename ContainerAllocator::template rebind<spark_msgs::msg::Lane_<ContainerAllocator>>::other>;
  _y_coords_type y_coords;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__x_coords(
    const std::vector<spark_msgs::msg::Lane_<ContainerAllocator>, typename ContainerAllocator::template rebind<spark_msgs::msg::Lane_<ContainerAllocator>>::other> & _arg)
  {
    this->x_coords = _arg;
    return *this;
  }
  Type & set__y_coords(
    const std::vector<spark_msgs::msg::Lane_<ContainerAllocator>, typename ContainerAllocator::template rebind<spark_msgs::msg::Lane_<ContainerAllocator>>::other> & _arg)
  {
    this->y_coords = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spark_msgs::msg::LaneList_<ContainerAllocator> *;
  using ConstRawPtr =
    const spark_msgs::msg::LaneList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spark_msgs::msg::LaneList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spark_msgs::msg::LaneList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spark_msgs::msg::LaneList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spark_msgs::msg::LaneList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spark_msgs::msg::LaneList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spark_msgs::msg::LaneList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spark_msgs::msg::LaneList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spark_msgs::msg::LaneList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spark_msgs__msg__LaneList
    std::shared_ptr<spark_msgs::msg::LaneList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spark_msgs__msg__LaneList
    std::shared_ptr<spark_msgs::msg::LaneList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->x_coords != other.x_coords) {
      return false;
    }
    if (this->y_coords != other.y_coords) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneList_

// alias to use template instance with default allocator
using LaneList =
  spark_msgs::msg::LaneList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace spark_msgs

#endif  // SPARK_MSGS__MSG__LANE_LIST__STRUCT_HPP_
