// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/SpeedTrackerCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/speed_tracker_command.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__SPEED_TRACKER_COMMAND__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__SPEED_TRACKER_COMMAND__STRUCT_HPP_

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
// Member 'velocity'
// Member 'acceleration'
// Member 'force'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__SpeedTrackerCommand __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__SpeedTrackerCommand __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeedTrackerCommand_
{
  using Type = SpeedTrackerCommand_<ContainerAllocator>;

  explicit SpeedTrackerCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    velocity(_init),
    acceleration(_init),
    force(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->z = 0.0;
      this->heading = 0.0;
      this->heading_rate = 0.0;
      this->use_velocity = false;
      this->use_acceleration = false;
      this->use_force = false;
      this->use_z = false;
      this->use_heading = false;
      this->use_heading_rate = false;
    }
  }

  explicit SpeedTrackerCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    velocity(_alloc, _init),
    acceleration(_alloc, _init),
    force(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->z = 0.0;
      this->heading = 0.0;
      this->heading_rate = 0.0;
      this->use_velocity = false;
      this->use_acceleration = false;
      this->use_force = false;
      this->use_z = false;
      this->use_heading = false;
      this->use_heading_rate = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;
  using _acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _force_type force;
  using _z_type =
    double;
  _z_type z;
  using _heading_type =
    double;
  _heading_type heading;
  using _heading_rate_type =
    double;
  _heading_rate_type heading_rate;
  using _use_velocity_type =
    bool;
  _use_velocity_type use_velocity;
  using _use_acceleration_type =
    bool;
  _use_acceleration_type use_acceleration;
  using _use_force_type =
    bool;
  _use_force_type use_force;
  using _use_z_type =
    bool;
  _use_z_type use_z;
  using _use_heading_type =
    bool;
  _use_heading_type use_heading;
  using _use_heading_rate_type =
    bool;
  _use_heading_rate_type use_heading_rate;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->force = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__heading_rate(
    const double & _arg)
  {
    this->heading_rate = _arg;
    return *this;
  }
  Type & set__use_velocity(
    const bool & _arg)
  {
    this->use_velocity = _arg;
    return *this;
  }
  Type & set__use_acceleration(
    const bool & _arg)
  {
    this->use_acceleration = _arg;
    return *this;
  }
  Type & set__use_force(
    const bool & _arg)
  {
    this->use_force = _arg;
    return *this;
  }
  Type & set__use_z(
    const bool & _arg)
  {
    this->use_z = _arg;
    return *this;
  }
  Type & set__use_heading(
    const bool & _arg)
  {
    this->use_heading = _arg;
    return *this;
  }
  Type & set__use_heading_rate(
    const bool & _arg)
  {
    this->use_heading_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::SpeedTrackerCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::SpeedTrackerCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::SpeedTrackerCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::SpeedTrackerCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::SpeedTrackerCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::SpeedTrackerCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::SpeedTrackerCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::SpeedTrackerCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::SpeedTrackerCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::SpeedTrackerCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__SpeedTrackerCommand
    std::shared_ptr<mrs_msgs::msg::SpeedTrackerCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__SpeedTrackerCommand
    std::shared_ptr<mrs_msgs::msg::SpeedTrackerCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedTrackerCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->force != other.force) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->heading_rate != other.heading_rate) {
      return false;
    }
    if (this->use_velocity != other.use_velocity) {
      return false;
    }
    if (this->use_acceleration != other.use_acceleration) {
      return false;
    }
    if (this->use_force != other.use_force) {
      return false;
    }
    if (this->use_z != other.use_z) {
      return false;
    }
    if (this->use_heading != other.use_heading) {
      return false;
    }
    if (this->use_heading_rate != other.use_heading_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedTrackerCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedTrackerCommand_

// alias to use template instance with default allocator
using SpeedTrackerCommand =
  mrs_msgs::msg::SpeedTrackerCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__SPEED_TRACKER_COMMAND__STRUCT_HPP_
