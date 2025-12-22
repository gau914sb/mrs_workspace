// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/DynamicsConstraints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/dynamics_constraints.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__DYNAMICS_CONSTRAINTS__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__DYNAMICS_CONSTRAINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/dynamics_constraints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DynamicsConstraints & msg,
  std::ostream & out)
{
  out << "{";
  // member: horizontal_speed
  {
    out << "horizontal_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_speed, out);
    out << ", ";
  }

  // member: horizontal_acceleration
  {
    out << "horizontal_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_acceleration, out);
    out << ", ";
  }

  // member: horizontal_jerk
  {
    out << "horizontal_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_jerk, out);
    out << ", ";
  }

  // member: horizontal_snap
  {
    out << "horizontal_snap: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_snap, out);
    out << ", ";
  }

  // member: vertical_ascending_speed
  {
    out << "vertical_ascending_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_ascending_speed, out);
    out << ", ";
  }

  // member: vertical_ascending_acceleration
  {
    out << "vertical_ascending_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_ascending_acceleration, out);
    out << ", ";
  }

  // member: vertical_ascending_jerk
  {
    out << "vertical_ascending_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_ascending_jerk, out);
    out << ", ";
  }

  // member: vertical_ascending_snap
  {
    out << "vertical_ascending_snap: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_ascending_snap, out);
    out << ", ";
  }

  // member: vertical_descending_speed
  {
    out << "vertical_descending_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_descending_speed, out);
    out << ", ";
  }

  // member: vertical_descending_acceleration
  {
    out << "vertical_descending_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_descending_acceleration, out);
    out << ", ";
  }

  // member: vertical_descending_jerk
  {
    out << "vertical_descending_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_descending_jerk, out);
    out << ", ";
  }

  // member: vertical_descending_snap
  {
    out << "vertical_descending_snap: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_descending_snap, out);
    out << ", ";
  }

  // member: heading_speed
  {
    out << "heading_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_speed, out);
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

  // member: heading_snap
  {
    out << "heading_snap: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_snap, out);
    out << ", ";
  }

  // member: roll_rate
  {
    out << "roll_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_rate, out);
    out << ", ";
  }

  // member: pitch_rate
  {
    out << "pitch_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_rate, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << ", ";
  }

  // member: tilt
  {
    out << "tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynamicsConstraints & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: horizontal_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_speed, out);
    out << "\n";
  }

  // member: horizontal_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_acceleration, out);
    out << "\n";
  }

  // member: horizontal_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_jerk, out);
    out << "\n";
  }

  // member: horizontal_snap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_snap: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_snap, out);
    out << "\n";
  }

  // member: vertical_ascending_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_ascending_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_ascending_speed, out);
    out << "\n";
  }

  // member: vertical_ascending_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_ascending_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_ascending_acceleration, out);
    out << "\n";
  }

  // member: vertical_ascending_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_ascending_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_ascending_jerk, out);
    out << "\n";
  }

  // member: vertical_ascending_snap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_ascending_snap: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_ascending_snap, out);
    out << "\n";
  }

  // member: vertical_descending_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_descending_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_descending_speed, out);
    out << "\n";
  }

  // member: vertical_descending_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_descending_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_descending_acceleration, out);
    out << "\n";
  }

  // member: vertical_descending_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_descending_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_descending_jerk, out);
    out << "\n";
  }

  // member: vertical_descending_snap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_descending_snap: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_descending_snap, out);
    out << "\n";
  }

  // member: heading_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_speed, out);
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

  // member: heading_snap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_snap: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_snap, out);
    out << "\n";
  }

  // member: roll_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_rate, out);
    out << "\n";
  }

  // member: pitch_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_rate, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << "\n";
  }

  // member: tilt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynamicsConstraints & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::DynamicsConstraints & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::DynamicsConstraints & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::DynamicsConstraints>()
{
  return "mrs_msgs::msg::DynamicsConstraints";
}

template<>
inline const char * name<mrs_msgs::msg::DynamicsConstraints>()
{
  return "mrs_msgs/msg/DynamicsConstraints";
}

template<>
struct has_fixed_size<mrs_msgs::msg::DynamicsConstraints>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mrs_msgs::msg::DynamicsConstraints>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mrs_msgs::msg::DynamicsConstraints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__DYNAMICS_CONSTRAINTS__TRAITS_HPP_
