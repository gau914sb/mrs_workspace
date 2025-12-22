// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/Range.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/range.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__RANGE__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__RANGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/range__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'tersus_msg_header'
#include "mrs_modules_msgs/msg/detail/tersus_message_header__traits.hpp"
// Member 'info'
#include "mrs_modules_msgs/msg/detail/range_information__traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Range & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tersus_msg_header
  {
    out << "tersus_msg_header: ";
    to_flow_style_yaml(msg.tersus_msg_header, out);
    out << ", ";
  }

  // member: numb_of_observ
  {
    out << "numb_of_observ: ";
    rosidl_generator_traits::value_to_yaml(msg.numb_of_observ, out);
    out << ", ";
  }

  // member: info
  {
    if (msg.info.size() == 0) {
      out << "info: []";
    } else {
      out << "info: [";
      size_t pending_items = msg.info.size();
      for (auto item : msg.info) {
        to_flow_style_yaml(item, out);
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
  const Range & msg,
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

  // member: tersus_msg_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tersus_msg_header:\n";
    to_block_style_yaml(msg.tersus_msg_header, out, indentation + 2);
  }

  // member: numb_of_observ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "numb_of_observ: ";
    rosidl_generator_traits::value_to_yaml(msg.numb_of_observ, out);
    out << "\n";
  }

  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.info.size() == 0) {
      out << "info: []\n";
    } else {
      out << "info:\n";
      for (auto item : msg.info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Range & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::msg::Range & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::Range & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::Range>()
{
  return "mrs_modules_msgs::msg::Range";
}

template<>
inline const char * name<mrs_modules_msgs::msg::Range>()
{
  return "mrs_modules_msgs/msg/Range";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::Range>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::Range>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_modules_msgs::msg::Range>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__RANGE__TRAITS_HPP_
