// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/HwApiControlGroupCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_control_group_cmd.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_CONTROL_GROUP_CMD__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_CONTROL_GROUP_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/hw_api_control_group_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HwApiControlGroupCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: throttle
  {
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HwApiControlGroupCmd & msg,
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

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HwApiControlGroupCmd & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::HwApiControlGroupCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::HwApiControlGroupCmd & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::HwApiControlGroupCmd>()
{
  return "mrs_msgs::msg::HwApiControlGroupCmd";
}

template<>
inline const char * name<mrs_msgs::msg::HwApiControlGroupCmd>()
{
  return "mrs_msgs/msg/HwApiControlGroupCmd";
}

template<>
struct has_fixed_size<mrs_msgs::msg::HwApiControlGroupCmd>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mrs_msgs::msg::HwApiControlGroupCmd>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mrs_msgs::msg::HwApiControlGroupCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_CONTROL_GROUP_CMD__TRAITS_HPP_
