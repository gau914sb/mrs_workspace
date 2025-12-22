// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/HwApiControlGroupCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_control_group_cmd.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_CONTROL_GROUP_CMD__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_CONTROL_GROUP_CMD__STRUCT_HPP_

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
# define DEPRECATED__mrs_msgs__msg__HwApiControlGroupCmd __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__HwApiControlGroupCmd __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HwApiControlGroupCmd_
{
  using Type = HwApiControlGroupCmd_<ContainerAllocator>;

  explicit HwApiControlGroupCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->throttle = 0.0f;
    }
  }

  explicit HwApiControlGroupCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->throttle = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _throttle_type =
    float;
  _throttle_type throttle;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__throttle(
    const float & _arg)
  {
    this->throttle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::HwApiControlGroupCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::HwApiControlGroupCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::HwApiControlGroupCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::HwApiControlGroupCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::HwApiControlGroupCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::HwApiControlGroupCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::HwApiControlGroupCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::HwApiControlGroupCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::HwApiControlGroupCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::HwApiControlGroupCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__HwApiControlGroupCmd
    std::shared_ptr<mrs_msgs::msg::HwApiControlGroupCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__HwApiControlGroupCmd
    std::shared_ptr<mrs_msgs::msg::HwApiControlGroupCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HwApiControlGroupCmd_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    return true;
  }
  bool operator!=(const HwApiControlGroupCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HwApiControlGroupCmd_

// alias to use template instance with default allocator
using HwApiControlGroupCmd =
  mrs_msgs::msg::HwApiControlGroupCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_CONTROL_GROUP_CMD__STRUCT_HPP_
