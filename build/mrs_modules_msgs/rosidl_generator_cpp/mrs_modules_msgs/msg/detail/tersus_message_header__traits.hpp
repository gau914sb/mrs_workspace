// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/TersusMessageHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/tersus_message_header.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__TERSUS_MESSAGE_HEADER__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__TERSUS_MESSAGE_HEADER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/tersus_message_header__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TersusMessageHeader & msg,
  std::ostream & out)
{
  out << "{";
  // member: message_name
  {
    out << "message_name: ";
    rosidl_generator_traits::value_to_yaml(msg.message_name, out);
    out << ", ";
  }

  // member: port_address
  {
    out << "port_address: ";
    rosidl_generator_traits::value_to_yaml(msg.port_address, out);
    out << ", ";
  }

  // member: sequence
  {
    out << "sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence, out);
    out << ", ";
  }

  // member: idle_time
  {
    out << "idle_time: ";
    rosidl_generator_traits::value_to_yaml(msg.idle_time, out);
    out << ", ";
  }

  // member: time_status
  {
    out << "time_status: ";
    rosidl_generator_traits::value_to_yaml(msg.time_status, out);
    out << ", ";
  }

  // member: gps_week
  {
    out << "gps_week: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_week, out);
    out << ", ";
  }

  // member: gps_week_seconds
  {
    out << "gps_week_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_week_seconds, out);
    out << ", ";
  }

  // member: receiver_status
  {
    out << "receiver_status: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_status, out);
    out << ", ";
  }

  // member: software_version
  {
    out << "software_version: ";
    rosidl_generator_traits::value_to_yaml(msg.software_version, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TersusMessageHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_name: ";
    rosidl_generator_traits::value_to_yaml(msg.message_name, out);
    out << "\n";
  }

  // member: port_address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port_address: ";
    rosidl_generator_traits::value_to_yaml(msg.port_address, out);
    out << "\n";
  }

  // member: sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence, out);
    out << "\n";
  }

  // member: idle_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idle_time: ";
    rosidl_generator_traits::value_to_yaml(msg.idle_time, out);
    out << "\n";
  }

  // member: time_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_status: ";
    rosidl_generator_traits::value_to_yaml(msg.time_status, out);
    out << "\n";
  }

  // member: gps_week
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_week: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_week, out);
    out << "\n";
  }

  // member: gps_week_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_week_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_week_seconds, out);
    out << "\n";
  }

  // member: receiver_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "receiver_status: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_status, out);
    out << "\n";
  }

  // member: software_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "software_version: ";
    rosidl_generator_traits::value_to_yaml(msg.software_version, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TersusMessageHeader & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::msg::TersusMessageHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::TersusMessageHeader & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::TersusMessageHeader>()
{
  return "mrs_modules_msgs::msg::TersusMessageHeader";
}

template<>
inline const char * name<mrs_modules_msgs::msg::TersusMessageHeader>()
{
  return "mrs_modules_msgs/msg/TersusMessageHeader";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::TersusMessageHeader>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::TersusMessageHeader>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_modules_msgs::msg::TersusMessageHeader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__TERSUS_MESSAGE_HEADER__TRAITS_HPP_
