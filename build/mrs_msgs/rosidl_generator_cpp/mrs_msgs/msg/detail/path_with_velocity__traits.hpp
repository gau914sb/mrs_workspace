// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/PathWithVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/path_with_velocity.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__PATH_WITH_VELOCITY__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__PATH_WITH_VELOCITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/path_with_velocity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'points'
#include "mrs_msgs/msg/detail/reference_with_velocity__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathWithVelocity & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: input_id
  {
    out << "input_id: ";
    rosidl_generator_traits::value_to_yaml(msg.input_id, out);
    out << ", ";
  }

  // member: use_heading
  {
    out << "use_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.use_heading, out);
    out << ", ";
  }

  // member: fly_now
  {
    out << "fly_now: ";
    rosidl_generator_traits::value_to_yaml(msg.fly_now, out);
    out << ", ";
  }

  // member: stop_at_waypoints
  {
    out << "stop_at_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_at_waypoints, out);
    out << ", ";
  }

  // member: loop
  {
    out << "loop: ";
    rosidl_generator_traits::value_to_yaml(msg.loop, out);
    out << ", ";
  }

  // member: override_constraints
  {
    out << "override_constraints: ";
    rosidl_generator_traits::value_to_yaml(msg.override_constraints, out);
    out << ", ";
  }

  // member: override_max_velocity_horizontal
  {
    out << "override_max_velocity_horizontal: ";
    rosidl_generator_traits::value_to_yaml(msg.override_max_velocity_horizontal, out);
    out << ", ";
  }

  // member: override_max_acceleration_horizontal
  {
    out << "override_max_acceleration_horizontal: ";
    rosidl_generator_traits::value_to_yaml(msg.override_max_acceleration_horizontal, out);
    out << ", ";
  }

  // member: override_max_velocity_vertical
  {
    out << "override_max_velocity_vertical: ";
    rosidl_generator_traits::value_to_yaml(msg.override_max_velocity_vertical, out);
    out << ", ";
  }

  // member: override_max_acceleration_vertical
  {
    out << "override_max_acceleration_vertical: ";
    rosidl_generator_traits::value_to_yaml(msg.override_max_acceleration_vertical, out);
    out << ", ";
  }

  // member: relax_heading
  {
    out << "relax_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.relax_heading, out);
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
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
  const PathWithVelocity & msg,
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

  // member: input_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_id: ";
    rosidl_generator_traits::value_to_yaml(msg.input_id, out);
    out << "\n";
  }

  // member: use_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.use_heading, out);
    out << "\n";
  }

  // member: fly_now
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fly_now: ";
    rosidl_generator_traits::value_to_yaml(msg.fly_now, out);
    out << "\n";
  }

  // member: stop_at_waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_at_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_at_waypoints, out);
    out << "\n";
  }

  // member: loop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop: ";
    rosidl_generator_traits::value_to_yaml(msg.loop, out);
    out << "\n";
  }

  // member: override_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "override_constraints: ";
    rosidl_generator_traits::value_to_yaml(msg.override_constraints, out);
    out << "\n";
  }

  // member: override_max_velocity_horizontal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "override_max_velocity_horizontal: ";
    rosidl_generator_traits::value_to_yaml(msg.override_max_velocity_horizontal, out);
    out << "\n";
  }

  // member: override_max_acceleration_horizontal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "override_max_acceleration_horizontal: ";
    rosidl_generator_traits::value_to_yaml(msg.override_max_acceleration_horizontal, out);
    out << "\n";
  }

  // member: override_max_velocity_vertical
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "override_max_velocity_vertical: ";
    rosidl_generator_traits::value_to_yaml(msg.override_max_velocity_vertical, out);
    out << "\n";
  }

  // member: override_max_acceleration_vertical
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "override_max_acceleration_vertical: ";
    rosidl_generator_traits::value_to_yaml(msg.override_max_acceleration_vertical, out);
    out << "\n";
  }

  // member: relax_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relax_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.relax_heading, out);
    out << "\n";
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathWithVelocity & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::PathWithVelocity & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::PathWithVelocity & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::PathWithVelocity>()
{
  return "mrs_msgs::msg::PathWithVelocity";
}

template<>
inline const char * name<mrs_msgs::msg::PathWithVelocity>()
{
  return "mrs_msgs/msg/PathWithVelocity";
}

template<>
struct has_fixed_size<mrs_msgs::msg::PathWithVelocity>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::PathWithVelocity>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::PathWithVelocity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__PATH_WITH_VELOCITY__TRAITS_HPP_
