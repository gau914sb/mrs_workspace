// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/UavState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/uav_state.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__UAV_STATE__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__UAV_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/uav_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'acceleration'
// Member 'acceleration_disturbance'
#include "geometry_msgs/msg/detail/accel__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UavState & msg,
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

  // member: estimator_iteration
  {
    out << "estimator_iteration: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_iteration, out);
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

  // member: acceleration_disturbance
  {
    out << "acceleration_disturbance: ";
    to_flow_style_yaml(msg.acceleration_disturbance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UavState & msg,
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

  // member: estimator_iteration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimator_iteration: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_iteration, out);
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

  // member: acceleration_disturbance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_disturbance:\n";
    to_block_style_yaml(msg.acceleration_disturbance, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UavState & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::UavState & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::UavState & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::UavState>()
{
  return "mrs_msgs::msg::UavState";
}

template<>
inline const char * name<mrs_msgs::msg::UavState>()
{
  return "mrs_msgs/msg/UavState";
}

template<>
struct has_fixed_size<mrs_msgs::msg::UavState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::UavState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::UavState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__UAV_STATE__TRAITS_HPP_
