// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:srv/ValidateReferenceArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/validate_reference_array.hpp"


#ifndef MRS_MSGS__SRV__DETAIL__VALIDATE_REFERENCE_ARRAY__TRAITS_HPP_
#define MRS_MSGS__SRV__DETAIL__VALIDATE_REFERENCE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/srv/detail/validate_reference_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'array'
#include "mrs_msgs/msg/detail/reference_array__traits.hpp"

namespace mrs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ValidateReferenceArray_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: array
  {
    out << "array: ";
    to_flow_style_yaml(msg.array, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ValidateReferenceArray_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "array:\n";
    to_block_style_yaml(msg.array, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ValidateReferenceArray_Request & msg, bool use_flow_style = false)
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

}  // namespace mrs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mrs_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrs_msgs::srv::ValidateReferenceArray_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::srv::ValidateReferenceArray_Request & msg)
{
  return mrs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::srv::ValidateReferenceArray_Request>()
{
  return "mrs_msgs::srv::ValidateReferenceArray_Request";
}

template<>
inline const char * name<mrs_msgs::srv::ValidateReferenceArray_Request>()
{
  return "mrs_msgs/srv/ValidateReferenceArray_Request";
}

template<>
struct has_fixed_size<mrs_msgs::srv::ValidateReferenceArray_Request>
  : std::integral_constant<bool, has_fixed_size<mrs_msgs::msg::ReferenceArray>::value> {};

template<>
struct has_bounded_size<mrs_msgs::srv::ValidateReferenceArray_Request>
  : std::integral_constant<bool, has_bounded_size<mrs_msgs::msg::ReferenceArray>::value> {};

template<>
struct is_message<mrs_msgs::srv::ValidateReferenceArray_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mrs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ValidateReferenceArray_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    if (msg.success.size() == 0) {
      out << "success: []";
    } else {
      out << "success: [";
      size_t pending_items = msg.success.size();
      for (auto item : msg.success) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const ValidateReferenceArray_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.success.size() == 0) {
      out << "success: []\n";
    } else {
      out << "success:\n";
      for (auto item : msg.success) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const ValidateReferenceArray_Response & msg, bool use_flow_style = false)
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

}  // namespace mrs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mrs_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrs_msgs::srv::ValidateReferenceArray_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::srv::ValidateReferenceArray_Response & msg)
{
  return mrs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::srv::ValidateReferenceArray_Response>()
{
  return "mrs_msgs::srv::ValidateReferenceArray_Response";
}

template<>
inline const char * name<mrs_msgs::srv::ValidateReferenceArray_Response>()
{
  return "mrs_msgs/srv/ValidateReferenceArray_Response";
}

template<>
struct has_fixed_size<mrs_msgs::srv::ValidateReferenceArray_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::srv::ValidateReferenceArray_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::srv::ValidateReferenceArray_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace mrs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ValidateReferenceArray_Event & msg,
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
  const ValidateReferenceArray_Event & msg,
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

inline std::string to_yaml(const ValidateReferenceArray_Event & msg, bool use_flow_style = false)
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

}  // namespace mrs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mrs_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrs_msgs::srv::ValidateReferenceArray_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::srv::ValidateReferenceArray_Event & msg)
{
  return mrs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::srv::ValidateReferenceArray_Event>()
{
  return "mrs_msgs::srv::ValidateReferenceArray_Event";
}

template<>
inline const char * name<mrs_msgs::srv::ValidateReferenceArray_Event>()
{
  return "mrs_msgs/srv/ValidateReferenceArray_Event";
}

template<>
struct has_fixed_size<mrs_msgs::srv::ValidateReferenceArray_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::srv::ValidateReferenceArray_Event>
  : std::integral_constant<bool, has_bounded_size<mrs_msgs::srv::ValidateReferenceArray_Request>::value && has_bounded_size<mrs_msgs::srv::ValidateReferenceArray_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mrs_msgs::srv::ValidateReferenceArray_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mrs_msgs::srv::ValidateReferenceArray>()
{
  return "mrs_msgs::srv::ValidateReferenceArray";
}

template<>
inline const char * name<mrs_msgs::srv::ValidateReferenceArray>()
{
  return "mrs_msgs/srv/ValidateReferenceArray";
}

template<>
struct has_fixed_size<mrs_msgs::srv::ValidateReferenceArray>
  : std::integral_constant<
    bool,
    has_fixed_size<mrs_msgs::srv::ValidateReferenceArray_Request>::value &&
    has_fixed_size<mrs_msgs::srv::ValidateReferenceArray_Response>::value
  >
{
};

template<>
struct has_bounded_size<mrs_msgs::srv::ValidateReferenceArray>
  : std::integral_constant<
    bool,
    has_bounded_size<mrs_msgs::srv::ValidateReferenceArray_Request>::value &&
    has_bounded_size<mrs_msgs::srv::ValidateReferenceArray_Response>::value
  >
{
};

template<>
struct is_service<mrs_msgs::srv::ValidateReferenceArray>
  : std::true_type
{
};

template<>
struct is_service_request<mrs_msgs::srv::ValidateReferenceArray_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mrs_msgs::srv::ValidateReferenceArray_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__SRV__DETAIL__VALIDATE_REFERENCE_ARRAY__TRAITS_HPP_
