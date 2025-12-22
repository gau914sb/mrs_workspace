// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mrs_msgs:msg/UavStatus.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/uav_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mrs_msgs/msg/detail/uav_status__functions.h"
#include "mrs_msgs/msg/detail/uav_status__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_key_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace mrs_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const mrs_msgs::msg::CustomTopic &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mrs_msgs::msg::CustomTopic &);
size_t get_serialized_size(
  const mrs_msgs::msg::CustomTopic &,
  size_t current_alignment);
size_t
max_serialized_size_CustomTopic(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const mrs_msgs::msg::CustomTopic &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const mrs_msgs::msg::CustomTopic &,
  size_t current_alignment);
size_t
max_serialized_size_key_CustomTopic(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mrs_msgs

namespace mrs_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const mrs_msgs::msg::NodeCpuLoad &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mrs_msgs::msg::NodeCpuLoad &);
size_t get_serialized_size(
  const mrs_msgs::msg::NodeCpuLoad &,
  size_t current_alignment);
size_t
max_serialized_size_NodeCpuLoad(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const mrs_msgs::msg::NodeCpuLoad &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const mrs_msgs::msg::NodeCpuLoad &,
  size_t current_alignment);
size_t
max_serialized_size_key_NodeCpuLoad(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
cdr_serialize(
  const mrs_msgs::msg::UavStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: uav_name
  cdr << ros_message.uav_name;

  // Member: uav_type
  cdr << ros_message.uav_type;

  // Member: uav_mass
  cdr << ros_message.uav_mass;

  // Member: control_manager_diag_hz
  cdr << ros_message.control_manager_diag_hz;

  // Member: control_manager_diag_color
  cdr << ros_message.control_manager_diag_color;

  // Member: controllers
  {
    cdr << ros_message.controllers;
  }

  // Member: gains
  {
    cdr << ros_message.gains;
  }

  // Member: trackers
  {
    cdr << ros_message.trackers;
  }

  // Member: constraints
  {
    cdr << ros_message.constraints;
  }

  // Member: null_tracker
  cdr << (ros_message.null_tracker ? true : false);

  // Member: secs_flown
  cdr << ros_message.secs_flown;

  // Member: odom_hz
  cdr << ros_message.odom_hz;

  // Member: odom_color
  cdr << ros_message.odom_color;

  // Member: odom_x
  cdr << ros_message.odom_x;

  // Member: odom_y
  cdr << ros_message.odom_y;

  // Member: odom_z
  cdr << ros_message.odom_z;

  // Member: odom_hdg
  cdr << ros_message.odom_hdg;

  // Member: odom_frame
  cdr << ros_message.odom_frame;

  // Member: odom_estimators
  {
    cdr << ros_message.odom_estimators;
  }

  // Member: horizontal_estimator
  cdr << ros_message.horizontal_estimator;

  // Member: vertical_estimator
  cdr << ros_message.vertical_estimator;

  // Member: heading_estimator
  cdr << ros_message.heading_estimator;

  // Member: agl_estimator
  cdr << ros_message.agl_estimator;

  // Member: max_flight_z
  cdr << ros_message.max_flight_z;

  // Member: cmd_x
  cdr << ros_message.cmd_x;

  // Member: cmd_y
  cdr << ros_message.cmd_y;

  // Member: cmd_z
  cdr << ros_message.cmd_z;

  // Member: cmd_hdg
  cdr << ros_message.cmd_hdg;

  // Member: cpu_load
  cdr << ros_message.cpu_load;

  // Member: cpu_load_total
  cdr << ros_message.cpu_load_total;

  // Member: cpu_ghz
  cdr << ros_message.cpu_ghz;

  // Member: cpu_temperature
  cdr << ros_message.cpu_temperature;

  // Member: free_ram
  cdr << ros_message.free_ram;

  // Member: total_ram
  cdr << ros_message.total_ram;

  // Member: free_hdd
  cdr << ros_message.free_hdd;

  // Member: hw_api_hz
  cdr << ros_message.hw_api_hz;

  // Member: hw_api_color
  cdr << ros_message.hw_api_color;

  // Member: hw_api_battery_hz
  cdr << ros_message.hw_api_battery_hz;

  // Member: hw_api_state_hz
  cdr << ros_message.hw_api_state_hz;

  // Member: hw_api_cmd_hz
  cdr << ros_message.hw_api_cmd_hz;

  // Member: hw_api_mode
  cdr << ros_message.hw_api_mode;

  // Member: hw_api_armed
  cdr << (ros_message.hw_api_armed ? true : false);

  // Member: hw_api_gnss_ok
  cdr << (ros_message.hw_api_gnss_ok ? true : false);

  // Member: hw_api_gnss_qual
  cdr << ros_message.hw_api_gnss_qual;

  // Member: mag_norm_hz
  cdr << ros_message.mag_norm_hz;

  // Member: hw_api_gnss_fix_type
  cdr << ros_message.hw_api_gnss_fix_type;

  // Member: hw_api_gnss_num_sats
  cdr << ros_message.hw_api_gnss_num_sats;

  // Member: hw_api_gnss_pos_acc
  cdr << ros_message.hw_api_gnss_pos_acc;

  // Member: hw_api_gnss_status_hz
  cdr << ros_message.hw_api_gnss_status_hz;

  // Member: mag_norm
  cdr << ros_message.mag_norm;

  // Member: battery_volt
  cdr << ros_message.battery_volt;

  // Member: battery_curr
  cdr << ros_message.battery_curr;

  // Member: battery_wh_drained
  cdr << ros_message.battery_wh_drained;

  // Member: thrust
  cdr << ros_message.thrust;

  // Member: mass_estimate
  cdr << ros_message.mass_estimate;

  // Member: mass_set
  cdr << ros_message.mass_set;

  // Member: custom_topics
  {
    size_t size = ros_message.custom_topics.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      mrs_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.custom_topics[i],
        cdr);
    }
  }

  // Member: custom_string_outputs
  {
    cdr << ros_message.custom_string_outputs;
  }

  // Member: node_cpu_loads
  mrs_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.node_cpu_loads,
    cdr);

  // Member: flying_normally
  cdr << (ros_message.flying_normally ? true : false);

  // Member: rc_mode
  cdr << (ros_message.rc_mode ? true : false);

  // Member: have_goal
  cdr << (ros_message.have_goal ? true : false);

  // Member: tracking_trajectory
  cdr << (ros_message.tracking_trajectory ? true : false);

  // Member: callbacks_enabled
  cdr << (ros_message.callbacks_enabled ? true : false);

  // Member: collision_avoidance_enabled
  cdr << (ros_message.collision_avoidance_enabled ? true : false);

  // Member: avoiding_collision
  cdr << (ros_message.avoiding_collision ? true : false);

  // Member: automatic_start_can_takeoff
  cdr << (ros_message.automatic_start_can_takeoff ? true : false);

  // Member: num_other_uavs
  cdr << ros_message.num_other_uavs;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs::msg::UavStatus & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: uav_name
  cdr >> ros_message.uav_name;

  // Member: uav_type
  cdr >> ros_message.uav_type;

  // Member: uav_mass
  cdr >> ros_message.uav_mass;

  // Member: control_manager_diag_hz
  cdr >> ros_message.control_manager_diag_hz;

  // Member: control_manager_diag_color
  cdr >> ros_message.control_manager_diag_color;

  // Member: controllers
  {
    cdr >> ros_message.controllers;
  }

  // Member: gains
  {
    cdr >> ros_message.gains;
  }

  // Member: trackers
  {
    cdr >> ros_message.trackers;
  }

  // Member: constraints
  {
    cdr >> ros_message.constraints;
  }

  // Member: null_tracker
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.null_tracker = tmp ? true : false;
  }

  // Member: secs_flown
  cdr >> ros_message.secs_flown;

  // Member: odom_hz
  cdr >> ros_message.odom_hz;

  // Member: odom_color
  cdr >> ros_message.odom_color;

  // Member: odom_x
  cdr >> ros_message.odom_x;

  // Member: odom_y
  cdr >> ros_message.odom_y;

  // Member: odom_z
  cdr >> ros_message.odom_z;

  // Member: odom_hdg
  cdr >> ros_message.odom_hdg;

  // Member: odom_frame
  cdr >> ros_message.odom_frame;

  // Member: odom_estimators
  {
    cdr >> ros_message.odom_estimators;
  }

  // Member: horizontal_estimator
  cdr >> ros_message.horizontal_estimator;

  // Member: vertical_estimator
  cdr >> ros_message.vertical_estimator;

  // Member: heading_estimator
  cdr >> ros_message.heading_estimator;

  // Member: agl_estimator
  cdr >> ros_message.agl_estimator;

  // Member: max_flight_z
  cdr >> ros_message.max_flight_z;

  // Member: cmd_x
  cdr >> ros_message.cmd_x;

  // Member: cmd_y
  cdr >> ros_message.cmd_y;

  // Member: cmd_z
  cdr >> ros_message.cmd_z;

  // Member: cmd_hdg
  cdr >> ros_message.cmd_hdg;

  // Member: cpu_load
  cdr >> ros_message.cpu_load;

  // Member: cpu_load_total
  cdr >> ros_message.cpu_load_total;

  // Member: cpu_ghz
  cdr >> ros_message.cpu_ghz;

  // Member: cpu_temperature
  cdr >> ros_message.cpu_temperature;

  // Member: free_ram
  cdr >> ros_message.free_ram;

  // Member: total_ram
  cdr >> ros_message.total_ram;

  // Member: free_hdd
  cdr >> ros_message.free_hdd;

  // Member: hw_api_hz
  cdr >> ros_message.hw_api_hz;

  // Member: hw_api_color
  cdr >> ros_message.hw_api_color;

  // Member: hw_api_battery_hz
  cdr >> ros_message.hw_api_battery_hz;

  // Member: hw_api_state_hz
  cdr >> ros_message.hw_api_state_hz;

  // Member: hw_api_cmd_hz
  cdr >> ros_message.hw_api_cmd_hz;

  // Member: hw_api_mode
  cdr >> ros_message.hw_api_mode;

  // Member: hw_api_armed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.hw_api_armed = tmp ? true : false;
  }

  // Member: hw_api_gnss_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.hw_api_gnss_ok = tmp ? true : false;
  }

  // Member: hw_api_gnss_qual
  cdr >> ros_message.hw_api_gnss_qual;

  // Member: mag_norm_hz
  cdr >> ros_message.mag_norm_hz;

  // Member: hw_api_gnss_fix_type
  cdr >> ros_message.hw_api_gnss_fix_type;

  // Member: hw_api_gnss_num_sats
  cdr >> ros_message.hw_api_gnss_num_sats;

  // Member: hw_api_gnss_pos_acc
  cdr >> ros_message.hw_api_gnss_pos_acc;

  // Member: hw_api_gnss_status_hz
  cdr >> ros_message.hw_api_gnss_status_hz;

  // Member: mag_norm
  cdr >> ros_message.mag_norm;

  // Member: battery_volt
  cdr >> ros_message.battery_volt;

  // Member: battery_curr
  cdr >> ros_message.battery_curr;

  // Member: battery_wh_drained
  cdr >> ros_message.battery_wh_drained;

  // Member: thrust
  cdr >> ros_message.thrust;

  // Member: mass_estimate
  cdr >> ros_message.mass_estimate;

  // Member: mass_set
  cdr >> ros_message.mass_set;

  // Member: custom_topics
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.custom_topics.resize(size);
    for (size_t i = 0; i < size; i++) {
      mrs_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.custom_topics[i]);
    }
  }

  // Member: custom_string_outputs
  {
    cdr >> ros_message.custom_string_outputs;
  }

  // Member: node_cpu_loads
  mrs_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.node_cpu_loads);

  // Member: flying_normally
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flying_normally = tmp ? true : false;
  }

  // Member: rc_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rc_mode = tmp ? true : false;
  }

  // Member: have_goal
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.have_goal = tmp ? true : false;
  }

  // Member: tracking_trajectory
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tracking_trajectory = tmp ? true : false;
  }

  // Member: callbacks_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.callbacks_enabled = tmp ? true : false;
  }

  // Member: collision_avoidance_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.collision_avoidance_enabled = tmp ? true : false;
  }

  // Member: avoiding_collision
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.avoiding_collision = tmp ? true : false;
  }

  // Member: automatic_start_can_takeoff
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.automatic_start_can_takeoff = tmp ? true : false;
  }

  // Member: num_other_uavs
  cdr >> ros_message.num_other_uavs;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
