// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/EstimatorInput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/estimator_input.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__ESTIMATOR_INPUT__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__ESTIMATOR_INPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/estimator_input__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'control_acceleration'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EstimatorInput & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: control_acceleration
  {
    out << "control_acceleration: ";
    to_flow_style_yaml(msg.control_acceleration, out);
    out << ", ";
  }

  // member: control_hdg_rate
  {
    out << "control_hdg_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.control_hdg_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EstimatorInput & msg,
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

  // member: control_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_acceleration:\n";
    to_block_style_yaml(msg.control_acceleration, out, indentation + 2);
  }

  // member: control_hdg_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_hdg_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.control_hdg_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EstimatorInput & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::EstimatorInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::EstimatorInput & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::EstimatorInput>()
{
  return "mrs_msgs::msg::EstimatorInput";
}

template<>
inline const char * name<mrs_msgs::msg::EstimatorInput>()
{
  return "mrs_msgs/msg/EstimatorInput";
}

template<>
struct has_fixed_size<mrs_msgs::msg::EstimatorInput>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mrs_msgs::msg::EstimatorInput>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mrs_msgs::msg::EstimatorInput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__ESTIMATOR_INPUT__TRAITS_HPP_
