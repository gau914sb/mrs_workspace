// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/ControlManagerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/control_manager_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__CONTROL_MANAGER_DIAGNOSTICS__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__CONTROL_MANAGER_DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/control_manager_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'tracker_status'
#include "mrs_msgs/msg/detail/tracker_status__traits.hpp"
// Member 'controller_status'
#include "mrs_msgs/msg/detail/controller_status__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlManagerDiagnostics & msg,
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

  // member: output_enabled
  {
    out << "output_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.output_enabled, out);
    out << ", ";
  }

  // member: flying_normally
  {
    out << "flying_normally: ";
    rosidl_generator_traits::value_to_yaml(msg.flying_normally, out);
    out << ", ";
  }

  // member: joystick_active
  {
    out << "joystick_active: ";
    rosidl_generator_traits::value_to_yaml(msg.joystick_active, out);
    out << ", ";
  }

  // member: bumper_active
  {
    out << "bumper_active: ";
    rosidl_generator_traits::value_to_yaml(msg.bumper_active, out);
    out << ", ";
  }

  // member: desired_uav_state_rate
  {
    out << "desired_uav_state_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_uav_state_rate, out);
    out << ", ";
  }

  // member: active_tracker
  {
    out << "active_tracker: ";
    rosidl_generator_traits::value_to_yaml(msg.active_tracker, out);
    out << ", ";
  }

  // member: tracker_status
  {
    out << "tracker_status: ";
    to_flow_style_yaml(msg.tracker_status, out);
    out << ", ";
  }

  // member: active_controller
  {
    out << "active_controller: ";
    rosidl_generator_traits::value_to_yaml(msg.active_controller, out);
    out << ", ";
  }

  // member: controller_status
  {
    out << "controller_status: ";
    to_flow_style_yaml(msg.controller_status, out);
    out << ", ";
  }

  // member: available_controllers
  {
    if (msg.available_controllers.size() == 0) {
      out << "available_controllers: []";
    } else {
      out << "available_controllers: [";
      size_t pending_items = msg.available_controllers.size();
      for (auto item : msg.available_controllers) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: available_trackers
  {
    if (msg.available_trackers.size() == 0) {
      out << "available_trackers: []";
    } else {
      out << "available_trackers: [";
      size_t pending_items = msg.available_trackers.size();
      for (auto item : msg.available_trackers) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: human_switchable_controllers
  {
    if (msg.human_switchable_controllers.size() == 0) {
      out << "human_switchable_controllers: []";
    } else {
      out << "human_switchable_controllers: [";
      size_t pending_items = msg.human_switchable_controllers.size();
      for (auto item : msg.human_switchable_controllers) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: human_switchable_trackers
  {
    if (msg.human_switchable_trackers.size() == 0) {
      out << "human_switchable_trackers: []";
    } else {
      out << "human_switchable_trackers: [";
      size_t pending_items = msg.human_switchable_trackers.size();
      for (auto item : msg.human_switchable_trackers) {
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
  const ControlManagerDiagnostics & msg,
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

  // member: output_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.output_enabled, out);
    out << "\n";
  }

  // member: flying_normally
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flying_normally: ";
    rosidl_generator_traits::value_to_yaml(msg.flying_normally, out);
    out << "\n";
  }

  // member: joystick_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joystick_active: ";
    rosidl_generator_traits::value_to_yaml(msg.joystick_active, out);
    out << "\n";
  }

  // member: bumper_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bumper_active: ";
    rosidl_generator_traits::value_to_yaml(msg.bumper_active, out);
    out << "\n";
  }

  // member: desired_uav_state_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_uav_state_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_uav_state_rate, out);
    out << "\n";
  }

  // member: active_tracker
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_tracker: ";
    rosidl_generator_traits::value_to_yaml(msg.active_tracker, out);
    out << "\n";
  }

  // member: tracker_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracker_status:\n";
    to_block_style_yaml(msg.tracker_status, out, indentation + 2);
  }

  // member: active_controller
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_controller: ";
    rosidl_generator_traits::value_to_yaml(msg.active_controller, out);
    out << "\n";
  }

  // member: controller_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_status:\n";
    to_block_style_yaml(msg.controller_status, out, indentation + 2);
  }

  // member: available_controllers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.available_controllers.size() == 0) {
      out << "available_controllers: []\n";
    } else {
      out << "available_controllers:\n";
      for (auto item : msg.available_controllers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: available_trackers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.available_trackers.size() == 0) {
      out << "available_trackers: []\n";
    } else {
      out << "available_trackers:\n";
      for (auto item : msg.available_trackers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: human_switchable_controllers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.human_switchable_controllers.size() == 0) {
      out << "human_switchable_controllers: []\n";
    } else {
      out << "human_switchable_controllers:\n";
      for (auto item : msg.human_switchable_controllers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: human_switchable_trackers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.human_switchable_trackers.size() == 0) {
      out << "human_switchable_trackers: []\n";
    } else {
      out << "human_switchable_trackers:\n";
      for (auto item : msg.human_switchable_trackers) {
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

inline std::string to_yaml(const ControlManagerDiagnostics & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::ControlManagerDiagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::ControlManagerDiagnostics & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::ControlManagerDiagnostics>()
{
  return "mrs_msgs::msg::ControlManagerDiagnostics";
}

template<>
inline const char * name<mrs_msgs::msg::ControlManagerDiagnostics>()
{
  return "mrs_msgs/msg/ControlManagerDiagnostics";
}

template<>
struct has_fixed_size<mrs_msgs::msg::ControlManagerDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::ControlManagerDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::ControlManagerDiagnostics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__CONTROL_MANAGER_DIAGNOSTICS__TRAITS_HPP_
