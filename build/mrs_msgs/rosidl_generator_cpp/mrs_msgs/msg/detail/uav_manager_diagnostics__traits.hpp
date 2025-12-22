// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/UavManagerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/uav_manager_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__UAV_MANAGER_DIAGNOSTICS__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__UAV_MANAGER_DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/uav_manager_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UavManagerDiagnostics & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: uav_name
  {
    out << "uav_name: ";
    rosidl_generator_traits::value_to_yaml(msg.uav_name, out);
    out << ", ";
  }

  // member: home_latitude
  {
    out << "home_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.home_latitude, out);
    out << ", ";
  }

  // member: home_longitude
  {
    out << "home_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.home_longitude, out);
    out << ", ";
  }

  // member: cur_latitude
  {
    out << "cur_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_latitude, out);
    out << ", ";
  }

  // member: cur_longitude
  {
    out << "cur_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_longitude, out);
    out << ", ";
  }

  // member: flight_time
  {
    out << "flight_time: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_time, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UavManagerDiagnostics & msg,
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

  // member: uav_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uav_name: ";
    rosidl_generator_traits::value_to_yaml(msg.uav_name, out);
    out << "\n";
  }

  // member: home_latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "home_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.home_latitude, out);
    out << "\n";
  }

  // member: home_longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "home_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.home_longitude, out);
    out << "\n";
  }

  // member: cur_latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_latitude, out);
    out << "\n";
  }

  // member: cur_longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_longitude, out);
    out << "\n";
  }

  // member: flight_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flight_time: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_time, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UavManagerDiagnostics & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::UavManagerDiagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::UavManagerDiagnostics & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::UavManagerDiagnostics>()
{
  return "mrs_msgs::msg::UavManagerDiagnostics";
}

template<>
inline const char * name<mrs_msgs::msg::UavManagerDiagnostics>()
{
  return "mrs_msgs/msg/UavManagerDiagnostics";
}

template<>
struct has_fixed_size<mrs_msgs::msg::UavManagerDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::UavManagerDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::UavManagerDiagnostics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__UAV_MANAGER_DIAGNOSTICS__TRAITS_HPP_
