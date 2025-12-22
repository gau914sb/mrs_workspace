// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/CustomTopic.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/custom_topic.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__CUSTOM_TOPIC__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__CUSTOM_TOPIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/custom_topic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CustomTopic & msg,
  std::ostream & out)
{
  out << "{";
  // member: topic_name
  {
    out << "topic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_name, out);
    out << ", ";
  }

  // member: topic_hz
  {
    out << "topic_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_hz, out);
    out << ", ";
  }

  // member: topic_color
  {
    out << "topic_color: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_color, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CustomTopic & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: topic_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_name, out);
    out << "\n";
  }

  // member: topic_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_hz, out);
    out << "\n";
  }

  // member: topic_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_color: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_color, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomTopic & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::CustomTopic & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::CustomTopic & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::CustomTopic>()
{
  return "mrs_msgs::msg::CustomTopic";
}

template<>
inline const char * name<mrs_msgs::msg::CustomTopic>()
{
  return "mrs_msgs/msg/CustomTopic";
}

template<>
struct has_fixed_size<mrs_msgs::msg::CustomTopic>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::CustomTopic>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::CustomTopic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__CUSTOM_TOPIC__TRAITS_HPP_
