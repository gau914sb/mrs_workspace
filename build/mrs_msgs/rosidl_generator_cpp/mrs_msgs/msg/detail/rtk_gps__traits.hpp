// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/RtkGps.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/rtk_gps.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__RTK_GPS__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__RTK_GPS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/rtk_gps__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'gps'
#include "mrs_msgs/msg/detail/gps_data__traits.hpp"
// Member 'status'
#include "sensor_msgs/msg/detail/nav_sat_status__traits.hpp"
// Member 'fix_type'
#include "mrs_msgs/msg/detail/rtk_fix_type__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RtkGps & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: gps
  {
    out << "gps: ";
    to_flow_style_yaml(msg.gps, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: fix_type
  {
    out << "fix_type: ";
    to_flow_style_yaml(msg.fix_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RtkGps & msg,
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

  // member: gps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps:\n";
    to_block_style_yaml(msg.gps, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: fix_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix_type:\n";
    to_block_style_yaml(msg.fix_type, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RtkGps & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::RtkGps & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::RtkGps & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::RtkGps>()
{
  return "mrs_msgs::msg::RtkGps";
}

template<>
inline const char * name<mrs_msgs::msg::RtkGps>()
{
  return "mrs_msgs/msg/RtkGps";
}

template<>
struct has_fixed_size<mrs_msgs::msg::RtkGps>
  : std::integral_constant<bool, has_fixed_size<mrs_msgs::msg::GpsData>::value && has_fixed_size<mrs_msgs::msg::RtkFixType>::value && has_fixed_size<sensor_msgs::msg::NavSatStatus>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mrs_msgs::msg::RtkGps>
  : std::integral_constant<bool, has_bounded_size<mrs_msgs::msg::GpsData>::value && has_bounded_size<mrs_msgs::msg::RtkFixType>::value && has_bounded_size<sensor_msgs::msg::NavSatStatus>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mrs_msgs::msg::RtkGps>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__RTK_GPS__TRAITS_HPP_
