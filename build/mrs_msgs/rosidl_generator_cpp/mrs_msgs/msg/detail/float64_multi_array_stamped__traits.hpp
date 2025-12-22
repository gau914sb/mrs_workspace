// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/Float64MultiArrayStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/float64_multi_array_stamped.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__FLOAT64_MULTI_ARRAY_STAMPED__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__FLOAT64_MULTI_ARRAY_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/float64_multi_array_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'matrix'
#include "std_msgs/msg/detail/float64_multi_array__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Float64MultiArrayStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: matrix
  {
    out << "matrix: ";
    to_flow_style_yaml(msg.matrix, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Float64MultiArrayStamped & msg,
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

  // member: matrix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matrix:\n";
    to_block_style_yaml(msg.matrix, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Float64MultiArrayStamped & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::Float64MultiArrayStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::Float64MultiArrayStamped & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::Float64MultiArrayStamped>()
{
  return "mrs_msgs::msg::Float64MultiArrayStamped";
}

template<>
inline const char * name<mrs_msgs::msg::Float64MultiArrayStamped>()
{
  return "mrs_msgs/msg/Float64MultiArrayStamped";
}

template<>
struct has_fixed_size<mrs_msgs::msg::Float64MultiArrayStamped>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64MultiArray>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mrs_msgs::msg::Float64MultiArrayStamped>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64MultiArray>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mrs_msgs::msg::Float64MultiArrayStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__FLOAT64_MULTI_ARRAY_STAMPED__TRAITS_HPP_
