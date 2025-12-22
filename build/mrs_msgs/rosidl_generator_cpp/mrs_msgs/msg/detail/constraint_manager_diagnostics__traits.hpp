// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/ConstraintManagerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/constraint_manager_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__CONSTRAINT_MANAGER_DIAGNOSTICS__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__CONSTRAINT_MANAGER_DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/constraint_manager_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'current_values'
#include "mrs_msgs/msg/detail/dynamics_constraints__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConstraintManagerDiagnostics & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: loaded
  {
    if (msg.loaded.size() == 0) {
      out << "loaded: []";
    } else {
      out << "loaded: [";
      size_t pending_items = msg.loaded.size();
      for (auto item : msg.loaded) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: available
  {
    if (msg.available.size() == 0) {
      out << "available: []";
    } else {
      out << "available: [";
      size_t pending_items = msg.available.size();
      for (auto item : msg.available) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_name
  {
    out << "current_name: ";
    rosidl_generator_traits::value_to_yaml(msg.current_name, out);
    out << ", ";
  }

  // member: current_values
  {
    out << "current_values: ";
    to_flow_style_yaml(msg.current_values, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConstraintManagerDiagnostics & msg,
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

  // member: loaded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.loaded.size() == 0) {
      out << "loaded: []\n";
    } else {
      out << "loaded:\n";
      for (auto item : msg.loaded) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.available.size() == 0) {
      out << "available: []\n";
    } else {
      out << "available:\n";
      for (auto item : msg.available) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_name: ";
    rosidl_generator_traits::value_to_yaml(msg.current_name, out);
    out << "\n";
  }

  // member: current_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_values:\n";
    to_block_style_yaml(msg.current_values, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConstraintManagerDiagnostics & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::ConstraintManagerDiagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::ConstraintManagerDiagnostics & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::ConstraintManagerDiagnostics>()
{
  return "mrs_msgs::msg::ConstraintManagerDiagnostics";
}

template<>
inline const char * name<mrs_msgs::msg::ConstraintManagerDiagnostics>()
{
  return "mrs_msgs/msg/ConstraintManagerDiagnostics";
}

template<>
struct has_fixed_size<mrs_msgs::msg::ConstraintManagerDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::ConstraintManagerDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::ConstraintManagerDiagnostics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__CONSTRAINT_MANAGER_DIAGNOSTICS__TRAITS_HPP_
