// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:srv/TrajectoryReferenceSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/trajectory_reference_srv.hpp"


#ifndef MRS_MSGS__SRV__DETAIL__TRAJECTORY_REFERENCE_SRV__TRAITS_HPP_
#define MRS_MSGS__SRV__DETAIL__TRAJECTORY_REFERENCE_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/srv/detail/trajectory_reference_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'trajectory'
#include "mrs_msgs/msg/detail/trajectory_reference__traits.hpp"

namespace mrs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TrajectoryReferenceSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: trajectory
  {
    out << "trajectory: ";
    to_flow_style_yaml(msg.trajectory, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryReferenceSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory:\n";
    to_block_style_yaml(msg.trajectory, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryReferenceSrv_Request & msg, bool use_flow_style = false)
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
  const mrs_msgs::srv::TrajectoryReferenceSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::srv::TrajectoryReferenceSrv_Request & msg)
{
  return mrs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::srv::TrajectoryReferenceSrv_Request>()
{
  return "mrs_msgs::srv::TrajectoryReferenceSrv_Request";
}

template<>
inline const char * name<mrs_msgs::srv::TrajectoryReferenceSrv_Request>()
{
  return "mrs_msgs/srv/TrajectoryReferenceSrv_Request";
}

template<>
struct has_fixed_size<mrs_msgs::srv::TrajectoryReferenceSrv_Request>
  : std::integral_constant<bool, has_fixed_size<mrs_msgs::msg::TrajectoryReference>::value> {};

template<>
struct has_bounded_size<mrs_msgs::srv::TrajectoryReferenceSrv_Request>
  : std::integral_constant<bool, has_bounded_size<mrs_msgs::msg::TrajectoryReference>::value> {};

template<>
struct is_message<mrs_msgs::srv::TrajectoryReferenceSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mrs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TrajectoryReferenceSrv_Response & msg,
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

  // member: modified
  {
    out << "modified: ";
    rosidl_generator_traits::value_to_yaml(msg.modified, out);
    out << ", ";
  }

  // member: tracker_names
  {
    if (msg.tracker_names.size() == 0) {
      out << "tracker_names: []";
    } else {
      out << "tracker_names: [";
      size_t pending_items = msg.tracker_names.size();
      for (auto item : msg.tracker_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tracker_successes
  {
    if (msg.tracker_successes.size() == 0) {
      out << "tracker_successes: []";
    } else {
      out << "tracker_successes: [";
      size_t pending_items = msg.tracker_successes.size();
      for (auto item : msg.tracker_successes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tracker_messages
  {
    if (msg.tracker_messages.size() == 0) {
      out << "tracker_messages: []";
    } else {
      out << "tracker_messages: [";
      size_t pending_items = msg.tracker_messages.size();
      for (auto item : msg.tracker_messages) {
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
  const TrajectoryReferenceSrv_Response & msg,
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

  // member: modified
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "modified: ";
    rosidl_generator_traits::value_to_yaml(msg.modified, out);
    out << "\n";
  }

  // member: tracker_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tracker_names.size() == 0) {
      out << "tracker_names: []\n";
    } else {
      out << "tracker_names:\n";
      for (auto item : msg.tracker_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tracker_successes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tracker_successes.size() == 0) {
      out << "tracker_successes: []\n";
    } else {
      out << "tracker_successes:\n";
      for (auto item : msg.tracker_successes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tracker_messages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tracker_messages.size() == 0) {
      out << "tracker_messages: []\n";
    } else {
      out << "tracker_messages:\n";
      for (auto item : msg.tracker_messages) {
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

inline std::string to_yaml(const TrajectoryReferenceSrv_Response & msg, bool use_flow_style = false)
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
  const mrs_msgs::srv::TrajectoryReferenceSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::srv::TrajectoryReferenceSrv_Response & msg)
{
  return mrs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::srv::TrajectoryReferenceSrv_Response>()
{
  return "mrs_msgs::srv::TrajectoryReferenceSrv_Response";
}

template<>
inline const char * name<mrs_msgs::srv::TrajectoryReferenceSrv_Response>()
{
  return "mrs_msgs/srv/TrajectoryReferenceSrv_Response";
}

template<>
struct has_fixed_size<mrs_msgs::srv::TrajectoryReferenceSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::srv::TrajectoryReferenceSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::srv::TrajectoryReferenceSrv_Response>
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
  const TrajectoryReferenceSrv_Event & msg,
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
  const TrajectoryReferenceSrv_Event & msg,
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

inline std::string to_yaml(const TrajectoryReferenceSrv_Event & msg, bool use_flow_style = false)
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
  const mrs_msgs::srv::TrajectoryReferenceSrv_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::srv::TrajectoryReferenceSrv_Event & msg)
{
  return mrs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::srv::TrajectoryReferenceSrv_Event>()
{
  return "mrs_msgs::srv::TrajectoryReferenceSrv_Event";
}

template<>
inline const char * name<mrs_msgs::srv::TrajectoryReferenceSrv_Event>()
{
  return "mrs_msgs/srv/TrajectoryReferenceSrv_Event";
}

template<>
struct has_fixed_size<mrs_msgs::srv::TrajectoryReferenceSrv_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::srv::TrajectoryReferenceSrv_Event>
  : std::integral_constant<bool, has_bounded_size<mrs_msgs::srv::TrajectoryReferenceSrv_Request>::value && has_bounded_size<mrs_msgs::srv::TrajectoryReferenceSrv_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mrs_msgs::srv::TrajectoryReferenceSrv_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mrs_msgs::srv::TrajectoryReferenceSrv>()
{
  return "mrs_msgs::srv::TrajectoryReferenceSrv";
}

template<>
inline const char * name<mrs_msgs::srv::TrajectoryReferenceSrv>()
{
  return "mrs_msgs/srv/TrajectoryReferenceSrv";
}

template<>
struct has_fixed_size<mrs_msgs::srv::TrajectoryReferenceSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<mrs_msgs::srv::TrajectoryReferenceSrv_Request>::value &&
    has_fixed_size<mrs_msgs::srv::TrajectoryReferenceSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<mrs_msgs::srv::TrajectoryReferenceSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<mrs_msgs::srv::TrajectoryReferenceSrv_Request>::value &&
    has_bounded_size<mrs_msgs::srv::TrajectoryReferenceSrv_Response>::value
  >
{
};

template<>
struct is_service<mrs_msgs::srv::TrajectoryReferenceSrv>
  : std::true_type
{
};

template<>
struct is_service_request<mrs_msgs::srv::TrajectoryReferenceSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mrs_msgs::srv::TrajectoryReferenceSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__SRV__DETAIL__TRAJECTORY_REFERENCE_SRV__TRAITS_HPP_
