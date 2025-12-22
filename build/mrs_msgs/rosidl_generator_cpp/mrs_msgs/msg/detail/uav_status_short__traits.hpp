// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/UavStatusShort.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/uav_status_short.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__UAV_STATUS_SHORT__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__UAV_STATUS_SHORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/uav_status_short__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UavStatusShort & msg,
  std::ostream & out)
{
  out << "{";
  // member: odom_hz
  {
    out << "odom_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_hz, out);
    out << ", ";
  }

  // member: odom_color
  {
    out << "odom_color: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_color, out);
    out << ", ";
  }

  // member: odom_x
  {
    out << "odom_x: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_x, out);
    out << ", ";
  }

  // member: odom_y
  {
    out << "odom_y: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_y, out);
    out << ", ";
  }

  // member: odom_z
  {
    out << "odom_z: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_z, out);
    out << ", ";
  }

  // member: odom_hdg
  {
    out << "odom_hdg: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_hdg, out);
    out << ", ";
  }

  // member: cmd_x
  {
    out << "cmd_x: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_x, out);
    out << ", ";
  }

  // member: cmd_y
  {
    out << "cmd_y: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_y, out);
    out << ", ";
  }

  // member: cmd_z
  {
    out << "cmd_z: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_z, out);
    out << ", ";
  }

  // member: cmd_hdg
  {
    out << "cmd_hdg: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_hdg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UavStatusShort & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: odom_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_hz, out);
    out << "\n";
  }

  // member: odom_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_color: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_color, out);
    out << "\n";
  }

  // member: odom_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_x: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_x, out);
    out << "\n";
  }

  // member: odom_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_y: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_y, out);
    out << "\n";
  }

  // member: odom_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_z: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_z, out);
    out << "\n";
  }

  // member: odom_hdg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_hdg: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_hdg, out);
    out << "\n";
  }

  // member: cmd_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_x: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_x, out);
    out << "\n";
  }

  // member: cmd_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_y: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_y, out);
    out << "\n";
  }

  // member: cmd_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_z: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_z, out);
    out << "\n";
  }

  // member: cmd_hdg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_hdg: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_hdg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UavStatusShort & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::UavStatusShort & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::UavStatusShort & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::UavStatusShort>()
{
  return "mrs_msgs::msg::UavStatusShort";
}

template<>
inline const char * name<mrs_msgs::msg::UavStatusShort>()
{
  return "mrs_msgs/msg/UavStatusShort";
}

template<>
struct has_fixed_size<mrs_msgs::msg::UavStatusShort>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mrs_msgs::msg::UavStatusShort>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mrs_msgs::msg::UavStatusShort>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__UAV_STATUS_SHORT__TRAITS_HPP_
