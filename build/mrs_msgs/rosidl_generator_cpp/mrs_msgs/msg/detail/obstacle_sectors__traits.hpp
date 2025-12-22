// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/ObstacleSectors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/obstacle_sectors.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__OBSTACLE_SECTORS__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__OBSTACLE_SECTORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/obstacle_sectors__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleSectors & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: n_horizontal_sectors
  {
    out << "n_horizontal_sectors: ";
    rosidl_generator_traits::value_to_yaml(msg.n_horizontal_sectors, out);
    out << ", ";
  }

  // member: sectors_vertical_fov
  {
    out << "sectors_vertical_fov: ";
    rosidl_generator_traits::value_to_yaml(msg.sectors_vertical_fov, out);
    out << ", ";
  }

  // member: sectors
  {
    if (msg.sectors.size() == 0) {
      out << "sectors: []";
    } else {
      out << "sectors: [";
      size_t pending_items = msg.sectors.size();
      for (auto item : msg.sectors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sector_sensors
  {
    if (msg.sector_sensors.size() == 0) {
      out << "sector_sensors: []";
    } else {
      out << "sector_sensors: [";
      size_t pending_items = msg.sector_sensors.size();
      for (auto item : msg.sector_sensors) {
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
  const ObstacleSectors & msg,
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

  // member: n_horizontal_sectors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_horizontal_sectors: ";
    rosidl_generator_traits::value_to_yaml(msg.n_horizontal_sectors, out);
    out << "\n";
  }

  // member: sectors_vertical_fov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sectors_vertical_fov: ";
    rosidl_generator_traits::value_to_yaml(msg.sectors_vertical_fov, out);
    out << "\n";
  }

  // member: sectors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sectors.size() == 0) {
      out << "sectors: []\n";
    } else {
      out << "sectors:\n";
      for (auto item : msg.sectors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sector_sensors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sector_sensors.size() == 0) {
      out << "sector_sensors: []\n";
    } else {
      out << "sector_sensors:\n";
      for (auto item : msg.sector_sensors) {
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

inline std::string to_yaml(const ObstacleSectors & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::ObstacleSectors & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::ObstacleSectors & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::ObstacleSectors>()
{
  return "mrs_msgs::msg::ObstacleSectors";
}

template<>
inline const char * name<mrs_msgs::msg::ObstacleSectors>()
{
  return "mrs_msgs/msg/ObstacleSectors";
}

template<>
struct has_fixed_size<mrs_msgs::msg::ObstacleSectors>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::ObstacleSectors>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::ObstacleSectors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__OBSTACLE_SECTORS__TRAITS_HPP_
