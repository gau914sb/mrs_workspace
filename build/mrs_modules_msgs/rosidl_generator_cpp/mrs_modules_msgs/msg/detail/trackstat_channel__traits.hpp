// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:msg/TrackstatChannel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/trackstat_channel.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT_CHANNEL__TRAITS_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT_CHANNEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/msg/detail/trackstat_channel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrs_modules_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackstatChannel & msg,
  std::ostream & out)
{
  out << "{";
  // member: prn
  {
    out << "prn: ";
    rosidl_generator_traits::value_to_yaml(msg.prn, out);
    out << ", ";
  }

  // member: glofreq
  {
    out << "glofreq: ";
    rosidl_generator_traits::value_to_yaml(msg.glofreq, out);
    out << ", ";
  }

  // member: ch_tr_status
  {
    out << "ch_tr_status: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_tr_status, out);
    out << ", ";
  }

  // member: psr
  {
    out << "psr: ";
    rosidl_generator_traits::value_to_yaml(msg.psr, out);
    out << ", ";
  }

  // member: doppler
  {
    out << "doppler: ";
    rosidl_generator_traits::value_to_yaml(msg.doppler, out);
    out << ", ";
  }

  // member: c_no
  {
    out << "c_no: ";
    rosidl_generator_traits::value_to_yaml(msg.c_no, out);
    out << ", ";
  }

  // member: locktime
  {
    out << "locktime: ";
    rosidl_generator_traits::value_to_yaml(msg.locktime, out);
    out << ", ";
  }

  // member: psr_res
  {
    out << "psr_res: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_res, out);
    out << ", ";
  }

  // member: reject
  {
    out << "reject: ";
    rosidl_generator_traits::value_to_yaml(msg.reject, out);
    out << ", ";
  }

  // member: psr_weight
  {
    out << "psr_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_weight, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrackstatChannel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: prn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prn: ";
    rosidl_generator_traits::value_to_yaml(msg.prn, out);
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

  // member: ch_tr_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch_tr_status: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_tr_status, out);
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

  // member: doppler
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "doppler: ";
    rosidl_generator_traits::value_to_yaml(msg.doppler, out);
    out << "\n";
  }

  // member: c_no
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c_no: ";
    rosidl_generator_traits::value_to_yaml(msg.c_no, out);
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

  // member: psr_res
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psr_res: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_res, out);
    out << "\n";
  }

  // member: reject
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject: ";
    rosidl_generator_traits::value_to_yaml(msg.reject, out);
    out << "\n";
  }

  // member: psr_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psr_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.psr_weight, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackstatChannel & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::msg::TrackstatChannel & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::msg::TrackstatChannel & msg)
{
  return mrs_modules_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::msg::TrackstatChannel>()
{
  return "mrs_modules_msgs::msg::TrackstatChannel";
}

template<>
inline const char * name<mrs_modules_msgs::msg::TrackstatChannel>()
{
  return "mrs_modules_msgs/msg/TrackstatChannel";
}

template<>
struct has_fixed_size<mrs_modules_msgs::msg::TrackstatChannel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_modules_msgs::msg::TrackstatChannel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_modules_msgs::msg::TrackstatChannel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT_CHANNEL__TRAITS_HPP_
