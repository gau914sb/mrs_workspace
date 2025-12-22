// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/Gpgga.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gpgga.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPGGA__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPGGA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/gpgga__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'gps_quality'
#include "mrs_modules_msgs/msg/detail/gps_status__traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Gpgga & msg,
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

  // member: utc_seconds
  {
    out << "utc_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_seconds, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: latitude_dir
  {
    out << "latitude_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_dir, out);
    out << ", ";
  }

  // member: longitude_dir
  {
    out << "longitude_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_dir, out);
    out << ", ";
  }

  // member: gps_quality
  {
    out << "gps_quality: ";
    to_flow_style_yaml(msg.gps_quality, out);
    out << ", ";
  }

  // member: num_sats
  {
    out << "num_sats: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sats, out);
    out << ", ";
  }

  // member: hdop
  {
    out << "hdop: ";
    rosidl_generator_traits::value_to_yaml(msg.hdop, out);
    out << ", ";
  }

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: altitude_units
  {
    out << "altitude_units: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_units, out);
    out << ", ";
  }

  // member: undulation
  {
    out << "undulation: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation, out);
    out << ", ";
  }

  // member: undulation_units
  {
    out << "undulation_units: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation_units, out);
    out << ", ";
  }

  // member: diff_age
  {
    out << "diff_age: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_age, out);
    out << ", ";
  }

  // member: station_id
  {
    out << "station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.station_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gpgga & msg,
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

  // member: utc_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_seconds, out);
    out << "\n";
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: latitude_dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_dir, out);
    out << "\n";
  }

  // member: longitude_dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_dir, out);
    out << "\n";
  }

  // member: gps_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_quality:\n";
    to_block_style_yaml(msg.gps_quality, out, indentation + 2);
  }

  // member: num_sats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_sats: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sats, out);
    out << "\n";
  }

  // member: hdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hdop: ";
    rosidl_generator_traits::value_to_yaml(msg.hdop, out);
    out << "\n";
  }

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: altitude_units
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_units: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_units, out);
    out << "\n";
  }

  // member: undulation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "undulation: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation, out);
    out << "\n";
  }

  // member: undulation_units
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "undulation_units: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation_units, out);
    out << "\n";
  }

  // member: diff_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diff_age: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_age, out);
    out << "\n";
  }

  // member: station_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.station_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gpgga & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::msg::Gpgga & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::Gpgga & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::Gpgga>()
{
  return "mrs_modules_msgs::msg::Gpgga";
}

template<>
inline const char * name<mrs_modules_msgs::msg::Gpgga>()
{
  return "mrs_modules_msgs/msg/Gpgga";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::Gpgga>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::Gpgga>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_modules_msgs::msg::Gpgga>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPGGA__TRAITS_HPP_
