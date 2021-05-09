// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spark_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__LANE__STRUCT_HPP_
#define SPARK_MSGS__MSG__LANE__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__spark_msgs__msg__Lane __attribute__((deprecated))
#else
# define DEPRECATED__spark_msgs__msg__Lane __declspec(deprecated)
#endif

namespace spark_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Lane_
{
  using Type = Lane_<ContainerAllocator>;

  explicit Lane_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Lane_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _lane_type =
    std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other>;
  _lane_type lane;

  // setters for named parameter idiom
  Type & set__lane(
    const std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other> & _arg)
  {
    this->lane = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spark_msgs::msg::Lane_<ContainerAllocator> *;
  using ConstRawPtr =
    const spark_msgs::msg::Lane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spark_msgs::msg::Lane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spark_msgs::msg::Lane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spark_msgs::msg::Lane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spark_msgs::msg::Lane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spark_msgs::msg::Lane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spark_msgs::msg::Lane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spark_msgs::msg::Lane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spark_msgs::msg::Lane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spark_msgs__msg__Lane
    std::shared_ptr<spark_msgs::msg::Lane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spark_msgs__msg__Lane
    std::shared_ptr<spark_msgs::msg::Lane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Lane_ & other) const
  {
    if (this->lane != other.lane) {
      return false;
    }
    return true;
  }
  bool operator!=(const Lane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Lane_

// alias to use template instance with default allocator
using Lane =
  spark_msgs::msg::Lane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace spark_msgs

#endif  // SPARK_MSGS__MSG__LANE__STRUCT_HPP_
