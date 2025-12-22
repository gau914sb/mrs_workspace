// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/Histogram.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/histogram.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HISTOGRAM__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__HISTOGRAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/histogram__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Histogram & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: unit
  {
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
    out << ", ";
  }

  // member: bin_size
  {
    out << "bin_size: ";
    rosidl_generator_traits::value_to_yaml(msg.bin_size, out);
    out << ", ";
  }

  // member: bin_min
  {
    out << "bin_min: ";
    rosidl_generator_traits::value_to_yaml(msg.bin_min, out);
    out << ", ";
  }

  // member: bin_max
  {
    out << "bin_max: ";
    rosidl_generator_traits::value_to_yaml(msg.bin_max, out);
    out << ", ";
  }

  // member: bin_mark
  {
    out << "bin_mark: ";
    rosidl_generator_traits::value_to_yaml(msg.bin_mark, out);
    out << ", ";
  }

  // member: bins
  {
    if (msg.bins.size() == 0) {
      out << "bins: []";
    } else {
      out << "bins: [";
      size_t pending_items = msg.bins.size();
      for (auto item : msg.bins) {
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
  const Histogram & msg,
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

  // member: unit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
    out << "\n";
  }

  // member: bin_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bin_size: ";
    rosidl_generator_traits::value_to_yaml(msg.bin_size, out);
    out << "\n";
  }

  // member: bin_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bin_min: ";
    rosidl_generator_traits::value_to_yaml(msg.bin_min, out);
    out << "\n";
  }

  // member: bin_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bin_max: ";
    rosidl_generator_traits::value_to_yaml(msg.bin_max, out);
    out << "\n";
  }

  // member: bin_mark
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bin_mark: ";
    rosidl_generator_traits::value_to_yaml(msg.bin_mark, out);
    out << "\n";
  }

  // member: bins
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bins.size() == 0) {
      out << "bins: []\n";
    } else {
      out << "bins:\n";
      for (auto item : msg.bins) {
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

inline std::string to_yaml(const Histogram & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::Histogram & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::Histogram & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::Histogram>()
{
  return "mrs_msgs::msg::Histogram";
}

template<>
inline const char * name<mrs_msgs::msg::Histogram>()
{
  return "mrs_msgs/msg/Histogram";
}

template<>
struct has_fixed_size<mrs_msgs::msg::Histogram>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::Histogram>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::Histogram>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__HISTOGRAM__TRAITS_HPP_
