// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/ErrorgraphElementArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/errorgraph_element_array.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT_ARRAY__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/errorgraph_element_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'elements'
#include "mrs_msgs/msg/detail/errorgraph_element__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ErrorgraphElementArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: elements
  {
    if (msg.elements.size() == 0) {
      out << "elements: []";
    } else {
      out << "elements: [";
      size_t pending_items = msg.elements.size();
      for (auto item : msg.elements) {
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
  const ErrorgraphElementArray & msg,
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

  // member: elements
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.elements.size() == 0) {
      out << "elements: []\n";
    } else {
      out << "elements:\n";
      for (auto item : msg.elements) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ErrorgraphElementArray & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::ErrorgraphElementArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::ErrorgraphElementArray & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::ErrorgraphElementArray>()
{
  return "mrs_msgs::msg::ErrorgraphElementArray";
}

template<>
inline const char * name<mrs_msgs::msg::ErrorgraphElementArray>()
{
  return "mrs_msgs/msg/ErrorgraphElementArray";
}

template<>
struct has_fixed_size<mrs_msgs::msg::ErrorgraphElementArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::ErrorgraphElementArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::ErrorgraphElementArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT_ARRAY__TRAITS_HPP_
