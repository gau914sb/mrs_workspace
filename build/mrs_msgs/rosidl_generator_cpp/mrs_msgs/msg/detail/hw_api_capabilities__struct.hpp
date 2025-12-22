// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/HwApiCapabilities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_capabilities.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_CAPABILITIES__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_CAPABILITIES__STRUCT_HPP_

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
# define DEPRECATED__mrs_msgs__msg__HwApiCapabilities __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__HwApiCapabilities __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HwApiCapabilities_
{
  using Type = HwApiCapabilities_<ContainerAllocator>;

  explicit HwApiCapabilities_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->api_name = "";
      this->accepts_actuator_cmd = false;
      this->accepts_attitude_cmd = false;
      this->accepts_attitude_rate_cmd = false;
      this->accepts_control_group_cmd = false;
      this->accepts_acceleration_hdg_rate_cmd = false;
      this->accepts_acceleration_hdg_cmd = false;
      this->accepts_velocity_hdg_rate_cmd = false;
      this->accepts_velocity_hdg_cmd = false;
      this->accepts_position_cmd = false;
      this->produces_ground_truth = false;
      this->produces_gnss = false;
      this->produces_gnss_status = false;
      this->produces_rtk = false;
      this->produces_imu = false;
      this->produces_distance_sensor = false;
      this->produces_altitude = false;
      this->produces_magnetometer_heading = false;
      this->produces_rc_channels = false;
      this->produces_battery_state = false;
      this->produces_position = false;
      this->produces_orientation = false;
      this->produces_velocity = false;
      this->produces_angular_velocity = false;
      this->produces_odometry = false;
      this->produces_magnetic_field = false;
    }
  }

  explicit HwApiCapabilities_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    api_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->api_name = "";
      this->accepts_actuator_cmd = false;
      this->accepts_attitude_cmd = false;
      this->accepts_attitude_rate_cmd = false;
      this->accepts_control_group_cmd = false;
      this->accepts_acceleration_hdg_rate_cmd = false;
      this->accepts_acceleration_hdg_cmd = false;
      this->accepts_velocity_hdg_rate_cmd = false;
      this->accepts_velocity_hdg_cmd = false;
      this->accepts_position_cmd = false;
      this->produces_ground_truth = false;
      this->produces_gnss = false;
      this->produces_gnss_status = false;
      this->produces_rtk = false;
      this->produces_imu = false;
      this->produces_distance_sensor = false;
      this->produces_altitude = false;
      this->produces_magnetometer_heading = false;
      this->produces_rc_channels = false;
      this->produces_battery_state = false;
      this->produces_position = false;
      this->produces_orientation = false;
      this->produces_velocity = false;
      this->produces_angular_velocity = false;
      this->produces_odometry = false;
      this->produces_magnetic_field = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _api_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _api_name_type api_name;
  using _accepts_actuator_cmd_type =
    bool;
  _accepts_actuator_cmd_type accepts_actuator_cmd;
  using _accepts_attitude_cmd_type =
    bool;
  _accepts_attitude_cmd_type accepts_attitude_cmd;
  using _accepts_attitude_rate_cmd_type =
    bool;
  _accepts_attitude_rate_cmd_type accepts_attitude_rate_cmd;
  using _accepts_control_group_cmd_type =
    bool;
  _accepts_control_group_cmd_type accepts_control_group_cmd;
  using _accepts_acceleration_hdg_rate_cmd_type =
    bool;
  _accepts_acceleration_hdg_rate_cmd_type accepts_acceleration_hdg_rate_cmd;
  using _accepts_acceleration_hdg_cmd_type =
    bool;
  _accepts_acceleration_hdg_cmd_type accepts_acceleration_hdg_cmd;
  using _accepts_velocity_hdg_rate_cmd_type =
    bool;
  _accepts_velocity_hdg_rate_cmd_type accepts_velocity_hdg_rate_cmd;
  using _accepts_velocity_hdg_cmd_type =
    bool;
  _accepts_velocity_hdg_cmd_type accepts_velocity_hdg_cmd;
  using _accepts_position_cmd_type =
    bool;
  _accepts_position_cmd_type accepts_position_cmd;
  using _produces_ground_truth_type =
    bool;
  _produces_ground_truth_type produces_ground_truth;
  using _produces_gnss_type =
    bool;
  _produces_gnss_type produces_gnss;
  using _produces_gnss_status_type =
    bool;
  _produces_gnss_status_type produces_gnss_status;
  using _produces_rtk_type =
    bool;
  _produces_rtk_type produces_rtk;
  using _produces_imu_type =
    bool;
  _produces_imu_type produces_imu;
  using _produces_distance_sensor_type =
    bool;
  _produces_distance_sensor_type produces_distance_sensor;
  using _produces_altitude_type =
    bool;
  _produces_altitude_type produces_altitude;
  using _produces_magnetometer_heading_type =
    bool;
  _produces_magnetometer_heading_type produces_magnetometer_heading;
  using _produces_rc_channels_type =
    bool;
  _produces_rc_channels_type produces_rc_channels;
  using _produces_battery_state_type =
    bool;
  _produces_battery_state_type produces_battery_state;
  using _produces_position_type =
    bool;
  _produces_position_type produces_position;
  using _produces_orientation_type =
    bool;
  _produces_orientation_type produces_orientation;
  using _produces_velocity_type =
    bool;
  _produces_velocity_type produces_velocity;
  using _produces_angular_velocity_type =
    bool;
  _produces_angular_velocity_type produces_angular_velocity;
  using _produces_odometry_type =
    bool;
  _produces_odometry_type produces_odometry;
  using _produces_magnetic_field_type =
    bool;
  _produces_magnetic_field_type produces_magnetic_field;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__api_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->api_name = _arg;
    return *this;
  }
  Type & set__accepts_actuator_cmd(
    const bool & _arg)
  {
    this->accepts_actuator_cmd = _arg;
    return *this;
  }
  Type & set__accepts_attitude_cmd(
    const bool & _arg)
  {
    this->accepts_attitude_cmd = _arg;
    return *this;
  }
  Type & set__accepts_attitude_rate_cmd(
    const bool & _arg)
  {
    this->accepts_attitude_rate_cmd = _arg;
    return *this;
  }
  Type & set__accepts_control_group_cmd(
    const bool & _arg)
  {
    this->accepts_control_group_cmd = _arg;
    return *this;
  }
  Type & set__accepts_acceleration_hdg_rate_cmd(
    const bool & _arg)
  {
    this->accepts_acceleration_hdg_rate_cmd = _arg;
    return *this;
  }
  Type & set__accepts_acceleration_hdg_cmd(
    const bool & _arg)
  {
    this->accepts_acceleration_hdg_cmd = _arg;
    return *this;
  }
  Type & set__accepts_velocity_hdg_rate_cmd(
    const bool & _arg)
  {
    this->accepts_velocity_hdg_rate_cmd = _arg;
    return *this;
  }
  Type & set__accepts_velocity_hdg_cmd(
    const bool & _arg)
  {
    this->accepts_velocity_hdg_cmd = _arg;
    return *this;
  }
  Type & set__accepts_position_cmd(
    const bool & _arg)
  {
    this->accepts_position_cmd = _arg;
    return *this;
  }
  Type & set__produces_ground_truth(
    const bool & _arg)
  {
    this->produces_ground_truth = _arg;
    return *this;
  }
  Type & set__produces_gnss(
    const bool & _arg)
  {
    this->produces_gnss = _arg;
    return *this;
  }
  Type & set__produces_gnss_status(
    const bool & _arg)
  {
    this->produces_gnss_status = _arg;
    return *this;
  }
  Type & set__produces_rtk(
    const bool & _arg)
  {
    this->produces_rtk = _arg;
    return *this;
  }
  Type & set__produces_imu(
    const bool & _arg)
  {
    this->produces_imu = _arg;
    return *this;
  }
  Type & set__produces_distance_sensor(
    const bool & _arg)
  {
    this->produces_distance_sensor = _arg;
    return *this;
  }
  Type & set__produces_altitude(
    const bool & _arg)
  {
    this->produces_altitude = _arg;
    return *this;
  }
  Type & set__produces_magnetometer_heading(
    const bool & _arg)
  {
    this->produces_magnetometer_heading = _arg;
    return *this;
  }
  Type & set__produces_rc_channels(
    const bool & _arg)
  {
    this->produces_rc_channels = _arg;
    return *this;
  }
  Type & set__produces_battery_state(
    const bool & _arg)
  {
    this->produces_battery_state = _arg;
    return *this;
  }
  Type & set__produces_position(
    const bool & _arg)
  {
    this->produces_position = _arg;
    return *this;
  }
  Type & set__produces_orientation(
    const bool & _arg)
  {
    this->produces_orientation = _arg;
    return *this;
  }
  Type & set__produces_velocity(
    const bool & _arg)
  {
    this->produces_velocity = _arg;
    return *this;
  }
  Type & set__produces_angular_velocity(
    const bool & _arg)
  {
    this->produces_angular_velocity = _arg;
    return *this;
  }
  Type & set__produces_odometry(
    const bool & _arg)
  {
    this->produces_odometry = _arg;
    return *this;
  }
  Type & set__produces_magnetic_field(
    const bool & _arg)
  {
    this->produces_magnetic_field = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::HwApiCapabilities_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::HwApiCapabilities_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::HwApiCapabilities_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::HwApiCapabilities_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::HwApiCapabilities_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::HwApiCapabilities_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::HwApiCapabilities_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::HwApiCapabilities_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::HwApiCapabilities_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::HwApiCapabilities_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__HwApiCapabilities
    std::shared_ptr<mrs_msgs::msg::HwApiCapabilities_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__HwApiCapabilities
    std::shared_ptr<mrs_msgs::msg::HwApiCapabilities_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HwApiCapabilities_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->api_name != other.api_name) {
      return false;
    }
    if (this->accepts_actuator_cmd != other.accepts_actuator_cmd) {
      return false;
    }
    if (this->accepts_attitude_cmd != other.accepts_attitude_cmd) {
      return false;
    }
    if (this->accepts_attitude_rate_cmd != other.accepts_attitude_rate_cmd) {
      return false;
    }
    if (this->accepts_control_group_cmd != other.accepts_control_group_cmd) {
      return false;
    }
    if (this->accepts_acceleration_hdg_rate_cmd != other.accepts_acceleration_hdg_rate_cmd) {
      return false;
    }
    if (this->accepts_acceleration_hdg_cmd != other.accepts_acceleration_hdg_cmd) {
      return false;
    }
    if (this->accepts_velocity_hdg_rate_cmd != other.accepts_velocity_hdg_rate_cmd) {
      return false;
    }
    if (this->accepts_velocity_hdg_cmd != other.accepts_velocity_hdg_cmd) {
      return false;
    }
    if (this->accepts_position_cmd != other.accepts_position_cmd) {
      return false;
    }
    if (this->produces_ground_truth != other.produces_ground_truth) {
      return false;
    }
    if (this->produces_gnss != other.produces_gnss) {
      return false;
    }
    if (this->produces_gnss_status != other.produces_gnss_status) {
      return false;
    }
    if (this->produces_rtk != other.produces_rtk) {
      return false;
    }
    if (this->produces_imu != other.produces_imu) {
      return false;
    }
    if (this->produces_distance_sensor != other.produces_distance_sensor) {
      return false;
    }
    if (this->produces_altitude != other.produces_altitude) {
      return false;
    }
    if (this->produces_magnetometer_heading != other.produces_magnetometer_heading) {
      return false;
    }
    if (this->produces_rc_channels != other.produces_rc_channels) {
      return false;
    }
    if (this->produces_battery_state != other.produces_battery_state) {
      return false;
    }
    if (this->produces_position != other.produces_position) {
      return false;
    }
    if (this->produces_orientation != other.produces_orientation) {
      return false;
    }
    if (this->produces_velocity != other.produces_velocity) {
      return false;
    }
    if (this->produces_angular_velocity != other.produces_angular_velocity) {
      return false;
    }
    if (this->produces_odometry != other.produces_odometry) {
      return false;
    }
    if (this->produces_magnetic_field != other.produces_magnetic_field) {
      return false;
    }
    return true;
  }
  bool operator!=(const HwApiCapabilities_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HwApiCapabilities_

// alias to use template instance with default allocator
using HwApiCapabilities =
  mrs_msgs::msg::HwApiCapabilities_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_CAPABILITIES__STRUCT_HPP_
