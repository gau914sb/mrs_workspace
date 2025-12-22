// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/RangeInformation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/range_information.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__RANGE_INFORMATION__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__RANGE_INFORMATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/range_information__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RangeInformation & msg,
  std::ostream & out)
{
  out << "{";
  // member: prn_number
  {
    out << "prn_number: ";
    rosidl_generator_traits::value_to_yaml(msg.prn_number, out);
    out << ", ";
  }

  // member: glofreq
  {
    out << "glofreq: ";
    rosidl_generator_traits::value_to_yaml(msg.glofreq, out);
    out << ", ";
  }

  // member: psr
  {
    out << "psr: ";
    rosidl_generator_traits::value_to_yaml(msg.psr, out);
    out << ", ";
  }

  // member: psr_std
  {
    out << "psr_std: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_std, out);
    out << ", ";
  }

  // member: adr
  {
    out << "adr: ";
    rosidl_generator_traits::value_to_yaml(msg.adr, out);
    out << ", ";
  }

  // member: adr_std
  {
    out << "adr_std: ";
    rosidl_generator_traits::value_to_yaml(msg.adr_std, out);
    out << ", ";
  }

  // member: dopp
  {
    out << "dopp: ";
    rosidl_generator_traits::value_to_yaml(msg.dopp, out);
    out << ", ";
  }

  // member: noise_density_ratio
  {
    out << "noise_density_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.noise_density_ratio, out);
    out << ", ";
  }

  // member: locktime
  {
    out << "locktime: ";
    rosidl_generator_traits::value_to_yaml(msg.locktime, out);
    out << ", ";
  }

  // member: tracking_status
  {
    out << "tracking_status: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RangeInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: prn_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prn_number: ";
    rosidl_generator_traits::value_to_yaml(msg.prn_number, out);
    out << "\n";
  }

  // member: glofreq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "glofreq: ";
    rosidl_generator_traits::value_to_yaml(msg.glofreq, out);
    out << "\n";
  }

  // member: psr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psr: ";
    rosidl_generator_traits::value_to_yaml(msg.psr, out);
    out << "\n";
  }

  // member: psr_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psr_std: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_std, out);
    out << "\n";
  }

  // member: adr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adr: ";
    rosidl_generator_traits::value_to_yaml(msg.adr, out);
    out << "\n";
  }

  // member: adr_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adr_std: ";
    rosidl_generator_traits::value_to_yaml(msg.adr_std, out);
    out << "\n";
  }

  // member: dopp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dopp: ";
    rosidl_generator_traits::value_to_yaml(msg.dopp, out);
    out << "\n";
  }

  // member: noise_density_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "noise_density_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.noise_density_ratio, out);
    out << "\n";
  }

  // member: locktime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "locktime: ";
    rosidl_generator_traits::value_to_yaml(msg.locktime, out);
    out << "\n";
  }

  // member: tracking_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_status: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RangeInformation & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::msg::RangeInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::RangeInformation & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::RangeInformation>()
{
  return "mrs_modules_msgs::msg::RangeInformation";
}

template<>
inline const char * name<mrs_modules_msgs::msg::RangeInformation>()
{
  return "mrs_modules_msgs/msg/RangeInformation";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::RangeInformation>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::RangeInformation>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mrs_modules_msgs::msg::RangeInformation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__RANGE_INFORMATION__TRAITS_HPP_
