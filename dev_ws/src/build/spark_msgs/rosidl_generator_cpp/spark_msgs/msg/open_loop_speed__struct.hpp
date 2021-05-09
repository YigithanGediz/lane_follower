// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spark_msgs:msg/OpenLoopSpeed.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__OPEN_LOOP_SPEED__STRUCT_HPP_
#define SPARK_MSGS__MSG__OPEN_LOOP_SPEED__STRUCT_HPP_

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
# define DEPRECATED__spark_msgs__msg__OpenLoopSpeed __attribute__((deprecated))
#else
# define DEPRECATED__spark_msgs__msg__OpenLoopSpeed __declspec(deprecated)
#endif

namespace spark_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OpenLoopSpeed_
{
  using Type = OpenLoopSpeed_<ContainerAllocator>;

  explicit OpenLoopSpeed_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0;
    }
  }

  explicit OpenLoopSpeed_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0;
    }
  }

  // field types and members
  using _speed_type =
    double;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spark_msgs::msg::OpenLoopSpeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const spark_msgs::msg::OpenLoopSpeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spark_msgs::msg::OpenLoopSpeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spark_msgs::msg::OpenLoopSpeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spark_msgs::msg::OpenLoopSpeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spark_msgs::msg::OpenLoopSpeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spark_msgs::msg::OpenLoopSpeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spark_msgs::msg::OpenLoopSpeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spark_msgs::msg::OpenLoopSpeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spark_msgs::msg::OpenLoopSpeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spark_msgs__msg__OpenLoopSpeed
    std::shared_ptr<spark_msgs::msg::OpenLoopSpeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spark_msgs__msg__OpenLoopSpeed
    std::shared_ptr<spark_msgs::msg::OpenLoopSpeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpenLoopSpeed_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpenLoopSpeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpenLoopSpeed_

// alias to use template instance with default allocator
using OpenLoopSpeed =
  spark_msgs::msg::OpenLoopSpeed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace spark_msgs

#endif  // SPARK_MSGS__MSG__OPEN_LOOP_SPEED__STRUCT_HPP_
