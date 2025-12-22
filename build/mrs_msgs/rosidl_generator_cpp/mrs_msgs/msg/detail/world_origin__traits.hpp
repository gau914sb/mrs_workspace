// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/WorldOrigin.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/world_origin.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__WORLD_ORIGIN__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__WORLD_ORIGIN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/world_origin__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WorldOrigin & msg,
  std::ostream & out)
{
  out << "{";
  // member: units
  {
    out << "units: ";
    rosidl_generator_traits::value_to_yaml(msg.units, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WorldOrigin & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: units
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "units: ";
    rosidl_generator_traits::value_to_yaml(msg.units, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WorldOrigin & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::WorldOrigin & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::WorldOrigin & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::WorldOrigin>()
{
  return "mrs_msgs::msg::WorldOrigin";
}

template<>
inline const char * name<mrs_msgs::msg::WorldOrigin>()
{
  return "mrs_msgs/msg/WorldOrigin";
}

template<>
struct has_fixed_size<mrs_msgs::msg::WorldOrigin>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::WorldOrigin>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::WorldOrigin>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__WORLD_ORIGIN__TRAITS_HPP_
