// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/GimbalState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gimbal_state.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__GIMBAL_STATE__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__GIMBAL_STATE__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__GimbalState __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__GimbalState __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GimbalState_
{
  using Type = GimbalState_<ContainerAllocator>;

  explicit GimbalState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gimbal_tilt = 0;
      this->gimbal_pan = 0;
      this->is_on = false;
      this->fpv_mode = false;
    }
  }

  explicit GimbalState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gimbal_tilt = 0;
      this->gimbal_pan = 0;
      this->is_on = false;
      this->fpv_mode = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _gimbal_tilt_type =
    uint16_t;
  _gimbal_tilt_type gimbal_tilt;
  using _gimbal_pan_type =
    uint16_t;
  _gimbal_pan_type gimbal_pan;
  using _is_on_type =
    bool;
  _is_on_type is_on;
  using _fpv_mode_type =
    bool;
  _fpv_mode_type fpv_mode;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__gimbal_tilt(
    const uint16_t & _arg)
  {
    this->gimbal_tilt = _arg;
    return *this;
  }
  Type & set__gimbal_pan(
    const uint16_t & _arg)
  {
    this->gimbal_pan = _arg;
    return *this;
  }
  Type & set__is_on(
    const bool & _arg)
  {
    this->is_on = _arg;
    return *this;
  }
  Type & set__fpv_mode(
    const bool & _arg)
  {
    this->fpv_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::GimbalState_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::GimbalState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::GimbalState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::GimbalState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::GimbalState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::GimbalState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::GimbalState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::GimbalState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::GimbalState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::GimbalState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__GimbalState
    std::shared_ptr<mrs_msgs::msg::GimbalState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__GimbalState
    std::shared_ptr<mrs_msgs::msg::GimbalState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GimbalState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->gimbal_tilt != other.gimbal_tilt) {
      return false;
    }
    if (this->gimbal_pan != other.gimbal_pan) {
      return false;
    }
    if (this->is_on != other.is_on) {
      return false;
    }
    if (this->fpv_mode != other.fpv_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const GimbalState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GimbalState_

// alias to use template instance with default allocator
using GimbalState =
  mrs_msgs::msg::GimbalState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__GIMBAL_STATE__STRUCT_HPP_
