// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/SensorInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/sensor_info.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__SENSOR_INFO__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__SENSOR_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/sensor_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: topic
  {
    out << "topic: ";
    rosidl_generator_traits::value_to_yaml(msg.topic, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: expected_rate
  {
    out << "expected_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic: ";
    rosidl_generator_traits::value_to_yaml(msg.topic, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: expected_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "expected_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorInfo & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::msg::SensorInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::SensorInfo & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::SensorInfo>()
{
  return "mrs_modules_msgs::msg::SensorInfo";
}

template<>
inline const char * name<mrs_modules_msgs::msg::SensorInfo>()
{
  return "mrs_modules_msgs/msg/SensorInfo";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::SensorInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::SensorInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_modules_msgs::msg::SensorInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__SENSOR_INFO__TRAITS_HPP_
