// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/MpcPredictionFullState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/mpc_prediction_full_state.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__MPC_PREDICTION_FULL_STATE__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__MPC_PREDICTION_FULL_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/mpc_prediction_full_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'stamps'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"
// Member 'attitude_rate'
// Member 'velocity'
// Member 'acceleration'
// Member 'jerk'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MpcPredictionFullState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: input_id
  {
    out << "input_id: ";
    rosidl_generator_traits::value_to_yaml(msg.input_id, out);
    out << ", ";
  }

  // member: stamps
  {
    if (msg.stamps.size() == 0) {
      out << "stamps: []";
    } else {
      out << "stamps: [";
      size_t pending_items = msg.stamps.size();
      for (auto item : msg.stamps) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: orientation
  {
    if (msg.orientation.size() == 0) {
      out << "orientation: []";
    } else {
      out << "orientation: [";
      size_t pending_items = msg.orientation.size();
      for (auto item : msg.orientation) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: attitude_rate
  {
    if (msg.attitude_rate.size() == 0) {
      out << "attitude_rate: []";
    } else {
      out << "attitude_rate: [";
      size_t pending_items = msg.attitude_rate.size();
      for (auto item : msg.attitude_rate) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity
  {
    if (msg.velocity.size() == 0) {
      out << "velocity: []";
    } else {
      out << "velocity: [";
      size_t pending_items = msg.velocity.size();
      for (auto item : msg.velocity) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acceleration
  {
    if (msg.acceleration.size() == 0) {
      out << "acceleration: []";
    } else {
      out << "acceleration: [";
      size_t pending_items = msg.acceleration.size();
      for (auto item : msg.acceleration) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: jerk
  {
    if (msg.jerk.size() == 0) {
      out << "jerk: []";
    } else {
      out << "jerk: [";
      size_t pending_items = msg.jerk.size();
      for (auto item : msg.jerk) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: heading
  {
    if (msg.heading.size() == 0) {
      out << "heading: []";
    } else {
      out << "heading: [";
      size_t pending_items = msg.heading.size();
      for (auto item : msg.heading) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: heading_rate
  {
    if (msg.heading_rate.size() == 0) {
      out << "heading_rate: []";
    } else {
      out << "heading_rate: [";
      size_t pending_items = msg.heading_rate.size();
      for (auto item : msg.heading_rate) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: heading_acceleration
  {
    if (msg.heading_acceleration.size() == 0) {
      out << "heading_acceleration: []";
    } else {
      out << "heading_acceleration: [";
      size_t pending_items = msg.heading_acceleration.size();
      for (auto item : msg.heading_acceleration) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: heading_jerk
  {
    if (msg.heading_jerk.size() == 0) {
      out << "heading_jerk: []";
    } else {
      out << "heading_jerk: [";
      size_t pending_items = msg.heading_jerk.size();
      for (auto item : msg.heading_jerk) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: use_orientation
  {
    out << "use_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.use_orientation, out);
    out << ", ";
  }

  // member: use_attitude_rate
  {
    out << "use_attitude_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.use_attitude_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MpcPredictionFullState & msg,
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

  // member: input_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_id: ";
    rosidl_generator_traits::value_to_yaml(msg.input_id, out);
    out << "\n";
  }

  // member: stamps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stamps.size() == 0) {
      out << "stamps: []\n";
    } else {
      out << "stamps:\n";
      for (auto item : msg.stamps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.orientation.size() == 0) {
      out << "orientation: []\n";
    } else {
      out << "orientation:\n";
      for (auto item : msg.orientation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: attitude_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.attitude_rate.size() == 0) {
      out << "attitude_rate: []\n";
    } else {
      out << "attitude_rate:\n";
      for (auto item : msg.attitude_rate) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acceleration.size() == 0) {
      out << "acceleration: []\n";
    } else {
      out << "acceleration:\n";
      for (auto item : msg.acceleration) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.jerk.size() == 0) {
      out << "jerk: []\n";
    } else {
      out << "jerk:\n";
      for (auto item : msg.jerk) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.heading.size() == 0) {
      out << "heading: []\n";
    } else {
      out << "heading:\n";
      for (auto item : msg.heading) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: heading_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.heading_rate.size() == 0) {
      out << "heading_rate: []\n";
    } else {
      out << "heading_rate:\n";
      for (auto item : msg.heading_rate) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: heading_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.heading_acceleration.size() == 0) {
      out << "heading_acceleration: []\n";
    } else {
      out << "heading_acceleration:\n";
      for (auto item : msg.heading_acceleration) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: heading_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.heading_jerk.size() == 0) {
      out << "heading_jerk: []\n";
    } else {
      out << "heading_jerk:\n";
      for (auto item : msg.heading_jerk) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: use_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.use_orientation, out);
    out << "\n";
  }

  // member: use_attitude_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_attitude_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.use_attitude_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MpcPredictionFullState & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::MpcPredictionFullState & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::MpcPredictionFullState & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::MpcPredictionFullState>()
{
  return "mrs_msgs::msg::MpcPredictionFullState";
}

template<>
inline const char * name<mrs_msgs::msg::MpcPredictionFullState>()
{
  return "mrs_msgs/msg/MpcPredictionFullState";
}

template<>
struct has_fixed_size<mrs_msgs::msg::MpcPredictionFullState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::MpcPredictionFullState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::MpcPredictionFullState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__MPC_PREDICTION_FULL_STATE__TRAITS_HPP_
