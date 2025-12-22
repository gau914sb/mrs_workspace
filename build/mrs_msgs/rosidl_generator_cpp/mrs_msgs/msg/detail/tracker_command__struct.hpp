// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/TrackerCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/tracker_command.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__TRACKER_COMMAND__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__TRACKER_COMMAND__STRUCT_HPP_

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
// Member 'position'
// Member 'attitude_rate'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'velocity'
// Member 'acceleration'
// Member 'jerk'
// Member 'snap'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'full_state_prediction'
#include "mrs_msgs/msg/detail/mpc_prediction_full_state__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__TrackerCommand __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__TrackerCommand __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackerCommand_
{
  using Type = TrackerCommand_<ContainerAllocator>;

  explicit TrackerCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init),
    velocity(_init),
    acceleration(_init),
    jerk(_init),
    snap(_init),
    full_state_prediction(_init),
    orientation(_init),
    attitude_rate(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0;
      this->heading = 0.0;
      this->heading_rate = 0.0;
      this->heading_acceleration = 0.0;
      this->heading_jerk = 0.0;
      this->disable_position_gains = false;
      this->disable_antiwindups = false;
      this->use_position_horizontal = 0;
      this->use_position_vertical = 0;
      this->use_velocity_horizontal = 0;
      this->use_velocity_vertical = 0;
      this->use_acceleration = 0;
      this->use_jerk = 0;
      this->use_snap = 0;
      this->use_attitude_rate = 0;
      this->use_heading = 0;
      this->use_heading_rate = 0;
      this->use_heading_acceleration = 0;
      this->use_heading_jerk = 0;
      this->use_orientation = 0;
      this->use_throttle = 0;
      this->use_full_state_prediction = 0;
    }
  }

  explicit TrackerCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    position(_alloc, _init),
    velocity(_alloc, _init),
    acceleration(_alloc, _init),
    jerk(_alloc, _init),
    snap(_alloc, _init),
    full_state_prediction(_alloc, _init),
    orientation(_alloc, _init),
    attitude_rate(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0;
      this->heading = 0.0;
      this->heading_rate = 0.0;
      this->heading_acceleration = 0.0;
      this->heading_jerk = 0.0;
      this->disable_position_gains = false;
      this->disable_antiwindups = false;
      this->use_position_horizontal = 0;
      this->use_position_vertical = 0;
      this->use_velocity_horizontal = 0;
      this->use_velocity_vertical = 0;
      this->use_acceleration = 0;
      this->use_jerk = 0;
      this->use_snap = 0;
      this->use_attitude_rate = 0;
      this->use_heading = 0;
      this->use_heading_rate = 0;
      this->use_heading_acceleration = 0;
      this->use_heading_jerk = 0;
      this->use_orientation = 0;
      this->use_throttle = 0;
      this->use_full_state_prediction = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;
  using _acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _jerk_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _jerk_type jerk;
  using _snap_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _snap_type snap;
  using _full_state_prediction_type =
    mrs_msgs::msg::MpcPredictionFullState_<ContainerAllocator>;
  _full_state_prediction_type full_state_prediction;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _attitude_rate_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _attitude_rate_type attitude_rate;
  using _throttle_type =
    double;
  _throttle_type throttle;
  using _heading_type =
    double;
  _heading_type heading;
  using _heading_rate_type =
    double;
  _heading_rate_type heading_rate;
  using _heading_acceleration_type =
    double;
  _heading_acceleration_type heading_acceleration;
  using _heading_jerk_type =
    double;
  _heading_jerk_type heading_jerk;
  using _disable_position_gains_type =
    bool;
  _disable_position_gains_type disable_position_gains;
  using _disable_antiwindups_type =
    bool;
  _disable_antiwindups_type disable_antiwindups;
  using _use_position_horizontal_type =
    uint8_t;
  _use_position_horizontal_type use_position_horizontal;
  using _use_position_vertical_type =
    uint8_t;
  _use_position_vertical_type use_position_vertical;
  using _use_velocity_horizontal_type =
    uint8_t;
  _use_velocity_horizontal_type use_velocity_horizontal;
  using _use_velocity_vertical_type =
    uint8_t;
  _use_velocity_vertical_type use_velocity_vertical;
  using _use_acceleration_type =
    uint8_t;
  _use_acceleration_type use_acceleration;
  using _use_jerk_type =
    uint8_t;
  _use_jerk_type use_jerk;
  using _use_snap_type =
    uint8_t;
  _use_snap_type use_snap;
  using _use_attitude_rate_type =
    uint8_t;
  _use_attitude_rate_type use_attitude_rate;
  using _use_heading_type =
    uint8_t;
  _use_heading_type use_heading;
  using _use_heading_rate_type =
    uint8_t;
  _use_heading_rate_type use_heading_rate;
  using _use_heading_acceleration_type =
    uint8_t;
  _use_heading_acceleration_type use_heading_acceleration;
  using _use_heading_jerk_type =
    uint8_t;
  _use_heading_jerk_type use_heading_jerk;
  using _use_orientation_type =
    uint8_t;
  _use_orientation_type use_orientation;
  using _use_throttle_type =
    uint8_t;
  _use_throttle_type use_throttle;
  using _use_full_state_prediction_type =
    uint8_t;
  _use_full_state_prediction_type use_full_state_prediction;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
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
  Type & set__jerk(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->jerk = _arg;
    return *this;
  }
  Type & set__snap(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->snap = _arg;
    return *this;
  }
  Type & set__full_state_prediction(
    const mrs_msgs::msg::MpcPredictionFullState_<ContainerAllocator> & _arg)
  {
    this->full_state_prediction = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__attitude_rate(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->attitude_rate = _arg;
    return *this;
  }
  Type & set__throttle(
    const double & _arg)
  {
    this->throttle = _arg;
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
  Type & set__disable_position_gains(
    const bool & _arg)
  {
    this->disable_position_gains = _arg;
    return *this;
  }
  Type & set__disable_antiwindups(
    const bool & _arg)
  {
    this->disable_antiwindups = _arg;
    return *this;
  }
  Type & set__use_position_horizontal(
    const uint8_t & _arg)
  {
    this->use_position_horizontal = _arg;
    return *this;
  }
  Type & set__use_position_vertical(
    const uint8_t & _arg)
  {
    this->use_position_vertical = _arg;
    return *this;
  }
  Type & set__use_velocity_horizontal(
    const uint8_t & _arg)
  {
    this->use_velocity_horizontal = _arg;
    return *this;
  }
  Type & set__use_velocity_vertical(
    const uint8_t & _arg)
  {
    this->use_velocity_vertical = _arg;
    return *this;
  }
  Type & set__use_acceleration(
    const uint8_t & _arg)
  {
    this->use_acceleration = _arg;
    return *this;
  }
  Type & set__use_jerk(
    const uint8_t & _arg)
  {
    this->use_jerk = _arg;
    return *this;
  }
  Type & set__use_snap(
    const uint8_t & _arg)
  {
    this->use_snap = _arg;
    return *this;
  }
  Type & set__use_attitude_rate(
    const uint8_t & _arg)
  {
    this->use_attitude_rate = _arg;
    return *this;
  }
  Type & set__use_heading(
    const uint8_t & _arg)
  {
    this->use_heading = _arg;
    return *this;
  }
  Type & set__use_heading_rate(
    const uint8_t & _arg)
  {
    this->use_heading_rate = _arg;
    return *this;
  }
  Type & set__use_heading_acceleration(
    const uint8_t & _arg)
  {
    this->use_heading_acceleration = _arg;
    return *this;
  }
  Type & set__use_heading_jerk(
    const uint8_t & _arg)
  {
    this->use_heading_jerk = _arg;
    return *this;
  }
  Type & set__use_orientation(
    const uint8_t & _arg)
  {
    this->use_orientation = _arg;
    return *this;
  }
  Type & set__use_throttle(
    const uint8_t & _arg)
  {
    this->use_throttle = _arg;
    return *this;
  }
  Type & set__use_full_state_prediction(
    const uint8_t & _arg)
  {
    this->use_full_state_prediction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::TrackerCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::TrackerCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::TrackerCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::TrackerCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::TrackerCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::TrackerCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::TrackerCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::TrackerCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::TrackerCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::TrackerCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__TrackerCommand
    std::shared_ptr<mrs_msgs::msg::TrackerCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__TrackerCommand
    std::shared_ptr<mrs_msgs::msg::TrackerCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackerCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->jerk != other.jerk) {
      return false;
    }
    if (this->snap != other.snap) {
      return false;
    }
    if (this->full_state_prediction != other.full_state_prediction) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->attitude_rate != other.attitude_rate) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->heading_rate != other.heading_rate) {
      return false;
    }
    if (this->heading_acceleration != other.heading_acceleration) {
      return false;
    }
    if (this->heading_jerk != other.heading_jerk) {
      return false;
    }
    if (this->disable_position_gains != other.disable_position_gains) {
      return false;
    }
    if (this->disable_antiwindups != other.disable_antiwindups) {
      return false;
    }
    if (this->use_position_horizontal != other.use_position_horizontal) {
      return false;
    }
    if (this->use_position_vertical != other.use_position_vertical) {
      return false;
    }
    if (this->use_velocity_horizontal != other.use_velocity_horizontal) {
      return false;
    }
    if (this->use_velocity_vertical != other.use_velocity_vertical) {
      return false;
    }
    if (this->use_acceleration != other.use_acceleration) {
      return false;
    }
    if (this->use_jerk != other.use_jerk) {
      return false;
    }
    if (this->use_snap != other.use_snap) {
      return false;
    }
    if (this->use_attitude_rate != other.use_attitude_rate) {
      return false;
    }
    if (this->use_heading != other.use_heading) {
      return false;
    }
    if (this->use_heading_rate != other.use_heading_rate) {
      return false;
    }
    if (this->use_heading_acceleration != other.use_heading_acceleration) {
      return false;
    }
    if (this->use_heading_jerk != other.use_heading_jerk) {
      return false;
    }
    if (this->use_orientation != other.use_orientation) {
      return false;
    }
    if (this->use_throttle != other.use_throttle) {
      return false;
    }
    if (this->use_full_state_prediction != other.use_full_state_prediction) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackerCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackerCommand_

// alias to use template instance with default allocator
using TrackerCommand =
  mrs_msgs::msg::TrackerCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__TRACKER_COMMAND__STRUCT_HPP_
