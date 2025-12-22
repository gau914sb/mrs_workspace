// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/Bestpos.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/bestpos.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__BESTPOS__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__BESTPOS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/bestpos__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'tersus_msg_header'
#include "mrs_modules_msgs/msg/detail/tersus_message_header__traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Bestpos & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tersus_msg_header
  {
    out << "tersus_msg_header: ";
    to_flow_style_yaml(msg.tersus_msg_header, out);
    out << ", ";
  }

  // member: solution_status
  {
    out << "solution_status: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_status, out);
    out << ", ";
  }

  // member: position_type
  {
    out << "position_type: ";
    rosidl_generator_traits::value_to_yaml(msg.position_type, out);
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

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: undulation
  {
    out << "undulation: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation, out);
    out << ", ";
  }

  // member: datum_id
  {
    out << "datum_id: ";
    rosidl_generator_traits::value_to_yaml(msg.datum_id, out);
    out << ", ";
  }

  // member: latitude_std
  {
    out << "latitude_std: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_std, out);
    out << ", ";
  }

  // member: longitude_std
  {
    out << "longitude_std: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_std, out);
    out << ", ";
  }

  // member: height_std
  {
    out << "height_std: ";
    rosidl_generator_traits::value_to_yaml(msg.height_std, out);
    out << ", ";
  }

  // member: base_station_id
  {
    out << "base_station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.base_station_id, out);
    out << ", ";
  }

  // member: diff_age
  {
    out << "diff_age: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_age, out);
    out << ", ";
  }

  // member: solution_age
  {
    out << "solution_age: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_age, out);
    out << ", ";
  }

  // member: num_satellites_tracked
  {
    out << "num_satellites_tracked: ";
    rosidl_generator_traits::value_to_yaml(msg.num_satellites_tracked, out);
    out << ", ";
  }

  // member: num_satellites_used_in_solution
  {
    out << "num_satellites_used_in_solution: ";
    rosidl_generator_traits::value_to_yaml(msg.num_satellites_used_in_solution, out);
    out << ", ";
  }

  // member: num_gps_and_glonass_l1_used_in_solution
  {
    out << "num_gps_and_glonass_l1_used_in_solution: ";
    rosidl_generator_traits::value_to_yaml(msg.num_gps_and_glonass_l1_used_in_solution, out);
    out << ", ";
  }

  // member: num_gps_and_glonass_l1_and_l2_used_in_solution
  {
    out << "num_gps_and_glonass_l1_and_l2_used_in_solution: ";
    rosidl_generator_traits::value_to_yaml(msg.num_gps_and_glonass_l1_and_l2_used_in_solution, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Bestpos & msg,
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

  // member: tersus_msg_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tersus_msg_header:\n";
    to_block_style_yaml(msg.tersus_msg_header, out, indentation + 2);
  }

  // member: solution_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution_status: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_status, out);
    out << "\n";
  }

  // member: position_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_type: ";
    rosidl_generator_traits::value_to_yaml(msg.position_type, out);
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

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
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

  // member: datum_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "datum_id: ";
    rosidl_generator_traits::value_to_yaml(msg.datum_id, out);
    out << "\n";
  }

  // member: latitude_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude_std: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_std, out);
    out << "\n";
  }

  // member: longitude_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude_std: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_std, out);
    out << "\n";
  }

  // member: height_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_std: ";
    rosidl_generator_traits::value_to_yaml(msg.height_std, out);
    out << "\n";
  }

  // member: base_station_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.base_station_id, out);
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

  // member: solution_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution_age: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_age, out);
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

  // member: num_satellites_used_in_solution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_satellites_used_in_solution: ";
    rosidl_generator_traits::value_to_yaml(msg.num_satellites_used_in_solution, out);
    out << "\n";
  }

  // member: num_gps_and_glonass_l1_used_in_solution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_gps_and_glonass_l1_used_in_solution: ";
    rosidl_generator_traits::value_to_yaml(msg.num_gps_and_glonass_l1_used_in_solution, out);
    out << "\n";
  }

  // member: num_gps_and_glonass_l1_and_l2_used_in_solution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_gps_and_glonass_l1_and_l2_used_in_solution: ";
    rosidl_generator_traits::value_to_yaml(msg.num_gps_and_glonass_l1_and_l2_used_in_solution, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Bestpos & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::msg::Bestpos & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::Bestpos & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::Bestpos>()
{
  return "mrs_modules_msgs::msg::Bestpos";
}

template<>
inline const char * name<mrs_modules_msgs::msg::Bestpos>()
{
  return "mrs_modules_msgs/msg/Bestpos";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::Bestpos>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::Bestpos>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_modules_msgs::msg::Bestpos>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__BESTPOS__TRAITS_HPP_
