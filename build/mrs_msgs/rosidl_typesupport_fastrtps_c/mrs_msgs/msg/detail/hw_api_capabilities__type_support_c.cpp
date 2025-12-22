// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_msgs:msg/HwApiCapabilities.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/hw_api_capabilities__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_msgs/msg/detail/hw_api_capabilities__struct.h"
#include "mrs_msgs/msg/detail/hw_api_capabilities__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp
#include "rosidl_runtime_c/string.h"  // api_name
#include "rosidl_runtime_c/string_functions.h"  // api_name

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_serialize_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_deserialize_builtin_interfaces__msg__Time(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Time * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_serialize_key_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t get_serialized_size_key_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t max_serialized_size_key_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _HwApiCapabilities__ros_msg_type = mrs_msgs__msg__HwApiCapabilities;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_mrs_msgs__msg__HwApiCapabilities(
  const mrs_msgs__msg__HwApiCapabilities * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: stamp
  {
    cdr_serialize_builtin_interfaces__msg__Time(
      &ros_message->stamp, cdr);
  }

  // Field name: api_name
  {
    const rosidl_runtime_c__String * str = &ros_message->api_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: accepts_actuator_cmd
  {
    cdr << (ros_message->accepts_actuator_cmd ? true : false);
  }

  // Field name: accepts_attitude_cmd
  {
    cdr << (ros_message->accepts_attitude_cmd ? true : false);
  }

  // Field name: accepts_attitude_rate_cmd
  {
    cdr << (ros_message->accepts_attitude_rate_cmd ? true : false);
  }

  // Field name: accepts_control_group_cmd
  {
    cdr << (ros_message->accepts_control_group_cmd ? true : false);
  }

  // Field name: accepts_acceleration_hdg_rate_cmd
  {
    cdr << (ros_message->accepts_acceleration_hdg_rate_cmd ? true : false);
  }

  // Field name: accepts_acceleration_hdg_cmd
  {
    cdr << (ros_message->accepts_acceleration_hdg_cmd ? true : false);
  }

  // Field name: accepts_velocity_hdg_rate_cmd
  {
    cdr << (ros_message->accepts_velocity_hdg_rate_cmd ? true : false);
  }

  // Field name: accepts_velocity_hdg_cmd
  {
    cdr << (ros_message->accepts_velocity_hdg_cmd ? true : false);
  }

  // Field name: accepts_position_cmd
  {
    cdr << (ros_message->accepts_position_cmd ? true : false);
  }

  // Field name: produces_ground_truth
  {
    cdr << (ros_message->produces_ground_truth ? true : false);
  }

  // Field name: produces_gnss
  {
    cdr << (ros_message->produces_gnss ? true : false);
  }

  // Field name: produces_gnss_status
  {
    cdr << (ros_message->produces_gnss_status ? true : false);
  }

  // Field name: produces_rtk
  {
    cdr << (ros_message->produces_rtk ? true : false);
  }

  // Field name: produces_imu
  {
    cdr << (ros_message->produces_imu ? true : false);
  }

  // Field name: produces_distance_sensor
  {
    cdr << (ros_message->produces_distance_sensor ? true : false);
  }

  // Field name: produces_altitude
  {
    cdr << (ros_message->produces_altitude ? true : false);
  }

  // Field name: produces_magnetometer_heading
  {
    cdr << (ros_message->produces_magnetometer_heading ? true : false);
  }

  // Field name: produces_rc_channels
  {
    cdr << (ros_message->produces_rc_channels ? true : false);
  }

  // Field name: produces_battery_state
  {
    cdr << (ros_message->produces_battery_state ? true : false);
  }

  // Field name: produces_position
  {
    cdr << (ros_message->produces_position ? true : false);
  }

  // Field name: produces_orientation
  {
    cdr << (ros_message->produces_orientation ? true : false);
  }

  // Field name: produces_velocity
  {
    cdr << (ros_message->produces_velocity ? true : false);
  }

  // Field name: produces_angular_velocity
  {
    cdr << (ros_message->produces_angular_velocity ? true : false);
  }

  // Field name: produces_odometry
  {
    cdr << (ros_message->produces_odometry ? true : false);
  }

  // Field name: produces_magnetic_field
  {
    cdr << (ros_message->produces_magnetic_field ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_deserialize_mrs_msgs__msg__HwApiCapabilities(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__HwApiCapabilities * ros_message)
{
  // Field name: stamp
  {
    cdr_deserialize_builtin_interfaces__msg__Time(cdr, &ros_message->stamp);
  }

  // Field name: api_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->api_name.data) {
      rosidl_runtime_c__String__init(&ros_message->api_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->api_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'api_name'\n");
      return false;
    }
  }

  // Field name: accepts_actuator_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepts_actuator_cmd = tmp ? true : false;
  }

  // Field name: accepts_attitude_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepts_attitude_cmd = tmp ? true : false;
  }

  // Field name: accepts_attitude_rate_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepts_attitude_rate_cmd = tmp ? true : false;
  }

  // Field name: accepts_control_group_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepts_control_group_cmd = tmp ? true : false;
  }

  // Field name: accepts_acceleration_hdg_rate_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepts_acceleration_hdg_rate_cmd = tmp ? true : false;
  }

  // Field name: accepts_acceleration_hdg_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepts_acceleration_hdg_cmd = tmp ? true : false;
  }

  // Field name: accepts_velocity_hdg_rate_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepts_velocity_hdg_rate_cmd = tmp ? true : false;
  }

  // Field name: accepts_velocity_hdg_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepts_velocity_hdg_cmd = tmp ? true : false;
  }

  // Field name: accepts_position_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepts_position_cmd = tmp ? true : false;
  }

  // Field name: produces_ground_truth
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->produces_ground_truth = tmp ? true : false;
  }

  // Field name: produces_gnss
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->produces_gnss = tmp ? true : false;
  }

  // Field name: produces_gnss_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->produces_gnss_status = tmp ? true : false;
  }

  // Field name: produces_rtk
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->produces_rtk = tmp ? true : false;
  }

  // Field name: produces_imu
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->produces_imu = tmp ? true : false;
  }

  // Field name: produces_distance_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->produces_distance_sensor = tmp ? true : false;
  }

  // Field name: produces_altitude
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->produces_altitude = tmp ? true : false;
  }

  // Field name: produces_magnetometer_heading
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->produces_magnetometer_heading = tmp ? true : false;
  }

  // Field name: produces_rc_channels
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->produces_rc_channels = tmp ? true : false;
  }

  // Field name: produces_battery_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->produces_battery_state = tmp ? true : false;
  }

  // Field name: produces_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->produces_position = tmp ? true : false;
  }

  // Field name: produces_orientation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->produces_orientation = tmp ? true : false;
  }

  // Field name: produces_velocity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->produces_velocity = tmp ? true : false;
  }

  // Field name: produces_angular_velocity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->produces_angular_velocity = tmp ? true : false;
  }

  // Field name: produces_odometry
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->produces_odometry = tmp ? true : false;
  }

  // Field name: produces_magnetic_field
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->produces_magnetic_field = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_mrs_msgs__msg__HwApiCapabilities(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HwApiCapabilities__ros_msg_type * ros_message = static_cast<const _HwApiCapabilities__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: stamp
  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  // Field name: api_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->api_name.size + 1);

  // Field name: accepts_actuator_cmd
  {
    size_t item_size = sizeof(ros_message->accepts_actuator_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accepts_attitude_cmd
  {
    size_t item_size = sizeof(ros_message->accepts_attitude_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accepts_attitude_rate_cmd
  {
    size_t item_size = sizeof(ros_message->accepts_attitude_rate_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accepts_control_group_cmd
  {
    size_t item_size = sizeof(ros_message->accepts_control_group_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accepts_acceleration_hdg_rate_cmd
  {
    size_t item_size = sizeof(ros_message->accepts_acceleration_hdg_rate_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accepts_acceleration_hdg_cmd
  {
    size_t item_size = sizeof(ros_message->accepts_acceleration_hdg_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accepts_velocity_hdg_rate_cmd
  {
    size_t item_size = sizeof(ros_message->accepts_velocity_hdg_rate_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accepts_velocity_hdg_cmd
  {
    size_t item_size = sizeof(ros_message->accepts_velocity_hdg_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accepts_position_cmd
  {
    size_t item_size = sizeof(ros_message->accepts_position_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_ground_truth
  {
    size_t item_size = sizeof(ros_message->produces_ground_truth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_gnss
  {
    size_t item_size = sizeof(ros_message->produces_gnss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_gnss_status
  {
    size_t item_size = sizeof(ros_message->produces_gnss_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_rtk
  {
    size_t item_size = sizeof(ros_message->produces_rtk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_imu
  {
    size_t item_size = sizeof(ros_message->produces_imu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_distance_sensor
  {
    size_t item_size = sizeof(ros_message->produces_distance_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_altitude
  {
    size_t item_size = sizeof(ros_message->produces_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_magnetometer_heading
  {
    size_t item_size = sizeof(ros_message->produces_magnetometer_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_rc_channels
  {
    size_t item_size = sizeof(ros_message->produces_rc_channels);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_battery_state
  {
    size_t item_size = sizeof(ros_message->produces_battery_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_position
  {
    size_t item_size = sizeof(ros_message->produces_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_orientation
  {
    size_t item_size = sizeof(ros_message->produces_orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_velocity
  {
    size_t item_size = sizeof(ros_message->produces_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_angular_velocity
  {
    size_t item_size = sizeof(ros_message->produces_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_odometry
  {
    size_t item_size = sizeof(ros_message->produces_odometry);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_magnetic_field
  {
    size_t item_size = sizeof(ros_message->produces_magnetic_field);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_mrs_msgs__msg__HwApiCapabilities(
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

  // Field name: stamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: api_name
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

  // Field name: accepts_actuator_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: accepts_attitude_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: accepts_attitude_rate_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: accepts_control_group_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: accepts_acceleration_hdg_rate_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: accepts_acceleration_hdg_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: accepts_velocity_hdg_rate_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: accepts_velocity_hdg_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: accepts_position_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_ground_truth
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_gnss
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_gnss_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_rtk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_imu
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_distance_sensor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_altitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_magnetometer_heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_rc_channels
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_battery_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_orientation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_angular_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_odometry
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_magnetic_field
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
    using DataType = mrs_msgs__msg__HwApiCapabilities;
    is_plain =
      (
      offsetof(DataType, produces_magnetic_field) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_key_mrs_msgs__msg__HwApiCapabilities(
  const mrs_msgs__msg__HwApiCapabilities * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: stamp
  {
    cdr_serialize_key_builtin_interfaces__msg__Time(
      &ros_message->stamp, cdr);
  }

  // Field name: api_name
  {
    const rosidl_runtime_c__String * str = &ros_message->api_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: accepts_actuator_cmd
  {
    cdr << (ros_message->accepts_actuator_cmd ? true : false);
  }

  // Field name: accepts_attitude_cmd
  {
    cdr << (ros_message->accepts_attitude_cmd ? true : false);
  }

  // Field name: accepts_attitude_rate_cmd
  {
    cdr << (ros_message->accepts_attitude_rate_cmd ? true : false);
  }

  // Field name: accepts_control_group_cmd
  {
    cdr << (ros_message->accepts_control_group_cmd ? true : false);
  }

  // Field name: accepts_acceleration_hdg_rate_cmd
  {
    cdr << (ros_message->accepts_acceleration_hdg_rate_cmd ? true : false);
  }

  // Field name: accepts_acceleration_hdg_cmd
  {
    cdr << (ros_message->accepts_acceleration_hdg_cmd ? true : false);
  }

  // Field name: accepts_velocity_hdg_rate_cmd
  {
    cdr << (ros_message->accepts_velocity_hdg_rate_cmd ? true : false);
  }

  // Field name: accepts_velocity_hdg_cmd
  {
    cdr << (ros_message->accepts_velocity_hdg_cmd ? true : false);
  }

  // Field name: accepts_position_cmd
  {
    cdr << (ros_message->accepts_position_cmd ? true : false);
  }

  // Field name: produces_ground_truth
  {
    cdr << (ros_message->produces_ground_truth ? true : false);
  }

  // Field name: produces_gnss
  {
    cdr << (ros_message->produces_gnss ? true : false);
  }

  // Field name: produces_gnss_status
  {
    cdr << (ros_message->produces_gnss_status ? true : false);
  }

  // Field name: produces_rtk
  {
    cdr << (ros_message->produces_rtk ? true : false);
  }

  // Field name: produces_imu
  {
    cdr << (ros_message->produces_imu ? true : false);
  }

  // Field name: produces_distance_sensor
  {
    cdr << (ros_message->produces_distance_sensor ? true : false);
  }

  // Field name: produces_altitude
  {
    cdr << (ros_message->produces_altitude ? true : false);
  }

  // Field name: produces_magnetometer_heading
  {
    cdr << (ros_message->produces_magnetometer_heading ? true : false);
  }

  // Field name: produces_rc_channels
  {
    cdr << (ros_message->produces_rc_channels ? true : false);
  }

  // Field name: produces_battery_state
  {
    cdr << (ros_message->produces_battery_state ? true : false);
  }

  // Field name: produces_position
  {
    cdr << (ros_message->produces_position ? true : false);
  }

  // Field name: produces_orientation
  {
    cdr << (ros_message->produces_orientation ? true : false);
  }

  // Field name: produces_velocity
  {
    cdr << (ros_message->produces_velocity ? true : false);
  }

  // Field name: produces_angular_velocity
  {
    cdr << (ros_message->produces_angular_velocity ? true : false);
  }

  // Field name: produces_odometry
  {
    cdr << (ros_message->produces_odometry ? true : false);
  }

  // Field name: produces_magnetic_field
  {
    cdr << (ros_message->produces_magnetic_field ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_key_mrs_msgs__msg__HwApiCapabilities(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HwApiCapabilities__ros_msg_type * ros_message = static_cast<const _HwApiCapabilities__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: stamp
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  // Field name: api_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->api_name.size + 1);

  // Field name: accepts_actuator_cmd
  {
    size_t item_size = sizeof(ros_message->accepts_actuator_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accepts_attitude_cmd
  {
    size_t item_size = sizeof(ros_message->accepts_attitude_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accepts_attitude_rate_cmd
  {
    size_t item_size = sizeof(ros_message->accepts_attitude_rate_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accepts_control_group_cmd
  {
    size_t item_size = sizeof(ros_message->accepts_control_group_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accepts_acceleration_hdg_rate_cmd
  {
    size_t item_size = sizeof(ros_message->accepts_acceleration_hdg_rate_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accepts_acceleration_hdg_cmd
  {
    size_t item_size = sizeof(ros_message->accepts_acceleration_hdg_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accepts_velocity_hdg_rate_cmd
  {
    size_t item_size = sizeof(ros_message->accepts_velocity_hdg_rate_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accepts_velocity_hdg_cmd
  {
    size_t item_size = sizeof(ros_message->accepts_velocity_hdg_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accepts_position_cmd
  {
    size_t item_size = sizeof(ros_message->accepts_position_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_ground_truth
  {
    size_t item_size = sizeof(ros_message->produces_ground_truth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_gnss
  {
    size_t item_size = sizeof(ros_message->produces_gnss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_gnss_status
  {
    size_t item_size = sizeof(ros_message->produces_gnss_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_rtk
  {
    size_t item_size = sizeof(ros_message->produces_rtk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_imu
  {
    size_t item_size = sizeof(ros_message->produces_imu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_distance_sensor
  {
    size_t item_size = sizeof(ros_message->produces_distance_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_altitude
  {
    size_t item_size = sizeof(ros_message->produces_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_magnetometer_heading
  {
    size_t item_size = sizeof(ros_message->produces_magnetometer_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_rc_channels
  {
    size_t item_size = sizeof(ros_message->produces_rc_channels);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_battery_state
  {
    size_t item_size = sizeof(ros_message->produces_battery_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_position
  {
    size_t item_size = sizeof(ros_message->produces_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_orientation
  {
    size_t item_size = sizeof(ros_message->produces_orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_velocity
  {
    size_t item_size = sizeof(ros_message->produces_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_angular_velocity
  {
    size_t item_size = sizeof(ros_message->produces_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_odometry
  {
    size_t item_size = sizeof(ros_message->produces_odometry);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: produces_magnetic_field
  {
    size_t item_size = sizeof(ros_message->produces_magnetic_field);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_key_mrs_msgs__msg__HwApiCapabilities(
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
  // Field name: stamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: api_name
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

  // Field name: accepts_actuator_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: accepts_attitude_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: accepts_attitude_rate_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: accepts_control_group_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: accepts_acceleration_hdg_rate_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: accepts_acceleration_hdg_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: accepts_velocity_hdg_rate_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: accepts_velocity_hdg_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: accepts_position_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_ground_truth
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_gnss
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_gnss_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_rtk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_imu
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_distance_sensor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_altitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_magnetometer_heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_rc_channels
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_battery_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_orientation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_angular_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_odometry
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: produces_magnetic_field
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
    using DataType = mrs_msgs__msg__HwApiCapabilities;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_msgs__msg__HwApiCapabilities * ros_message = static_cast<const mrs_msgs__msg__HwApiCapabilities *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_msgs__msg__HwApiCapabilities(ros_message, cdr);
}

static bool _HwApiCapabilities__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_msgs__msg__HwApiCapabilities * ros_message = static_cast<mrs_msgs__msg__HwApiCapabilities *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_msgs__msg__HwApiCapabilities(cdr, ros_message);
}

static uint32_t _HwApiCapabilities__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_msgs__msg__HwApiCapabilities(
      untyped_ros_message, 0));
}

static size_t _HwApiCapabilities__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_msgs__msg__HwApiCapabilities(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HwApiCapabilities = {
  "mrs_msgs::msg",
  "HwApiCapabilities",
  _HwApiCapabilities__cdr_serialize,
  _HwApiCapabilities__cdr_deserialize,
  _HwApiCapabilities__get_serialized_size,
  _HwApiCapabilities__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _HwApiCapabilities__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HwApiCapabilities,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__HwApiCapabilities__get_type_hash,
  &mrs_msgs__msg__HwApiCapabilities__get_type_description,
  &mrs_msgs__msg__HwApiCapabilities__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, HwApiCapabilities)() {
  return &_HwApiCapabilities__type_support;
}

#if defined(__cplusplus)
}
#endif
