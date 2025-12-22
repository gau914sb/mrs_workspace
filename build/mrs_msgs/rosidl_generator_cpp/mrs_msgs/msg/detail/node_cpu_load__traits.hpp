// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/NodeCpuLoad.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/node_cpu_load.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__NODE_CPU_LOAD__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__NODE_CPU_LOAD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/node_cpu_load__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeCpuLoad & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_names
  {
    if (msg.node_names.size() == 0) {
      out << "node_names: []";
    } else {
      out << "node_names: [";
      size_t pending_items = msg.node_names.size();
      for (auto item : msg.node_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cpu_loads
  {
    if (msg.cpu_loads.size() == 0) {
      out << "cpu_loads: []";
    } else {
      out << "cpu_loads: [";
      size_t pending_items = msg.cpu_loads.size();
      for (auto item : msg.cpu_loads) {
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
  const NodeCpuLoad & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.node_names.size() == 0) {
      out << "node_names: []\n";
    } else {
      out << "node_names:\n";
      for (auto item : msg.node_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cpu_loads
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cpu_loads.size() == 0) {
      out << "cpu_loads: []\n";
    } else {
      out << "cpu_loads:\n";
      for (auto item : msg.cpu_loads) {
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

inline std::string to_yaml(const NodeCpuLoad & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::NodeCpuLoad & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::NodeCpuLoad & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::NodeCpuLoad>()
{
  return "mrs_msgs::msg::NodeCpuLoad";
}

template<>
inline const char * name<mrs_msgs::msg::NodeCpuLoad>()
{
  return "mrs_msgs/msg/NodeCpuLoad";
}

template<>
struct has_fixed_size<mrs_msgs::msg::NodeCpuLoad>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::NodeCpuLoad>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::NodeCpuLoad>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__NODE_CPU_LOAD__TRAITS_HPP_
