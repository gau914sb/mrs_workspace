// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/LandoffDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/landoff_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__LANDOFF_DIAGNOSTICS__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__LANDOFF_DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/landoff_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LandoffDiagnostics & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << ", ";
  }

  // member: landing
  {
    out << "landing: ";
    rosidl_generator_traits::value_to_yaml(msg.landing, out);
    out << ", ";
  }

  // member: taking_off
  {
    out << "taking_off: ";
    rosidl_generator_traits::value_to_yaml(msg.taking_off, out);
    out << ", ";
  }

  // member: elanding
  {
    out << "elanding: ";
    rosidl_generator_traits::value_to_yaml(msg.elanding, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LandoffDiagnostics & msg,
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

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }

  // member: landing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "landing: ";
    rosidl_generator_traits::value_to_yaml(msg.landing, out);
    out << "\n";
  }

  // member: taking_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "taking_off: ";
    rosidl_generator_traits::value_to_yaml(msg.taking_off, out);
    out << "\n";
  }

  // member: elanding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elanding: ";
    rosidl_generator_traits::value_to_yaml(msg.elanding, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LandoffDiagnostics & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::LandoffDiagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::LandoffDiagnostics & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::LandoffDiagnostics>()
{
  return "mrs_msgs::msg::LandoffDiagnostics";
}

template<>
inline const char * name<mrs_msgs::msg::LandoffDiagnostics>()
{
  return "mrs_msgs/msg/LandoffDiagnostics";
}

template<>
struct has_fixed_size<mrs_msgs::msg::LandoffDiagnostics>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mrs_msgs::msg::LandoffDiagnostics>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mrs_msgs::msg::LandoffDiagnostics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__LANDOFF_DIAGNOSTICS__TRAITS_HPP_
