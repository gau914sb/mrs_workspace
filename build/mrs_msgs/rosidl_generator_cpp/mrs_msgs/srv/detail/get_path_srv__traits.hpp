// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:srv/GetPathSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/get_path_srv.hpp"


#ifndef MRS_MSGS__SRV__DETAIL__GET_PATH_SRV__TRAITS_HPP_
#define MRS_MSGS__SRV__DETAIL__GET_PATH_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/srv/detail/get_path_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'path'
#include "mrs_msgs/msg/detail/path__traits.hpp"

namespace mrs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPathSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: path
  {
    out << "path: ";
    to_flow_style_yaml(msg.path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPathSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path:\n";
    to_block_style_yaml(msg.path, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPathSrv_Request & msg, bool use_flow_style = false)
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
  const mrs_msgs::srv::GetPathSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::srv::GetPathSrv_Request & msg)
{
  return mrs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::srv::GetPathSrv_Request>()
{
  return "mrs_msgs::srv::GetPathSrv_Request";
}

template<>
inline const char * name<mrs_msgs::srv::GetPathSrv_Request>()
{
  return "mrs_msgs/srv/GetPathSrv_Request";
}

template<>
struct has_fixed_size<mrs_msgs::srv::GetPathSrv_Request>
  : std::integral_constant<bool, has_fixed_size<mrs_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<mrs_msgs::srv::GetPathSrv_Request>
  : std::integral_constant<bool, has_bounded_size<mrs_msgs::msg::Path>::value> {};

template<>
struct is_message<mrs_msgs::srv::GetPathSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'trajectory'
#include "mrs_msgs/msg/detail/trajectory_reference__traits.hpp"

namespace mrs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPathSrv_Response & msg,
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
    out << ", ";
  }

  // member: trajectory
  {
    out << "trajectory: ";
    to_flow_style_yaml(msg.trajectory, out);
    out << ", ";
  }

  // member: waypoint_trajectory_idxs
  {
    if (msg.waypoint_trajectory_idxs.size() == 0) {
      out << "waypoint_trajectory_idxs: []";
    } else {
      out << "waypoint_trajectory_idxs: [";
      size_t pending_items = msg.waypoint_trajectory_idxs.size();
      for (auto item : msg.waypoint_trajectory_idxs) {
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
  const GetPathSrv_Response & msg,
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

  // member: trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory:\n";
    to_block_style_yaml(msg.trajectory, out, indentation + 2);
  }

  // member: waypoint_trajectory_idxs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoint_trajectory_idxs.size() == 0) {
      out << "waypoint_trajectory_idxs: []\n";
    } else {
      out << "waypoint_trajectory_idxs:\n";
      for (auto item : msg.waypoint_trajectory_idxs) {
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

inline std::string to_yaml(const GetPathSrv_Response & msg, bool use_flow_style = false)
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
  const mrs_msgs::srv::GetPathSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::srv::GetPathSrv_Response & msg)
{
  return mrs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::srv::GetPathSrv_Response>()
{
  return "mrs_msgs::srv::GetPathSrv_Response";
}

template<>
inline const char * name<mrs_msgs::srv::GetPathSrv_Response>()
{
  return "mrs_msgs/srv/GetPathSrv_Response";
}

template<>
struct has_fixed_size<mrs_msgs::srv::GetPathSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::srv::GetPathSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::srv::GetPathSrv_Response>
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
  const GetPathSrv_Event & msg,
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
  const GetPathSrv_Event & msg,
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

inline std::string to_yaml(const GetPathSrv_Event & msg, bool use_flow_style = false)
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
  const mrs_msgs::srv::GetPathSrv_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::srv::GetPathSrv_Event & msg)
{
  return mrs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::srv::GetPathSrv_Event>()
{
  return "mrs_msgs::srv::GetPathSrv_Event";
}

template<>
inline const char * name<mrs_msgs::srv::GetPathSrv_Event>()
{
  return "mrs_msgs/srv/GetPathSrv_Event";
}

template<>
struct has_fixed_size<mrs_msgs::srv::GetPathSrv_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::srv::GetPathSrv_Event>
  : std::integral_constant<bool, has_bounded_size<mrs_msgs::srv::GetPathSrv_Request>::value && has_bounded_size<mrs_msgs::srv::GetPathSrv_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mrs_msgs::srv::GetPathSrv_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mrs_msgs::srv::GetPathSrv>()
{
  return "mrs_msgs::srv::GetPathSrv";
}

template<>
inline const char * name<mrs_msgs::srv::GetPathSrv>()
{
  return "mrs_msgs/srv/GetPathSrv";
}

template<>
struct has_fixed_size<mrs_msgs::srv::GetPathSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<mrs_msgs::srv::GetPathSrv_Request>::value &&
    has_fixed_size<mrs_msgs::srv::GetPathSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<mrs_msgs::srv::GetPathSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<mrs_msgs::srv::GetPathSrv_Request>::value &&
    has_bounded_size<mrs_msgs::srv::GetPathSrv_Response>::value
  >
{
};

template<>
struct is_service<mrs_msgs::srv::GetPathSrv>
  : std::true_type
{
};

template<>
struct is_service_request<mrs_msgs::srv::GetPathSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mrs_msgs::srv::GetPathSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__SRV__DETAIL__GET_PATH_SRV__TRAITS_HPP_
