// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/ErrorgraphNodeID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/errorgraph_node_id.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__ERRORGRAPH_NODE_ID__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__ERRORGRAPH_NODE_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/errorgraph_node_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ErrorgraphNodeID & msg,
  std::ostream & out)
{
  out << "{";
  // member: node
  {
    out << "node: ";
    rosidl_generator_traits::value_to_yaml(msg.node, out);
    out << ", ";
  }

  // member: component
  {
    out << "component: ";
    rosidl_generator_traits::value_to_yaml(msg.component, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ErrorgraphNodeID & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node: ";
    rosidl_generator_traits::value_to_yaml(msg.node, out);
    out << "\n";
  }

  // member: component
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "component: ";
    rosidl_generator_traits::value_to_yaml(msg.component, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ErrorgraphNodeID & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::ErrorgraphNodeID & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::ErrorgraphNodeID & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::ErrorgraphNodeID>()
{
  return "mrs_msgs::msg::ErrorgraphNodeID";
}

template<>
inline const char * name<mrs_msgs::msg::ErrorgraphNodeID>()
{
  return "mrs_msgs/msg/ErrorgraphNodeID";
}

template<>
struct has_fixed_size<mrs_msgs::msg::ErrorgraphNodeID>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::ErrorgraphNodeID>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::ErrorgraphNodeID>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__ERRORGRAPH_NODE_ID__TRAITS_HPP_
