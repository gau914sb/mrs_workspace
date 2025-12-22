// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/Bestvel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/bestvel.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__BESTVEL__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__BESTVEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/bestvel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'tersus_msg_header'
#include "mrs_modules_msgs/msg/detail/tersus_message_header__traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Bestvel & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tersus_msg_header
  {
    out << "tersus_msg_header: ";
    to_flow_style_yaml(msg.tersus_msg_header, out);
    out << ", ";
  }

  // member: solution_status
  {
    out << "solution_status: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_status, out);
    out << ", ";
  }

  // member: velocity_type
  {
    out << "velocity_type: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_type, out);
    out << ", ";
  }

  // member: latency
  {
    out << "latency: ";
    rosidl_generator_traits::value_to_yaml(msg.latency, out);
    out << ", ";
  }

  // member: age
  {
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << ", ";
  }

  // member: horizontal_speed
  {
    out << "horizontal_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_speed, out);
    out << ", ";
  }

  // member: track_ground
  {
    out << "track_ground: ";
    rosidl_generator_traits::value_to_yaml(msg.track_ground, out);
    out << ", ";
  }

  // member: vertical_speed
  {
    out << "vertical_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Bestvel & msg,
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

  // member: tersus_msg_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tersus_msg_header:\n";
    to_block_style_yaml(msg.tersus_msg_header, out, indentation + 2);
  }

  // member: solution_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution_status: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_status, out);
    out << "\n";
  }

  // member: velocity_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_type: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_type, out);
    out << "\n";
  }

  // member: latency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latency: ";
    rosidl_generator_traits::value_to_yaml(msg.latency, out);
    out << "\n";
  }

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << "\n";
  }

  // member: horizontal_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_speed, out);
    out << "\n";
  }

  // member: track_ground
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_ground: ";
    rosidl_generator_traits::value_to_yaml(msg.track_ground, out);
    out << "\n";
  }

  // member: vertical_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Bestvel & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::msg::Bestvel & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::Bestvel & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::Bestvel>()
{
  return "mrs_modules_msgs::msg::Bestvel";
}

template<>
inline const char * name<mrs_modules_msgs::msg::Bestvel>()
{
  return "mrs_modules_msgs/msg/Bestvel";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::Bestvel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::Bestvel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_modules_msgs::msg::Bestvel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__BESTVEL__TRAITS_HPP_
