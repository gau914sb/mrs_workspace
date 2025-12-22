// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/TrackerCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/tracker_command.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__TRACKER_COMMAND__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__TRACKER_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/tracker_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'position'
// Member 'attitude_rate'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'velocity'
// Member 'acceleration'
// Member 'jerk'
// Member 'snap'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'full_state_prediction'
#include "mrs_msgs/msg/detail/mpc_prediction_full_state__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackerCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    to_flow_style_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: jerk
  {
    out << "jerk: ";
    to_flow_style_yaml(msg.jerk, out);
    out << ", ";
  }

  // member: snap
  {
    out << "snap: ";
    to_flow_style_yaml(msg.snap, out);
    out << ", ";
  }

  // member: full_state_prediction
  {
    out << "full_state_prediction: ";
    to_flow_style_yaml(msg.full_state_prediction, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: attitude_rate
  {
    out << "attitude_rate: ";
    to_flow_style_yaml(msg.attitude_rate, out);
    out << ", ";
  }

  // member: throttle
  {
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: heading_rate
  {
    out << "heading_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_rate, out);
    out << ", ";
  }

  // member: heading_acceleration
  {
    out << "heading_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_acceleration, out);
    out << ", ";
  }

  // member: heading_jerk
  {
    out << "heading_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_jerk, out);
    out << ", ";
  }

  // member: disable_position_gains
  {
    out << "disable_position_gains: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_position_gains, out);
    out << ", ";
  }

  // member: disable_antiwindups
  {
    out << "disable_antiwindups: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_antiwindups, out);
    out << ", ";
  }

  // member: use_position_horizontal
  {
    out << "use_position_horizontal: ";
    rosidl_generator_traits::value_to_yaml(msg.use_position_horizontal, out);
    out << ", ";
  }

  // member: use_position_vertical
  {
    out << "use_position_vertical: ";
    rosidl_generator_traits::value_to_yaml(msg.use_position_vertical, out);
    out << ", ";
  }

  // member: use_velocity_horizontal
  {
    out << "use_velocity_horizontal: ";
    rosidl_generator_traits::value_to_yaml(msg.use_velocity_horizontal, out);
    out << ", ";
  }

  // member: use_velocity_vertical
  {
    out << "use_velocity_vertical: ";
    rosidl_generator_traits::value_to_yaml(msg.use_velocity_vertical, out);
    out << ", ";
  }

  // member: use_acceleration
  {
    out << "use_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.use_acceleration, out);
    out << ", ";
  }

  // member: use_jerk
  {
    out << "use_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.use_jerk, out);
    out << ", ";
  }

  // member: use_snap
  {
    out << "use_snap: ";
    rosidl_generator_traits::value_to_yaml(msg.use_snap, out);
    out << ", ";
  }

  // member: use_attitude_rate
  {
    out << "use_attitude_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.use_attitude_rate, out);
    out << ", ";
  }

  // member: use_heading
  {
    out << "use_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.use_heading, out);
    out << ", ";
  }

  // member: use_heading_rate
  {
    out << "use_heading_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.use_heading_rate, out);
    out << ", ";
  }

  // member: use_heading_acceleration
  {
    out << "use_heading_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.use_heading_acceleration, out);
    out << ", ";
  }

  // member: use_heading_jerk
  {
    out << "use_heading_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.use_heading_jerk, out);
    out << ", ";
  }

  // member: use_orientation
  {
    out << "use_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.use_orientation, out);
    out << ", ";
  }

  // member: use_throttle
  {
    out << "use_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.use_throttle, out);
    out << ", ";
  }

  // member: use_full_state_prediction
  {
    out << "use_full_state_prediction: ";
    rosidl_generator_traits::value_to_yaml(msg.use_full_state_prediction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrackerCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration:\n";
    to_block_style_yaml(msg.acceleration, out, indentation + 2);
  }

  // member: jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jerk:\n";
    to_block_style_yaml(msg.jerk, out, indentation + 2);
  }

  // member: snap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "snap:\n";
    to_block_style_yaml(msg.snap, out, indentation + 2);
  }

  // member: full_state_prediction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_state_prediction:\n";
    to_block_style_yaml(msg.full_state_prediction, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }

  // member: attitude_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attitude_rate:\n";
    to_block_style_yaml(msg.attitude_rate, out, indentation + 2);
  }

  // member: throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: heading_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_rate, out);
    out << "\n";
  }

  // member: heading_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_acceleration, out);
    out << "\n";
  }

  // member: heading_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_jerk, out);
    out << "\n";
  }

  // member: disable_position_gains
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_position_gains: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_position_gains, out);
    out << "\n";
  }

  // member: disable_antiwindups
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_antiwindups: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_antiwindups, out);
    out << "\n";
  }

  // member: use_position_horizontal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_position_horizontal: ";
    rosidl_generator_traits::value_to_yaml(msg.use_position_horizontal, out);
    out << "\n";
  }

  // member: use_position_vertical
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_position_vertical: ";
    rosidl_generator_traits::value_to_yaml(msg.use_position_vertical, out);
    out << "\n";
  }

  // member: use_velocity_horizontal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_velocity_horizontal: ";
    rosidl_generator_traits::value_to_yaml(msg.use_velocity_horizontal, out);
    out << "\n";
  }

  // member: use_velocity_vertical
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_velocity_vertical: ";
    rosidl_generator_traits::value_to_yaml(msg.use_velocity_vertical, out);
    out << "\n";
  }

  // member: use_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.use_acceleration, out);
    out << "\n";
  }

  // member: use_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.use_jerk, out);
    out << "\n";
  }

  // member: use_snap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_snap: ";
    rosidl_generator_traits::value_to_yaml(msg.use_snap, out);
    out << "\n";
  }

  // member: use_attitude_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_attitude_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.use_attitude_rate, out);
    out << "\n";
  }

  // member: use_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.use_heading, out);
    out << "\n";
  }

  // member: use_heading_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_heading_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.use_heading_rate, out);
    out << "\n";
  }

  // member: use_heading_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_heading_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.use_heading_acceleration, out);
    out << "\n";
  }

  // member: use_heading_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_heading_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.use_heading_jerk, out);
    out << "\n";
  }

  // member: use_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.use_orientation, out);
    out << "\n";
  }

  // member: use_throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.use_throttle, out);
    out << "\n";
  }

  // member: use_full_state_prediction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_full_state_prediction: ";
    rosidl_generator_traits::value_to_yaml(msg.use_full_state_prediction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackerCommand & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::TrackerCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::TrackerCommand & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::TrackerCommand>()
{
  return "mrs_msgs::msg::TrackerCommand";
}

template<>
inline const char * name<mrs_msgs::msg::TrackerCommand>()
{
  return "mrs_msgs/msg/TrackerCommand";
}

template<>
struct has_fixed_size<mrs_msgs::msg::TrackerCommand>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<mrs_msgs::msg::MpcPredictionFullState>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mrs_msgs::msg::TrackerCommand>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<mrs_msgs::msg::MpcPredictionFullState>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mrs_msgs::msg::TrackerCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__TRACKER_COMMAND__TRAITS_HPP_
