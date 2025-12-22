// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/GimbalState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gimbal_state.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__GIMBAL_STATE__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__GIMBAL_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/gimbal_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GimbalState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: gimbal_tilt
  {
    out << "gimbal_tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.gimbal_tilt, out);
    out << ", ";
  }

  // member: gimbal_pan
  {
    out << "gimbal_pan: ";
    rosidl_generator_traits::value_to_yaml(msg.gimbal_pan, out);
    out << ", ";
  }

  // member: is_on
  {
    out << "is_on: ";
    rosidl_generator_traits::value_to_yaml(msg.is_on, out);
    out << ", ";
  }

  // member: fpv_mode
  {
    out << "fpv_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.fpv_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GimbalState & msg,
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

  // member: gimbal_tilt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gimbal_tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.gimbal_tilt, out);
    out << "\n";
  }

  // member: gimbal_pan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gimbal_pan: ";
    rosidl_generator_traits::value_to_yaml(msg.gimbal_pan, out);
    out << "\n";
  }

  // member: is_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_on: ";
    rosidl_generator_traits::value_to_yaml(msg.is_on, out);
    out << "\n";
  }

  // member: fpv_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fpv_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.fpv_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GimbalState & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::GimbalState & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::GimbalState & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::GimbalState>()
{
  return "mrs_msgs::msg::GimbalState";
}

template<>
inline const char * name<mrs_msgs::msg::GimbalState>()
{
  return "mrs_msgs/msg/GimbalState";
}

template<>
struct has_fixed_size<mrs_msgs::msg::GimbalState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mrs_msgs::msg::GimbalState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mrs_msgs::msg::GimbalState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__GIMBAL_STATE__TRAITS_HPP_
