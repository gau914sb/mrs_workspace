// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/SafetyBorder.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/safety_border.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__SAFETY_BORDER__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__SAFETY_BORDER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/safety_border__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'prism'
#include "mrs_msgs/msg/detail/prism__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SafetyBorder & msg,
  std::ostream & out)
{
  out << "{";
  // member: prism
  {
    out << "prism: ";
    to_flow_style_yaml(msg.prism, out);
    out << ", ";
  }

  // member: keep_obstacles
  {
    out << "keep_obstacles: ";
    rosidl_generator_traits::value_to_yaml(msg.keep_obstacles, out);
    out << ", ";
  }

  // member: update_world_origin
  {
    out << "update_world_origin: ";
    rosidl_generator_traits::value_to_yaml(msg.update_world_origin, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SafetyBorder & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: prism
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prism:\n";
    to_block_style_yaml(msg.prism, out, indentation + 2);
  }

  // member: keep_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keep_obstacles: ";
    rosidl_generator_traits::value_to_yaml(msg.keep_obstacles, out);
    out << "\n";
  }

  // member: update_world_origin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "update_world_origin: ";
    rosidl_generator_traits::value_to_yaml(msg.update_world_origin, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SafetyBorder & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::SafetyBorder & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::SafetyBorder & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::SafetyBorder>()
{
  return "mrs_msgs::msg::SafetyBorder";
}

template<>
inline const char * name<mrs_msgs::msg::SafetyBorder>()
{
  return "mrs_msgs/msg/SafetyBorder";
}

template<>
struct has_fixed_size<mrs_msgs::msg::SafetyBorder>
  : std::integral_constant<bool, has_fixed_size<mrs_msgs::msg::Prism>::value> {};

template<>
struct has_bounded_size<mrs_msgs::msg::SafetyBorder>
  : std::integral_constant<bool, has_bounded_size<mrs_msgs::msg::Prism>::value> {};

template<>
struct is_message<mrs_msgs::msg::SafetyBorder>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__SAFETY_BORDER__TRAITS_HPP_
