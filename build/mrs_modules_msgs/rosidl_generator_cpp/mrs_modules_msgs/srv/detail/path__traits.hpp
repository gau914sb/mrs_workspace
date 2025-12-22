// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_modules_msgs:srv/Path.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/srv/path.hpp"


#ifndef MRS_MODULES_MSGS__SRV__DETAIL__PATH__TRAITS_HPP_
#define MRS_MODULES_MSGS__SRV__DETAIL__PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_modules_msgs/srv/detail/path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'start'
// Member 'end'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace mrs_modules_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Path_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: start
  {
    out << "start: ";
    to_flow_style_yaml(msg.start, out);
    out << ", ";
  }

  // member: end
  {
    out << "end: ";
    to_flow_style_yaml(msg.end, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Path_Request & msg,
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

  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start:\n";
    to_block_style_yaml(msg.start, out, indentation + 2);
  }

  // member: end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end:\n";
    to_block_style_yaml(msg.end, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Path_Request & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::srv::Path_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::srv::Path_Request & msg)
{
  return mrs_modules_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::srv::Path_Request>()
{
  return "mrs_modules_msgs::srv::Path_Request";
}

template<>
inline const char * name<mrs_modules_msgs::srv::Path_Request>()
{
  return "mrs_modules_msgs/srv/Path_Request";
}

template<>
struct has_fixed_size<mrs_modules_msgs::srv::Path_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mrs_modules_msgs::srv::Path_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mrs_modules_msgs::srv::Path_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'header'
// already included above
// #include "std_msgs/msg/detail/header__traits.hpp"
// Member 'path'
// already included above
// #include "geometry_msgs/msg/detail/point__traits.hpp"

namespace mrs_modules_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Path_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: path
  {
    if (msg.path.size() == 0) {
      out << "path: []";
    } else {
      out << "path: [";
      size_t pending_items = msg.path.size();
      for (auto item : msg.path) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

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
  const Path_Response & msg,
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

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path.size() == 0) {
      out << "path: []\n";
    } else {
      out << "path:\n";
      for (auto item : msg.path) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

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

inline std::string to_yaml(const Path_Response & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::srv::Path_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::srv::Path_Response & msg)
{
  return mrs_modules_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::srv::Path_Response>()
{
  return "mrs_modules_msgs::srv::Path_Response";
}

template<>
inline const char * name<mrs_modules_msgs::srv::Path_Response>()
{
  return "mrs_modules_msgs/srv/Path_Response";
}

template<>
struct has_fixed_size<mrs_modules_msgs::srv::Path_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_modules_msgs::srv::Path_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_modules_msgs::srv::Path_Response>
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
  const Path_Event & msg,
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
  const Path_Event & msg,
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

inline std::string to_yaml(const Path_Event & msg, bool use_flow_style = false)
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
  const mrs_modules_msgs::srv::Path_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_modules_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_modules_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrs_modules_msgs::srv::Path_Event & msg)
{
  return mrs_modules_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_modules_msgs::srv::Path_Event>()
{
  return "mrs_modules_msgs::srv::Path_Event";
}

template<>
inline const char * name<mrs_modules_msgs::srv::Path_Event>()
{
  return "mrs_modules_msgs/srv/Path_Event";
}

template<>
struct has_fixed_size<mrs_modules_msgs::srv::Path_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_modules_msgs::srv::Path_Event>
  : std::integral_constant<bool, has_bounded_size<mrs_modules_msgs::srv::Path_Request>::value && has_bounded_size<mrs_modules_msgs::srv::Path_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mrs_modules_msgs::srv::Path_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mrs_modules_msgs::srv::Path>()
{
  return "mrs_modules_msgs::srv::Path";
}

template<>
inline const char * name<mrs_modules_msgs::srv::Path>()
{
  return "mrs_modules_msgs/srv/Path";
}

template<>
struct has_fixed_size<mrs_modules_msgs::srv::Path>
  : std::integral_constant<
    bool,
    has_fixed_size<mrs_modules_msgs::srv::Path_Request>::value &&
    has_fixed_size<mrs_modules_msgs::srv::Path_Response>::value
  >
{
};

template<>
struct has_bounded_size<mrs_modules_msgs::srv::Path>
  : std::integral_constant<
    bool,
    has_bounded_size<mrs_modules_msgs::srv::Path_Request>::value &&
    has_bounded_size<mrs_modules_msgs::srv::Path_Response>::value
  >
{
};

template<>
struct is_service<mrs_modules_msgs::srv::Path>
  : std::true_type
{
};

template<>
struct is_service_request<mrs_modules_msgs::srv::Path_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mrs_modules_msgs::srv::Path_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MRS_MODULES_MSGS__SRV__DETAIL__PATH__TRAITS_HPP_
