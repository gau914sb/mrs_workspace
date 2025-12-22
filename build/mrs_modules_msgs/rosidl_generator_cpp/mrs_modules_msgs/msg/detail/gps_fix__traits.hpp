// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/GPSFix.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gps_fix.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPS_FIX__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPS_FIX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/gps_fix__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'status'
#include "mrs_modules_msgs/msg/detail/gps_status__traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GPSFix & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: num_satellites_used_in_solution
  {
    out << "num_satellites_used_in_solution: ";
    rosidl_generator_traits::value_to_yaml(msg.num_satellites_used_in_solution, out);
    out << ", ";
  }

  // member: num_satellites_tracked
  {
    out << "num_satellites_tracked: ";
    rosidl_generator_traits::value_to_yaml(msg.num_satellites_tracked, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
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

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: track
  {
    out << "track: ";
    rosidl_generator_traits::value_to_yaml(msg.track, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: hdop
  {
    out << "hdop: ";
    rosidl_generator_traits::value_to_yaml(msg.hdop, out);
    out << ", ";
  }

  // member: position_covariance
  {
    if (msg.position_covariance.size() == 0) {
      out << "position_covariance: []";
    } else {
      out << "position_covariance: [";
      size_t pending_items = msg.position_covariance.size();
      for (auto item : msg.position_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position_covariance_type
  {
    out << "position_covariance_type: ";
    rosidl_generator_traits::value_to_yaml(msg.position_covariance_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GPSFix & msg,
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

  // member: num_satellites_used_in_solution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_satellites_used_in_solution: ";
    rosidl_generator_traits::value_to_yaml(msg.num_satellites_used_in_solution, out);
    out << "\n";
  }

  // member: num_satellites_tracked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_satellites_tracked: ";
    rosidl_generator_traits::value_to_yaml(msg.num_satellites_tracked, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
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

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: track
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track: ";
    rosidl_generator_traits::value_to_yaml(msg.track, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
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

  // member: position_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_covariance.size() == 0) {
      out << "position_covariance: []\n";
    } else {
      out << "position_covariance:\n";
      for (auto item : msg.position_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: position_covariance_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_covariance_type: ";
    rosidl_generator_traits::value_to_yaml(msg.position_covariance_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GPSFix & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::msg::GPSFix & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::GPSFix & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::GPSFix>()
{
  return "mrs_modules_msgs::msg::GPSFix";
}

template<>
inline const char * name<mrs_modules_msgs::msg::GPSFix>()
{
  return "mrs_modules_msgs/msg/GPSFix";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::GPSFix>
  : std::integral_constant<bool, has_fixed_size<mrs_modules_msgs::msg::GpsStatus>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::GPSFix>
  : std::integral_constant<bool, has_bounded_size<mrs_modules_msgs::msg::GpsStatus>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mrs_modules_msgs::msg::GPSFix>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPS_FIX__TRAITS_HPP_
