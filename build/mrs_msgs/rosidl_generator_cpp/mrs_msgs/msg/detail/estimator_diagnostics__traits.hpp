// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/EstimatorDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/estimator_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__ESTIMATOR_DIAGNOSTICS__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__ESTIMATOR_DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/estimator_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EstimatorDiagnostics & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: estimator_name
  {
    out << "estimator_name: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_name, out);
    out << ", ";
  }

  // member: estimator_type
  {
    out << "estimator_type: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_type, out);
    out << ", ";
  }

  // member: estimator_sm_state
  {
    out << "estimator_sm_state: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_sm_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EstimatorDiagnostics & msg,
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

  // member: estimator_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimator_name: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_name, out);
    out << "\n";
  }

  // member: estimator_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimator_type: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_type, out);
    out << "\n";
  }

  // member: estimator_sm_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimator_sm_state: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_sm_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EstimatorDiagnostics & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::EstimatorDiagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::EstimatorDiagnostics & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::EstimatorDiagnostics>()
{
  return "mrs_msgs::msg::EstimatorDiagnostics";
}

template<>
inline const char * name<mrs_msgs::msg::EstimatorDiagnostics>()
{
  return "mrs_msgs/msg/EstimatorDiagnostics";
}

template<>
struct has_fixed_size<mrs_msgs::msg::EstimatorDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::EstimatorDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::EstimatorDiagnostics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__ESTIMATOR_DIAGNOSTICS__TRAITS_HPP_
