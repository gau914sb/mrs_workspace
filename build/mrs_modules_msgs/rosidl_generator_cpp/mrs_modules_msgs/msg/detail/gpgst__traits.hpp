// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/Gpgst.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gpgst.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPGST__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPGST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/gpgst__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Gpgst & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: message_id
  {
    out << "message_id: ";
    rosidl_generator_traits::value_to_yaml(msg.message_id, out);
    out << ", ";
  }

  // member: utc
  {
    out << "utc: ";
    rosidl_generator_traits::value_to_yaml(msg.utc, out);
    out << ", ";
  }

  // member: rms
  {
    out << "rms: ";
    rosidl_generator_traits::value_to_yaml(msg.rms, out);
    out << ", ";
  }

  // member: smjr_std
  {
    out << "smjr_std: ";
    rosidl_generator_traits::value_to_yaml(msg.smjr_std, out);
    out << ", ";
  }

  // member: smnr_std
  {
    out << "smnr_std: ";
    rosidl_generator_traits::value_to_yaml(msg.smnr_std, out);
    out << ", ";
  }

  // member: orient
  {
    out << "orient: ";
    rosidl_generator_traits::value_to_yaml(msg.orient, out);
    out << ", ";
  }

  // member: lat_std
  {
    out << "lat_std: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_std, out);
    out << ", ";
  }

  // member: lon_std
  {
    out << "lon_std: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_std, out);
    out << ", ";
  }

  // member: alt_std
  {
    out << "alt_std: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_std, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gpgst & msg,
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

  // member: message_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_id: ";
    rosidl_generator_traits::value_to_yaml(msg.message_id, out);
    out << "\n";
  }

  // member: utc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc: ";
    rosidl_generator_traits::value_to_yaml(msg.utc, out);
    out << "\n";
  }

  // member: rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rms: ";
    rosidl_generator_traits::value_to_yaml(msg.rms, out);
    out << "\n";
  }

  // member: smjr_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "smjr_std: ";
    rosidl_generator_traits::value_to_yaml(msg.smjr_std, out);
    out << "\n";
  }

  // member: smnr_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "smnr_std: ";
    rosidl_generator_traits::value_to_yaml(msg.smnr_std, out);
    out << "\n";
  }

  // member: orient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orient: ";
    rosidl_generator_traits::value_to_yaml(msg.orient, out);
    out << "\n";
  }

  // member: lat_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_std: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_std, out);
    out << "\n";
  }

  // member: lon_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon_std: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_std, out);
    out << "\n";
  }

  // member: alt_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt_std: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_std, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gpgst & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::msg::Gpgst & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::Gpgst & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::Gpgst>()
{
  return "mrs_modules_msgs::msg::Gpgst";
}

template<>
inline const char * name<mrs_modules_msgs::msg::Gpgst>()
{
  return "mrs_modules_msgs/msg/Gpgst";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::Gpgst>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::Gpgst>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_modules_msgs::msg::Gpgst>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPGST__TRAITS_HPP_
