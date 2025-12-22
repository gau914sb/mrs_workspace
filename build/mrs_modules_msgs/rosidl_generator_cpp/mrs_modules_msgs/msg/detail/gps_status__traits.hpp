// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/GpsStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gps_status.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPS_STATUS__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPS_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/gps_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GpsStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: quality
  {
    out << "quality: ";
    rosidl_generator_traits::value_to_yaml(msg.quality, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpsStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality: ";
    rosidl_generator_traits::value_to_yaml(msg.quality, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpsStatus & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::msg::GpsStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::GpsStatus & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::GpsStatus>()
{
  return "mrs_modules_msgs::msg::GpsStatus";
}

template<>
inline const char * name<mrs_modules_msgs::msg::GpsStatus>()
{
  return "mrs_modules_msgs/msg/GpsStatus";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::GpsStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::GpsStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mrs_modules_msgs::msg::GpsStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPS_STATUS__TRAITS_HPP_
