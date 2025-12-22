// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/ControlError.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/control_error.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__CONTROL_ERROR__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__CONTROL_ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/control_error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'position_errors'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlError & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: position_errors
  {
    out << "position_errors: ";
    to_flow_style_yaml(msg.position_errors, out);
    out << ", ";
  }

  // member: total_position_error
  {
    out << "total_position_error: ";
    rosidl_generator_traits::value_to_yaml(msg.total_position_error, out);
    out << ", ";
  }

  // member: yaw_error
  {
    out << "yaw_error: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_error, out);
    out << ", ";
  }

  // member: position_eland_threshold
  {
    out << "position_eland_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.position_eland_threshold, out);
    out << ", ";
  }

  // member: position_failsafe_threshold
  {
    out << "position_failsafe_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.position_failsafe_threshold, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlError & msg,
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

  // member: position_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_errors:\n";
    to_block_style_yaml(msg.position_errors, out, indentation + 2);
  }

  // member: total_position_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_position_error: ";
    rosidl_generator_traits::value_to_yaml(msg.total_position_error, out);
    out << "\n";
  }

  // member: yaw_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_error: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_error, out);
    out << "\n";
  }

  // member: position_eland_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_eland_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.position_eland_threshold, out);
    out << "\n";
  }

  // member: position_failsafe_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_failsafe_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.position_failsafe_threshold, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlError & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::ControlError & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::ControlError & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::ControlError>()
{
  return "mrs_msgs::msg::ControlError";
}

template<>
inline const char * name<mrs_msgs::msg::ControlError>()
{
  return "mrs_msgs/msg/ControlError";
}

template<>
struct has_fixed_size<mrs_msgs::msg::ControlError>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mrs_msgs::msg::ControlError>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mrs_msgs::msg::ControlError>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__CONTROL_ERROR__TRAITS_HPP_
