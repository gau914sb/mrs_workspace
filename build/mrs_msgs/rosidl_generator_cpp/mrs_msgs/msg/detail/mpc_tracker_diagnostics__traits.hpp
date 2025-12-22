// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/MpcTrackerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/mpc_tracker_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__MPC_TRACKER_DIAGNOSTICS__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__MPC_TRACKER_DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/mpc_tracker_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'setpoint'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MpcTrackerDiagnostics & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: uav_name
  {
    out << "uav_name: ";
    rosidl_generator_traits::value_to_yaml(msg.uav_name, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << ", ";
  }

  // member: collision_avoidance_active
  {
    out << "collision_avoidance_active: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_avoidance_active, out);
    out << ", ";
  }

  // member: avoiding_collision
  {
    out << "avoiding_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.avoiding_collision, out);
    out << ", ";
  }

  // member: avoidance_active_uavs
  {
    if (msg.avoidance_active_uavs.size() == 0) {
      out << "avoidance_active_uavs: []";
    } else {
      out << "avoidance_active_uavs: [";
      size_t pending_items = msg.avoidance_active_uavs.size();
      for (auto item : msg.avoidance_active_uavs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: setpoint
  {
    out << "setpoint: ";
    to_flow_style_yaml(msg.setpoint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MpcTrackerDiagnostics & msg,
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

  // member: uav_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uav_name: ";
    rosidl_generator_traits::value_to_yaml(msg.uav_name, out);
    out << "\n";
  }

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }

  // member: collision_avoidance_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_avoidance_active: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_avoidance_active, out);
    out << "\n";
  }

  // member: avoiding_collision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avoiding_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.avoiding_collision, out);
    out << "\n";
  }

  // member: avoidance_active_uavs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.avoidance_active_uavs.size() == 0) {
      out << "avoidance_active_uavs: []\n";
    } else {
      out << "avoidance_active_uavs:\n";
      for (auto item : msg.avoidance_active_uavs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "setpoint:\n";
    to_block_style_yaml(msg.setpoint, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MpcTrackerDiagnostics & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::MpcTrackerDiagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::MpcTrackerDiagnostics & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::MpcTrackerDiagnostics>()
{
  return "mrs_msgs::msg::MpcTrackerDiagnostics";
}

template<>
inline const char * name<mrs_msgs::msg::MpcTrackerDiagnostics>()
{
  return "mrs_msgs/msg/MpcTrackerDiagnostics";
}

template<>
struct has_fixed_size<mrs_msgs::msg::MpcTrackerDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::MpcTrackerDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::MpcTrackerDiagnostics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__MPC_TRACKER_DIAGNOSTICS__TRAITS_HPP_
