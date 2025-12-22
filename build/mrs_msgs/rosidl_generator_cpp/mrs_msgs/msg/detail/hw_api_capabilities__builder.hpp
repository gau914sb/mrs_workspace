// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/HwApiCapabilities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_capabilities.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_CAPABILITIES__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_CAPABILITIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/hw_api_capabilities__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_HwApiCapabilities_produces_magnetic_field
{
public:
  explicit Init_HwApiCapabilities_produces_magnetic_field(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::HwApiCapabilities produces_magnetic_field(::mrs_msgs::msg::HwApiCapabilities::_produces_magnetic_field_type arg)
  {
    msg_.produces_magnetic_field = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_produces_odometry
{
public:
  explicit Init_HwApiCapabilities_produces_odometry(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_produces_magnetic_field produces_odometry(::mrs_msgs::msg::HwApiCapabilities::_produces_odometry_type arg)
  {
    msg_.produces_odometry = std::move(arg);
    return Init_HwApiCapabilities_produces_magnetic_field(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_produces_angular_velocity
{
public:
  explicit Init_HwApiCapabilities_produces_angular_velocity(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_produces_odometry produces_angular_velocity(::mrs_msgs::msg::HwApiCapabilities::_produces_angular_velocity_type arg)
  {
    msg_.produces_angular_velocity = std::move(arg);
    return Init_HwApiCapabilities_produces_odometry(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_produces_velocity
{
public:
  explicit Init_HwApiCapabilities_produces_velocity(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_produces_angular_velocity produces_velocity(::mrs_msgs::msg::HwApiCapabilities::_produces_velocity_type arg)
  {
    msg_.produces_velocity = std::move(arg);
    return Init_HwApiCapabilities_produces_angular_velocity(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_produces_orientation
{
public:
  explicit Init_HwApiCapabilities_produces_orientation(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_produces_velocity produces_orientation(::mrs_msgs::msg::HwApiCapabilities::_produces_orientation_type arg)
  {
    msg_.produces_orientation = std::move(arg);
    return Init_HwApiCapabilities_produces_velocity(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_produces_position
{
public:
  explicit Init_HwApiCapabilities_produces_position(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_produces_orientation produces_position(::mrs_msgs::msg::HwApiCapabilities::_produces_position_type arg)
  {
    msg_.produces_position = std::move(arg);
    return Init_HwApiCapabilities_produces_orientation(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_produces_battery_state
{
public:
  explicit Init_HwApiCapabilities_produces_battery_state(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_produces_position produces_battery_state(::mrs_msgs::msg::HwApiCapabilities::_produces_battery_state_type arg)
  {
    msg_.produces_battery_state = std::move(arg);
    return Init_HwApiCapabilities_produces_position(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_produces_rc_channels
{
public:
  explicit Init_HwApiCapabilities_produces_rc_channels(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_produces_battery_state produces_rc_channels(::mrs_msgs::msg::HwApiCapabilities::_produces_rc_channels_type arg)
  {
    msg_.produces_rc_channels = std::move(arg);
    return Init_HwApiCapabilities_produces_battery_state(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_produces_magnetometer_heading
{
public:
  explicit Init_HwApiCapabilities_produces_magnetometer_heading(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_produces_rc_channels produces_magnetometer_heading(::mrs_msgs::msg::HwApiCapabilities::_produces_magnetometer_heading_type arg)
  {
    msg_.produces_magnetometer_heading = std::move(arg);
    return Init_HwApiCapabilities_produces_rc_channels(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_produces_altitude
{
public:
  explicit Init_HwApiCapabilities_produces_altitude(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_produces_magnetometer_heading produces_altitude(::mrs_msgs::msg::HwApiCapabilities::_produces_altitude_type arg)
  {
    msg_.produces_altitude = std::move(arg);
    return Init_HwApiCapabilities_produces_magnetometer_heading(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_produces_distance_sensor
{
public:
  explicit Init_HwApiCapabilities_produces_distance_sensor(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_produces_altitude produces_distance_sensor(::mrs_msgs::msg::HwApiCapabilities::_produces_distance_sensor_type arg)
  {
    msg_.produces_distance_sensor = std::move(arg);
    return Init_HwApiCapabilities_produces_altitude(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_produces_imu
{
public:
  explicit Init_HwApiCapabilities_produces_imu(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_produces_distance_sensor produces_imu(::mrs_msgs::msg::HwApiCapabilities::_produces_imu_type arg)
  {
    msg_.produces_imu = std::move(arg);
    return Init_HwApiCapabilities_produces_distance_sensor(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_produces_rtk
{
public:
  explicit Init_HwApiCapabilities_produces_rtk(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_produces_imu produces_rtk(::mrs_msgs::msg::HwApiCapabilities::_produces_rtk_type arg)
  {
    msg_.produces_rtk = std::move(arg);
    return Init_HwApiCapabilities_produces_imu(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_produces_gnss_status
{
public:
  explicit Init_HwApiCapabilities_produces_gnss_status(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_produces_rtk produces_gnss_status(::mrs_msgs::msg::HwApiCapabilities::_produces_gnss_status_type arg)
  {
    msg_.produces_gnss_status = std::move(arg);
    return Init_HwApiCapabilities_produces_rtk(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_produces_gnss
{
public:
  explicit Init_HwApiCapabilities_produces_gnss(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_produces_gnss_status produces_gnss(::mrs_msgs::msg::HwApiCapabilities::_produces_gnss_type arg)
  {
    msg_.produces_gnss = std::move(arg);
    return Init_HwApiCapabilities_produces_gnss_status(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_produces_ground_truth
{
public:
  explicit Init_HwApiCapabilities_produces_ground_truth(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_produces_gnss produces_ground_truth(::mrs_msgs::msg::HwApiCapabilities::_produces_ground_truth_type arg)
  {
    msg_.produces_ground_truth = std::move(arg);
    return Init_HwApiCapabilities_produces_gnss(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_accepts_position_cmd
{
public:
  explicit Init_HwApiCapabilities_accepts_position_cmd(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_produces_ground_truth accepts_position_cmd(::mrs_msgs::msg::HwApiCapabilities::_accepts_position_cmd_type arg)
  {
    msg_.accepts_position_cmd = std::move(arg);
    return Init_HwApiCapabilities_produces_ground_truth(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_accepts_velocity_hdg_cmd
{
public:
  explicit Init_HwApiCapabilities_accepts_velocity_hdg_cmd(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_accepts_position_cmd accepts_velocity_hdg_cmd(::mrs_msgs::msg::HwApiCapabilities::_accepts_velocity_hdg_cmd_type arg)
  {
    msg_.accepts_velocity_hdg_cmd = std::move(arg);
    return Init_HwApiCapabilities_accepts_position_cmd(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_accepts_velocity_hdg_rate_cmd
{
public:
  explicit Init_HwApiCapabilities_accepts_velocity_hdg_rate_cmd(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_accepts_velocity_hdg_cmd accepts_velocity_hdg_rate_cmd(::mrs_msgs::msg::HwApiCapabilities::_accepts_velocity_hdg_rate_cmd_type arg)
  {
    msg_.accepts_velocity_hdg_rate_cmd = std::move(arg);
    return Init_HwApiCapabilities_accepts_velocity_hdg_cmd(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_accepts_acceleration_hdg_cmd
{
public:
  explicit Init_HwApiCapabilities_accepts_acceleration_hdg_cmd(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_accepts_velocity_hdg_rate_cmd accepts_acceleration_hdg_cmd(::mrs_msgs::msg::HwApiCapabilities::_accepts_acceleration_hdg_cmd_type arg)
  {
    msg_.accepts_acceleration_hdg_cmd = std::move(arg);
    return Init_HwApiCapabilities_accepts_velocity_hdg_rate_cmd(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_accepts_acceleration_hdg_rate_cmd
{
public:
  explicit Init_HwApiCapabilities_accepts_acceleration_hdg_rate_cmd(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_accepts_acceleration_hdg_cmd accepts_acceleration_hdg_rate_cmd(::mrs_msgs::msg::HwApiCapabilities::_accepts_acceleration_hdg_rate_cmd_type arg)
  {
    msg_.accepts_acceleration_hdg_rate_cmd = std::move(arg);
    return Init_HwApiCapabilities_accepts_acceleration_hdg_cmd(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_accepts_control_group_cmd
{
public:
  explicit Init_HwApiCapabilities_accepts_control_group_cmd(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_accepts_acceleration_hdg_rate_cmd accepts_control_group_cmd(::mrs_msgs::msg::HwApiCapabilities::_accepts_control_group_cmd_type arg)
  {
    msg_.accepts_control_group_cmd = std::move(arg);
    return Init_HwApiCapabilities_accepts_acceleration_hdg_rate_cmd(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_accepts_attitude_rate_cmd
{
public:
  explicit Init_HwApiCapabilities_accepts_attitude_rate_cmd(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_accepts_control_group_cmd accepts_attitude_rate_cmd(::mrs_msgs::msg::HwApiCapabilities::_accepts_attitude_rate_cmd_type arg)
  {
    msg_.accepts_attitude_rate_cmd = std::move(arg);
    return Init_HwApiCapabilities_accepts_control_group_cmd(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_accepts_attitude_cmd
{
public:
  explicit Init_HwApiCapabilities_accepts_attitude_cmd(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_accepts_attitude_rate_cmd accepts_attitude_cmd(::mrs_msgs::msg::HwApiCapabilities::_accepts_attitude_cmd_type arg)
  {
    msg_.accepts_attitude_cmd = std::move(arg);
    return Init_HwApiCapabilities_accepts_attitude_rate_cmd(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_accepts_actuator_cmd
{
public:
  explicit Init_HwApiCapabilities_accepts_actuator_cmd(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_accepts_attitude_cmd accepts_actuator_cmd(::mrs_msgs::msg::HwApiCapabilities::_accepts_actuator_cmd_type arg)
  {
    msg_.accepts_actuator_cmd = std::move(arg);
    return Init_HwApiCapabilities_accepts_attitude_cmd(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_api_name
{
public:
  explicit Init_HwApiCapabilities_api_name(::mrs_msgs::msg::HwApiCapabilities & msg)
  : msg_(msg)
  {}
  Init_HwApiCapabilities_accepts_actuator_cmd api_name(::mrs_msgs::msg::HwApiCapabilities::_api_name_type arg)
  {
    msg_.api_name = std::move(arg);
    return Init_HwApiCapabilities_accepts_actuator_cmd(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

class Init_HwApiCapabilities_stamp
{
public:
  Init_HwApiCapabilities_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HwApiCapabilities_api_name stamp(::mrs_msgs::msg::HwApiCapabilities::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_HwApiCapabilities_api_name(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiCapabilities msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::HwApiCapabilities>()
{
  return mrs_msgs::msg::builder::Init_HwApiCapabilities_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_CAPABILITIES__BUILDER_HPP_
