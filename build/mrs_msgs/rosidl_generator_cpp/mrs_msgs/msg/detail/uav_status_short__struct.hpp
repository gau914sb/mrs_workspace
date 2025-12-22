// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/UavStatusShort.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/uav_status_short.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__UAV_STATUS_SHORT__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__UAV_STATUS_SHORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__UavStatusShort __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__UavStatusShort __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UavStatusShort_
{
  using Type = UavStatusShort_<ContainerAllocator>;

  explicit UavStatusShort_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->odom_hz = 0.0f;
      this->odom_color = 0;
      this->odom_x = 0.0f;
      this->odom_y = 0.0f;
      this->odom_z = 0.0f;
      this->odom_hdg = 0.0f;
      this->cmd_x = 0.0f;
      this->cmd_y = 0.0f;
      this->cmd_z = 0.0f;
      this->cmd_hdg = 0.0f;
    }
  }

  explicit UavStatusShort_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->odom_hz = 0.0f;
      this->odom_color = 0;
      this->odom_x = 0.0f;
      this->odom_y = 0.0f;
      this->odom_z = 0.0f;
      this->odom_hdg = 0.0f;
      this->cmd_x = 0.0f;
      this->cmd_y = 0.0f;
      this->cmd_z = 0.0f;
      this->cmd_hdg = 0.0f;
    }
  }

  // field types and members
  using _odom_hz_type =
    float;
  _odom_hz_type odom_hz;
  using _odom_color_type =
    int16_t;
  _odom_color_type odom_color;
  using _odom_x_type =
    float;
  _odom_x_type odom_x;
  using _odom_y_type =
    float;
  _odom_y_type odom_y;
  using _odom_z_type =
    float;
  _odom_z_type odom_z;
  using _odom_hdg_type =
    float;
  _odom_hdg_type odom_hdg;
  using _cmd_x_type =
    float;
  _cmd_x_type cmd_x;
  using _cmd_y_type =
    float;
  _cmd_y_type cmd_y;
  using _cmd_z_type =
    float;
  _cmd_z_type cmd_z;
  using _cmd_hdg_type =
    float;
  _cmd_hdg_type cmd_hdg;

  // setters for named parameter idiom
  Type & set__odom_hz(
    const float & _arg)
  {
    this->odom_hz = _arg;
    return *this;
  }
  Type & set__odom_color(
    const int16_t & _arg)
  {
    this->odom_color = _arg;
    return *this;
  }
  Type & set__odom_x(
    const float & _arg)
  {
    this->odom_x = _arg;
    return *this;
  }
  Type & set__odom_y(
    const float & _arg)
  {
    this->odom_y = _arg;
    return *this;
  }
  Type & set__odom_z(
    const float & _arg)
  {
    this->odom_z = _arg;
    return *this;
  }
  Type & set__odom_hdg(
    const float & _arg)
  {
    this->odom_hdg = _arg;
    return *this;
  }
  Type & set__cmd_x(
    const float & _arg)
  {
    this->cmd_x = _arg;
    return *this;
  }
  Type & set__cmd_y(
    const float & _arg)
  {
    this->cmd_y = _arg;
    return *this;
  }
  Type & set__cmd_z(
    const float & _arg)
  {
    this->cmd_z = _arg;
    return *this;
  }
  Type & set__cmd_hdg(
    const float & _arg)
  {
    this->cmd_hdg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::UavStatusShort_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::UavStatusShort_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::UavStatusShort_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::UavStatusShort_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::UavStatusShort_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::UavStatusShort_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::UavStatusShort_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::UavStatusShort_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::UavStatusShort_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::UavStatusShort_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__UavStatusShort
    std::shared_ptr<mrs_msgs::msg::UavStatusShort_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__UavStatusShort
    std::shared_ptr<mrs_msgs::msg::UavStatusShort_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UavStatusShort_ & other) const
  {
    if (this->odom_hz != other.odom_hz) {
      return false;
    }
    if (this->odom_color != other.odom_color) {
      return false;
    }
    if (this->odom_x != other.odom_x) {
      return false;
    }
    if (this->odom_y != other.odom_y) {
      return false;
    }
    if (this->odom_z != other.odom_z) {
      return false;
    }
    if (this->odom_hdg != other.odom_hdg) {
      return false;
    }
    if (this->cmd_x != other.cmd_x) {
      return false;
    }
    if (this->cmd_y != other.cmd_y) {
      return false;
    }
    if (this->cmd_z != other.cmd_z) {
      return false;
    }
    if (this->cmd_hdg != other.cmd_hdg) {
      return false;
    }
    return true;
  }
  bool operator!=(const UavStatusShort_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UavStatusShort_

// alias to use template instance with default allocator
using UavStatusShort =
  mrs_msgs::msg::UavStatusShort_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__UAV_STATUS_SHORT__STRUCT_HPP_
