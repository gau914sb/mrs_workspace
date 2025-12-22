// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/SafetyAreaManagerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/safety_area_manager_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__SAFETY_AREA_MANAGER_DIAGNOSTICS__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__SAFETY_AREA_MANAGER_DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/safety_area_manager_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'world_origin'
#include "mrs_msgs/msg/detail/world_origin__traits.hpp"
// Member 'border'
// Member 'obstacles'
#include "mrs_msgs/msg/detail/prism__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SafetyAreaManagerDiagnostics & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: uav_name
  {
    out << "uav_name: ";
    rosidl_generator_traits::value_to_yaml(msg.uav_name, out);
    out << ", ";
  }

  // member: world_origin
  {
    out << "world_origin: ";
    to_flow_style_yaml(msg.world_origin, out);
    out << ", ";
  }

  // member: safety_area_enabled
  {
    out << "safety_area_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_area_enabled, out);
    out << ", ";
  }

  // member: position_valid_2d
  {
    out << "position_valid_2d: ";
    rosidl_generator_traits::value_to_yaml(msg.position_valid_2d, out);
    out << ", ";
  }

  // member: position_valid_3d
  {
    out << "position_valid_3d: ";
    rosidl_generator_traits::value_to_yaml(msg.position_valid_3d, out);
    out << ", ";
  }

  // member: border
  {
    out << "border: ";
    to_flow_style_yaml(msg.border, out);
    out << ", ";
  }

  // member: obstacles_present
  {
    out << "obstacles_present: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacles_present, out);
    out << ", ";
  }

  // member: obstacles
  {
    if (msg.obstacles.size() == 0) {
      out << "obstacles: []";
    } else {
      out << "obstacles: [";
      size_t pending_items = msg.obstacles.size();
      for (auto item : msg.obstacles) {
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
  const SafetyAreaManagerDiagnostics & msg,
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

  // member: uav_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uav_name: ";
    rosidl_generator_traits::value_to_yaml(msg.uav_name, out);
    out << "\n";
  }

  // member: world_origin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_origin:\n";
    to_block_style_yaml(msg.world_origin, out, indentation + 2);
  }

  // member: safety_area_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_area_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_area_enabled, out);
    out << "\n";
  }

  // member: position_valid_2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_valid_2d: ";
    rosidl_generator_traits::value_to_yaml(msg.position_valid_2d, out);
    out << "\n";
  }

  // member: position_valid_3d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_valid_3d: ";
    rosidl_generator_traits::value_to_yaml(msg.position_valid_3d, out);
    out << "\n";
  }

  // member: border
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "border:\n";
    to_block_style_yaml(msg.border, out, indentation + 2);
  }

  // member: obstacles_present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacles_present: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacles_present, out);
    out << "\n";
  }

  // member: obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstacles.size() == 0) {
      out << "obstacles: []\n";
    } else {
      out << "obstacles:\n";
      for (auto item : msg.obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SafetyAreaManagerDiagnostics & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::SafetyAreaManagerDiagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::SafetyAreaManagerDiagnostics & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::SafetyAreaManagerDiagnostics>()
{
  return "mrs_msgs::msg::SafetyAreaManagerDiagnostics";
}

template<>
inline const char * name<mrs_msgs::msg::SafetyAreaManagerDiagnostics>()
{
  return "mrs_msgs/msg/SafetyAreaManagerDiagnostics";
}

template<>
struct has_fixed_size<mrs_msgs::msg::SafetyAreaManagerDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::SafetyAreaManagerDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::SafetyAreaManagerDiagnostics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__SAFETY_AREA_MANAGER_DIAGNOSTICS__TRAITS_HPP_
