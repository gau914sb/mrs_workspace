// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/UavStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/uav_status.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__UAV_STATUS__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__UAV_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/uav_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'custom_topics'
#include "mrs_msgs/msg/detail/custom_topic__traits.hpp"
// Member 'node_cpu_loads'
#include "mrs_msgs/msg/detail/node_cpu_load__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UavStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: uav_name
  {
    out << "uav_name: ";
    rosidl_generator_traits::value_to_yaml(msg.uav_name, out);
    out << ", ";
  }

  // member: uav_type
  {
    out << "uav_type: ";
    rosidl_generator_traits::value_to_yaml(msg.uav_type, out);
    out << ", ";
  }

  // member: uav_mass
  {
    out << "uav_mass: ";
    rosidl_generator_traits::value_to_yaml(msg.uav_mass, out);
    out << ", ";
  }

  // member: control_manager_diag_hz
  {
    out << "control_manager_diag_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.control_manager_diag_hz, out);
    out << ", ";
  }

  // member: control_manager_diag_color
  {
    out << "control_manager_diag_color: ";
    rosidl_generator_traits::value_to_yaml(msg.control_manager_diag_color, out);
    out << ", ";
  }

  // member: controllers
  {
    if (msg.controllers.size() == 0) {
      out << "controllers: []";
    } else {
      out << "controllers: [";
      size_t pending_items = msg.controllers.size();
      for (auto item : msg.controllers) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gains
  {
    if (msg.gains.size() == 0) {
      out << "gains: []";
    } else {
      out << "gains: [";
      size_t pending_items = msg.gains.size();
      for (auto item : msg.gains) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: trackers
  {
    if (msg.trackers.size() == 0) {
      out << "trackers: []";
    } else {
      out << "trackers: [";
      size_t pending_items = msg.trackers.size();
      for (auto item : msg.trackers) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: constraints
  {
    if (msg.constraints.size() == 0) {
      out << "constraints: []";
    } else {
      out << "constraints: [";
      size_t pending_items = msg.constraints.size();
      for (auto item : msg.constraints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: null_tracker
  {
    out << "null_tracker: ";
    rosidl_generator_traits::value_to_yaml(msg.null_tracker, out);
    out << ", ";
  }

  // member: secs_flown
  {
    out << "secs_flown: ";
    rosidl_generator_traits::value_to_yaml(msg.secs_flown, out);
    out << ", ";
  }

  // member: odom_hz
  {
    out << "odom_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_hz, out);
    out << ", ";
  }

  // member: odom_color
  {
    out << "odom_color: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_color, out);
    out << ", ";
  }

  // member: odom_x
  {
    out << "odom_x: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_x, out);
    out << ", ";
  }

  // member: odom_y
  {
    out << "odom_y: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_y, out);
    out << ", ";
  }

  // member: odom_z
  {
    out << "odom_z: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_z, out);
    out << ", ";
  }

  // member: odom_hdg
  {
    out << "odom_hdg: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_hdg, out);
    out << ", ";
  }

  // member: odom_frame
  {
    out << "odom_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_frame, out);
    out << ", ";
  }

  // member: odom_estimators
  {
    if (msg.odom_estimators.size() == 0) {
      out << "odom_estimators: []";
    } else {
      out << "odom_estimators: [";
      size_t pending_items = msg.odom_estimators.size();
      for (auto item : msg.odom_estimators) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: horizontal_estimator
  {
    out << "horizontal_estimator: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_estimator, out);
    out << ", ";
  }

  // member: vertical_estimator
  {
    out << "vertical_estimator: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_estimator, out);
    out << ", ";
  }

  // member: heading_estimator
  {
    out << "heading_estimator: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_estimator, out);
    out << ", ";
  }

  // member: agl_estimator
  {
    out << "agl_estimator: ";
    rosidl_generator_traits::value_to_yaml(msg.agl_estimator, out);
    out << ", ";
  }

  // member: max_flight_z
  {
    out << "max_flight_z: ";
    rosidl_generator_traits::value_to_yaml(msg.max_flight_z, out);
    out << ", ";
  }

  // member: cmd_x
  {
    out << "cmd_x: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_x, out);
    out << ", ";
  }

  // member: cmd_y
  {
    out << "cmd_y: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_y, out);
    out << ", ";
  }

  // member: cmd_z
  {
    out << "cmd_z: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_z, out);
    out << ", ";
  }

  // member: cmd_hdg
  {
    out << "cmd_hdg: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_hdg, out);
    out << ", ";
  }

  // member: cpu_load
  {
    out << "cpu_load: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_load, out);
    out << ", ";
  }

  // member: cpu_load_total
  {
    out << "cpu_load_total: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_load_total, out);
    out << ", ";
  }

  // member: cpu_ghz
  {
    out << "cpu_ghz: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_ghz, out);
    out << ", ";
  }

  // member: cpu_temperature
  {
    out << "cpu_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_temperature, out);
    out << ", ";
  }

  // member: free_ram
  {
    out << "free_ram: ";
    rosidl_generator_traits::value_to_yaml(msg.free_ram, out);
    out << ", ";
  }

  // member: total_ram
  {
    out << "total_ram: ";
    rosidl_generator_traits::value_to_yaml(msg.total_ram, out);
    out << ", ";
  }

  // member: free_hdd
  {
    out << "free_hdd: ";
    rosidl_generator_traits::value_to_yaml(msg.free_hdd, out);
    out << ", ";
  }

  // member: hw_api_hz
  {
    out << "hw_api_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_hz, out);
    out << ", ";
  }

  // member: hw_api_color
  {
    out << "hw_api_color: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_color, out);
    out << ", ";
  }

  // member: hw_api_battery_hz
  {
    out << "hw_api_battery_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_battery_hz, out);
    out << ", ";
  }

  // member: hw_api_state_hz
  {
    out << "hw_api_state_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_state_hz, out);
    out << ", ";
  }

  // member: hw_api_cmd_hz
  {
    out << "hw_api_cmd_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_cmd_hz, out);
    out << ", ";
  }

  // member: hw_api_mode
  {
    out << "hw_api_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_mode, out);
    out << ", ";
  }

  // member: hw_api_armed
  {
    out << "hw_api_armed: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_armed, out);
    out << ", ";
  }

  // member: hw_api_gnss_ok
  {
    out << "hw_api_gnss_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_gnss_ok, out);
    out << ", ";
  }

  // member: hw_api_gnss_qual
  {
    out << "hw_api_gnss_qual: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_gnss_qual, out);
    out << ", ";
  }

  // member: mag_norm_hz
  {
    out << "mag_norm_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_norm_hz, out);
    out << ", ";
  }

  // member: hw_api_gnss_fix_type
  {
    out << "hw_api_gnss_fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_gnss_fix_type, out);
    out << ", ";
  }

  // member: hw_api_gnss_num_sats
  {
    out << "hw_api_gnss_num_sats: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_gnss_num_sats, out);
    out << ", ";
  }

  // member: hw_api_gnss_pos_acc
  {
    out << "hw_api_gnss_pos_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_gnss_pos_acc, out);
    out << ", ";
  }

  // member: hw_api_gnss_status_hz
  {
    out << "hw_api_gnss_status_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_gnss_status_hz, out);
    out << ", ";
  }

  // member: mag_norm
  {
    out << "mag_norm: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_norm, out);
    out << ", ";
  }

  // member: battery_volt
  {
    out << "battery_volt: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_volt, out);
    out << ", ";
  }

  // member: battery_curr
  {
    out << "battery_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_curr, out);
    out << ", ";
  }

  // member: battery_wh_drained
  {
    out << "battery_wh_drained: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_wh_drained, out);
    out << ", ";
  }

  // member: thrust
  {
    out << "thrust: ";
    rosidl_generator_traits::value_to_yaml(msg.thrust, out);
    out << ", ";
  }

  // member: mass_estimate
  {
    out << "mass_estimate: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_estimate, out);
    out << ", ";
  }

  // member: mass_set
  {
    out << "mass_set: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_set, out);
    out << ", ";
  }

  // member: custom_topics
  {
    if (msg.custom_topics.size() == 0) {
      out << "custom_topics: []";
    } else {
      out << "custom_topics: [";
      size_t pending_items = msg.custom_topics.size();
      for (auto item : msg.custom_topics) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: custom_string_outputs
  {
    if (msg.custom_string_outputs.size() == 0) {
      out << "custom_string_outputs: []";
    } else {
      out << "custom_string_outputs: [";
      size_t pending_items = msg.custom_string_outputs.size();
      for (auto item : msg.custom_string_outputs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: node_cpu_loads
  {
    out << "node_cpu_loads: ";
    to_flow_style_yaml(msg.node_cpu_loads, out);
    out << ", ";
  }

  // member: flying_normally
  {
    out << "flying_normally: ";
    rosidl_generator_traits::value_to_yaml(msg.flying_normally, out);
    out << ", ";
  }

  // member: rc_mode
  {
    out << "rc_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_mode, out);
    out << ", ";
  }

  // member: have_goal
  {
    out << "have_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.have_goal, out);
    out << ", ";
  }

  // member: tracking_trajectory
  {
    out << "tracking_trajectory: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_trajectory, out);
    out << ", ";
  }

  // member: callbacks_enabled
  {
    out << "callbacks_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.callbacks_enabled, out);
    out << ", ";
  }

  // member: collision_avoidance_enabled
  {
    out << "collision_avoidance_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_avoidance_enabled, out);
    out << ", ";
  }

  // member: avoiding_collision
  {
    out << "avoiding_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.avoiding_collision, out);
    out << ", ";
  }

  // member: automatic_start_can_takeoff
  {
    out << "automatic_start_can_takeoff: ";
    rosidl_generator_traits::value_to_yaml(msg.automatic_start_can_takeoff, out);
    out << ", ";
  }

  // member: num_other_uavs
  {
    out << "num_other_uavs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_other_uavs, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UavStatus & msg,
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

  // member: uav_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uav_name: ";
    rosidl_generator_traits::value_to_yaml(msg.uav_name, out);
    out << "\n";
  }

  // member: uav_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uav_type: ";
    rosidl_generator_traits::value_to_yaml(msg.uav_type, out);
    out << "\n";
  }

  // member: uav_mass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uav_mass: ";
    rosidl_generator_traits::value_to_yaml(msg.uav_mass, out);
    out << "\n";
  }

  // member: control_manager_diag_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_manager_diag_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.control_manager_diag_hz, out);
    out << "\n";
  }

  // member: control_manager_diag_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_manager_diag_color: ";
    rosidl_generator_traits::value_to_yaml(msg.control_manager_diag_color, out);
    out << "\n";
  }

  // member: controllers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.controllers.size() == 0) {
      out << "controllers: []\n";
    } else {
      out << "controllers:\n";
      for (auto item : msg.controllers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gains
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gains.size() == 0) {
      out << "gains: []\n";
    } else {
      out << "gains:\n";
      for (auto item : msg.gains) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: trackers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trackers.size() == 0) {
      out << "trackers: []\n";
    } else {
      out << "trackers:\n";
      for (auto item : msg.trackers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.constraints.size() == 0) {
      out << "constraints: []\n";
    } else {
      out << "constraints:\n";
      for (auto item : msg.constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: null_tracker
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "null_tracker: ";
    rosidl_generator_traits::value_to_yaml(msg.null_tracker, out);
    out << "\n";
  }

  // member: secs_flown
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "secs_flown: ";
    rosidl_generator_traits::value_to_yaml(msg.secs_flown, out);
    out << "\n";
  }

  // member: odom_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_hz, out);
    out << "\n";
  }

  // member: odom_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_color: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_color, out);
    out << "\n";
  }

  // member: odom_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_x: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_x, out);
    out << "\n";
  }

  // member: odom_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_y: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_y, out);
    out << "\n";
  }

  // member: odom_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_z: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_z, out);
    out << "\n";
  }

  // member: odom_hdg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_hdg: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_hdg, out);
    out << "\n";
  }

  // member: odom_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_frame, out);
    out << "\n";
  }

  // member: odom_estimators
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.odom_estimators.size() == 0) {
      out << "odom_estimators: []\n";
    } else {
      out << "odom_estimators:\n";
      for (auto item : msg.odom_estimators) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: horizontal_estimator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_estimator: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_estimator, out);
    out << "\n";
  }

  // member: vertical_estimator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_estimator: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_estimator, out);
    out << "\n";
  }

  // member: heading_estimator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_estimator: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_estimator, out);
    out << "\n";
  }

  // member: agl_estimator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "agl_estimator: ";
    rosidl_generator_traits::value_to_yaml(msg.agl_estimator, out);
    out << "\n";
  }

  // member: max_flight_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_flight_z: ";
    rosidl_generator_traits::value_to_yaml(msg.max_flight_z, out);
    out << "\n";
  }

  // member: cmd_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_x: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_x, out);
    out << "\n";
  }

  // member: cmd_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_y: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_y, out);
    out << "\n";
  }

  // member: cmd_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_z: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_z, out);
    out << "\n";
  }

  // member: cmd_hdg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_hdg: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_hdg, out);
    out << "\n";
  }

  // member: cpu_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_load: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_load, out);
    out << "\n";
  }

  // member: cpu_load_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_load_total: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_load_total, out);
    out << "\n";
  }

  // member: cpu_ghz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_ghz: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_ghz, out);
    out << "\n";
  }

  // member: cpu_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_temperature, out);
    out << "\n";
  }

  // member: free_ram
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "free_ram: ";
    rosidl_generator_traits::value_to_yaml(msg.free_ram, out);
    out << "\n";
  }

  // member: total_ram
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_ram: ";
    rosidl_generator_traits::value_to_yaml(msg.total_ram, out);
    out << "\n";
  }

  // member: free_hdd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "free_hdd: ";
    rosidl_generator_traits::value_to_yaml(msg.free_hdd, out);
    out << "\n";
  }

  // member: hw_api_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hw_api_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_hz, out);
    out << "\n";
  }

  // member: hw_api_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hw_api_color: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_color, out);
    out << "\n";
  }

  // member: hw_api_battery_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hw_api_battery_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_battery_hz, out);
    out << "\n";
  }

  // member: hw_api_state_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hw_api_state_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_state_hz, out);
    out << "\n";
  }

  // member: hw_api_cmd_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hw_api_cmd_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_cmd_hz, out);
    out << "\n";
  }

  // member: hw_api_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hw_api_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_mode, out);
    out << "\n";
  }

  // member: hw_api_armed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hw_api_armed: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_armed, out);
    out << "\n";
  }

  // member: hw_api_gnss_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hw_api_gnss_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_gnss_ok, out);
    out << "\n";
  }

  // member: hw_api_gnss_qual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hw_api_gnss_qual: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_gnss_qual, out);
    out << "\n";
  }

  // member: mag_norm_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_norm_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_norm_hz, out);
    out << "\n";
  }

  // member: hw_api_gnss_fix_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hw_api_gnss_fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_gnss_fix_type, out);
    out << "\n";
  }

  // member: hw_api_gnss_num_sats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hw_api_gnss_num_sats: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_gnss_num_sats, out);
    out << "\n";
  }

  // member: hw_api_gnss_pos_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hw_api_gnss_pos_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_gnss_pos_acc, out);
    out << "\n";
  }

  // member: hw_api_gnss_status_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hw_api_gnss_status_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_api_gnss_status_hz, out);
    out << "\n";
  }

  // member: mag_norm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_norm: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_norm, out);
    out << "\n";
  }

  // member: battery_volt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_volt: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_volt, out);
    out << "\n";
  }

  // member: battery_curr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_curr, out);
    out << "\n";
  }

  // member: battery_wh_drained
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_wh_drained: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_wh_drained, out);
    out << "\n";
  }

  // member: thrust
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thrust: ";
    rosidl_generator_traits::value_to_yaml(msg.thrust, out);
    out << "\n";
  }

  // member: mass_estimate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass_estimate: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_estimate, out);
    out << "\n";
  }

  // member: mass_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass_set: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_set, out);
    out << "\n";
  }

  // member: custom_topics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.custom_topics.size() == 0) {
      out << "custom_topics: []\n";
    } else {
      out << "custom_topics:\n";
      for (auto item : msg.custom_topics) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: custom_string_outputs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.custom_string_outputs.size() == 0) {
      out << "custom_string_outputs: []\n";
    } else {
      out << "custom_string_outputs:\n";
      for (auto item : msg.custom_string_outputs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: node_cpu_loads
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_cpu_loads:\n";
    to_block_style_yaml(msg.node_cpu_loads, out, indentation + 2);
  }

  // member: flying_normally
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flying_normally: ";
    rosidl_generator_traits::value_to_yaml(msg.flying_normally, out);
    out << "\n";
  }

  // member: rc_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_mode, out);
    out << "\n";
  }

  // member: have_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "have_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.have_goal, out);
    out << "\n";
  }

  // member: tracking_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_trajectory: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_trajectory, out);
    out << "\n";
  }

  // member: callbacks_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "callbacks_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.callbacks_enabled, out);
    out << "\n";
  }

  // member: collision_avoidance_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_avoidance_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_avoidance_enabled, out);
    out << "\n";
  }

  // member: avoiding_collision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avoiding_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.avoiding_collision, out);
    out << "\n";
  }

  // member: automatic_start_can_takeoff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "automatic_start_can_takeoff: ";
    rosidl_generator_traits::value_to_yaml(msg.automatic_start_can_takeoff, out);
    out << "\n";
  }

  // member: num_other_uavs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_other_uavs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_other_uavs, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UavStatus & msg, bool use_flow_style = false)
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
  const mrs_msgs::msg::UavStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::UavStatus & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::UavStatus>()
{
  return "mrs_msgs::msg::UavStatus";
}

template<>
inline const char * name<mrs_msgs::msg::UavStatus>()
{
  return "mrs_msgs/msg/UavStatus";
}

template<>
struct has_fixed_size<mrs_msgs::msg::UavStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrs_msgs::msg::UavStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrs_msgs::msg::UavStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__UAV_STATUS__TRAITS_HPP_
