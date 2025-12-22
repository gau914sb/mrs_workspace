// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/HwApiActuatorCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_actuator_cmd.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_ACTUATOR_CMD__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_ACTUATOR_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/hw_api_actuator_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HwApiActuatorCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: motors
  {
    if (msg.motors.size() == 0) {
      out << "motors: []";
    } else {
      out << "motors: [";
      size_t pending_items = msg.motors.size();
      for (auto item : msg.motors) {
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
  const HwApiActuatorCmd & msg,
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

  // member: motors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motors.size() == 0) {
      out << "motors: []\n";
    } else {
      out << "motors:\n";
      for (auto item : msg.motors) {
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

inline std::string to_yaml(const HwApiActuatorCmd & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::HwApiActuatorCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::HwApiActuatorCmd & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::HwApiActuatorCmd>()
{
  return "mrs_msgs::msg::HwApiActuatorCmd";
}

template<>
inline const char * name<mrs_msgs::msg::HwApiActuatorCmd>()
{
  return "mrs_msgs/msg/HwApiActuatorCmd";
}

template<>
struct has_fixed_size<mrs_msgs::msg::HwApiActuatorCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::HwApiActuatorCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::HwApiActuatorCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_ACTUATOR_CMD__TRAITS_HPP_
