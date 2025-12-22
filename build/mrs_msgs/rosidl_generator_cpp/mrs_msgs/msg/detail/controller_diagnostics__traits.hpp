// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/ControllerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/controller_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__CONTROLLER_DIAGNOSTICS__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__CONTROLLER_DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/controller_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControllerDiagnostics & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: controller
  {
    out << "controller: ";
    rosidl_generator_traits::value_to_yaml(msg.controller, out);
    out << ", ";
  }

  // member: ramping_up
  {
    out << "ramping_up: ";
    rosidl_generator_traits::value_to_yaml(msg.ramping_up, out);
    out << ", ";
  }

  // member: mass_estimator
  {
    out << "mass_estimator: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_estimator, out);
    out << ", ";
  }

  // member: mass_difference
  {
    out << "mass_difference: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_difference, out);
    out << ", ";
  }

  // member: total_mass
  {
    out << "total_mass: ";
    rosidl_generator_traits::value_to_yaml(msg.total_mass, out);
    out << ", ";
  }

  // member: disturbance_estimator
  {
    out << "disturbance_estimator: ";
    rosidl_generator_traits::value_to_yaml(msg.disturbance_estimator, out);
    out << ", ";
  }

  // member: disturbance_wx_w
  {
    out << "disturbance_wx_w: ";
    rosidl_generator_traits::value_to_yaml(msg.disturbance_wx_w, out);
    out << ", ";
  }

  // member: disturbance_wy_w
  {
    out << "disturbance_wy_w: ";
    rosidl_generator_traits::value_to_yaml(msg.disturbance_wy_w, out);
    out << ", ";
  }

  // member: disturbance_bx_w
  {
    out << "disturbance_bx_w: ";
    rosidl_generator_traits::value_to_yaml(msg.disturbance_bx_w, out);
    out << ", ";
  }

  // member: disturbance_by_w
  {
    out << "disturbance_by_w: ";
    rosidl_generator_traits::value_to_yaml(msg.disturbance_by_w, out);
    out << ", ";
  }

  // member: disturbance_bx_b
  {
    out << "disturbance_bx_b: ";
    rosidl_generator_traits::value_to_yaml(msg.disturbance_bx_b, out);
    out << ", ";
  }

  // member: disturbance_by_b
  {
    out << "disturbance_by_b: ";
    rosidl_generator_traits::value_to_yaml(msg.disturbance_by_b, out);
    out << ", ";
  }

  // member: controller_enforcing_constraints
  {
    out << "controller_enforcing_constraints: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_enforcing_constraints, out);
    out << ", ";
  }

  // member: horizontal_speed_constraint
  {
    out << "horizontal_speed_constraint: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_speed_constraint, out);
    out << ", ";
  }

  // member: horizontal_acc_constraint
  {
    out << "horizontal_acc_constraint: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_acc_constraint, out);
    out << ", ";
  }

  // member: vertical_asc_speed_constraint
  {
    out << "vertical_asc_speed_constraint: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_asc_speed_constraint, out);
    out << ", ";
  }

  // member: vertical_asc_acc_constraint
  {
    out << "vertical_asc_acc_constraint: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_asc_acc_constraint, out);
    out << ", ";
  }

  // member: vertical_desc_speed_constraint
  {
    out << "vertical_desc_speed_constraint: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_desc_speed_constraint, out);
    out << ", ";
  }

  // member: vertical_desc_acc_constraint
  {
    out << "vertical_desc_acc_constraint: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_desc_acc_constraint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControllerDiagnostics & msg,
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

  // member: controller
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller: ";
    rosidl_generator_traits::value_to_yaml(msg.controller, out);
    out << "\n";
  }

  // member: ramping_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ramping_up: ";
    rosidl_generator_traits::value_to_yaml(msg.ramping_up, out);
    out << "\n";
  }

  // member: mass_estimator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass_estimator: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_estimator, out);
    out << "\n";
  }

  // member: mass_difference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass_difference: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_difference, out);
    out << "\n";
  }

  // member: total_mass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_mass: ";
    rosidl_generator_traits::value_to_yaml(msg.total_mass, out);
    out << "\n";
  }

  // member: disturbance_estimator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disturbance_estimator: ";
    rosidl_generator_traits::value_to_yaml(msg.disturbance_estimator, out);
    out << "\n";
  }

  // member: disturbance_wx_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disturbance_wx_w: ";
    rosidl_generator_traits::value_to_yaml(msg.disturbance_wx_w, out);
    out << "\n";
  }

  // member: disturbance_wy_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disturbance_wy_w: ";
    rosidl_generator_traits::value_to_yaml(msg.disturbance_wy_w, out);
    out << "\n";
  }

  // member: disturbance_bx_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disturbance_bx_w: ";
    rosidl_generator_traits::value_to_yaml(msg.disturbance_bx_w, out);
    out << "\n";
  }

  // member: disturbance_by_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disturbance_by_w: ";
    rosidl_generator_traits::value_to_yaml(msg.disturbance_by_w, out);
    out << "\n";
  }

  // member: disturbance_bx_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disturbance_bx_b: ";
    rosidl_generator_traits::value_to_yaml(msg.disturbance_bx_b, out);
    out << "\n";
  }

  // member: disturbance_by_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disturbance_by_b: ";
    rosidl_generator_traits::value_to_yaml(msg.disturbance_by_b, out);
    out << "\n";
  }

  // member: controller_enforcing_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_enforcing_constraints: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_enforcing_constraints, out);
    out << "\n";
  }

  // member: horizontal_speed_constraint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_speed_constraint: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_speed_constraint, out);
    out << "\n";
  }

  // member: horizontal_acc_constraint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_acc_constraint: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_acc_constraint, out);
    out << "\n";
  }

  // member: vertical_asc_speed_constraint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_asc_speed_constraint: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_asc_speed_constraint, out);
    out << "\n";
  }

  // member: vertical_asc_acc_constraint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_asc_acc_constraint: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_asc_acc_constraint, out);
    out << "\n";
  }

  // member: vertical_desc_speed_constraint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_desc_speed_constraint: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_desc_speed_constraint, out);
    out << "\n";
  }

  // member: vertical_desc_acc_constraint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_desc_acc_constraint: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_desc_acc_constraint, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerDiagnostics & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::ControllerDiagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::ControllerDiagnostics & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::ControllerDiagnostics>()
{
  return "mrs_msgs::msg::ControllerDiagnostics";
}

template<>
inline const char * name<mrs_msgs::msg::ControllerDiagnostics>()
{
  return "mrs_msgs/msg/ControllerDiagnostics";
}

template<>
struct has_fixed_size<mrs_msgs::msg::ControllerDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::ControllerDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::ControllerDiagnostics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__CONTROLLER_DIAGNOSTICS__TRAITS_HPP_
