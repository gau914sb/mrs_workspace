// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/DynamicsConstraints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/dynamics_constraints.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__DYNAMICS_CONSTRAINTS__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__DYNAMICS_CONSTRAINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__DynamicsConstraints __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__DynamicsConstraints __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DynamicsConstraints_
{
  using Type = DynamicsConstraints_<ContainerAllocator>;

  explicit DynamicsConstraints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->horizontal_speed = 0.0;
      this->horizontal_acceleration = 0.0;
      this->horizontal_jerk = 0.0;
      this->horizontal_snap = 0.0;
      this->vertical_ascending_speed = 0.0;
      this->vertical_ascending_acceleration = 0.0;
      this->vertical_ascending_jerk = 0.0;
      this->vertical_ascending_snap = 0.0;
      this->vertical_descending_speed = 0.0;
      this->vertical_descending_acceleration = 0.0;
      this->vertical_descending_jerk = 0.0;
      this->vertical_descending_snap = 0.0;
      this->heading_speed = 0.0;
      this->heading_acceleration = 0.0;
      this->heading_jerk = 0.0;
      this->heading_snap = 0.0;
      this->roll_rate = 0.0;
      this->pitch_rate = 0.0;
      this->yaw_rate = 0.0;
      this->tilt = 0.0;
    }
  }

  explicit DynamicsConstraints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->horizontal_speed = 0.0;
      this->horizontal_acceleration = 0.0;
      this->horizontal_jerk = 0.0;
      this->horizontal_snap = 0.0;
      this->vertical_ascending_speed = 0.0;
      this->vertical_ascending_acceleration = 0.0;
      this->vertical_ascending_jerk = 0.0;
      this->vertical_ascending_snap = 0.0;
      this->vertical_descending_speed = 0.0;
      this->vertical_descending_acceleration = 0.0;
      this->vertical_descending_jerk = 0.0;
      this->vertical_descending_snap = 0.0;
      this->heading_speed = 0.0;
      this->heading_acceleration = 0.0;
      this->heading_jerk = 0.0;
      this->heading_snap = 0.0;
      this->roll_rate = 0.0;
      this->pitch_rate = 0.0;
      this->yaw_rate = 0.0;
      this->tilt = 0.0;
    }
  }

  // field types and members
  using _horizontal_speed_type =
    double;
  _horizontal_speed_type horizontal_speed;
  using _horizontal_acceleration_type =
    double;
  _horizontal_acceleration_type horizontal_acceleration;
  using _horizontal_jerk_type =
    double;
  _horizontal_jerk_type horizontal_jerk;
  using _horizontal_snap_type =
    double;
  _horizontal_snap_type horizontal_snap;
  using _vertical_ascending_speed_type =
    double;
  _vertical_ascending_speed_type vertical_ascending_speed;
  using _vertical_ascending_acceleration_type =
    double;
  _vertical_ascending_acceleration_type vertical_ascending_acceleration;
  using _vertical_ascending_jerk_type =
    double;
  _vertical_ascending_jerk_type vertical_ascending_jerk;
  using _vertical_ascending_snap_type =
    double;
  _vertical_ascending_snap_type vertical_ascending_snap;
  using _vertical_descending_speed_type =
    double;
  _vertical_descending_speed_type vertical_descending_speed;
  using _vertical_descending_acceleration_type =
    double;
  _vertical_descending_acceleration_type vertical_descending_acceleration;
  using _vertical_descending_jerk_type =
    double;
  _vertical_descending_jerk_type vertical_descending_jerk;
  using _vertical_descending_snap_type =
    double;
  _vertical_descending_snap_type vertical_descending_snap;
  using _heading_speed_type =
    double;
  _heading_speed_type heading_speed;
  using _heading_acceleration_type =
    double;
  _heading_acceleration_type heading_acceleration;
  using _heading_jerk_type =
    double;
  _heading_jerk_type heading_jerk;
  using _heading_snap_type =
    double;
  _heading_snap_type heading_snap;
  using _roll_rate_type =
    double;
  _roll_rate_type roll_rate;
  using _pitch_rate_type =
    double;
  _pitch_rate_type pitch_rate;
  using _yaw_rate_type =
    double;
  _yaw_rate_type yaw_rate;
  using _tilt_type =
    double;
  _tilt_type tilt;

  // setters for named parameter idiom
  Type & set__horizontal_speed(
    const double & _arg)
  {
    this->horizontal_speed = _arg;
    return *this;
  }
  Type & set__horizontal_acceleration(
    const double & _arg)
  {
    this->horizontal_acceleration = _arg;
    return *this;
  }
  Type & set__horizontal_jerk(
    const double & _arg)
  {
    this->horizontal_jerk = _arg;
    return *this;
  }
  Type & set__horizontal_snap(
    const double & _arg)
  {
    this->horizontal_snap = _arg;
    return *this;
  }
  Type & set__vertical_ascending_speed(
    const double & _arg)
  {
    this->vertical_ascending_speed = _arg;
    return *this;
  }
  Type & set__vertical_ascending_acceleration(
    const double & _arg)
  {
    this->vertical_ascending_acceleration = _arg;
    return *this;
  }
  Type & set__vertical_ascending_jerk(
    const double & _arg)
  {
    this->vertical_ascending_jerk = _arg;
    return *this;
  }
  Type & set__vertical_ascending_snap(
    const double & _arg)
  {
    this->vertical_ascending_snap = _arg;
    return *this;
  }
  Type & set__vertical_descending_speed(
    const double & _arg)
  {
    this->vertical_descending_speed = _arg;
    return *this;
  }
  Type & set__vertical_descending_acceleration(
    const double & _arg)
  {
    this->vertical_descending_acceleration = _arg;
    return *this;
  }
  Type & set__vertical_descending_jerk(
    const double & _arg)
  {
    this->vertical_descending_jerk = _arg;
    return *this;
  }
  Type & set__vertical_descending_snap(
    const double & _arg)
  {
    this->vertical_descending_snap = _arg;
    return *this;
  }
  Type & set__heading_speed(
    const double & _arg)
  {
    this->heading_speed = _arg;
    return *this;
  }
  Type & set__heading_acceleration(
    const double & _arg)
  {
    this->heading_acceleration = _arg;
    return *this;
  }
  Type & set__heading_jerk(
    const double & _arg)
  {
    this->heading_jerk = _arg;
    return *this;
  }
  Type & set__heading_snap(
    const double & _arg)
  {
    this->heading_snap = _arg;
    return *this;
  }
  Type & set__roll_rate(
    const double & _arg)
  {
    this->roll_rate = _arg;
    return *this;
  }
  Type & set__pitch_rate(
    const double & _arg)
  {
    this->pitch_rate = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const double & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__tilt(
    const double & _arg)
  {
    this->tilt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::DynamicsConstraints_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::DynamicsConstraints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::DynamicsConstraints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::DynamicsConstraints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::DynamicsConstraints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::DynamicsConstraints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::DynamicsConstraints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::DynamicsConstraints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::DynamicsConstraints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::DynamicsConstraints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__DynamicsConstraints
    std::shared_ptr<mrs_msgs::msg::DynamicsConstraints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__DynamicsConstraints
    std::shared_ptr<mrs_msgs::msg::DynamicsConstraints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamicsConstraints_ & other) const
  {
    if (this->horizontal_speed != other.horizontal_speed) {
      return false;
    }
    if (this->horizontal_acceleration != other.horizontal_acceleration) {
      return false;
    }
    if (this->horizontal_jerk != other.horizontal_jerk) {
      return false;
    }
    if (this->horizontal_snap != other.horizontal_snap) {
      return false;
    }
    if (this->vertical_ascending_speed != other.vertical_ascending_speed) {
      return false;
    }
    if (this->vertical_ascending_acceleration != other.vertical_ascending_acceleration) {
      return false;
    }
    if (this->vertical_ascending_jerk != other.vertical_ascending_jerk) {
      return false;
    }
    if (this->vertical_ascending_snap != other.vertical_ascending_snap) {
      return false;
    }
    if (this->vertical_descending_speed != other.vertical_descending_speed) {
      return false;
    }
    if (this->vertical_descending_acceleration != other.vertical_descending_acceleration) {
      return false;
    }
    if (this->vertical_descending_jerk != other.vertical_descending_jerk) {
      return false;
    }
    if (this->vertical_descending_snap != other.vertical_descending_snap) {
      return false;
    }
    if (this->heading_speed != other.heading_speed) {
      return false;
    }
    if (this->heading_acceleration != other.heading_acceleration) {
      return false;
    }
    if (this->heading_jerk != other.heading_jerk) {
      return false;
    }
    if (this->heading_snap != other.heading_snap) {
      return false;
    }
    if (this->roll_rate != other.roll_rate) {
      return false;
    }
    if (this->pitch_rate != other.pitch_rate) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->tilt != other.tilt) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamicsConstraints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamicsConstraints_

// alias to use template instance with default allocator
using DynamicsConstraints =
  mrs_msgs::msg::DynamicsConstraints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__DYNAMICS_CONSTRAINTS__STRUCT_HPP_
