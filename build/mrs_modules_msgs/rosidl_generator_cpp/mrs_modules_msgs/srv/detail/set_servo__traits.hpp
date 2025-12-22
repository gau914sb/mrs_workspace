// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:srv/SetServo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/srv/set_servo.hpp"


#ifndef MRS_MODULES_MSGS__SRV__DETAIL__SET_SERVO__TRAITS_HPP_
#define MRS_MODULES_MSGS__SRV__DETAIL__SET_SERVO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/srv/detail/set_servo__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrs_modules_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetServo_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: servo1_val
  {
    out << "servo1_val: ";
    rosidl_generator_traits::value_to_yaml(msg.servo1_val, out);
    out << ", ";
  }

  // member: servo2_val
  {
    out << "servo2_val: ";
    rosidl_generator_traits::value_to_yaml(msg.servo2_val, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetServo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: servo1_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo1_val: ";
    rosidl_generator_traits::value_to_yaml(msg.servo1_val, out);
    out << "\n";
  }

  // member: servo2_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo2_val: ";
    rosidl_generator_traits::value_to_yaml(msg.servo2_val, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetServo_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mrs_modules_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mrs_modules_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrs_modules_msgs::srv::SetServo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::srv::SetServo_Request & msg)
{
  return mrs_modules_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::srv::SetServo_Request>()
{
  return "mrs_modules_msgs::srv::SetServo_Request";
}

template<>
inline const char * name<mrs_modules_msgs::srv::SetServo_Request>()
{
  return "mrs_modules_msgs/srv/SetServo_Request";
}

template<>
struct has_fixed_size<mrs_modules_msgs::srv::SetServo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mrs_modules_msgs::srv::SetServo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mrs_modules_msgs::srv::SetServo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mrs_modules_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetServo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetServo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetServo_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mrs_modules_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mrs_modules_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrs_modules_msgs::srv::SetServo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::srv::SetServo_Response & msg)
{
  return mrs_modules_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::srv::SetServo_Response>()
{
  return "mrs_modules_msgs::srv::SetServo_Response";
}

template<>
inline const char * name<mrs_modules_msgs::srv::SetServo_Response>()
{
  return "mrs_modules_msgs/srv/SetServo_Response";
}

template<>
struct has_fixed_size<mrs_modules_msgs::srv::SetServo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_modules_msgs::srv::SetServo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_modules_msgs::srv::SetServo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace mrs_modules_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetServo_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const SetServo_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetServo_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mrs_modules_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mrs_modules_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrs_modules_msgs::srv::SetServo_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::srv::SetServo_Event & msg)
{
  return mrs_modules_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::srv::SetServo_Event>()
{
  return "mrs_modules_msgs::srv::SetServo_Event";
}

template<>
inline const char * name<mrs_modules_msgs::srv::SetServo_Event>()
{
  return "mrs_modules_msgs/srv/SetServo_Event";
}

template<>
struct has_fixed_size<mrs_modules_msgs::srv::SetServo_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_modules_msgs::srv::SetServo_Event>
  : std::integral_constant<bool, has_bounded_size<mrs_modules_msgs::srv::SetServo_Request>::value && has_bounded_size<mrs_modules_msgs::srv::SetServo_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mrs_modules_msgs::srv::SetServo_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mrs_modules_msgs::srv::SetServo>()
{
  return "mrs_modules_msgs::srv::SetServo";
}

template<>
inline const char * name<mrs_modules_msgs::srv::SetServo>()
{
  return "mrs_modules_msgs/srv/SetServo";
}

template<>
struct has_fixed_size<mrs_modules_msgs::srv::SetServo>
  : std::integral_constant<
    bool,
    has_fixed_size<mrs_modules_msgs::srv::SetServo_Request>::value &&
    has_fixed_size<mrs_modules_msgs::srv::SetServo_Response>::value
  >
{
};

template<>
struct has_bounded_size<mrs_modules_msgs::srv::SetServo>
  : std::integral_constant<
    bool,
    has_bounded_size<mrs_modules_msgs::srv::SetServo_Request>::value &&
    has_bounded_size<mrs_modules_msgs::srv::SetServo_Response>::value
  >
{
};

template<>
struct is_service<mrs_modules_msgs::srv::SetServo>
  : std::true_type
{
};

template<>
struct is_service_request<mrs_modules_msgs::srv::SetServo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mrs_modules_msgs::srv::SetServo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__SRV__DETAIL__SET_SERVO__TRAITS_HPP_
