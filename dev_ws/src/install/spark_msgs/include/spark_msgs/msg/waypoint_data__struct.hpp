// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spark_msgs:msg/WaypointData.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__WAYPOINT_DATA__STRUCT_HPP_
#define SPARK_MSGS__MSG__WAYPOINT_DATA__STRUCT_HPP_

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
# define DEPRECATED__spark_msgs__msg__WaypointData __attribute__((deprecated))
#else
# define DEPRECATED__spark_msgs__msg__WaypointData __declspec(deprecated)
#endif

namespace spark_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaypointData_
{
  using Type = WaypointData_<ContainerAllocator>;

  explicit WaypointData_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit WaypointData_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _x_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _x_type x;
  using _y_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _y_type y;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__x(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spark_msgs::msg::WaypointData_<ContainerAllocator> *;
  using ConstRawPtr =
    const spark_msgs::msg::WaypointData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spark_msgs::msg::WaypointData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spark_msgs::msg::WaypointData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spark_msgs::msg::WaypointData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spark_msgs::msg::WaypointData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spark_msgs::msg::WaypointData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spark_msgs::msg::WaypointData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spark_msgs::msg::WaypointData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spark_msgs::msg::WaypointData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spark_msgs__msg__WaypointData
    std::shared_ptr<spark_msgs::msg::WaypointData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spark_msgs__msg__WaypointData
    std::shared_ptr<spark_msgs::msg::WaypointData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointData_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointData_

// alias to use template instance with default allocator
using WaypointData =
  spark_msgs::msg::WaypointData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace spark_msgs

#endif  // SPARK_MSGS__MSG__WAYPOINT_DATA__STRUCT_HPP_