get_serialized_size(
  const mrs_msgs::msg::UavStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);

  // Member: uav_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.uav_name.size() + 1);

  // Member: uav_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.uav_type.size() + 1);

  // Member: uav_mass
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.uav_mass.size() + 1);

  // Member: control_manager_diag_hz
  {
    size_t item_size = sizeof(ros_message.control_manager_diag_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: control_manager_diag_color
  {
    size_t item_size = sizeof(ros_message.control_manager_diag_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: controllers
  {
    size_t array_size = ros_message.controllers.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.controllers[index].size() + 1);
    }
  }

  // Member: gains
  {
    size_t array_size = ros_message.gains.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.gains[index].size() + 1);
    }
  }

  // Member: trackers
  {
    size_t array_size = ros_message.trackers.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.trackers[index].size() + 1);
    }
  }

  // Member: constraints
  {
    size_t array_size = ros_message.constraints.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.constraints[index].size() + 1);
    }
  }

  // Member: null_tracker
  {
    size_t item_size = sizeof(ros_message.null_tracker);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: secs_flown
  {
    size_t item_size = sizeof(ros_message.secs_flown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: odom_hz
  {
    size_t item_size = sizeof(ros_message.odom_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: odom_color
  {
    size_t item_size = sizeof(ros_message.odom_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: odom_x
  {
    size_t item_size = sizeof(ros_message.odom_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: odom_y
  {
    size_t item_size = sizeof(ros_message.odom_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: odom_z
  {
    size_t item_size = sizeof(ros_message.odom_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: odom_hdg
  {
    size_t item_size = sizeof(ros_message.odom_hdg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: odom_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.odom_frame.size() + 1);

  // Member: odom_estimators
  {
    size_t array_size = ros_message.odom_estimators.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.odom_estimators[index].size() + 1);
    }
  }

  // Member: horizontal_estimator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.horizontal_estimator.size() + 1);

  // Member: vertical_estimator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.vertical_estimator.size() + 1);

  // Member: heading_estimator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.heading_estimator.size() + 1);

  // Member: agl_estimator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.agl_estimator.size() + 1);

  // Member: max_flight_z
  {
    size_t item_size = sizeof(ros_message.max_flight_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cmd_x
  {
    size_t item_size = sizeof(ros_message.cmd_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cmd_y
  {
    size_t item_size = sizeof(ros_message.cmd_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cmd_z
  {
    size_t item_size = sizeof(ros_message.cmd_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cmd_hdg
  {
    size_t item_size = sizeof(ros_message.cmd_hdg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cpu_load
  {
    size_t item_size = sizeof(ros_message.cpu_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cpu_load_total
  {
    size_t item_size = sizeof(ros_message.cpu_load_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cpu_ghz
  {
    size_t item_size = sizeof(ros_message.cpu_ghz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cpu_temperature
  {
    size_t item_size = sizeof(ros_message.cpu_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: free_ram
  {
    size_t item_size = sizeof(ros_message.free_ram);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: total_ram
  {
    size_t item_size = sizeof(ros_message.total_ram);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: free_hdd
  {
    size_t item_size = sizeof(ros_message.free_hdd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_hz
  {
    size_t item_size = sizeof(ros_message.hw_api_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_color
  {
    size_t item_size = sizeof(ros_message.hw_api_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_battery_hz
  {
    size_t item_size = sizeof(ros_message.hw_api_battery_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_state_hz
  {
    size_t item_size = sizeof(ros_message.hw_api_state_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_cmd_hz
  {
    size_t item_size = sizeof(ros_message.hw_api_cmd_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.hw_api_mode.size() + 1);

  // Member: hw_api_armed
  {
    size_t item_size = sizeof(ros_message.hw_api_armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_gnss_ok
  {
    size_t item_size = sizeof(ros_message.hw_api_gnss_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_gnss_qual
  {
    size_t item_size = sizeof(ros_message.hw_api_gnss_qual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mag_norm_hz
  {
    size_t item_size = sizeof(ros_message.mag_norm_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_gnss_fix_type
  {
    size_t item_size = sizeof(ros_message.hw_api_gnss_fix_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_gnss_num_sats
  {
    size_t item_size = sizeof(ros_message.hw_api_gnss_num_sats);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_gnss_pos_acc
  {
    size_t item_size = sizeof(ros_message.hw_api_gnss_pos_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_gnss_status_hz
  {
    size_t item_size = sizeof(ros_message.hw_api_gnss_status_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mag_norm
  {
    size_t item_size = sizeof(ros_message.mag_norm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: battery_volt
  {
    size_t item_size = sizeof(ros_message.battery_volt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: battery_curr
  {
    size_t item_size = sizeof(ros_message.battery_curr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: battery_wh_drained
  {
    size_t item_size = sizeof(ros_message.battery_wh_drained);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: thrust
  {
    size_t item_size = sizeof(ros_message.thrust);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mass_estimate
  {
    size_t item_size = sizeof(ros_message.mass_estimate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mass_set
  {
    size_t item_size = sizeof(ros_message.mass_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: custom_topics
  {
    size_t array_size = ros_message.custom_topics.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mrs_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.custom_topics[index], current_alignment);
    }
  }

  // Member: custom_string_outputs
  {
    size_t array_size = ros_message.custom_string_outputs.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.custom_string_outputs[index].size() + 1);
    }
  }

  // Member: node_cpu_loads
  current_alignment +=
    mrs_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.node_cpu_loads, current_alignment);

  // Member: flying_normally
  {
    size_t item_size = sizeof(ros_message.flying_normally);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: rc_mode
  {
    size_t item_size = sizeof(ros_message.rc_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: have_goal
  {
    size_t item_size = sizeof(ros_message.have_goal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tracking_trajectory
  {
    size_t item_size = sizeof(ros_message.tracking_trajectory);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: callbacks_enabled
  {
    size_t item_size = sizeof(ros_message.callbacks_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: collision_avoidance_enabled
  {
    size_t item_size = sizeof(ros_message.collision_avoidance_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: avoiding_collision
  {
    size_t item_size = sizeof(ros_message.avoiding_collision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: automatic_start_can_takeoff
  {
    size_t item_size = sizeof(ros_message.automatic_start_can_takeoff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: num_other_uavs
  {
    size_t item_size = sizeof(ros_message.num_other_uavs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
max_serialized_size_UavStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: uav_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: uav_type
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: uav_mass
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: control_manager_diag_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: control_manager_diag_color
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: controllers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: gains
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: trackers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: constraints
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: null_tracker
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: secs_flown
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: odom_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: odom_color
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: odom_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: odom_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: odom_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: odom_hdg
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: odom_frame
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: odom_estimators
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: horizontal_estimator
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: vertical_estimator
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: heading_estimator
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: agl_estimator
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: max_flight_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: cmd_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: cmd_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: cmd_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: cmd_hdg
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: cpu_load
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: cpu_load_total
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: cpu_ghz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: cpu_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: free_ram
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: total_ram
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: free_hdd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: hw_api_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: hw_api_color
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: hw_api_battery_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: hw_api_state_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: hw_api_cmd_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: hw_api_mode
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: hw_api_armed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: hw_api_gnss_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: hw_api_gnss_qual
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: mag_norm_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: hw_api_gnss_fix_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: hw_api_gnss_num_sats
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: hw_api_gnss_pos_acc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: hw_api_gnss_status_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: mag_norm
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: battery_volt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: battery_curr
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: battery_wh_drained
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: thrust
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: mass_estimate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: mass_set
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: custom_topics
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mrs_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CustomTopic(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: custom_string_outputs
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: node_cpu_loads
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mrs_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NodeCpuLoad(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: flying_normally
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: rc_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: have_goal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: tracking_trajectory
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: callbacks_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: collision_avoidance_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: avoiding_collision
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: automatic_start_can_takeoff
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: num_other_uavs
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_msgs::msg::UavStatus;
    is_plain =
      (
      offsetof(DataType, num_other_uavs) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
cdr_serialize_key(
  const mrs_msgs::msg::UavStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: uav_name
  cdr << ros_message.uav_name;

  // Member: uav_type
  cdr << ros_message.uav_type;

  // Member: uav_mass
  cdr << ros_message.uav_mass;

  // Member: control_manager_diag_hz
  cdr << ros_message.control_manager_diag_hz;

  // Member: control_manager_diag_color
  cdr << ros_message.control_manager_diag_color;

  // Member: controllers
  {
    cdr << ros_message.controllers;
  }

  // Member: gains
  {
    cdr << ros_message.gains;
  }

  // Member: trackers
  {
    cdr << ros_message.trackers;
  }

  // Member: constraints
  {
    cdr << ros_message.constraints;
  }

  // Member: null_tracker
  cdr << (ros_message.null_tracker ? true : false);

  // Member: secs_flown
  cdr << ros_message.secs_flown;

  // Member: odom_hz
  cdr << ros_message.odom_hz;

  // Member: odom_color
  cdr << ros_message.odom_color;

  // Member: odom_x
  cdr << ros_message.odom_x;

  // Member: odom_y
  cdr << ros_message.odom_y;

  // Member: odom_z
  cdr << ros_message.odom_z;

  // Member: odom_hdg
  cdr << ros_message.odom_hdg;

  // Member: odom_frame
  cdr << ros_message.odom_frame;

  // Member: odom_estimators
  {
    cdr << ros_message.odom_estimators;
  }

  // Member: horizontal_estimator
  cdr << ros_message.horizontal_estimator;

  // Member: vertical_estimator
  cdr << ros_message.vertical_estimator;

  // Member: heading_estimator
  cdr << ros_message.heading_estimator;

  // Member: agl_estimator
  cdr << ros_message.agl_estimator;

  // Member: max_flight_z
  cdr << ros_message.max_flight_z;

  // Member: cmd_x
  cdr << ros_message.cmd_x;

  // Member: cmd_y
  cdr << ros_message.cmd_y;

  // Member: cmd_z
  cdr << ros_message.cmd_z;

  // Member: cmd_hdg
  cdr << ros_message.cmd_hdg;

  // Member: cpu_load
  cdr << ros_message.cpu_load;

  // Member: cpu_load_total
  cdr << ros_message.cpu_load_total;

  // Member: cpu_ghz
  cdr << ros_message.cpu_ghz;

  // Member: cpu_temperature
  cdr << ros_message.cpu_temperature;

  // Member: free_ram
  cdr << ros_message.free_ram;

  // Member: total_ram
  cdr << ros_message.total_ram;

  // Member: free_hdd
  cdr << ros_message.free_hdd;

  // Member: hw_api_hz
  cdr << ros_message.hw_api_hz;

  // Member: hw_api_color
  cdr << ros_message.hw_api_color;

  // Member: hw_api_battery_hz
  cdr << ros_message.hw_api_battery_hz;

  // Member: hw_api_state_hz
  cdr << ros_message.hw_api_state_hz;

  // Member: hw_api_cmd_hz
  cdr << ros_message.hw_api_cmd_hz;

  // Member: hw_api_mode
  cdr << ros_message.hw_api_mode;

  // Member: hw_api_armed
  cdr << (ros_message.hw_api_armed ? true : false);

  // Member: hw_api_gnss_ok
  cdr << (ros_message.hw_api_gnss_ok ? true : false);

  // Member: hw_api_gnss_qual
  cdr << ros_message.hw_api_gnss_qual;

  // Member: mag_norm_hz
  cdr << ros_message.mag_norm_hz;

  // Member: hw_api_gnss_fix_type
  cdr << ros_message.hw_api_gnss_fix_type;

  // Member: hw_api_gnss_num_sats
  cdr << ros_message.hw_api_gnss_num_sats;

  // Member: hw_api_gnss_pos_acc
  cdr << ros_message.hw_api_gnss_pos_acc;

  // Member: hw_api_gnss_status_hz
  cdr << ros_message.hw_api_gnss_status_hz;

  // Member: mag_norm
  cdr << ros_message.mag_norm;

  // Member: battery_volt
  cdr << ros_message.battery_volt;

  // Member: battery_curr
  cdr << ros_message.battery_curr;

  // Member: battery_wh_drained
  cdr << ros_message.battery_wh_drained;

  // Member: thrust
  cdr << ros_message.thrust;

  // Member: mass_estimate
  cdr << ros_message.mass_estimate;

  // Member: mass_set
  cdr << ros_message.mass_set;

  // Member: custom_topics
  {
    size_t size = ros_message.custom_topics.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      mrs_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.custom_topics[i],
        cdr);
    }
  }

  // Member: custom_string_outputs
  {
    cdr << ros_message.custom_string_outputs;
  }

  // Member: node_cpu_loads
  mrs_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.node_cpu_loads,
    cdr);

  // Member: flying_normally
  cdr << (ros_message.flying_normally ? true : false);

  // Member: rc_mode
  cdr << (ros_message.rc_mode ? true : false);

  // Member: have_goal
  cdr << (ros_message.have_goal ? true : false);

  // Member: tracking_trajectory
  cdr << (ros_message.tracking_trajectory ? true : false);

  // Member: callbacks_enabled
  cdr << (ros_message.callbacks_enabled ? true : false);

  // Member: collision_avoidance_enabled
  cdr << (ros_message.collision_avoidance_enabled ? true : false);

  // Member: avoiding_collision
  cdr << (ros_message.avoiding_collision ? true : false);

  // Member: automatic_start_can_takeoff
  cdr << (ros_message.automatic_start_can_takeoff ? true : false);

  // Member: num_other_uavs
  cdr << ros_message.num_other_uavs;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
get_serialized_size_key(
  const mrs_msgs::msg::UavStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.header, current_alignment);

  // Member: uav_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.uav_name.size() + 1);

  // Member: uav_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.uav_type.size() + 1);

  // Member: uav_mass
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.uav_mass.size() + 1);

  // Member: control_manager_diag_hz
  {
    size_t item_size = sizeof(ros_message.control_manager_diag_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: control_manager_diag_color
  {
    size_t item_size = sizeof(ros_message.control_manager_diag_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: controllers
  {
    size_t array_size = ros_message.controllers.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.controllers[index].size() + 1);
    }
  }

  // Member: gains
  {
    size_t array_size = ros_message.gains.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.gains[index].size() + 1);
    }
  }

  // Member: trackers
  {
    size_t array_size = ros_message.trackers.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.trackers[index].size() + 1);
    }
  }

  // Member: constraints
  {
    size_t array_size = ros_message.constraints.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.constraints[index].size() + 1);
    }
  }

  // Member: null_tracker
  {
    size_t item_size = sizeof(ros_message.null_tracker);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: secs_flown
  {
    size_t item_size = sizeof(ros_message.secs_flown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: odom_hz
  {
    size_t item_size = sizeof(ros_message.odom_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: odom_color
  {
    size_t item_size = sizeof(ros_message.odom_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: odom_x
  {
    size_t item_size = sizeof(ros_message.odom_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: odom_y
  {
    size_t item_size = sizeof(ros_message.odom_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: odom_z
  {
    size_t item_size = sizeof(ros_message.odom_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: odom_hdg
  {
    size_t item_size = sizeof(ros_message.odom_hdg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: odom_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.odom_frame.size() + 1);

  // Member: odom_estimators
  {
    size_t array_size = ros_message.odom_estimators.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.odom_estimators[index].size() + 1);
    }
  }

  // Member: horizontal_estimator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.horizontal_estimator.size() + 1);

  // Member: vertical_estimator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.vertical_estimator.size() + 1);

  // Member: heading_estimator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.heading_estimator.size() + 1);

  // Member: agl_estimator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.agl_estimator.size() + 1);

  // Member: max_flight_z
  {
    size_t item_size = sizeof(ros_message.max_flight_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cmd_x
  {
    size_t item_size = sizeof(ros_message.cmd_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cmd_y
  {
    size_t item_size = sizeof(ros_message.cmd_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cmd_z
  {
    size_t item_size = sizeof(ros_message.cmd_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cmd_hdg
  {
    size_t item_size = sizeof(ros_message.cmd_hdg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cpu_load
  {
    size_t item_size = sizeof(ros_message.cpu_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cpu_load_total
  {
    size_t item_size = sizeof(ros_message.cpu_load_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cpu_ghz
  {
    size_t item_size = sizeof(ros_message.cpu_ghz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cpu_temperature
  {
    size_t item_size = sizeof(ros_message.cpu_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: free_ram
  {
    size_t item_size = sizeof(ros_message.free_ram);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: total_ram
  {
    size_t item_size = sizeof(ros_message.total_ram);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: free_hdd
  {
    size_t item_size = sizeof(ros_message.free_hdd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_hz
  {
    size_t item_size = sizeof(ros_message.hw_api_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_color
  {
    size_t item_size = sizeof(ros_message.hw_api_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_battery_hz
  {
    size_t item_size = sizeof(ros_message.hw_api_battery_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_state_hz
  {
    size_t item_size = sizeof(ros_message.hw_api_state_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_cmd_hz
  {
    size_t item_size = sizeof(ros_message.hw_api_cmd_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.hw_api_mode.size() + 1);

  // Member: hw_api_armed
  {
    size_t item_size = sizeof(ros_message.hw_api_armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_gnss_ok
  {
    size_t item_size = sizeof(ros_message.hw_api_gnss_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_gnss_qual
  {
    size_t item_size = sizeof(ros_message.hw_api_gnss_qual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mag_norm_hz
  {
    size_t item_size = sizeof(ros_message.mag_norm_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_gnss_fix_type
  {
    size_t item_size = sizeof(ros_message.hw_api_gnss_fix_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_gnss_num_sats
  {
    size_t item_size = sizeof(ros_message.hw_api_gnss_num_sats);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_gnss_pos_acc
  {
    size_t item_size = sizeof(ros_message.hw_api_gnss_pos_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_api_gnss_status_hz
  {
    size_t item_size = sizeof(ros_message.hw_api_gnss_status_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mag_norm
  {
    size_t item_size = sizeof(ros_message.mag_norm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: battery_volt
  {
    size_t item_size = sizeof(ros_message.battery_volt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: battery_curr
  {
    size_t item_size = sizeof(ros_message.battery_curr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: battery_wh_drained
  {
    size_t item_size = sizeof(ros_message.battery_wh_drained);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: thrust
  {
    size_t item_size = sizeof(ros_message.thrust);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mass_estimate
  {
    size_t item_size = sizeof(ros_message.mass_estimate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mass_set
  {
    size_t item_size = sizeof(ros_message.mass_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: custom_topics
  {
    size_t array_size = ros_message.custom_topics.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mrs_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.custom_topics[index], current_alignment);
    }
  }

  // Member: custom_string_outputs
  {
    size_t array_size = ros_message.custom_string_outputs.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.custom_string_outputs[index].size() + 1);
    }
  }

  // Member: node_cpu_loads
  current_alignment +=
    mrs_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.node_cpu_loads, current_alignment);

  // Member: flying_normally
  {
    size_t item_size = sizeof(ros_message.flying_normally);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: rc_mode
  {
    size_t item_size = sizeof(ros_message.rc_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: have_goal
  {
    size_t item_size = sizeof(ros_message.have_goal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tracking_trajectory
  {
    size_t item_size = sizeof(ros_message.tracking_trajectory);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: callbacks_enabled
  {
    size_t item_size = sizeof(ros_message.callbacks_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: collision_avoidance_enabled
  {
    size_t item_size = sizeof(ros_message.collision_avoidance_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: avoiding_collision
  {
    size_t item_size = sizeof(ros_message.avoiding_collision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: automatic_start_can_takeoff
  {
    size_t item_size = sizeof(ros_message.automatic_start_can_takeoff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: num_other_uavs
  {
    size_t item_size = sizeof(ros_message.num_other_uavs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
max_serialized_size_key_UavStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: uav_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: uav_type
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: uav_mass
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: control_manager_diag_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: control_manager_diag_color
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: controllers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: gains
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: trackers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: constraints
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: null_tracker
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: secs_flown
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: odom_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: odom_color
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: odom_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: odom_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: odom_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: odom_hdg
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: odom_frame
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: odom_estimators
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: horizontal_estimator
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: vertical_estimator
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: heading_estimator
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: agl_estimator
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: max_flight_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cmd_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cmd_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cmd_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cmd_hdg
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cpu_load
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cpu_load_total
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cpu_ghz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cpu_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: free_ram
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: total_ram
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: free_hdd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hw_api_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hw_api_color
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: hw_api_battery_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hw_api_state_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hw_api_cmd_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hw_api_mode
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: hw_api_armed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hw_api_gnss_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hw_api_gnss_qual
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mag_norm_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hw_api_gnss_fix_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hw_api_gnss_num_sats
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hw_api_gnss_pos_acc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hw_api_gnss_status_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mag_norm
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: battery_volt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: battery_curr
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: battery_wh_drained
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: thrust
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mass_estimate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mass_set
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: custom_topics
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mrs_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_CustomTopic(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: custom_string_outputs
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: node_cpu_loads
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mrs_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_NodeCpuLoad(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: flying_normally
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rc_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: have_goal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tracking_trajectory
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: callbacks_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: collision_avoidance_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: avoiding_collision
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: automatic_start_can_takeoff
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: num_other_uavs
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_msgs::msg::UavStatus;
    is_plain =
      (
      offsetof(DataType, num_other_uavs) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _UavStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mrs_msgs::msg::UavStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UavStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mrs_msgs::msg::UavStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UavStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mrs_msgs::msg::UavStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UavStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_UavStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _UavStatus__callbacks = {
  "mrs_msgs::msg",
  "UavStatus",
  _UavStatus__cdr_serialize,
  _UavStatus__cdr_deserialize,
  _UavStatus__get_serialized_size,
  _UavStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _UavStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UavStatus__callbacks,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__UavStatus__get_type_hash,
  &mrs_msgs__msg__UavStatus__get_type_description,
  &mrs_msgs__msg__UavStatus__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mrs_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::msg::UavStatus>()
{
  return &mrs_msgs::msg::typesupport_fastrtps_cpp::_UavStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_msgs, msg, UavStatus)() {
  return &mrs_msgs::msg::typesupport_fastrtps_cpp::_UavStatus__handle;
}

#ifdef __cplusplus
}
#endif
