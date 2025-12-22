// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/Satellite.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/satellite.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__SATELLITE__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__SATELLITE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/satellite__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Satellite & msg,
  std::ostream & out)
{
  out << "{";
  // member: prn
  {
    out << "prn: ";
    rosidl_generator_traits::value_to_yaml(msg.prn, out);
    out << ", ";
  }

  // member: elevation
  {
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << ", ";
  }

  // member: azimuth
  {
    out << "azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth, out);
    out << ", ";
  }

  // member: snr
  {
    out << "snr: ";
    rosidl_generator_traits::value_to_yaml(msg.snr, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Satellite & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: prn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prn: ";
    rosidl_generator_traits::value_to_yaml(msg.prn, out);
    out << "\n";
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << "\n";
  }

  // member: azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth, out);
    out << "\n";
  }

  // member: snr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "snr: ";
    rosidl_generator_traits::value_to_yaml(msg.snr, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Satellite & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::msg::Satellite & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::Satellite & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::Satellite>()
{
  return "mrs_modules_msgs::msg::Satellite";
}

template<>
inline const char * name<mrs_modules_msgs::msg::Satellite>()
{
  return "mrs_modules_msgs/msg/Satellite";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::Satellite>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::Satellite>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mrs_modules_msgs::msg::Satellite>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__SATELLITE__TRAITS_HPP_
