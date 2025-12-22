// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/RangeWithCovarianceArrayStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/range_with_covariance_array_stamped.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__RANGE_WITH_COVARIANCE_ARRAY_STAMPED__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__RANGE_WITH_COVARIANCE_ARRAY_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/range_with_covariance_array_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ranges'
#include "mrs_msgs/msg/detail/range_with_covariance_identified__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RangeWithCovarianceArrayStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ranges
  {
    if (msg.ranges.size() == 0) {
      out << "ranges: []";
    } else {
      out << "ranges: [";
      size_t pending_items = msg.ranges.size();
      for (auto item : msg.ranges) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RangeWithCovarianceArrayStamped & msg,
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

  // member: ranges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ranges.size() == 0) {
      out << "ranges: []\n";
    } else {
      out << "ranges:\n";
      for (auto item : msg.ranges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RangeWithCovarianceArrayStamped & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::RangeWithCovarianceArrayStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::RangeWithCovarianceArrayStamped & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::RangeWithCovarianceArrayStamped>()
{
  return "mrs_msgs::msg::RangeWithCovarianceArrayStamped";
}

template<>
inline const char * name<mrs_msgs::msg::RangeWithCovarianceArrayStamped>()
{
  return "mrs_msgs/msg/RangeWithCovarianceArrayStamped";
}

template<>
struct has_fixed_size<mrs_msgs::msg::RangeWithCovarianceArrayStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::RangeWithCovarianceArrayStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::RangeWithCovarianceArrayStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__RANGE_WITH_COVARIANCE_ARRAY_STAMPED__TRAITS_HPP_
