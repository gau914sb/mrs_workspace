// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/ProfilerUpdate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/profiler_update.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__PROFILER_UPDATE__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__PROFILER_UPDATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/profiler_update__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ProfilerUpdate & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: node_name
  {
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << ", ";
  }

  // member: routine_name
  {
    out << "routine_name: ";
    rosidl_generator_traits::value_to_yaml(msg.routine_name, out);
    out << ", ";
  }

  // member: iteration
  {
    out << "iteration: ";
    rosidl_generator_traits::value_to_yaml(msg.iteration, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << ", ";
  }

  // member: event
  {
    out << "event: ";
    rosidl_generator_traits::value_to_yaml(msg.event, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProfilerUpdate & msg,
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

  // member: node_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << "\n";
  }

  // member: routine_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "routine_name: ";
    rosidl_generator_traits::value_to_yaml(msg.routine_name, out);
    out << "\n";
  }

  // member: iteration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iteration: ";
    rosidl_generator_traits::value_to_yaml(msg.iteration, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }

  // member: event
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event: ";
    rosidl_generator_traits::value_to_yaml(msg.event, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProfilerUpdate & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::ProfilerUpdate & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::ProfilerUpdate & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::ProfilerUpdate>()
{
  return "mrs_msgs::msg::ProfilerUpdate";
}

template<>
inline const char * name<mrs_msgs::msg::ProfilerUpdate>()
{
  return "mrs_msgs/msg/ProfilerUpdate";
}

template<>
struct has_fixed_size<mrs_msgs::msg::ProfilerUpdate>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::ProfilerUpdate>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::ProfilerUpdate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__PROFILER_UPDATE__TRAITS_HPP_
