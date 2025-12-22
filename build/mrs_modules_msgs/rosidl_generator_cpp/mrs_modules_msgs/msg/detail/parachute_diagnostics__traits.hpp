// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/ParachuteDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/parachute_diagnostics.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__PARACHUTE_DIAGNOSTICS__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__PARACHUTE_DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/parachute_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ParachuteDiagnostics & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: alive
  {
    out << "alive: ";
    rosidl_generator_traits::value_to_yaml(msg.alive, out);
    out << ", ";
  }

  // member: armed
  {
    out << "armed: ";
    rosidl_generator_traits::value_to_yaml(msg.armed, out);
    out << ", ";
  }

  // member: fired
  {
    out << "fired: ";
    rosidl_generator_traits::value_to_yaml(msg.fired, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParachuteDiagnostics & msg,
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

  // member: alive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alive: ";
    rosidl_generator_traits::value_to_yaml(msg.alive, out);
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

  // member: fired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fired: ";
    rosidl_generator_traits::value_to_yaml(msg.fired, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParachuteDiagnostics & msg, bool use_flow_style = false)
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

}  // namespace mrs_modules_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mrs_modules_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrs_modules_msgs::msg::ParachuteDiagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::ParachuteDiagnostics & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::ParachuteDiagnostics>()
{
  return "mrs_modules_msgs::msg::ParachuteDiagnostics";
}

template<>
inline const char * name<mrs_modules_msgs::msg::ParachuteDiagnostics>()
{
  return "mrs_modules_msgs/msg/ParachuteDiagnostics";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::ParachuteDiagnostics>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::ParachuteDiagnostics>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mrs_modules_msgs::msg::ParachuteDiagnostics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__PARACHUTE_DIAGNOSTICS__TRAITS_HPP_
