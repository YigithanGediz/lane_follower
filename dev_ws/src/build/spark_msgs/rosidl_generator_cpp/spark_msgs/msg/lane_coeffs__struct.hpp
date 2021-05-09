// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spark_msgs:msg/LaneCoeffs.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__LANE_COEFFS__STRUCT_HPP_
#define SPARK_MSGS__MSG__LANE_COEFFS__STRUCT_HPP_

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
# define DEPRECATED__spark_msgs__msg__LaneCoeffs __attribute__((deprecated))
#else
# define DEPRECATED__spark_msgs__msg__LaneCoeffs __declspec(deprecated)
#endif

namespace spark_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneCoeffs_
{
  using Type = LaneCoeffs_<ContainerAllocator>;

  explicit LaneCoeffs_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->slope = 0.0f;
      this->bias = 0.0f;
    }
  }

  explicit LaneCoeffs_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->slope = 0.0f;
      this->bias = 0.0f;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _slope_type =
    float;
  _slope_type slope;
  using _bias_type =
    float;
  _bias_type bias;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__slope(
    const float & _arg)
  {
    this->slope = _arg;
    return *this;
  }
  Type & set__bias(
    const float & _arg)
  {
    this->bias = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spark_msgs::msg::LaneCoeffs_<ContainerAllocator> *;
  using ConstRawPtr =
    const spark_msgs::msg::LaneCoeffs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spark_msgs::msg::LaneCoeffs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spark_msgs::msg::LaneCoeffs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spark_msgs::msg::LaneCoeffs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spark_msgs::msg::LaneCoeffs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spark_msgs::msg::LaneCoeffs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spark_msgs::msg::LaneCoeffs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spark_msgs::msg::LaneCoeffs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spark_msgs::msg::LaneCoeffs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spark_msgs__msg__LaneCoeffs
    std::shared_ptr<spark_msgs::msg::LaneCoeffs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spark_msgs__msg__LaneCoeffs
    std::shared_ptr<spark_msgs::msg::LaneCoeffs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneCoeffs_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->slope != other.slope) {
      return false;
    }
    if (this->bias != other.bias) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneCoeffs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneCoeffs_

// alias to use template instance with default allocator
using LaneCoeffs =
  spark_msgs::msg::LaneCoeffs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace spark_msgs

#endif  // SPARK_MSGS__MSG__LANE_COEFFS__STRUCT_HPP_
