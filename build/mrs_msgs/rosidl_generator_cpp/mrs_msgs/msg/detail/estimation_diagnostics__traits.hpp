// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/EstimationDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/estimation_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__ESTIMATION_DIAGNOSTICS__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__ESTIMATION_DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/estimation_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'acceleration'
#include "geometry_msgs/msg/detail/accel__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EstimationDiagnostics & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: child_frame_id
  {
    out << "child_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.child_frame_id, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    to_flow_style_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: agl_height
  {
    out << "agl_height: ";
    rosidl_generator_traits::value_to_yaml(msg.agl_height, out);
    out << ", ";
  }

  // member: max_flight_z
  {
    out << "max_flight_z: ";
    rosidl_generator_traits::value_to_yaml(msg.max_flight_z, out);
    out << ", ";
  }

  // member: sm_state
  {
    out << "sm_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_state, out);
    out << ", ";
  }

  // member: current_state_estimator
  {
    out << "current_state_estimator: ";
    rosidl_generator_traits::value_to_yaml(msg.current_state_estimator, out);
    out << ", ";
  }

  // member: estimator_horizontal
  {
    out << "estimator_horizontal: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_horizontal, out);
    out << ", ";
  }

  // member: estimator_vertical
  {
    out << "estimator_vertical: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_vertical, out);
    out << ", ";
  }

  // member: estimator_heading
  {
    out << "estimator_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_heading, out);
    out << ", ";
  }

  // member: estimator_agl_height
  {
    out << "estimator_agl_height: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_agl_height, out);
    out << ", ";
  }

  // member: estimation_rate
  {
    out << "estimation_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.estimation_rate, out);
    out << ", ";
  }

  // member: estimator_iteration
  {
    out << "estimator_iteration: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_iteration, out);
    out << ", ";
  }

  // member: running_state_estimators
  {
    if (msg.running_state_estimators.size() == 0) {
      out << "running_state_estimators: []";
    } else {
      out << "running_state_estimators: [";
      size_t pending_items = msg.running_state_estimators.size();
      for (auto item : msg.running_state_estimators) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: switchable_state_estimators
  {
    if (msg.switchable_state_estimators.size() == 0) {
      out << "switchable_state_estimators: []";
    } else {
      out << "switchable_state_estimators: [";
      size_t pending_items = msg.switchable_state_estimators.size();
      for (auto item : msg.switchable_state_estimators) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: platform_config
  {
    out << "platform_config: ";
    rosidl_generator_traits::value_to_yaml(msg.platform_config, out);
    out << ", ";
  }

  // member: custom_config
  {
    out << "custom_config: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_config, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EstimationDiagnostics & msg,
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

  // member: child_frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.child_frame_id, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration:\n";
    to_block_style_yaml(msg.acceleration, out, indentation + 2);
  }

  // member: agl_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "agl_height: ";
    rosidl_generator_traits::value_to_yaml(msg.agl_height, out);
    out << "\n";
  }

  // member: max_flight_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_flight_z: ";
    rosidl_generator_traits::value_to_yaml(msg.max_flight_z, out);
    out << "\n";
  }

  // member: sm_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_state, out);
    out << "\n";
  }

  // member: current_state_estimator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_state_estimator: ";
    rosidl_generator_traits::value_to_yaml(msg.current_state_estimator, out);
    out << "\n";
  }

  // member: estimator_horizontal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimator_horizontal: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_horizontal, out);
    out << "\n";
  }

  // member: estimator_vertical
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimator_vertical: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_vertical, out);
    out << "\n";
  }

  // member: estimator_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimator_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_heading, out);
    out << "\n";
  }

  // member: estimator_agl_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimator_agl_height: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_agl_height, out);
    out << "\n";
  }

  // member: estimation_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimation_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.estimation_rate, out);
    out << "\n";
  }

  // member: estimator_iteration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimator_iteration: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_iteration, out);
    out << "\n";
  }

  // member: running_state_estimators
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.running_state_estimators.size() == 0) {
      out << "running_state_estimators: []\n";
    } else {
      out << "running_state_estimators:\n";
      for (auto item : msg.running_state_estimators) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: switchable_state_estimators
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.switchable_state_estimators.size() == 0) {
      out << "switchable_state_estimators: []\n";
    } else {
      out << "switchable_state_estimators:\n";
      for (auto item : msg.switchable_state_estimators) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: platform_config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "platform_config: ";
    rosidl_generator_traits::value_to_yaml(msg.platform_config, out);
    out << "\n";
  }

  // member: custom_config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_config: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_config, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EstimationDiagnostics & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::EstimationDiagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::EstimationDiagnostics & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::EstimationDiagnostics>()
{
  return "mrs_msgs::msg::EstimationDiagnostics";
}

template<>
inline const char * name<mrs_msgs::msg::EstimationDiagnostics>()
{
  return "mrs_msgs/msg/EstimationDiagnostics";
}

template<>
struct has_fixed_size<mrs_msgs::msg::EstimationDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::EstimationDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::EstimationDiagnostics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__ESTIMATION_DIAGNOSTICS__TRAITS_HPP_
