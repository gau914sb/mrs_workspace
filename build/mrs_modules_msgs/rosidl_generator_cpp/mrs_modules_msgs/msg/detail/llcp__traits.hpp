// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/Llcp.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/llcp.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__LLCP__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__LLCP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/llcp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Llcp & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: checksum_matched
  {
    out << "checksum_matched: ";
    rosidl_generator_traits::value_to_yaml(msg.checksum_matched, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: payload
  {
    if (msg.payload.size() == 0) {
      out << "payload: []";
    } else {
      out << "payload: [";
      size_t pending_items = msg.payload.size();
      for (auto item : msg.payload) {
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
  const Llcp & msg,
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

  // member: checksum_matched
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "checksum_matched: ";
    rosidl_generator_traits::value_to_yaml(msg.checksum_matched, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.payload.size() == 0) {
      out << "payload: []\n";
    } else {
      out << "payload:\n";
      for (auto item : msg.payload) {
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

inline std::string to_yaml(const Llcp & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::msg::Llcp & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::Llcp & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::Llcp>()
{
  return "mrs_modules_msgs::msg::Llcp";
}

template<>
inline const char * name<mrs_modules_msgs::msg::Llcp>()
{
  return "mrs_modules_msgs/msg/Llcp";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::Llcp>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::Llcp>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_modules_msgs::msg::Llcp>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__LLCP__TRAITS_HPP_
