// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/GripperDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gripper_diagnostics.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GRIPPER_DIAGNOSTICS__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GRIPPER_DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/gripper_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GripperDiagnostics & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: gripper_on
  {
    out << "gripper_on: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_on, out);
    out << ", ";
  }

  // member: gripping_object
  {
    out << "gripping_object: ";
    rosidl_generator_traits::value_to_yaml(msg.gripping_object, out);
    out << ", ";
  }

  // member: has_hall
  {
    out << "has_hall: ";
    rosidl_generator_traits::value_to_yaml(msg.has_hall, out);
    out << ", ";
  }

  // member: hall1_debug
  {
    out << "hall1_debug: ";
    rosidl_generator_traits::value_to_yaml(msg.hall1_debug, out);
    out << ", ";
  }

  // member: hall2_debug
  {
    out << "hall2_debug: ";
    rosidl_generator_traits::value_to_yaml(msg.hall2_debug, out);
    out << ", ";
  }

  // member: has_ultrasonic
  {
    out << "has_ultrasonic: ";
    rosidl_generator_traits::value_to_yaml(msg.has_ultrasonic, out);
    out << ", ";
  }

  // member: ultrasonic1_debug
  {
    out << "ultrasonic1_debug: ";
    rosidl_generator_traits::value_to_yaml(msg.ultrasonic1_debug, out);
    out << ", ";
  }

  // member: ultrasonic2_debug
  {
    out << "ultrasonic2_debug: ";
    rosidl_generator_traits::value_to_yaml(msg.ultrasonic2_debug, out);
    out << ", ";
  }

  // member: has_proximity
  {
    out << "has_proximity: ";
    rosidl_generator_traits::value_to_yaml(msg.has_proximity, out);
    out << ", ";
  }

  // member: proximity1_debug
  {
    out << "proximity1_debug: ";
    rosidl_generator_traits::value_to_yaml(msg.proximity1_debug, out);
    out << ", ";
  }

  // member: proximity2_debug
  {
    out << "proximity2_debug: ";
    rosidl_generator_traits::value_to_yaml(msg.proximity2_debug, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperDiagnostics & msg,
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

  // member: gripper_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_on: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_on, out);
    out << "\n";
  }

  // member: gripping_object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripping_object: ";
    rosidl_generator_traits::value_to_yaml(msg.gripping_object, out);
    out << "\n";
  }

  // member: has_hall
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_hall: ";
    rosidl_generator_traits::value_to_yaml(msg.has_hall, out);
    out << "\n";
  }

  // member: hall1_debug
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hall1_debug: ";
    rosidl_generator_traits::value_to_yaml(msg.hall1_debug, out);
    out << "\n";
  }

  // member: hall2_debug
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hall2_debug: ";
    rosidl_generator_traits::value_to_yaml(msg.hall2_debug, out);
    out << "\n";
  }

  // member: has_ultrasonic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_ultrasonic: ";
    rosidl_generator_traits::value_to_yaml(msg.has_ultrasonic, out);
    out << "\n";
  }

  // member: ultrasonic1_debug
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ultrasonic1_debug: ";
    rosidl_generator_traits::value_to_yaml(msg.ultrasonic1_debug, out);
    out << "\n";
  }

  // member: ultrasonic2_debug
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ultrasonic2_debug: ";
    rosidl_generator_traits::value_to_yaml(msg.ultrasonic2_debug, out);
    out << "\n";
  }

  // member: has_proximity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_proximity: ";
    rosidl_generator_traits::value_to_yaml(msg.has_proximity, out);
    out << "\n";
  }

  // member: proximity1_debug
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "proximity1_debug: ";
    rosidl_generator_traits::value_to_yaml(msg.proximity1_debug, out);
    out << "\n";
  }

  // member: proximity2_debug
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "proximity2_debug: ";
    rosidl_generator_traits::value_to_yaml(msg.proximity2_debug, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperDiagnostics & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::msg::GripperDiagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::GripperDiagnostics & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::GripperDiagnostics>()
{
  return "mrs_modules_msgs::msg::GripperDiagnostics";
}

template<>
inline const char * name<mrs_modules_msgs::msg::GripperDiagnostics>()
{
  return "mrs_modules_msgs/msg/GripperDiagnostics";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::GripperDiagnostics>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::GripperDiagnostics>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mrs_modules_msgs::msg::GripperDiagnostics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GRIPPER_DIAGNOSTICS__TRAITS_HPP_
