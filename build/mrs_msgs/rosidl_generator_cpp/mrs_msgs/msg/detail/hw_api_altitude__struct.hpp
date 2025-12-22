// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/HwApiAltitude.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_altitude.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_ALTITUDE__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_ALTITUDE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__HwApiAltitude __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__HwApiAltitude __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HwApiAltitude_
{
  using Type = HwApiAltitude_<ContainerAllocator>;

  explicit HwApiAltitude_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->amsl = 0.0;
    }
  }

  explicit HwApiAltitude_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->amsl = 0.0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _amsl_type =
    double;
  _amsl_type amsl;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__amsl(
    const double & _arg)
  {
    this->amsl = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::HwApiAltitude_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::HwApiAltitude_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::HwApiAltitude_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::HwApiAltitude_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::HwApiAltitude_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::HwApiAltitude_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::HwApiAltitude_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::HwApiAltitude_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::HwApiAltitude_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::HwApiAltitude_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__HwApiAltitude
    std::shared_ptr<mrs_msgs::msg::HwApiAltitude_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__HwApiAltitude
    std::shared_ptr<mrs_msgs::msg::HwApiAltitude_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HwApiAltitude_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->amsl != other.amsl) {
      return false;
    }
    return true;
  }
  bool operator!=(const HwApiAltitude_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HwApiAltitude_

// alias to use template instance with default allocator
using HwApiAltitude =
  mrs_msgs::msg::HwApiAltitude_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_ALTITUDE__STRUCT_HPP_
