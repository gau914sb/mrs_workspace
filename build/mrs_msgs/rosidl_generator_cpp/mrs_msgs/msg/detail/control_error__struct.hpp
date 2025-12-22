// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/ControlError.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/control_error.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__CONTROL_ERROR__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__CONTROL_ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'position_errors'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__ControlError __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__ControlError __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlError_
{
  using Type = ControlError_<ContainerAllocator>;

  explicit ControlError_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position_errors(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_position_error = 0.0;
      this->yaw_error = 0.0;
      this->position_eland_threshold = 0.0;
      this->position_failsafe_threshold = 0.0;
    }
  }

  explicit ControlError_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    position_errors(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_position_error = 0.0;
      this->yaw_error = 0.0;
      this->position_eland_threshold = 0.0;
      this->position_failsafe_threshold = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _position_errors_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_errors_type position_errors;
  using _total_position_error_type =
    double;
  _total_position_error_type total_position_error;
  using _yaw_error_type =
    double;
  _yaw_error_type yaw_error;
  using _position_eland_threshold_type =
    double;
  _position_eland_threshold_type position_eland_threshold;
  using _position_failsafe_threshold_type =
    double;
  _position_failsafe_threshold_type position_failsafe_threshold;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__position_errors(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position_errors = _arg;
    return *this;
  }
  Type & set__total_position_error(
    const double & _arg)
  {
    this->total_position_error = _arg;
    return *this;
  }
  Type & set__yaw_error(
    const double & _arg)
  {
    this->yaw_error = _arg;
    return *this;
  }
  Type & set__position_eland_threshold(
    const double & _arg)
  {
    this->position_eland_threshold = _arg;
    return *this;
  }
  Type & set__position_failsafe_threshold(
    const double & _arg)
  {
    this->position_failsafe_threshold = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::ControlError_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::ControlError_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::ControlError_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::ControlError_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::ControlError_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::ControlError_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::ControlError_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::ControlError_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::ControlError_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::ControlError_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__ControlError
    std::shared_ptr<mrs_msgs::msg::ControlError_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__ControlError
    std::shared_ptr<mrs_msgs::msg::ControlError_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlError_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->position_errors != other.position_errors) {
      return false;
    }
    if (this->total_position_error != other.total_position_error) {
      return false;
    }
    if (this->yaw_error != other.yaw_error) {
      return false;
    }
    if (this->position_eland_threshold != other.position_eland_threshold) {
      return false;
    }
    if (this->position_failsafe_threshold != other.position_failsafe_threshold) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlError_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlError_

// alias to use template instance with default allocator
using ControlError =
  mrs_msgs::msg::ControlError_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__CONTROL_ERROR__STRUCT_HPP_
