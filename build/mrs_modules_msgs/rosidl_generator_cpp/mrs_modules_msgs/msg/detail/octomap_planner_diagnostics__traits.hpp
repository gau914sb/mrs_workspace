// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/OctomapPlannerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/octomap_planner_diagnostics.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__OCTOMAP_PLANNER_DIAGNOSTICS__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__OCTOMAP_PLANNER_DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/octomap_planner_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'desired_reference'
// Member 'best_goal'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OctomapPlannerDiagnostics & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: idle
  {
    out << "idle: ";
    rosidl_generator_traits::value_to_yaml(msg.idle, out);
    out << ", ";
  }

  // member: desired_reference
  {
    out << "desired_reference: ";
    to_flow_style_yaml(msg.desired_reference, out);
    out << ", ";
  }

  // member: best_goal
  {
    out << "best_goal: ";
    to_flow_style_yaml(msg.best_goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OctomapPlannerDiagnostics & msg,
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

  // member: idle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idle: ";
    rosidl_generator_traits::value_to_yaml(msg.idle, out);
    out << "\n";
  }

  // member: desired_reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_reference:\n";
    to_block_style_yaml(msg.desired_reference, out, indentation + 2);
  }

  // member: best_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "best_goal:\n";
    to_block_style_yaml(msg.best_goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OctomapPlannerDiagnostics & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::msg::OctomapPlannerDiagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::OctomapPlannerDiagnostics & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::OctomapPlannerDiagnostics>()
{
  return "mrs_modules_msgs::msg::OctomapPlannerDiagnostics";
}

template<>
inline const char * name<mrs_modules_msgs::msg::OctomapPlannerDiagnostics>()
{
  return "mrs_modules_msgs/msg/OctomapPlannerDiagnostics";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::OctomapPlannerDiagnostics>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::OctomapPlannerDiagnostics>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mrs_modules_msgs::msg::OctomapPlannerDiagnostics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__OCTOMAP_PLANNER_DIAGNOSTICS__TRAITS_HPP_
