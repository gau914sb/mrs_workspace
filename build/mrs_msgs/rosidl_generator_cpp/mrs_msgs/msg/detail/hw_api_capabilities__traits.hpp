// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/HwApiCapabilities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_capabilities.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_CAPABILITIES__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_CAPABILITIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/hw_api_capabilities__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HwApiCapabilities & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: api_name
  {
    out << "api_name: ";
    rosidl_generator_traits::value_to_yaml(msg.api_name, out);
    out << ", ";
  }

  // member: accepts_actuator_cmd
  {
    out << "accepts_actuator_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accepts_actuator_cmd, out);
    out << ", ";
  }

  // member: accepts_attitude_cmd
  {
    out << "accepts_attitude_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accepts_attitude_cmd, out);
    out << ", ";
  }

  // member: accepts_attitude_rate_cmd
  {
    out << "accepts_attitude_rate_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accepts_attitude_rate_cmd, out);
    out << ", ";
  }

  // member: accepts_control_group_cmd
  {
    out << "accepts_control_group_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accepts_control_group_cmd, out);
    out << ", ";
  }

  // member: accepts_acceleration_hdg_rate_cmd
  {
    out << "accepts_acceleration_hdg_rate_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accepts_acceleration_hdg_rate_cmd, out);
    out << ", ";
  }

  // member: accepts_acceleration_hdg_cmd
  {
    out << "accepts_acceleration_hdg_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accepts_acceleration_hdg_cmd, out);
    out << ", ";
  }

  // member: accepts_velocity_hdg_rate_cmd
  {
    out << "accepts_velocity_hdg_rate_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accepts_velocity_hdg_rate_cmd, out);
    out << ", ";
  }

  // member: accepts_velocity_hdg_cmd
  {
    out << "accepts_velocity_hdg_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accepts_velocity_hdg_cmd, out);
    out << ", ";
  }

  // member: accepts_position_cmd
  {
    out << "accepts_position_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accepts_position_cmd, out);
    out << ", ";
  }

  // member: produces_ground_truth
  {
    out << "produces_ground_truth: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_ground_truth, out);
    out << ", ";
  }

  // member: produces_gnss
  {
    out << "produces_gnss: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_gnss, out);
    out << ", ";
  }

  // member: produces_gnss_status
  {
    out << "produces_gnss_status: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_gnss_status, out);
    out << ", ";
  }

  // member: produces_rtk
  {
    out << "produces_rtk: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_rtk, out);
    out << ", ";
  }

  // member: produces_imu
  {
    out << "produces_imu: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_imu, out);
    out << ", ";
  }

  // member: produces_distance_sensor
  {
    out << "produces_distance_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_distance_sensor, out);
    out << ", ";
  }

  // member: produces_altitude
  {
    out << "produces_altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_altitude, out);
    out << ", ";
  }

  // member: produces_magnetometer_heading
  {
    out << "produces_magnetometer_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_magnetometer_heading, out);
    out << ", ";
  }

  // member: produces_rc_channels
  {
    out << "produces_rc_channels: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_rc_channels, out);
    out << ", ";
  }

  // member: produces_battery_state
  {
    out << "produces_battery_state: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_battery_state, out);
    out << ", ";
  }

  // member: produces_position
  {
    out << "produces_position: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_position, out);
    out << ", ";
  }

  // member: produces_orientation
  {
    out << "produces_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_orientation, out);
    out << ", ";
  }

  // member: produces_velocity
  {
    out << "produces_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_velocity, out);
    out << ", ";
  }

  // member: produces_angular_velocity
  {
    out << "produces_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_angular_velocity, out);
    out << ", ";
  }

  // member: produces_odometry
  {
    out << "produces_odometry: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_odometry, out);
    out << ", ";
  }

  // member: produces_magnetic_field
  {
    out << "produces_magnetic_field: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_magnetic_field, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HwApiCapabilities & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: api_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "api_name: ";
    rosidl_generator_traits::value_to_yaml(msg.api_name, out);
    out << "\n";
  }

  // member: accepts_actuator_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepts_actuator_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accepts_actuator_cmd, out);
    out << "\n";
  }

  // member: accepts_attitude_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepts_attitude_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accepts_attitude_cmd, out);
    out << "\n";
  }

  // member: accepts_attitude_rate_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepts_attitude_rate_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accepts_attitude_rate_cmd, out);
    out << "\n";
  }

  // member: accepts_control_group_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepts_control_group_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accepts_control_group_cmd, out);
    out << "\n";
  }

  // member: accepts_acceleration_hdg_rate_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepts_acceleration_hdg_rate_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accepts_acceleration_hdg_rate_cmd, out);
    out << "\n";
  }

  // member: accepts_acceleration_hdg_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepts_acceleration_hdg_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accepts_acceleration_hdg_cmd, out);
    out << "\n";
  }

  // member: accepts_velocity_hdg_rate_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepts_velocity_hdg_rate_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accepts_velocity_hdg_rate_cmd, out);
    out << "\n";
  }

  // member: accepts_velocity_hdg_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepts_velocity_hdg_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accepts_velocity_hdg_cmd, out);
    out << "\n";
  }

  // member: accepts_position_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepts_position_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.accepts_position_cmd, out);
    out << "\n";
  }

  // member: produces_ground_truth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "produces_ground_truth: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_ground_truth, out);
    out << "\n";
  }

  // member: produces_gnss
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "produces_gnss: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_gnss, out);
    out << "\n";
  }

  // member: produces_gnss_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "produces_gnss_status: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_gnss_status, out);
    out << "\n";
  }

  // member: produces_rtk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "produces_rtk: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_rtk, out);
    out << "\n";
  }

  // member: produces_imu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "produces_imu: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_imu, out);
    out << "\n";
  }

  // member: produces_distance_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "produces_distance_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_distance_sensor, out);
    out << "\n";
  }

  // member: produces_altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "produces_altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_altitude, out);
    out << "\n";
  }

  // member: produces_magnetometer_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "produces_magnetometer_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_magnetometer_heading, out);
    out << "\n";
  }

  // member: produces_rc_channels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "produces_rc_channels: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_rc_channels, out);
    out << "\n";
  }

  // member: produces_battery_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "produces_battery_state: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_battery_state, out);
    out << "\n";
  }

  // member: produces_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "produces_position: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_position, out);
    out << "\n";
  }

  // member: produces_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "produces_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_orientation, out);
    out << "\n";
  }

  // member: produces_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "produces_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_velocity, out);
    out << "\n";
  }

  // member: produces_angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "produces_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_angular_velocity, out);
    out << "\n";
  }

  // member: produces_odometry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "produces_odometry: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_odometry, out);
    out << "\n";
  }

  // member: produces_magnetic_field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "produces_magnetic_field: ";
    rosidl_generator_traits::value_to_yaml(msg.produces_magnetic_field, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HwApiCapabilities & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mrs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mrs_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrs_msgs::msg::HwApiCapabilities & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::HwApiCapabilities & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::HwApiCapabilities>()
{
  return "mrs_msgs::msg::HwApiCapabilities";
}

template<>
inline const char * name<mrs_msgs::msg::HwApiCapabilities>()
{
  return "mrs_msgs/msg/HwApiCapabilities";
}

template<>
struct has_fixed_size<mrs_msgs::msg::HwApiCapabilities>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::HwApiCapabilities>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::HwApiCapabilities>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_CAPABILITIES__TRAITS_HPP_
