// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/HwApiAttitudeRateCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_attitude_rate_cmd.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_ATTITUDE_RATE_CMD__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_ATTITUDE_RATE_CMD__STRUCT_HPP_

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
// Member 'body_rate'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__HwApiAttitudeRateCmd __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__HwApiAttitudeRateCmd __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HwApiAttitudeRateCmd_
{
  using Type = HwApiAttitudeRateCmd_<ContainerAllocator>;

  explicit HwApiAttitudeRateCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    body_rate(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0;
    }
  }

  explicit HwApiAttitudeRateCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    body_rate(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _body_rate_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _body_rate_type body_rate;
  using _throttle_type =
    double;
  _throttle_type throttle;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__body_rate(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->body_rate = _arg;
    return *this;
  }
  Type & set__throttle(
    const double & _arg)
  {
    this->throttle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::HwApiAttitudeRateCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::HwApiAttitudeRateCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::HwApiAttitudeRateCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::HwApiAttitudeRateCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::HwApiAttitudeRateCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::HwApiAttitudeRateCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::HwApiAttitudeRateCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::HwApiAttitudeRateCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::HwApiAttitudeRateCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::HwApiAttitudeRateCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__HwApiAttitudeRateCmd
    std::shared_ptr<mrs_msgs::msg::HwApiAttitudeRateCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__HwApiAttitudeRateCmd
    std::shared_ptr<mrs_msgs::msg::HwApiAttitudeRateCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HwApiAttitudeRateCmd_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->body_rate != other.body_rate) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    return true;
  }
  bool operator!=(const HwApiAttitudeRateCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HwApiAttitudeRateCmd_

// alias to use template instance with default allocator
using HwApiAttitudeRateCmd =
  mrs_msgs::msg::HwApiAttitudeRateCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_ATTITUDE_RATE_CMD__STRUCT_HPP_
