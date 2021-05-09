// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spark_msgs:msg/BehaviourState.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__BEHAVIOUR_STATE__STRUCT_HPP_
#define SPARK_MSGS__MSG__BEHAVIOUR_STATE__STRUCT_HPP_

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
# define DEPRECATED__spark_msgs__msg__BehaviourState __attribute__((deprecated))
#else
# define DEPRECATED__spark_msgs__msg__BehaviourState __declspec(deprecated)
#endif

namespace spark_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BehaviourState_
{
  using Type = BehaviourState_<ContainerAllocator>;

  explicit BehaviourState_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  explicit BehaviourState_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _state_type =
    int8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__state(
    const int8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spark_msgs::msg::BehaviourState_<ContainerAllocator> *;
  using ConstRawPtr =
    const spark_msgs::msg::BehaviourState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spark_msgs::msg::BehaviourState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spark_msgs::msg::BehaviourState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spark_msgs::msg::BehaviourState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spark_msgs::msg::BehaviourState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spark_msgs::msg::BehaviourState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spark_msgs::msg::BehaviourState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spark_msgs::msg::BehaviourState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spark_msgs::msg::BehaviourState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spark_msgs__msg__BehaviourState
    std::shared_ptr<spark_msgs::msg::BehaviourState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spark_msgs__msg__BehaviourState
    std::shared_ptr<spark_msgs::msg::BehaviourState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviourState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviourState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviourState_

// alias to use template instance with default allocator
using BehaviourState =
  spark_msgs::msg::BehaviourState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace spark_msgs

#endif  // SPARK_MSGS__MSG__BEHAVIOUR_STATE__STRUCT_HPP_
