// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spark_msgs:msg/MultiFloat64.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__MULTI_FLOAT64__STRUCT_HPP_
#define SPARK_MSGS__MSG__MULTI_FLOAT64__STRUCT_HPP_

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
# define DEPRECATED__spark_msgs__msg__MultiFloat64 __attribute__((deprecated))
#else
# define DEPRECATED__spark_msgs__msg__MultiFloat64 __declspec(deprecated)
#endif

namespace spark_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MultiFloat64_
{
  using Type = MultiFloat64_<ContainerAllocator>;

  explicit MultiFloat64_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit MultiFloat64_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _dimensions_type =
    std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other>;
  _dimensions_type dimensions;
  using _data_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__dimensions(
    const std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other> & _arg)
  {
    this->dimensions = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spark_msgs::msg::MultiFloat64_<ContainerAllocator> *;
  using ConstRawPtr =
    const spark_msgs::msg::MultiFloat64_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spark_msgs::msg::MultiFloat64_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spark_msgs::msg::MultiFloat64_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spark_msgs::msg::MultiFloat64_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spark_msgs::msg::MultiFloat64_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spark_msgs::msg::MultiFloat64_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spark_msgs::msg::MultiFloat64_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spark_msgs::msg::MultiFloat64_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spark_msgs::msg::MultiFloat64_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spark_msgs__msg__MultiFloat64
    std::shared_ptr<spark_msgs::msg::MultiFloat64_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spark_msgs__msg__MultiFloat64
    std::shared_ptr<spark_msgs::msg::MultiFloat64_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiFloat64_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->dimensions != other.dimensions) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiFloat64_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiFloat64_

// alias to use template instance with default allocator
using MultiFloat64 =
  spark_msgs::msg::MultiFloat64_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace spark_msgs

#endif  // SPARK_MSGS__MSG__MULTI_FLOAT64__STRUCT_HPP_
