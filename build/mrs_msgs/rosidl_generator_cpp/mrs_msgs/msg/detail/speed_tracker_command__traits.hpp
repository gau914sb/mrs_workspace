// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/SpeedTrackerCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/speed_tracker_command.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__SPEED_TRACKER_COMMAND__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__SPEED_TRACKER_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/speed_tracker_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'velocity'
// Member 'acceleration'
// Member 'force'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SpeedTrackerCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
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

  // member: force
  {
    out << "force: ";
    to_flow_style_yaml(msg.force, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
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

  // member: use_velocity
  {
    out << "use_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.use_velocity, out);
    out << ", ";
  }

  // member: use_acceleration
  {
    out << "use_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.use_acceleration, out);
    out << ", ";
  }

  // member: use_force
  {
    out << "use_force: ";
    rosidl_generator_traits::value_to_yaml(msg.use_force, out);
    out << ", ";
  }

  // member: use_z
  {
    out << "use_z: ";
    rosidl_generator_traits::value_to_yaml(msg.use_z, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpeedTrackerCommand & msg,
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

  // member: force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force:\n";
    to_block_style_yaml(msg.force, out, indentation + 2);
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
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

  // member: use_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.use_velocity, out);
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

  // member: use_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_force: ";
    rosidl_generator_traits::value_to_yaml(msg.use_force, out);
    out << "\n";
  }

  // member: use_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_z: ";
    rosidl_generator_traits::value_to_yaml(msg.use_z, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpeedTrackerCommand & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::SpeedTrackerCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::SpeedTrackerCommand & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::SpeedTrackerCommand>()
{
  return "mrs_msgs::msg::SpeedTrackerCommand";
}

template<>
inline const char * name<mrs_msgs::msg::SpeedTrackerCommand>()
{
  return "mrs_msgs/msg/SpeedTrackerCommand";
}

template<>
struct has_fixed_size<mrs_msgs::msg::SpeedTrackerCommand>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mrs_msgs::msg::SpeedTrackerCommand>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mrs_msgs::msg::SpeedTrackerCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__SPEED_TRACKER_COMMAND__TRAITS_HPP_
