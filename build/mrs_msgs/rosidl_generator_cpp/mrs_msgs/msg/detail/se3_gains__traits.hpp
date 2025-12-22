// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/Se3Gains.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/se3_gains.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__SE3_GAINS__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__SE3_GAINS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/se3_gains__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Se3Gains & msg,
  std::ostream & out)
{
  out << "{";
  // member: kpxy
  {
    out << "kpxy: ";
    rosidl_generator_traits::value_to_yaml(msg.kpxy, out);
    out << ", ";
  }

  // member: kvxy
  {
    out << "kvxy: ";
    rosidl_generator_traits::value_to_yaml(msg.kvxy, out);
    out << ", ";
  }

  // member: kaxy
  {
    out << "kaxy: ";
    rosidl_generator_traits::value_to_yaml(msg.kaxy, out);
    out << ", ";
  }

  // member: kpz
  {
    out << "kpz: ";
    rosidl_generator_traits::value_to_yaml(msg.kpz, out);
    out << ", ";
  }

  // member: kvz
  {
    out << "kvz: ";
    rosidl_generator_traits::value_to_yaml(msg.kvz, out);
    out << ", ";
  }

  // member: kaz
  {
    out << "kaz: ";
    rosidl_generator_traits::value_to_yaml(msg.kaz, out);
    out << ", ";
  }

  // member: kibxy
  {
    out << "kibxy: ";
    rosidl_generator_traits::value_to_yaml(msg.kibxy, out);
    out << ", ";
  }

  // member: kibxy_lim
  {
    out << "kibxy_lim: ";
    rosidl_generator_traits::value_to_yaml(msg.kibxy_lim, out);
    out << ", ";
  }

  // member: kiwxy
  {
    out << "kiwxy: ";
    rosidl_generator_traits::value_to_yaml(msg.kiwxy, out);
    out << ", ";
  }

  // member: kiwxy_lim
  {
    out << "kiwxy_lim: ";
    rosidl_generator_traits::value_to_yaml(msg.kiwxy_lim, out);
    out << ", ";
  }

  // member: kqrp
  {
    out << "kqrp: ";
    rosidl_generator_traits::value_to_yaml(msg.kqrp, out);
    out << ", ";
  }

  // member: kqy
  {
    out << "kqy: ";
    rosidl_generator_traits::value_to_yaml(msg.kqy, out);
    out << ", ";
  }

  // member: km
  {
    out << "km: ";
    rosidl_generator_traits::value_to_yaml(msg.km, out);
    out << ", ";
  }

  // member: km_lim
  {
    out << "km_lim: ";
    rosidl_generator_traits::value_to_yaml(msg.km_lim, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Se3Gains & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kpxy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kpxy: ";
    rosidl_generator_traits::value_to_yaml(msg.kpxy, out);
    out << "\n";
  }

  // member: kvxy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kvxy: ";
    rosidl_generator_traits::value_to_yaml(msg.kvxy, out);
    out << "\n";
  }

  // member: kaxy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kaxy: ";
    rosidl_generator_traits::value_to_yaml(msg.kaxy, out);
    out << "\n";
  }

  // member: kpz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kpz: ";
    rosidl_generator_traits::value_to_yaml(msg.kpz, out);
    out << "\n";
  }

  // member: kvz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kvz: ";
    rosidl_generator_traits::value_to_yaml(msg.kvz, out);
    out << "\n";
  }

  // member: kaz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kaz: ";
    rosidl_generator_traits::value_to_yaml(msg.kaz, out);
    out << "\n";
  }

  // member: kibxy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kibxy: ";
    rosidl_generator_traits::value_to_yaml(msg.kibxy, out);
    out << "\n";
  }

  // member: kibxy_lim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kibxy_lim: ";
    rosidl_generator_traits::value_to_yaml(msg.kibxy_lim, out);
    out << "\n";
  }

  // member: kiwxy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kiwxy: ";
    rosidl_generator_traits::value_to_yaml(msg.kiwxy, out);
    out << "\n";
  }

  // member: kiwxy_lim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kiwxy_lim: ";
    rosidl_generator_traits::value_to_yaml(msg.kiwxy_lim, out);
    out << "\n";
  }

  // member: kqrp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kqrp: ";
    rosidl_generator_traits::value_to_yaml(msg.kqrp, out);
    out << "\n";
  }

  // member: kqy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kqy: ";
    rosidl_generator_traits::value_to_yaml(msg.kqy, out);
    out << "\n";
  }

  // member: km
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "km: ";
    rosidl_generator_traits::value_to_yaml(msg.km, out);
    out << "\n";
  }

  // member: km_lim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "km_lim: ";
    rosidl_generator_traits::value_to_yaml(msg.km_lim, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Se3Gains & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::Se3Gains & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::Se3Gains & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::Se3Gains>()
{
  return "mrs_msgs::msg::Se3Gains";
}

template<>
inline const char * name<mrs_msgs::msg::Se3Gains>()
{
  return "mrs_msgs/msg/Se3Gains";
}

template<>
struct has_fixed_size<mrs_msgs::msg::Se3Gains>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mrs_msgs::msg::Se3Gains>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mrs_msgs::msg::Se3Gains>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__SE3_GAINS__TRAITS_HPP_
