// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/HwApiStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_status.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_STATUS__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/hw_api_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HwApiStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: connected
  {
    out << "connected: ";
    rosidl_generator_traits::value_to_yaml(msg.connected, out);
    out << ", ";
  }

  // member: armed
  {
    out << "armed: ";
    rosidl_generator_traits::value_to_yaml(msg.armed, out);
    out << ", ";
  }

  // member: offboard
  {
    out << "offboard: ";
    rosidl_generator_traits::value_to_yaml(msg.offboard, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HwApiStatus & msg,
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

  // member: connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connected: ";
    rosidl_generator_traits::value_to_yaml(msg.connected, out);
    out << "\n";
  }

  // member: armed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armed: ";
    rosidl_generator_traits::value_to_yaml(msg.armed, out);
    out << "\n";
  }

  // member: offboard
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offboard: ";
    rosidl_generator_traits::value_to_yaml(msg.offboard, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HwApiStatus & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::HwApiStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::HwApiStatus & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::HwApiStatus>()
{
  return "mrs_msgs::msg::HwApiStatus";
}

template<>
inline const char * name<mrs_msgs::msg::HwApiStatus>()
{
  return "mrs_msgs/msg/HwApiStatus";
}

template<>
struct has_fixed_size<mrs_msgs::msg::HwApiStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::HwApiStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::HwApiStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_STATUS__TRAITS_HPP_
