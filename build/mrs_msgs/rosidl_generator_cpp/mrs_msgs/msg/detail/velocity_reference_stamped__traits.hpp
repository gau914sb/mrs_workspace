// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/VelocityReferenceStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/velocity_reference_stamped.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__VELOCITY_REFERENCE_STAMPED__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__VELOCITY_REFERENCE_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/velocity_reference_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'reference'
#include "mrs_msgs/msg/detail/velocity_reference__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VelocityReferenceStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: reference
  {
    out << "reference: ";
    to_flow_style_yaml(msg.reference, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VelocityReferenceStamped & msg,
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

  // member: reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference:\n";
    to_block_style_yaml(msg.reference, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VelocityReferenceStamped & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::VelocityReferenceStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::VelocityReferenceStamped & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::VelocityReferenceStamped>()
{
  return "mrs_msgs::msg::VelocityReferenceStamped";
}

template<>
inline const char * name<mrs_msgs::msg::VelocityReferenceStamped>()
{
  return "mrs_msgs/msg/VelocityReferenceStamped";
}

template<>
struct has_fixed_size<mrs_msgs::msg::VelocityReferenceStamped>
  : std::integral_constant<bool, has_fixed_size<mrs_msgs::msg::VelocityReference>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mrs_msgs::msg::VelocityReferenceStamped>
  : std::integral_constant<bool, has_bounded_size<mrs_msgs::msg::VelocityReference>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mrs_msgs::msg::VelocityReferenceStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__VELOCITY_REFERENCE_STAMPED__TRAITS_HPP_
