// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/RangeWithCovarianceIdentified.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/range_with_covariance_identified.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__RANGE_WITH_COVARIANCE_IDENTIFIED__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__RANGE_WITH_COVARIANCE_IDENTIFIED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/range_with_covariance_identified__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'range'
#include "sensor_msgs/msg/detail/range__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RangeWithCovarianceIdentified & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: range
  {
    out << "range: ";
    to_flow_style_yaml(msg.range, out);
    out << ", ";
  }

  // member: variance
  {
    out << "variance: ";
    rosidl_generator_traits::value_to_yaml(msg.variance, out);
    out << ", ";
  }

  // member: power_a
  {
    out << "power_a: ";
    rosidl_generator_traits::value_to_yaml(msg.power_a, out);
    out << ", ";
  }

  // member: power_b
  {
    out << "power_b: ";
    rosidl_generator_traits::value_to_yaml(msg.power_b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RangeWithCovarianceIdentified & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range:\n";
    to_block_style_yaml(msg.range, out, indentation + 2);
  }

  // member: variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "variance: ";
    rosidl_generator_traits::value_to_yaml(msg.variance, out);
    out << "\n";
  }

  // member: power_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_a: ";
    rosidl_generator_traits::value_to_yaml(msg.power_a, out);
    out << "\n";
  }

  // member: power_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_b: ";
    rosidl_generator_traits::value_to_yaml(msg.power_b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RangeWithCovarianceIdentified & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::RangeWithCovarianceIdentified & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::RangeWithCovarianceIdentified & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::RangeWithCovarianceIdentified>()
{
  return "mrs_msgs::msg::RangeWithCovarianceIdentified";
}

template<>
inline const char * name<mrs_msgs::msg::RangeWithCovarianceIdentified>()
{
  return "mrs_msgs/msg/RangeWithCovarianceIdentified";
}

template<>
struct has_fixed_size<mrs_msgs::msg::RangeWithCovarianceIdentified>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Range>::value> {};

template<>
struct has_bounded_size<mrs_msgs::msg::RangeWithCovarianceIdentified>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Range>::value> {};

template<>
struct is_message<mrs_msgs::msg::RangeWithCovarianceIdentified>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__RANGE_WITH_COVARIANCE_IDENTIFIED__TRAITS_HPP_
