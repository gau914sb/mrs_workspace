// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/GpsInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gps_info.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__GPS_INFO__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__GPS_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/gps_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GpsInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: fix_type
  {
    out << "fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_type, out);
    out << ", ";
  }

  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: lon
  {
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << ", ";
  }

  // member: alt
  {
    out << "alt: ";
    rosidl_generator_traits::value_to_yaml(msg.alt, out);
    out << ", ";
  }

  // member: eph
  {
    out << "eph: ";
    rosidl_generator_traits::value_to_yaml(msg.eph, out);
    out << ", ";
  }

  // member: epv
  {
    out << "epv: ";
    rosidl_generator_traits::value_to_yaml(msg.epv, out);
    out << ", ";
  }

  // member: vel
  {
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << ", ";
  }

  // member: cog
  {
    out << "cog: ";
    rosidl_generator_traits::value_to_yaml(msg.cog, out);
    out << ", ";
  }

  // member: satellites_visible
  {
    out << "satellites_visible: ";
    rosidl_generator_traits::value_to_yaml(msg.satellites_visible, out);
    out << ", ";
  }

  // member: alt_ellipsoid
  {
    out << "alt_ellipsoid: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_ellipsoid, out);
    out << ", ";
  }

  // member: h_acc
  {
    out << "h_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.h_acc, out);
    out << ", ";
  }

  // member: v_acc
  {
    out << "v_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.v_acc, out);
    out << ", ";
  }

  // member: vel_acc
  {
    out << "vel_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_acc, out);
    out << ", ";
  }

  // member: hdg_acc
  {
    out << "hdg_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.hdg_acc, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: dgps_num_sats
  {
    out << "dgps_num_sats: ";
    rosidl_generator_traits::value_to_yaml(msg.dgps_num_sats, out);
    out << ", ";
  }

  // member: dgps_age
  {
    out << "dgps_age: ";
    rosidl_generator_traits::value_to_yaml(msg.dgps_age, out);
    out << ", ";
  }

  // member: baseline_dist
  {
    out << "baseline_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.baseline_dist, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpsInfo & msg,
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

  // member: fix_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_type, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt: ";
    rosidl_generator_traits::value_to_yaml(msg.alt, out);
    out << "\n";
  }

  // member: eph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eph: ";
    rosidl_generator_traits::value_to_yaml(msg.eph, out);
    out << "\n";
  }

  // member: epv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epv: ";
    rosidl_generator_traits::value_to_yaml(msg.epv, out);
    out << "\n";
  }

  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << "\n";
  }

  // member: cog
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cog: ";
    rosidl_generator_traits::value_to_yaml(msg.cog, out);
    out << "\n";
  }

  // member: satellites_visible
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "satellites_visible: ";
    rosidl_generator_traits::value_to_yaml(msg.satellites_visible, out);
    out << "\n";
  }

  // member: alt_ellipsoid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt_ellipsoid: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_ellipsoid, out);
    out << "\n";
  }

  // member: h_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.h_acc, out);
    out << "\n";
  }

  // member: v_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.v_acc, out);
    out << "\n";
  }

  // member: vel_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_acc, out);
    out << "\n";
  }

  // member: hdg_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hdg_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.hdg_acc, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: dgps_num_sats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dgps_num_sats: ";
    rosidl_generator_traits::value_to_yaml(msg.dgps_num_sats, out);
    out << "\n";
  }

  // member: dgps_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dgps_age: ";
    rosidl_generator_traits::value_to_yaml(msg.dgps_age, out);
    out << "\n";
  }

  // member: baseline_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baseline_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.baseline_dist, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpsInfo & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::GpsInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::GpsInfo & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::GpsInfo>()
{
  return "mrs_msgs::msg::GpsInfo";
}

template<>
inline const char * name<mrs_msgs::msg::GpsInfo>()
{
  return "mrs_msgs/msg/GpsInfo";
}

template<>
struct has_fixed_size<mrs_msgs::msg::GpsInfo>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mrs_msgs::msg::GpsInfo>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mrs_msgs::msg::GpsInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__GPS_INFO__TRAITS_HPP_
