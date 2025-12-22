// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/ErrorgraphElement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/errorgraph_element.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/errorgraph_element__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'source_node'
#include "mrs_msgs/msg/detail/errorgraph_node_id__traits.hpp"
// Member 'errors'
#include "mrs_msgs/msg/detail/errorgraph_error__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ErrorgraphElement & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: source_node
  {
    out << "source_node: ";
    to_flow_style_yaml(msg.source_node, out);
    out << ", ";
  }

  // member: errors
  {
    if (msg.errors.size() == 0) {
      out << "errors: []";
    } else {
      out << "errors: [";
      size_t pending_items = msg.errors.size();
      for (auto item : msg.errors) {
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
  const ErrorgraphElement & msg,
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

  // member: source_node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_node:\n";
    to_block_style_yaml(msg.source_node, out, indentation + 2);
  }

  // member: errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.errors.size() == 0) {
      out << "errors: []\n";
    } else {
      out << "errors:\n";
      for (auto item : msg.errors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ErrorgraphElement & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::ErrorgraphElement & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::ErrorgraphElement & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::ErrorgraphElement>()
{
  return "mrs_msgs::msg::ErrorgraphElement";
}

template<>
inline const char * name<mrs_msgs::msg::ErrorgraphElement>()
{
  return "mrs_msgs/msg/ErrorgraphElement";
}

template<>
struct has_fixed_size<mrs_msgs::msg::ErrorgraphElement>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::ErrorgraphElement>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::ErrorgraphElement>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT__TRAITS_HPP_
