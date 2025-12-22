// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/HwApiRcChannels.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_rc_channels.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_RC_CHANNELS__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_RC_CHANNELS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/hw_api_rc_channels__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HwApiRcChannels & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: channels
  {
    if (msg.channels.size() == 0) {
      out << "channels: []";
    } else {
      out << "channels: [";
      size_t pending_items = msg.channels.size();
      for (auto item : msg.channels) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const HwApiRcChannels & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: channels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.channels.size() == 0) {
      out << "channels: []\n";
    } else {
      out << "channels:\n";
      for (auto item : msg.channels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HwApiRcChannels & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::HwApiRcChannels & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::HwApiRcChannels & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::HwApiRcChannels>()
{
  return "mrs_msgs::msg::HwApiRcChannels";
}

template<>
inline const char * name<mrs_msgs::msg::HwApiRcChannels>()
{
  return "mrs_msgs/msg/HwApiRcChannels";
}

template<>
struct has_fixed_size<mrs_msgs::msg::HwApiRcChannels>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::HwApiRcChannels>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::HwApiRcChannels>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_RC_CHANNELS__TRAITS_HPP_
