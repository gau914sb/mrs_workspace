// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/GazeboSpawnerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gazebo_spawner_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__GAZEBO_SPAWNER_DIAGNOSTICS__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__GAZEBO_SPAWNER_DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/gazebo_spawner_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GazeboSpawnerDiagnostics & msg,
  std::ostream & out)
{
  out << "{";
  // member: spawn_called
  {
    out << "spawn_called: ";
    rosidl_generator_traits::value_to_yaml(msg.spawn_called, out);
    out << ", ";
  }

  // member: processing
  {
    out << "processing: ";
    rosidl_generator_traits::value_to_yaml(msg.processing, out);
    out << ", ";
  }

  // member: active_vehicles
  {
    if (msg.active_vehicles.size() == 0) {
      out << "active_vehicles: []";
    } else {
      out << "active_vehicles: [";
      size_t pending_items = msg.active_vehicles.size();
      for (auto item : msg.active_vehicles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: queued_vehicles
  {
    if (msg.queued_vehicles.size() == 0) {
      out << "queued_vehicles: []";
    } else {
      out << "queued_vehicles: [";
      size_t pending_items = msg.queued_vehicles.size();
      for (auto item : msg.queued_vehicles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: queued_processes
  {
    out << "queued_processes: ";
    rosidl_generator_traits::value_to_yaml(msg.queued_processes, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GazeboSpawnerDiagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: spawn_called
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spawn_called: ";
    rosidl_generator_traits::value_to_yaml(msg.spawn_called, out);
    out << "\n";
  }

  // member: processing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "processing: ";
    rosidl_generator_traits::value_to_yaml(msg.processing, out);
    out << "\n";
  }

  // member: active_vehicles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.active_vehicles.size() == 0) {
      out << "active_vehicles: []\n";
    } else {
      out << "active_vehicles:\n";
      for (auto item : msg.active_vehicles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: queued_vehicles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.queued_vehicles.size() == 0) {
      out << "queued_vehicles: []\n";
    } else {
      out << "queued_vehicles:\n";
      for (auto item : msg.queued_vehicles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: queued_processes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "queued_processes: ";
    rosidl_generator_traits::value_to_yaml(msg.queued_processes, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GazeboSpawnerDiagnostics & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::GazeboSpawnerDiagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::GazeboSpawnerDiagnostics & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::GazeboSpawnerDiagnostics>()
{
  return "mrs_msgs::msg::GazeboSpawnerDiagnostics";
}

template<>
inline const char * name<mrs_msgs::msg::GazeboSpawnerDiagnostics>()
{
  return "mrs_msgs/msg/GazeboSpawnerDiagnostics";
}

template<>
struct has_fixed_size<mrs_msgs::msg::GazeboSpawnerDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::GazeboSpawnerDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::GazeboSpawnerDiagnostics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__GAZEBO_SPAWNER_DIAGNOSTICS__TRAITS_HPP_
