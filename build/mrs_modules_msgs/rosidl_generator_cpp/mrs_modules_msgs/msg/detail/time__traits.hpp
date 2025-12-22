// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/Time.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/time.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__TIME__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__TIME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/time__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Time & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: clock_status
  {
    out << "clock_status: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_status, out);
    out << ", ";
  }

  // member: offset
  {
    out << "offset: ";
    rosidl_generator_traits::value_to_yaml(msg.offset, out);
    out << ", ";
  }

  // member: offset_std
  {
    out << "offset_std: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_std, out);
    out << ", ";
  }

  // member: utc_offset
  {
    out << "utc_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_offset, out);
    out << ", ";
  }

  // member: utc_year
  {
    out << "utc_year: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_year, out);
    out << ", ";
  }

  // member: utc_month
  {
    out << "utc_month: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_month, out);
    out << ", ";
  }

  // member: utc_day
  {
    out << "utc_day: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_day, out);
    out << ", ";
  }

  // member: utc_hour
  {
    out << "utc_hour: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_hour, out);
    out << ", ";
  }

  // member: utc_minute
  {
    out << "utc_minute: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_minute, out);
    out << ", ";
  }

  // member: utc_millisecond
  {
    out << "utc_millisecond: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_millisecond, out);
    out << ", ";
  }

  // member: utc_status
  {
    out << "utc_status: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Time & msg,
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

  // member: clock_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clock_status: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_status, out);
    out << "\n";
  }

  // member: offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset: ";
    rosidl_generator_traits::value_to_yaml(msg.offset, out);
    out << "\n";
  }

  // member: offset_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_std: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_std, out);
    out << "\n";
  }

  // member: utc_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_offset, out);
    out << "\n";
  }

  // member: utc_year
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_year: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_year, out);
    out << "\n";
  }

  // member: utc_month
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_month: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_month, out);
    out << "\n";
  }

  // member: utc_day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_day: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_day, out);
    out << "\n";
  }

  // member: utc_hour
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_hour: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_hour, out);
    out << "\n";
  }

  // member: utc_minute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_minute: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_minute, out);
    out << "\n";
  }

  // member: utc_millisecond
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_millisecond: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_millisecond, out);
    out << "\n";
  }

  // member: utc_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_status: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Time & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::msg::Time & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::Time & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::Time>()
{
  return "mrs_modules_msgs::msg::Time";
}

template<>
inline const char * name<mrs_modules_msgs::msg::Time>()
{
  return "mrs_modules_msgs/msg/Time";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::Time>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::Time>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_modules_msgs::msg::Time>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__TIME__TRAITS_HPP_
