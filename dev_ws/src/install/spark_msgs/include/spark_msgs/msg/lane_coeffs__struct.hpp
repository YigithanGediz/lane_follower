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
    (void)_init;
  }

  explicit LaneCoeffs_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _coeffs_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _coeffs_type coeffs;

  // setters for named parameter idiom
  Type & set__coeffs(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->coeffs = _arg;
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
    if (this->coeffs != other.coeffs) {
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
