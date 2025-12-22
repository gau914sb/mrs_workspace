// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/Gpvtg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gpvtg.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPVTG__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPVTG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/gpvtg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Gpvtg & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: message_id
  {
    out << "message_id: ";
    rosidl_generator_traits::value_to_yaml(msg.message_id, out);
    out << ", ";
  }

  // member: track_true
  {
    out << "track_true: ";
    rosidl_generator_traits::value_to_yaml(msg.track_true, out);
    out << ", ";
  }

  // member: track_true_indicator
  {
    out << "track_true_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.track_true_indicator, out);
    out << ", ";
  }

  // member: track_mag
  {
    out << "track_mag: ";
    rosidl_generator_traits::value_to_yaml(msg.track_mag, out);
    out << ", ";
  }

  // member: track_mag_indicator
  {
    out << "track_mag_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.track_mag_indicator, out);
    out << ", ";
  }

  // member: speed_knots
  {
    out << "speed_knots: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_knots, out);
    out << ", ";
  }

  // member: speed_knots_indicator
  {
    out << "speed_knots_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_knots_indicator, out);
    out << ", ";
  }

  // member: speed_kmh
  {
    out << "speed_kmh: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_kmh, out);
    out << ", ";
  }

  // member: speed_kmh_indicator
  {
    out << "speed_kmh_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_kmh_indicator, out);
    out << ", ";
  }

  // member: mode_indicator
  {
    out << "mode_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_indicator, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gpvtg & msg,
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

  // member: message_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_id: ";
    rosidl_generator_traits::value_to_yaml(msg.message_id, out);
    out << "\n";
  }

  // member: track_true
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_true: ";
    rosidl_generator_traits::value_to_yaml(msg.track_true, out);
    out << "\n";
  }

  // member: track_true_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_true_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.track_true_indicator, out);
    out << "\n";
  }

  // member: track_mag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_mag: ";
    rosidl_generator_traits::value_to_yaml(msg.track_mag, out);
    out << "\n";
  }

  // member: track_mag_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_mag_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.track_mag_indicator, out);
    out << "\n";
  }

  // member: speed_knots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_knots: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_knots, out);
    out << "\n";
  }

  // member: speed_knots_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_knots_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_knots_indicator, out);
    out << "\n";
  }

  // member: speed_kmh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_kmh: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_kmh, out);
    out << "\n";
  }

  // member: speed_kmh_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_kmh_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_kmh_indicator, out);
    out << "\n";
  }

  // member: mode_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_indicator, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gpvtg & msg, bool use_flow_style = false)
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

}  // namespace mrs_modules_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mrs_modules_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrs_modules_msgs::msg::Gpvtg & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::Gpvtg & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::Gpvtg>()
{
  return "mrs_modules_msgs::msg::Gpvtg";
}

template<>
inline const char * name<mrs_modules_msgs::msg::Gpvtg>()
{
  return "mrs_modules_msgs/msg/Gpvtg";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::Gpvtg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::Gpvtg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_modules_msgs::msg::Gpvtg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPVTG__TRAITS_HPP_
