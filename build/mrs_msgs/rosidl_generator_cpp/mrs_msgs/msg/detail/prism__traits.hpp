// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/Prism.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/prism.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__PRISM__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__PRISM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/prism__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'points'
#include "mrs_msgs/msg/detail/point2_d__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Prism & msg,
  std::ostream & out)
{
  out << "{";
  // member: horizontal_frame
  {
    out << "horizontal_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_frame, out);
    out << ", ";
  }

  // member: vertical_frame
  {
    out << "vertical_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_frame, out);
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
    out << ", ";
  }

  // member: max_z
  {
    out << "max_z: ";
    rosidl_generator_traits::value_to_yaml(msg.max_z, out);
    out << ", ";
  }

  // member: min_z
  {
    out << "min_z: ";
    rosidl_generator_traits::value_to_yaml(msg.min_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Prism & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: horizontal_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_frame, out);
    out << "\n";
  }

  // member: vertical_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_frame, out);
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

  // member: max_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_z: ";
    rosidl_generator_traits::value_to_yaml(msg.max_z, out);
    out << "\n";
  }

  // member: min_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_z: ";
    rosidl_generator_traits::value_to_yaml(msg.min_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Prism & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::Prism & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::Prism & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::Prism>()
{
  return "mrs_msgs::msg::Prism";
}

template<>
inline const char * name<mrs_msgs::msg::Prism>()
{
  return "mrs_msgs/msg/Prism";
}

template<>
struct has_fixed_size<mrs_msgs::msg::Prism>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::Prism>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::Prism>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__PRISM__TRAITS_HPP_
