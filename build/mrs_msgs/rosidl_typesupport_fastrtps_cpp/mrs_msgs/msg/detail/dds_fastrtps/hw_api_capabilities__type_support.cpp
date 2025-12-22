// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mrs_msgs:msg/HwApiCapabilities.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/hw_api_capabilities__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mrs_msgs/msg/detail/hw_api_capabilities__functions.h"
#include "mrs_msgs/msg/detail/hw_api_capabilities__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_key_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace mrs_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
cdr_serialize(
  const mrs_msgs::msg::HwApiCapabilities & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);

  // Member: api_name
  cdr << ros_message.api_name;

  // Member: accepts_actuator_cmd
  cdr << (ros_message.accepts_actuator_cmd ? true : false);

  // Member: accepts_attitude_cmd
  cdr << (ros_message.accepts_attitude_cmd ? true : false);

  // Member: accepts_attitude_rate_cmd
  cdr << (ros_message.accepts_attitude_rate_cmd ? true : false);

  // Member: accepts_control_group_cmd
  cdr << (ros_message.accepts_control_group_cmd ? true : false);

  // Member: accepts_acceleration_hdg_rate_cmd
  cdr << (ros_message.accepts_acceleration_hdg_rate_cmd ? true : false);

  // Member: accepts_acceleration_hdg_cmd
  cdr << (ros_message.accepts_acceleration_hdg_cmd ? true : false);

  // Member: accepts_velocity_hdg_rate_cmd
  cdr << (ros_message.accepts_velocity_hdg_rate_cmd ? true : false);

  // Member: accepts_velocity_hdg_cmd
  cdr << (ros_message.accepts_velocity_hdg_cmd ? true : false);

  // Member: accepts_position_cmd
  cdr << (ros_message.accepts_position_cmd ? true : false);

  // Member: produces_ground_truth
  cdr << (ros_message.produces_ground_truth ? true : false);

  // Member: produces_gnss
  cdr << (ros_message.produces_gnss ? true : false);

  // Member: produces_gnss_status
  cdr << (ros_message.produces_gnss_status ? true : false);

  // Member: produces_rtk
  cdr << (ros_message.produces_rtk ? true : false);

  // Member: produces_imu
  cdr << (ros_message.produces_imu ? true : false);

  // Member: produces_distance_sensor
  cdr << (ros_message.produces_distance_sensor ? true : false);

  // Member: produces_altitude
  cdr << (ros_message.produces_altitude ? true : false);

  // Member: produces_magnetometer_heading
  cdr << (ros_message.produces_magnetometer_heading ? true : false);

  // Member: produces_rc_channels
  cdr << (ros_message.produces_rc_channels ? true : false);

  // Member: produces_battery_state
  cdr << (ros_message.produces_battery_state ? true : false);

  // Member: produces_position
  cdr << (ros_message.produces_position ? true : false);

  // Member: produces_orientation
  cdr << (ros_message.produces_orientation ? true : false);

  // Member: produces_velocity
  cdr << (ros_message.produces_velocity ? true : false);

  // Member: produces_angular_velocity
  cdr << (ros_message.produces_angular_velocity ? true : false);

  // Member: produces_odometry
  cdr << (ros_message.produces_odometry ? true : false);

  // Member: produces_magnetic_field
  cdr << (ros_message.produces_magnetic_field ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs::msg::HwApiCapabilities & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: api_name
  cdr >> ros_message.api_name;

  // Member: accepts_actuator_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accepts_actuator_cmd = tmp ? true : false;
  }

  // Member: accepts_attitude_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accepts_attitude_cmd = tmp ? true : false;
  }

  // Member: accepts_attitude_rate_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accepts_attitude_rate_cmd = tmp ? true : false;
  }

  // Member: accepts_control_group_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accepts_control_group_cmd = tmp ? true : false;
  }

  // Member: accepts_acceleration_hdg_rate_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accepts_acceleration_hdg_rate_cmd = tmp ? true : false;
  }

  // Member: accepts_acceleration_hdg_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accepts_acceleration_hdg_cmd = tmp ? true : false;
  }

  // Member: accepts_velocity_hdg_rate_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accepts_velocity_hdg_rate_cmd = tmp ? true : false;
  }

  // Member: accepts_velocity_hdg_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accepts_velocity_hdg_cmd = tmp ? true : false;
  }

  // Member: accepts_position_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accepts_position_cmd = tmp ? true : false;
  }

  // Member: produces_ground_truth
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.produces_ground_truth = tmp ? true : false;
  }

  // Member: produces_gnss
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.produces_gnss = tmp ? true : false;
  }

  // Member: produces_gnss_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.produces_gnss_status = tmp ? true : false;
  }

  // Member: produces_rtk
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.produces_rtk = tmp ? true : false;
  }

  // Member: produces_imu
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.produces_imu = tmp ? true : false;
  }

  // Member: produces_distance_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.produces_distance_sensor = tmp ? true : false;
  }

  // Member: produces_altitude
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.produces_altitude = tmp ? true : false;
  }

  // Member: produces_magnetometer_heading
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.produces_magnetometer_heading = tmp ? true : false;
  }

  // Member: produces_rc_channels
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.produces_rc_channels = tmp ? true : false;
  }

  // Member: produces_battery_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.produces_battery_state = tmp ? true : false;
  }

  // Member: produces_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.produces_position = tmp ? true : false;
  }

  // Member: produces_orientation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.produces_orientation = tmp ? true : false;
  }

  // Member: produces_velocity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.produces_velocity = tmp ? true : false;
  }

  // Member: produces_angular_velocity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.produces_angular_velocity = tmp ? true : false;
  }

  // Member: produces_odometry
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.produces_odometry = tmp ? true : false;
  }

  // Member: produces_magnetic_field
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.produces_magnetic_field = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
get_serialized_size(
  const mrs_msgs::msg::HwApiCapabilities & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp
  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);

  // Member: api_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.api_name.size() + 1);

  // Member: accepts_actuator_cmd
  {
    size_t item_size = sizeof(ros_message.accepts_actuator_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accepts_attitude_cmd
  {
    size_t item_size = sizeof(ros_message.accepts_attitude_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accepts_attitude_rate_cmd
  {
    size_t item_size = sizeof(ros_message.accepts_attitude_rate_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accepts_control_group_cmd
  {
    size_t item_size = sizeof(ros_message.accepts_control_group_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accepts_acceleration_hdg_rate_cmd
  {
    size_t item_size = sizeof(ros_message.accepts_acceleration_hdg_rate_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accepts_acceleration_hdg_cmd
  {
    size_t item_size = sizeof(ros_message.accepts_acceleration_hdg_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accepts_velocity_hdg_rate_cmd
  {
    size_t item_size = sizeof(ros_message.accepts_velocity_hdg_rate_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accepts_velocity_hdg_cmd
  {
    size_t item_size = sizeof(ros_message.accepts_velocity_hdg_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accepts_position_cmd
  {
    size_t item_size = sizeof(ros_message.accepts_position_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_ground_truth
  {
    size_t item_size = sizeof(ros_message.produces_ground_truth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_gnss
  {
    size_t item_size = sizeof(ros_message.produces_gnss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_gnss_status
  {
    size_t item_size = sizeof(ros_message.produces_gnss_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_rtk
  {
    size_t item_size = sizeof(ros_message.produces_rtk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_imu
  {
    size_t item_size = sizeof(ros_message.produces_imu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_distance_sensor
  {
    size_t item_size = sizeof(ros_message.produces_distance_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_altitude
  {
    size_t item_size = sizeof(ros_message.produces_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_magnetometer_heading
  {
    size_t item_size = sizeof(ros_message.produces_magnetometer_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_rc_channels
  {
    size_t item_size = sizeof(ros_message.produces_rc_channels);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_battery_state
  {
    size_t item_size = sizeof(ros_message.produces_battery_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_position
  {
    size_t item_size = sizeof(ros_message.produces_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_orientation
  {
    size_t item_size = sizeof(ros_message.produces_orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_velocity
  {
    size_t item_size = sizeof(ros_message.produces_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_angular_velocity
  {
    size_t item_size = sizeof(ros_message.produces_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_odometry
  {
    size_t item_size = sizeof(ros_message.produces_odometry);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_magnetic_field
  {
    size_t item_size = sizeof(ros_message.produces_magnetic_field);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
max_serialized_size_HwApiCapabilities(
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

  // Member: stamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: api_name
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
  // Member: accepts_actuator_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: accepts_attitude_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: accepts_attitude_rate_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: accepts_control_group_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: accepts_acceleration_hdg_rate_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: accepts_acceleration_hdg_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: accepts_velocity_hdg_rate_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: accepts_velocity_hdg_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: accepts_position_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: produces_ground_truth
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: produces_gnss
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: produces_gnss_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: produces_rtk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: produces_imu
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: produces_distance_sensor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: produces_altitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: produces_magnetometer_heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: produces_rc_channels
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: produces_battery_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: produces_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: produces_orientation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: produces_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: produces_angular_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: produces_odometry
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: produces_magnetic_field
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_msgs::msg::HwApiCapabilities;
    is_plain =
      (
      offsetof(DataType, produces_magnetic_field) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
cdr_serialize_key(
  const mrs_msgs::msg::HwApiCapabilities & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.stamp,
    cdr);

  // Member: api_name
  cdr << ros_message.api_name;

  // Member: accepts_actuator_cmd
  cdr << (ros_message.accepts_actuator_cmd ? true : false);

  // Member: accepts_attitude_cmd
  cdr << (ros_message.accepts_attitude_cmd ? true : false);

  // Member: accepts_attitude_rate_cmd
  cdr << (ros_message.accepts_attitude_rate_cmd ? true : false);

  // Member: accepts_control_group_cmd
  cdr << (ros_message.accepts_control_group_cmd ? true : false);

  // Member: accepts_acceleration_hdg_rate_cmd
  cdr << (ros_message.accepts_acceleration_hdg_rate_cmd ? true : false);

  // Member: accepts_acceleration_hdg_cmd
  cdr << (ros_message.accepts_acceleration_hdg_cmd ? true : false);

  // Member: accepts_velocity_hdg_rate_cmd
  cdr << (ros_message.accepts_velocity_hdg_rate_cmd ? true : false);

  // Member: accepts_velocity_hdg_cmd
  cdr << (ros_message.accepts_velocity_hdg_cmd ? true : false);

  // Member: accepts_position_cmd
  cdr << (ros_message.accepts_position_cmd ? true : false);

  // Member: produces_ground_truth
  cdr << (ros_message.produces_ground_truth ? true : false);

  // Member: produces_gnss
  cdr << (ros_message.produces_gnss ? true : false);

  // Member: produces_gnss_status
  cdr << (ros_message.produces_gnss_status ? true : false);

  // Member: produces_rtk
  cdr << (ros_message.produces_rtk ? true : false);

  // Member: produces_imu
  cdr << (ros_message.produces_imu ? true : false);

  // Member: produces_distance_sensor
  cdr << (ros_message.produces_distance_sensor ? true : false);

  // Member: produces_altitude
  cdr << (ros_message.produces_altitude ? true : false);

  // Member: produces_magnetometer_heading
  cdr << (ros_message.produces_magnetometer_heading ? true : false);

  // Member: produces_rc_channels
  cdr << (ros_message.produces_rc_channels ? true : false);

  // Member: produces_battery_state
  cdr << (ros_message.produces_battery_state ? true : false);

  // Member: produces_position
  cdr << (ros_message.produces_position ? true : false);

  // Member: produces_orientation
  cdr << (ros_message.produces_orientation ? true : false);

  // Member: produces_velocity
  cdr << (ros_message.produces_velocity ? true : false);

  // Member: produces_angular_velocity
  cdr << (ros_message.produces_angular_velocity ? true : false);

  // Member: produces_odometry
  cdr << (ros_message.produces_odometry ? true : false);

  // Member: produces_magnetic_field
  cdr << (ros_message.produces_magnetic_field ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
get_serialized_size_key(
  const mrs_msgs::msg::HwApiCapabilities & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp
  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.stamp, current_alignment);

  // Member: api_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.api_name.size() + 1);

  // Member: accepts_actuator_cmd
  {
    size_t item_size = sizeof(ros_message.accepts_actuator_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accepts_attitude_cmd
  {
    size_t item_size = sizeof(ros_message.accepts_attitude_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accepts_attitude_rate_cmd
  {
    size_t item_size = sizeof(ros_message.accepts_attitude_rate_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accepts_control_group_cmd
  {
    size_t item_size = sizeof(ros_message.accepts_control_group_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accepts_acceleration_hdg_rate_cmd
  {
    size_t item_size = sizeof(ros_message.accepts_acceleration_hdg_rate_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accepts_acceleration_hdg_cmd
  {
    size_t item_size = sizeof(ros_message.accepts_acceleration_hdg_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accepts_velocity_hdg_rate_cmd
  {
    size_t item_size = sizeof(ros_message.accepts_velocity_hdg_rate_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accepts_velocity_hdg_cmd
  {
    size_t item_size = sizeof(ros_message.accepts_velocity_hdg_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accepts_position_cmd
  {
    size_t item_size = sizeof(ros_message.accepts_position_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_ground_truth
  {
    size_t item_size = sizeof(ros_message.produces_ground_truth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_gnss
  {
    size_t item_size = sizeof(ros_message.produces_gnss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_gnss_status
  {
    size_t item_size = sizeof(ros_message.produces_gnss_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_rtk
  {
    size_t item_size = sizeof(ros_message.produces_rtk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_imu
  {
    size_t item_size = sizeof(ros_message.produces_imu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_distance_sensor
  {
    size_t item_size = sizeof(ros_message.produces_distance_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_altitude
  {
    size_t item_size = sizeof(ros_message.produces_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_magnetometer_heading
  {
    size_t item_size = sizeof(ros_message.produces_magnetometer_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_rc_channels
  {
    size_t item_size = sizeof(ros_message.produces_rc_channels);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_battery_state
  {
    size_t item_size = sizeof(ros_message.produces_battery_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_position
  {
    size_t item_size = sizeof(ros_message.produces_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_orientation
  {
    size_t item_size = sizeof(ros_message.produces_orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_velocity
  {
    size_t item_size = sizeof(ros_message.produces_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_angular_velocity
  {
    size_t item_size = sizeof(ros_message.produces_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_odometry
  {
    size_t item_size = sizeof(ros_message.produces_odometry);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: produces_magnetic_field
  {
    size_t item_size = sizeof(ros_message.produces_magnetic_field);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
max_serialized_size_key_HwApiCapabilities(
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

  // Member: stamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: api_name
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

  // Member: accepts_actuator_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accepts_attitude_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accepts_attitude_rate_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accepts_control_group_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accepts_acceleration_hdg_rate_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accepts_acceleration_hdg_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accepts_velocity_hdg_rate_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accepts_velocity_hdg_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accepts_position_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: produces_ground_truth
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: produces_gnss
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: produces_gnss_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: produces_rtk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: produces_imu
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: produces_distance_sensor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: produces_altitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: produces_magnetometer_heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: produces_rc_channels
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: produces_battery_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: produces_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: produces_orientation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: produces_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: produces_angular_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: produces_odometry
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: produces_magnetic_field
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_msgs::msg::HwApiCapabilities;
    is_plain =
      (
      offsetof(DataType, produces_magnetic_field) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _HwApiCapabilities__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mrs_msgs::msg::HwApiCapabilities *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HwApiCapabilities__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mrs_msgs::msg::HwApiCapabilities *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HwApiCapabilities__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mrs_msgs::msg::HwApiCapabilities *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HwApiCapabilities__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HwApiCapabilities(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HwApiCapabilities__callbacks = {
  "mrs_msgs::msg",
  "HwApiCapabilities",
  _HwApiCapabilities__cdr_serialize,
  _HwApiCapabilities__cdr_deserialize,
  _HwApiCapabilities__get_serialized_size,
  _HwApiCapabilities__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _HwApiCapabilities__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HwApiCapabilities__callbacks,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__HwApiCapabilities__get_type_hash,
  &mrs_msgs__msg__HwApiCapabilities__get_type_description,
  &mrs_msgs__msg__HwApiCapabilities__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mrs_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::msg::HwApiCapabilities>()
{
  return &mrs_msgs::msg::typesupport_fastrtps_cpp::_HwApiCapabilities__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_msgs, msg, HwApiCapabilities)() {
  return &mrs_msgs::msg::typesupport_fastrtps_cpp::_HwApiCapabilities__handle;
}

#ifdef __cplusplus
}
#endif
