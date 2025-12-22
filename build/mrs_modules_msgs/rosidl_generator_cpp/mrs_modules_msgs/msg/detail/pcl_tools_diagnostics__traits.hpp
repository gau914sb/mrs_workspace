// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/PclToolsDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/pcl_tools_diagnostics.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__PCL_TOOLS_DIAGNOSTICS__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__PCL_TOOLS_DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/pcl_tools_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PclToolsDiagnostics & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: sensor_name
  {
    out << "sensor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_name, out);
    out << ", ";
  }

  // member: sensor_type
  {
    out << "sensor_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_type, out);
    out << ", ";
  }

  // member: frequency
  {
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << ", ";
  }

  // member: vfov
  {
    out << "vfov: ";
    rosidl_generator_traits::value_to_yaml(msg.vfov, out);
    out << ", ";
  }

  // member: rows_before
  {
    out << "rows_before: ";
    rosidl_generator_traits::value_to_yaml(msg.rows_before, out);
    out << ", ";
  }

  // member: cols_before
  {
    out << "cols_before: ";
    rosidl_generator_traits::value_to_yaml(msg.cols_before, out);
    out << ", ";
  }

  // member: rows_after
  {
    out << "rows_after: ";
    rosidl_generator_traits::value_to_yaml(msg.rows_after, out);
    out << ", ";
  }

  // member: cols_after
  {
    out << "cols_after: ";
    rosidl_generator_traits::value_to_yaml(msg.cols_after, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PclToolsDiagnostics & msg,
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

  // member: sensor_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_name, out);
    out << "\n";
  }

  // member: sensor_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_type, out);
    out << "\n";
  }

  // member: frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << "\n";
  }

  // member: vfov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vfov: ";
    rosidl_generator_traits::value_to_yaml(msg.vfov, out);
    out << "\n";
  }

  // member: rows_before
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rows_before: ";
    rosidl_generator_traits::value_to_yaml(msg.rows_before, out);
    out << "\n";
  }

  // member: cols_before
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cols_before: ";
    rosidl_generator_traits::value_to_yaml(msg.cols_before, out);
    out << "\n";
  }

  // member: rows_after
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rows_after: ";
    rosidl_generator_traits::value_to_yaml(msg.rows_after, out);
    out << "\n";
  }

  // member: cols_after
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cols_after: ";
    rosidl_generator_traits::value_to_yaml(msg.cols_after, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PclToolsDiagnostics & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::msg::PclToolsDiagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::PclToolsDiagnostics & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::PclToolsDiagnostics>()
{
  return "mrs_modules_msgs::msg::PclToolsDiagnostics";
}

template<>
inline const char * name<mrs_modules_msgs::msg::PclToolsDiagnostics>()
{
  return "mrs_modules_msgs/msg/PclToolsDiagnostics";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::PclToolsDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::PclToolsDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_modules_msgs::msg::PclToolsDiagnostics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__PCL_TOOLS_DIAGNOSTICS__TRAITS_HPP_
