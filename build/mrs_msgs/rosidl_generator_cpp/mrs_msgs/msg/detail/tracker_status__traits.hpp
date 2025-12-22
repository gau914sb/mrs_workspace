// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/TrackerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/tracker_status.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__TRACKER_STATUS__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__TRACKER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/tracker_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'trajectory_reference'
#include "mrs_msgs/msg/detail/reference_stamped__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackerStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << ", ";
  }

  // member: callbacks_enabled
  {
    out << "callbacks_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.callbacks_enabled, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: have_goal
  {
    out << "have_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.have_goal, out);
    out << ", ";
  }

  // member: tracking_trajectory
  {
    out << "tracking_trajectory: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_trajectory, out);
    out << ", ";
  }

  // member: trajectory_length
  {
    out << "trajectory_length: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_length, out);
    out << ", ";
  }

  // member: trajectory_idx
  {
    out << "trajectory_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_idx, out);
    out << ", ";
  }

  // member: trajectory_reference
  {
    out << "trajectory_reference: ";
    to_flow_style_yaml(msg.trajectory_reference, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrackerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }

  // member: callbacks_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "callbacks_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.callbacks_enabled, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: have_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "have_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.have_goal, out);
    out << "\n";
  }

  // member: tracking_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_trajectory: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_trajectory, out);
    out << "\n";
  }

  // member: trajectory_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_length: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_length, out);
    out << "\n";
  }

  // member: trajectory_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_idx, out);
    out << "\n";
  }

  // member: trajectory_reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_reference:\n";
    to_block_style_yaml(msg.trajectory_reference, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackerStatus & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::TrackerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::TrackerStatus & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::TrackerStatus>()
{
  return "mrs_msgs::msg::TrackerStatus";
}

template<>
inline const char * name<mrs_msgs::msg::TrackerStatus>()
{
  return "mrs_msgs/msg/TrackerStatus";
}

template<>
struct has_fixed_size<mrs_msgs::msg::TrackerStatus>
  : std::integral_constant<bool, has_fixed_size<mrs_msgs::msg::ReferenceStamped>::value> {};

template<>
struct has_bounded_size<mrs_msgs::msg::TrackerStatus>
  : std::integral_constant<bool, has_bounded_size<mrs_msgs::msg::ReferenceStamped>::value> {};

template<>
struct is_message<mrs_msgs::msg::TrackerStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__TRACKER_STATUS__TRAITS_HPP_
