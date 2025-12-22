// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_msgs:msg/UavStatus.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/uav_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_msgs/msg/detail/uav_status__struct.h"
#include "mrs_msgs/msg/detail/uav_status__functions.h"
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

#include "mrs_msgs/msg/detail/custom_topic__functions.h"  // custom_topics
#include "mrs_msgs/msg/detail/node_cpu_load__functions.h"  // node_cpu_loads
#include "rosidl_runtime_c/string.h"  // agl_estimator, constraints, controllers, custom_string_outputs, gains, heading_estimator, horizontal_estimator, hw_api_mode, odom_estimators, odom_frame, trackers, uav_mass, uav_name, uav_type, vertical_estimator
#include "rosidl_runtime_c/string_functions.h"  // agl_estimator, constraints, controllers, custom_string_outputs, gains, heading_estimator, horizontal_estimator, hw_api_mode, odom_estimators, odom_frame, trackers, uav_mass, uav_name, uav_type, vertical_estimator
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

bool cdr_serialize_mrs_msgs__msg__CustomTopic(
  const mrs_msgs__msg__CustomTopic * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mrs_msgs__msg__CustomTopic(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__CustomTopic * ros_message);

size_t get_serialized_size_mrs_msgs__msg__CustomTopic(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mrs_msgs__msg__CustomTopic(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mrs_msgs__msg__CustomTopic(
  const mrs_msgs__msg__CustomTopic * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mrs_msgs__msg__CustomTopic(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mrs_msgs__msg__CustomTopic(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, CustomTopic)();

bool cdr_serialize_mrs_msgs__msg__NodeCpuLoad(
  const mrs_msgs__msg__NodeCpuLoad * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mrs_msgs__msg__NodeCpuLoad(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__NodeCpuLoad * ros_message);

size_t get_serialized_size_mrs_msgs__msg__NodeCpuLoad(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mrs_msgs__msg__NodeCpuLoad(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mrs_msgs__msg__NodeCpuLoad(
  const mrs_msgs__msg__NodeCpuLoad * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mrs_msgs__msg__NodeCpuLoad(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mrs_msgs__msg__NodeCpuLoad(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, NodeCpuLoad)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _UavStatus__ros_msg_type = mrs_msgs__msg__UavStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_mrs_msgs__msg__UavStatus(
  const mrs_msgs__msg__UavStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: uav_name
  {
    const rosidl_runtime_c__String * str = &ros_message->uav_name;
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

  // Field name: uav_type
  {
    const rosidl_runtime_c__String * str = &ros_message->uav_type;
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

  // Field name: uav_mass
  {
    const rosidl_runtime_c__String * str = &ros_message->uav_mass;
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

  // Field name: control_manager_diag_hz
  {
    cdr << ros_message->control_manager_diag_hz;
  }

  // Field name: control_manager_diag_color
  {
    cdr << ros_message->control_manager_diag_color;
  }

  // Field name: controllers
  {
    size_t size = ros_message->controllers.size;
    auto array_ptr = ros_message->controllers.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: gains
  {
    size_t size = ros_message->gains.size;
    auto array_ptr = ros_message->gains.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: trackers
  {
    size_t size = ros_message->trackers.size;
    auto array_ptr = ros_message->trackers.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: constraints
  {
    size_t size = ros_message->constraints.size;
    auto array_ptr = ros_message->constraints.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: null_tracker
  {
    cdr << (ros_message->null_tracker ? true : false);
  }

  // Field name: secs_flown
  {
    cdr << ros_message->secs_flown;
  }

  // Field name: odom_hz
  {
    cdr << ros_message->odom_hz;
  }

  // Field name: odom_color
  {
    cdr << ros_message->odom_color;
  }

  // Field name: odom_x
  {
    cdr << ros_message->odom_x;
  }

  // Field name: odom_y
  {
    cdr << ros_message->odom_y;
  }

  // Field name: odom_z
  {
    cdr << ros_message->odom_z;
  }

  // Field name: odom_hdg
  {
    cdr << ros_message->odom_hdg;
  }

  // Field name: odom_frame
  {
    const rosidl_runtime_c__String * str = &ros_message->odom_frame;
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

  // Field name: odom_estimators
  {
    size_t size = ros_message->odom_estimators.size;
    auto array_ptr = ros_message->odom_estimators.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: horizontal_estimator
  {
    const rosidl_runtime_c__String * str = &ros_message->horizontal_estimator;
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

  // Field name: vertical_estimator
  {
    const rosidl_runtime_c__String * str = &ros_message->vertical_estimator;
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

  // Field name: heading_estimator
  {
    const rosidl_runtime_c__String * str = &ros_message->heading_estimator;
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

  // Field name: agl_estimator
  {
    const rosidl_runtime_c__String * str = &ros_message->agl_estimator;
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

  // Field name: max_flight_z
  {
    cdr << ros_message->max_flight_z;
  }

  // Field name: cmd_x
  {
    cdr << ros_message->cmd_x;
  }

  // Field name: cmd_y
  {
    cdr << ros_message->cmd_y;
  }

  // Field name: cmd_z
  {
    cdr << ros_message->cmd_z;
  }

  // Field name: cmd_hdg
  {
    cdr << ros_message->cmd_hdg;
  }

  // Field name: cpu_load
  {
    cdr << ros_message->cpu_load;
  }

  // Field name: cpu_load_total
  {
    cdr << ros_message->cpu_load_total;
  }

  // Field name: cpu_ghz
  {
    cdr << ros_message->cpu_ghz;
  }

  // Field name: cpu_temperature
  {
    cdr << ros_message->cpu_temperature;
  }

  // Field name: free_ram
  {
    cdr << ros_message->free_ram;
  }

  // Field name: total_ram
  {
    cdr << ros_message->total_ram;
  }

  // Field name: free_hdd
  {
    cdr << ros_message->free_hdd;
  }

  // Field name: hw_api_hz
  {
    cdr << ros_message->hw_api_hz;
  }

  // Field name: hw_api_color
  {
    cdr << ros_message->hw_api_color;
  }

  // Field name: hw_api_battery_hz
  {
    cdr << ros_message->hw_api_battery_hz;
  }

  // Field name: hw_api_state_hz
  {
    cdr << ros_message->hw_api_state_hz;
  }

  // Field name: hw_api_cmd_hz
  {
    cdr << ros_message->hw_api_cmd_hz;
  }

  // Field name: hw_api_mode
  {
    const rosidl_runtime_c__String * str = &ros_message->hw_api_mode;
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

  // Field name: hw_api_armed
  {
    cdr << (ros_message->hw_api_armed ? true : false);
  }

  // Field name: hw_api_gnss_ok
  {
    cdr << (ros_message->hw_api_gnss_ok ? true : false);
  }

  // Field name: hw_api_gnss_qual
  {
    cdr << ros_message->hw_api_gnss_qual;
  }

  // Field name: mag_norm_hz
  {
    cdr << ros_message->mag_norm_hz;
  }

  // Field name: hw_api_gnss_fix_type
  {
    cdr << ros_message->hw_api_gnss_fix_type;
  }

  // Field name: hw_api_gnss_num_sats
  {
    cdr << ros_message->hw_api_gnss_num_sats;
  }

  // Field name: hw_api_gnss_pos_acc
  {
    cdr << ros_message->hw_api_gnss_pos_acc;
  }

  // Field name: hw_api_gnss_status_hz
  {
    cdr << ros_message->hw_api_gnss_status_hz;
  }

  // Field name: mag_norm
  {
    cdr << ros_message->mag_norm;
  }

  // Field name: battery_volt
  {
    cdr << ros_message->battery_volt;
  }

  // Field name: battery_curr
  {
    cdr << ros_message->battery_curr;
  }

  // Field name: battery_wh_drained
  {
    cdr << ros_message->battery_wh_drained;
  }

  // Field name: thrust
  {
    cdr << ros_message->thrust;
  }

  // Field name: mass_estimate
  {
    cdr << ros_message->mass_estimate;
  }

  // Field name: mass_set
  {
    cdr << ros_message->mass_set;
  }

  // Field name: custom_topics
  {
    size_t size = ros_message->custom_topics.size;
    auto array_ptr = ros_message->custom_topics.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_mrs_msgs__msg__CustomTopic(
        &array_ptr[i], cdr);
    }
  }

  // Field name: custom_string_outputs
  {
    size_t size = ros_message->custom_string_outputs.size;
    auto array_ptr = ros_message->custom_string_outputs.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: node_cpu_loads
  {
    cdr_serialize_mrs_msgs__msg__NodeCpuLoad(
      &ros_message->node_cpu_loads, cdr);
  }

  // Field name: flying_normally
  {
    cdr << (ros_message->flying_normally ? true : false);
  }

  // Field name: rc_mode
  {
    cdr << (ros_message->rc_mode ? true : false);
  }

  // Field name: have_goal
  {
    cdr << (ros_message->have_goal ? true : false);
  }

  // Field name: tracking_trajectory
  {
    cdr << (ros_message->tracking_trajectory ? true : false);
  }

  // Field name: callbacks_enabled
  {
    cdr << (ros_message->callbacks_enabled ? true : false);
  }

  // Field name: collision_avoidance_enabled
  {
    cdr << (ros_message->collision_avoidance_enabled ? true : false);
  }

  // Field name: avoiding_collision
  {
    cdr << (ros_message->avoiding_collision ? true : false);
  }

  // Field name: automatic_start_can_takeoff
  {
    cdr << (ros_message->automatic_start_can_takeoff ? true : false);
  }

  // Field name: num_other_uavs
  {
    cdr << ros_message->num_other_uavs;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_deserialize_mrs_msgs__msg__UavStatus(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__UavStatus * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: uav_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->uav_name.data) {
      rosidl_runtime_c__String__init(&ros_message->uav_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->uav_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'uav_name'\n");
      return false;
    }
  }

  // Field name: uav_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->uav_type.data) {
      rosidl_runtime_c__String__init(&ros_message->uav_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->uav_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'uav_type'\n");
      return false;
    }
  }

  // Field name: uav_mass
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->uav_mass.data) {
      rosidl_runtime_c__String__init(&ros_message->uav_mass);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->uav_mass,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'uav_mass'\n");
      return false;
    }
  }

  // Field name: control_manager_diag_hz
  {
    cdr >> ros_message->control_manager_diag_hz;
  }

  // Field name: control_manager_diag_color
  {
    cdr >> ros_message->control_manager_diag_color;
  }

  // Field name: controllers
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

    if (ros_message->controllers.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->controllers);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->controllers, size)) {
      fprintf(stderr, "failed to create array for field 'controllers'");
      return false;
    }
    auto array_ptr = ros_message->controllers.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'controllers'\n");
        return false;
      }
    }
  }

  // Field name: gains
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

    if (ros_message->gains.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->gains);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->gains, size)) {
      fprintf(stderr, "failed to create array for field 'gains'");
      return false;
    }
    auto array_ptr = ros_message->gains.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'gains'\n");
        return false;
      }
    }
  }

  // Field name: trackers
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

    if (ros_message->trackers.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->trackers);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->trackers, size)) {
      fprintf(stderr, "failed to create array for field 'trackers'");
      return false;
    }
    auto array_ptr = ros_message->trackers.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'trackers'\n");
        return false;
      }
    }
  }

  // Field name: constraints
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

    if (ros_message->constraints.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->constraints);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->constraints, size)) {
      fprintf(stderr, "failed to create array for field 'constraints'");
      return false;
    }
    auto array_ptr = ros_message->constraints.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'constraints'\n");
        return false;
      }
    }
  }

  // Field name: null_tracker
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->null_tracker = tmp ? true : false;
  }

  // Field name: secs_flown
  {
    cdr >> ros_message->secs_flown;
  }

  // Field name: odom_hz
  {
    cdr >> ros_message->odom_hz;
  }

  // Field name: odom_color
  {
    cdr >> ros_message->odom_color;
  }

  // Field name: odom_x
  {
    cdr >> ros_message->odom_x;
  }

  // Field name: odom_y
  {
    cdr >> ros_message->odom_y;
  }

  // Field name: odom_z
  {
    cdr >> ros_message->odom_z;
  }

  // Field name: odom_hdg
  {
    cdr >> ros_message->odom_hdg;
  }

  // Field name: odom_frame
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->odom_frame.data) {
      rosidl_runtime_c__String__init(&ros_message->odom_frame);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->odom_frame,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'odom_frame'\n");
      return false;
    }
  }

  // Field name: odom_estimators
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

    if (ros_message->odom_estimators.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->odom_estimators);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->odom_estimators, size)) {
      fprintf(stderr, "failed to create array for field 'odom_estimators'");
      return false;
    }
    auto array_ptr = ros_message->odom_estimators.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'odom_estimators'\n");
        return false;
      }
    }
  }

  // Field name: horizontal_estimator
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->horizontal_estimator.data) {
      rosidl_runtime_c__String__init(&ros_message->horizontal_estimator);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->horizontal_estimator,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'horizontal_estimator'\n");
      return false;
    }
  }

  // Field name: vertical_estimator
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->vertical_estimator.data) {
      rosidl_runtime_c__String__init(&ros_message->vertical_estimator);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->vertical_estimator,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'vertical_estimator'\n");
      return false;
    }
  }

  // Field name: heading_estimator
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->heading_estimator.data) {
      rosidl_runtime_c__String__init(&ros_message->heading_estimator);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->heading_estimator,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'heading_estimator'\n");
      return false;
    }
  }

  // Field name: agl_estimator
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->agl_estimator.data) {
      rosidl_runtime_c__String__init(&ros_message->agl_estimator);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->agl_estimator,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'agl_estimator'\n");
      return false;
    }
  }

  // Field name: max_flight_z
  {
    cdr >> ros_message->max_flight_z;
  }

  // Field name: cmd_x
  {
    cdr >> ros_message->cmd_x;
  }

  // Field name: cmd_y
  {
    cdr >> ros_message->cmd_y;
  }

  // Field name: cmd_z
  {
    cdr >> ros_message->cmd_z;
  }

  // Field name: cmd_hdg
  {
    cdr >> ros_message->cmd_hdg;
  }

  // Field name: cpu_load
  {
    cdr >> ros_message->cpu_load;
  }

  // Field name: cpu_load_total
  {
    cdr >> ros_message->cpu_load_total;
  }

  // Field name: cpu_ghz
  {
    cdr >> ros_message->cpu_ghz;
  }

  // Field name: cpu_temperature
  {
    cdr >> ros_message->cpu_temperature;
  }

  // Field name: free_ram
  {
    cdr >> ros_message->free_ram;
  }

  // Field name: total_ram
  {
    cdr >> ros_message->total_ram;
  }

  // Field name: free_hdd
  {
    cdr >> ros_message->free_hdd;
  }

  // Field name: hw_api_hz
  {
    cdr >> ros_message->hw_api_hz;
  }

  // Field name: hw_api_color
  {
    cdr >> ros_message->hw_api_color;
  }

  // Field name: hw_api_battery_hz
  {
    cdr >> ros_message->hw_api_battery_hz;
  }

  // Field name: hw_api_state_hz
  {
    cdr >> ros_message->hw_api_state_hz;
  }

  // Field name: hw_api_cmd_hz
  {
    cdr >> ros_message->hw_api_cmd_hz;
  }

  // Field name: hw_api_mode
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->hw_api_mode.data) {
      rosidl_runtime_c__String__init(&ros_message->hw_api_mode);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->hw_api_mode,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'hw_api_mode'\n");
      return false;
    }
  }

  // Field name: hw_api_armed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->hw_api_armed = tmp ? true : false;
  }

  // Field name: hw_api_gnss_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->hw_api_gnss_ok = tmp ? true : false;
  }

  // Field name: hw_api_gnss_qual
  {
    cdr >> ros_message->hw_api_gnss_qual;
  }

  // Field name: mag_norm_hz
  {
    cdr >> ros_message->mag_norm_hz;
  }

  // Field name: hw_api_gnss_fix_type
  {
    cdr >> ros_message->hw_api_gnss_fix_type;
  }

  // Field name: hw_api_gnss_num_sats
  {
    cdr >> ros_message->hw_api_gnss_num_sats;
  }

  // Field name: hw_api_gnss_pos_acc
  {
    cdr >> ros_message->hw_api_gnss_pos_acc;
  }

  // Field name: hw_api_gnss_status_hz
  {
    cdr >> ros_message->hw_api_gnss_status_hz;
  }

  // Field name: mag_norm
  {
    cdr >> ros_message->mag_norm;
  }

  // Field name: battery_volt
  {
    cdr >> ros_message->battery_volt;
  }

  // Field name: battery_curr
  {
    cdr >> ros_message->battery_curr;
  }

  // Field name: battery_wh_drained
  {
    cdr >> ros_message->battery_wh_drained;
  }

  // Field name: thrust
  {
    cdr >> ros_message->thrust;
  }

  // Field name: mass_estimate
  {
    cdr >> ros_message->mass_estimate;
  }

  // Field name: mass_set
  {
    cdr >> ros_message->mass_set;
  }

  // Field name: custom_topics
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

    if (ros_message->custom_topics.data) {
      mrs_msgs__msg__CustomTopic__Sequence__fini(&ros_message->custom_topics);
    }
    if (!mrs_msgs__msg__CustomTopic__Sequence__init(&ros_message->custom_topics, size)) {
      fprintf(stderr, "failed to create array for field 'custom_topics'");
      return false;
    }
    auto array_ptr = ros_message->custom_topics.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_mrs_msgs__msg__CustomTopic(cdr, &array_ptr[i]);
    }
  }

  // Field name: custom_string_outputs
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

    if (ros_message->custom_string_outputs.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->custom_string_outputs);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->custom_string_outputs, size)) {
      fprintf(stderr, "failed to create array for field 'custom_string_outputs'");
      return false;
    }
    auto array_ptr = ros_message->custom_string_outputs.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'custom_string_outputs'\n");
        return false;
      }
    }
  }

  // Field name: node_cpu_loads
  {
    cdr_deserialize_mrs_msgs__msg__NodeCpuLoad(cdr, &ros_message->node_cpu_loads);
  }

  // Field name: flying_normally
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flying_normally = tmp ? true : false;
  }

  // Field name: rc_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rc_mode = tmp ? true : false;
  }

  // Field name: have_goal
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->have_goal = tmp ? true : false;
  }

  // Field name: tracking_trajectory
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tracking_trajectory = tmp ? true : false;
  }

  // Field name: callbacks_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->callbacks_enabled = tmp ? true : false;
  }

  // Field name: collision_avoidance_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->collision_avoidance_enabled = tmp ? true : false;
  }

  // Field name: avoiding_collision
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->avoiding_collision = tmp ? true : false;
  }

  // Field name: automatic_start_can_takeoff
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->automatic_start_can_takeoff = tmp ? true : false;
  }

  // Field name: num_other_uavs
  {
    cdr >> ros_message->num_other_uavs;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_mrs_msgs__msg__UavStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UavStatus__ros_msg_type * ros_message = static_cast<const _UavStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: uav_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->uav_name.size + 1);

  // Field name: uav_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->uav_type.size + 1);

  // Field name: uav_mass
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->uav_mass.size + 1);

  // Field name: control_manager_diag_hz
  {
    size_t item_size = sizeof(ros_message->control_manager_diag_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: control_manager_diag_color
  {
    size_t item_size = sizeof(ros_message->control_manager_diag_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: controllers
  {
    size_t array_size = ros_message->controllers.size;
    auto array_ptr = ros_message->controllers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: gains
  {
    size_t array_size = ros_message->gains.size;
    auto array_ptr = ros_message->gains.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: trackers
  {
    size_t array_size = ros_message->trackers.size;
    auto array_ptr = ros_message->trackers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: constraints
  {
    size_t array_size = ros_message->constraints.size;
    auto array_ptr = ros_message->constraints.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: null_tracker
  {
    size_t item_size = sizeof(ros_message->null_tracker);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: secs_flown
  {
    size_t item_size = sizeof(ros_message->secs_flown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: odom_hz
  {
    size_t item_size = sizeof(ros_message->odom_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: odom_color
  {
    size_t item_size = sizeof(ros_message->odom_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: odom_x
  {
    size_t item_size = sizeof(ros_message->odom_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: odom_y
  {
    size_t item_size = sizeof(ros_message->odom_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: odom_z
  {
    size_t item_size = sizeof(ros_message->odom_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: odom_hdg
  {
    size_t item_size = sizeof(ros_message->odom_hdg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: odom_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->odom_frame.size + 1);

  // Field name: odom_estimators
  {
    size_t array_size = ros_message->odom_estimators.size;
    auto array_ptr = ros_message->odom_estimators.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: horizontal_estimator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->horizontal_estimator.size + 1);

  // Field name: vertical_estimator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->vertical_estimator.size + 1);

  // Field name: heading_estimator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->heading_estimator.size + 1);

  // Field name: agl_estimator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->agl_estimator.size + 1);

  // Field name: max_flight_z
  {
    size_t item_size = sizeof(ros_message->max_flight_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cmd_x
  {
    size_t item_size = sizeof(ros_message->cmd_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cmd_y
  {
    size_t item_size = sizeof(ros_message->cmd_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cmd_z
  {
    size_t item_size = sizeof(ros_message->cmd_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cmd_hdg
  {
    size_t item_size = sizeof(ros_message->cmd_hdg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cpu_load
  {
    size_t item_size = sizeof(ros_message->cpu_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cpu_load_total
  {
    size_t item_size = sizeof(ros_message->cpu_load_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cpu_ghz
  {
    size_t item_size = sizeof(ros_message->cpu_ghz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cpu_temperature
  {
    size_t item_size = sizeof(ros_message->cpu_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: free_ram
  {
    size_t item_size = sizeof(ros_message->free_ram);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: total_ram
  {
    size_t item_size = sizeof(ros_message->total_ram);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: free_hdd
  {
    size_t item_size = sizeof(ros_message->free_hdd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_hz
  {
    size_t item_size = sizeof(ros_message->hw_api_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_color
  {
    size_t item_size = sizeof(ros_message->hw_api_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_battery_hz
  {
    size_t item_size = sizeof(ros_message->hw_api_battery_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_state_hz
  {
    size_t item_size = sizeof(ros_message->hw_api_state_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_cmd_hz
  {
    size_t item_size = sizeof(ros_message->hw_api_cmd_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->hw_api_mode.size + 1);

  // Field name: hw_api_armed
  {
    size_t item_size = sizeof(ros_message->hw_api_armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_gnss_ok
  {
    size_t item_size = sizeof(ros_message->hw_api_gnss_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_gnss_qual
  {
    size_t item_size = sizeof(ros_message->hw_api_gnss_qual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mag_norm_hz
  {
    size_t item_size = sizeof(ros_message->mag_norm_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_gnss_fix_type
  {
    size_t item_size = sizeof(ros_message->hw_api_gnss_fix_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_gnss_num_sats
  {
    size_t item_size = sizeof(ros_message->hw_api_gnss_num_sats);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_gnss_pos_acc
  {
    size_t item_size = sizeof(ros_message->hw_api_gnss_pos_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_gnss_status_hz
  {
    size_t item_size = sizeof(ros_message->hw_api_gnss_status_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mag_norm
  {
    size_t item_size = sizeof(ros_message->mag_norm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery_volt
  {
    size_t item_size = sizeof(ros_message->battery_volt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery_curr
  {
    size_t item_size = sizeof(ros_message->battery_curr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery_wh_drained
  {
    size_t item_size = sizeof(ros_message->battery_wh_drained);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: thrust
  {
    size_t item_size = sizeof(ros_message->thrust);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mass_estimate
  {
    size_t item_size = sizeof(ros_message->mass_estimate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mass_set
  {
    size_t item_size = sizeof(ros_message->mass_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: custom_topics
  {
    size_t array_size = ros_message->custom_topics.size;
    auto array_ptr = ros_message->custom_topics.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_mrs_msgs__msg__CustomTopic(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: custom_string_outputs
  {
    size_t array_size = ros_message->custom_string_outputs.size;
    auto array_ptr = ros_message->custom_string_outputs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: node_cpu_loads
  current_alignment += get_serialized_size_mrs_msgs__msg__NodeCpuLoad(
    &(ros_message->node_cpu_loads), current_alignment);

  // Field name: flying_normally
  {
    size_t item_size = sizeof(ros_message->flying_normally);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rc_mode
  {
    size_t item_size = sizeof(ros_message->rc_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: have_goal
  {
    size_t item_size = sizeof(ros_message->have_goal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tracking_trajectory
  {
    size_t item_size = sizeof(ros_message->tracking_trajectory);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: callbacks_enabled
  {
    size_t item_size = sizeof(ros_message->callbacks_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: collision_avoidance_enabled
  {
    size_t item_size = sizeof(ros_message->collision_avoidance_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: avoiding_collision
  {
    size_t item_size = sizeof(ros_message->avoiding_collision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: automatic_start_can_takeoff
  {
    size_t item_size = sizeof(ros_message->automatic_start_can_takeoff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_other_uavs
  {
    size_t item_size = sizeof(ros_message->num_other_uavs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_mrs_msgs__msg__UavStatus(
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

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: uav_name
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

  // Field name: uav_type
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

  // Field name: uav_mass
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

  // Field name: control_manager_diag_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: control_manager_diag_color
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: controllers
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

  // Field name: gains
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

  // Field name: trackers
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

  // Field name: constraints
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

  // Field name: null_tracker
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: secs_flown
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: odom_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: odom_color
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: odom_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: odom_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: odom_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: odom_hdg
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: odom_frame
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

  // Field name: odom_estimators
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

  // Field name: horizontal_estimator
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

  // Field name: vertical_estimator
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

  // Field name: heading_estimator
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

  // Field name: agl_estimator
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

  // Field name: max_flight_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cmd_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cmd_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cmd_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cmd_hdg
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cpu_load
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cpu_load_total
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cpu_ghz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cpu_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: free_ram
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: total_ram
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: free_hdd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hw_api_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hw_api_color
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: hw_api_battery_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hw_api_state_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hw_api_cmd_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hw_api_mode
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

  // Field name: hw_api_armed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: hw_api_gnss_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: hw_api_gnss_qual
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mag_norm_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hw_api_gnss_fix_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: hw_api_gnss_num_sats
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: hw_api_gnss_pos_acc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hw_api_gnss_status_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mag_norm
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery_volt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery_curr
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery_wh_drained
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: thrust
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mass_estimate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mass_set
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: custom_topics
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
      size_t inner_size;
      inner_size =
        max_serialized_size_mrs_msgs__msg__CustomTopic(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: custom_string_outputs
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

  // Field name: node_cpu_loads
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mrs_msgs__msg__NodeCpuLoad(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: flying_normally
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: rc_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: have_goal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tracking_trajectory
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: callbacks_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: collision_avoidance_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: avoiding_collision
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: automatic_start_can_takeoff
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: num_other_uavs
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
    using DataType = mrs_msgs__msg__UavStatus;
    is_plain =
      (
      offsetof(DataType, num_other_uavs) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_key_mrs_msgs__msg__UavStatus(
  const mrs_msgs__msg__UavStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: uav_name
  {
    const rosidl_runtime_c__String * str = &ros_message->uav_name;
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

  // Field name: uav_type
  {
    const rosidl_runtime_c__String * str = &ros_message->uav_type;
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

  // Field name: uav_mass
  {
    const rosidl_runtime_c__String * str = &ros_message->uav_mass;
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

  // Field name: control_manager_diag_hz
  {
    cdr << ros_message->control_manager_diag_hz;
  }

  // Field name: control_manager_diag_color
  {
    cdr << ros_message->control_manager_diag_color;
  }

  // Field name: controllers
  {
    size_t size = ros_message->controllers.size;
    auto array_ptr = ros_message->controllers.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: gains
  {
    size_t size = ros_message->gains.size;
    auto array_ptr = ros_message->gains.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: trackers
  {
    size_t size = ros_message->trackers.size;
    auto array_ptr = ros_message->trackers.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: constraints
  {
    size_t size = ros_message->constraints.size;
    auto array_ptr = ros_message->constraints.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: null_tracker
  {
    cdr << (ros_message->null_tracker ? true : false);
  }

  // Field name: secs_flown
  {
    cdr << ros_message->secs_flown;
  }

  // Field name: odom_hz
  {
    cdr << ros_message->odom_hz;
  }

  // Field name: odom_color
  {
    cdr << ros_message->odom_color;
  }

  // Field name: odom_x
  {
    cdr << ros_message->odom_x;
  }

  // Field name: odom_y
  {
    cdr << ros_message->odom_y;
  }

  // Field name: odom_z
  {
    cdr << ros_message->odom_z;
  }

  // Field name: odom_hdg
  {
    cdr << ros_message->odom_hdg;
  }

  // Field name: odom_frame
  {
    const rosidl_runtime_c__String * str = &ros_message->odom_frame;
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

  // Field name: odom_estimators
  {
    size_t size = ros_message->odom_estimators.size;
    auto array_ptr = ros_message->odom_estimators.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: horizontal_estimator
  {
    const rosidl_runtime_c__String * str = &ros_message->horizontal_estimator;
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

  // Field name: vertical_estimator
  {
    const rosidl_runtime_c__String * str = &ros_message->vertical_estimator;
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

  // Field name: heading_estimator
  {
    const rosidl_runtime_c__String * str = &ros_message->heading_estimator;
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

  // Field name: agl_estimator
  {
    const rosidl_runtime_c__String * str = &ros_message->agl_estimator;
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

  // Field name: max_flight_z
  {
    cdr << ros_message->max_flight_z;
  }

  // Field name: cmd_x
  {
    cdr << ros_message->cmd_x;
  }

  // Field name: cmd_y
  {
    cdr << ros_message->cmd_y;
  }

  // Field name: cmd_z
  {
    cdr << ros_message->cmd_z;
  }

  // Field name: cmd_hdg
  {
    cdr << ros_message->cmd_hdg;
  }

  // Field name: cpu_load
  {
    cdr << ros_message->cpu_load;
  }

  // Field name: cpu_load_total
  {
    cdr << ros_message->cpu_load_total;
  }

  // Field name: cpu_ghz
  {
    cdr << ros_message->cpu_ghz;
  }

  // Field name: cpu_temperature
  {
    cdr << ros_message->cpu_temperature;
  }

  // Field name: free_ram
  {
    cdr << ros_message->free_ram;
  }

  // Field name: total_ram
  {
    cdr << ros_message->total_ram;
  }

  // Field name: free_hdd
  {
    cdr << ros_message->free_hdd;
  }

  // Field name: hw_api_hz
  {
    cdr << ros_message->hw_api_hz;
  }

  // Field name: hw_api_color
  {
    cdr << ros_message->hw_api_color;
  }

  // Field name: hw_api_battery_hz
  {
    cdr << ros_message->hw_api_battery_hz;
  }

  // Field name: hw_api_state_hz
  {
    cdr << ros_message->hw_api_state_hz;
  }

  // Field name: hw_api_cmd_hz
  {
    cdr << ros_message->hw_api_cmd_hz;
  }

  // Field name: hw_api_mode
  {
    const rosidl_runtime_c__String * str = &ros_message->hw_api_mode;
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

  // Field name: hw_api_armed
  {
    cdr << (ros_message->hw_api_armed ? true : false);
  }

  // Field name: hw_api_gnss_ok
  {
    cdr << (ros_message->hw_api_gnss_ok ? true : false);
  }

  // Field name: hw_api_gnss_qual
  {
    cdr << ros_message->hw_api_gnss_qual;
  }

  // Field name: mag_norm_hz
  {
    cdr << ros_message->mag_norm_hz;
  }

  // Field name: hw_api_gnss_fix_type
  {
    cdr << ros_message->hw_api_gnss_fix_type;
  }

  // Field name: hw_api_gnss_num_sats
  {
    cdr << ros_message->hw_api_gnss_num_sats;
  }

  // Field name: hw_api_gnss_pos_acc
  {
    cdr << ros_message->hw_api_gnss_pos_acc;
  }

  // Field name: hw_api_gnss_status_hz
  {
    cdr << ros_message->hw_api_gnss_status_hz;
  }

  // Field name: mag_norm
  {
    cdr << ros_message->mag_norm;
  }

  // Field name: battery_volt
  {
    cdr << ros_message->battery_volt;
  }

  // Field name: battery_curr
  {
    cdr << ros_message->battery_curr;
  }

  // Field name: battery_wh_drained
  {
    cdr << ros_message->battery_wh_drained;
  }

  // Field name: thrust
  {
    cdr << ros_message->thrust;
  }

  // Field name: mass_estimate
  {
    cdr << ros_message->mass_estimate;
  }

  // Field name: mass_set
  {
    cdr << ros_message->mass_set;
  }

  // Field name: custom_topics
  {
    size_t size = ros_message->custom_topics.size;
    auto array_ptr = ros_message->custom_topics.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_mrs_msgs__msg__CustomTopic(
        &array_ptr[i], cdr);
    }
  }

  // Field name: custom_string_outputs
  {
    size_t size = ros_message->custom_string_outputs.size;
    auto array_ptr = ros_message->custom_string_outputs.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: node_cpu_loads
  {
    cdr_serialize_key_mrs_msgs__msg__NodeCpuLoad(
      &ros_message->node_cpu_loads, cdr);
  }

  // Field name: flying_normally
  {
    cdr << (ros_message->flying_normally ? true : false);
  }

  // Field name: rc_mode
  {
    cdr << (ros_message->rc_mode ? true : false);
  }

  // Field name: have_goal
  {
    cdr << (ros_message->have_goal ? true : false);
  }

  // Field name: tracking_trajectory
  {
    cdr << (ros_message->tracking_trajectory ? true : false);
  }

  // Field name: callbacks_enabled
  {
    cdr << (ros_message->callbacks_enabled ? true : false);
  }

  // Field name: collision_avoidance_enabled
  {
    cdr << (ros_message->collision_avoidance_enabled ? true : false);
  }

  // Field name: avoiding_collision
  {
    cdr << (ros_message->avoiding_collision ? true : false);
  }

  // Field name: automatic_start_can_takeoff
  {
    cdr << (ros_message->automatic_start_can_takeoff ? true : false);
  }

  // Field name: num_other_uavs
  {
    cdr << ros_message->num_other_uavs;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_key_mrs_msgs__msg__UavStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UavStatus__ros_msg_type * ros_message = static_cast<const _UavStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: uav_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->uav_name.size + 1);

  // Field name: uav_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->uav_type.size + 1);

  // Field name: uav_mass
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->uav_mass.size + 1);

  // Field name: control_manager_diag_hz
  {
    size_t item_size = sizeof(ros_message->control_manager_diag_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: control_manager_diag_color
  {
    size_t item_size = sizeof(ros_message->control_manager_diag_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: controllers
  {
    size_t array_size = ros_message->controllers.size;
    auto array_ptr = ros_message->controllers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: gains
  {
    size_t array_size = ros_message->gains.size;
    auto array_ptr = ros_message->gains.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: trackers
  {
    size_t array_size = ros_message->trackers.size;
    auto array_ptr = ros_message->trackers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: constraints
  {
    size_t array_size = ros_message->constraints.size;
    auto array_ptr = ros_message->constraints.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: null_tracker
  {
    size_t item_size = sizeof(ros_message->null_tracker);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: secs_flown
  {
    size_t item_size = sizeof(ros_message->secs_flown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: odom_hz
  {
    size_t item_size = sizeof(ros_message->odom_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: odom_color
  {
    size_t item_size = sizeof(ros_message->odom_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: odom_x
  {
    size_t item_size = sizeof(ros_message->odom_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: odom_y
  {
    size_t item_size = sizeof(ros_message->odom_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: odom_z
  {
    size_t item_size = sizeof(ros_message->odom_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: odom_hdg
  {
    size_t item_size = sizeof(ros_message->odom_hdg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: odom_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->odom_frame.size + 1);

  // Field name: odom_estimators
  {
    size_t array_size = ros_message->odom_estimators.size;
    auto array_ptr = ros_message->odom_estimators.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: horizontal_estimator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->horizontal_estimator.size + 1);

  // Field name: vertical_estimator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->vertical_estimator.size + 1);

  // Field name: heading_estimator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->heading_estimator.size + 1);

  // Field name: agl_estimator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->agl_estimator.size + 1);

  // Field name: max_flight_z
  {
    size_t item_size = sizeof(ros_message->max_flight_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cmd_x
  {
    size_t item_size = sizeof(ros_message->cmd_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cmd_y
  {
    size_t item_size = sizeof(ros_message->cmd_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cmd_z
  {
    size_t item_size = sizeof(ros_message->cmd_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cmd_hdg
  {
    size_t item_size = sizeof(ros_message->cmd_hdg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cpu_load
  {
    size_t item_size = sizeof(ros_message->cpu_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cpu_load_total
  {
    size_t item_size = sizeof(ros_message->cpu_load_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cpu_ghz
  {
    size_t item_size = sizeof(ros_message->cpu_ghz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cpu_temperature
  {
    size_t item_size = sizeof(ros_message->cpu_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: free_ram
  {
    size_t item_size = sizeof(ros_message->free_ram);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: total_ram
  {
    size_t item_size = sizeof(ros_message->total_ram);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: free_hdd
  {
    size_t item_size = sizeof(ros_message->free_hdd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_hz
  {
    size_t item_size = sizeof(ros_message->hw_api_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_color
  {
    size_t item_size = sizeof(ros_message->hw_api_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_battery_hz
  {
    size_t item_size = sizeof(ros_message->hw_api_battery_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_state_hz
  {
    size_t item_size = sizeof(ros_message->hw_api_state_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_cmd_hz
  {
    size_t item_size = sizeof(ros_message->hw_api_cmd_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->hw_api_mode.size + 1);

  // Field name: hw_api_armed
  {
    size_t item_size = sizeof(ros_message->hw_api_armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_gnss_ok
  {
    size_t item_size = sizeof(ros_message->hw_api_gnss_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_gnss_qual
  {
    size_t item_size = sizeof(ros_message->hw_api_gnss_qual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mag_norm_hz
  {
    size_t item_size = sizeof(ros_message->mag_norm_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_gnss_fix_type
  {
    size_t item_size = sizeof(ros_message->hw_api_gnss_fix_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_gnss_num_sats
  {
    size_t item_size = sizeof(ros_message->hw_api_gnss_num_sats);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_gnss_pos_acc
  {
    size_t item_size = sizeof(ros_message->hw_api_gnss_pos_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_api_gnss_status_hz
  {
    size_t item_size = sizeof(ros_message->hw_api_gnss_status_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mag_norm
  {
    size_t item_size = sizeof(ros_message->mag_norm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery_volt
  {
    size_t item_size = sizeof(ros_message->battery_volt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery_curr
  {
    size_t item_size = sizeof(ros_message->battery_curr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery_wh_drained
  {
    size_t item_size = sizeof(ros_message->battery_wh_drained);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: thrust
  {
    size_t item_size = sizeof(ros_message->thrust);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mass_estimate
  {
    size_t item_size = sizeof(ros_message->mass_estimate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mass_set
  {
    size_t item_size = sizeof(ros_message->mass_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: custom_topics
  {
    size_t array_size = ros_message->custom_topics.size;
    auto array_ptr = ros_message->custom_topics.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_mrs_msgs__msg__CustomTopic(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: custom_string_outputs
  {
    size_t array_size = ros_message->custom_string_outputs.size;
    auto array_ptr = ros_message->custom_string_outputs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: node_cpu_loads
  current_alignment += get_serialized_size_key_mrs_msgs__msg__NodeCpuLoad(
    &(ros_message->node_cpu_loads), current_alignment);

  // Field name: flying_normally
  {
    size_t item_size = sizeof(ros_message->flying_normally);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rc_mode
  {
    size_t item_size = sizeof(ros_message->rc_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: have_goal
  {
    size_t item_size = sizeof(ros_message->have_goal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tracking_trajectory
  {
    size_t item_size = sizeof(ros_message->tracking_trajectory);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: callbacks_enabled
  {
    size_t item_size = sizeof(ros_message->callbacks_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: collision_avoidance_enabled
  {
    size_t item_size = sizeof(ros_message->collision_avoidance_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: avoiding_collision
  {
    size_t item_size = sizeof(ros_message->avoiding_collision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: automatic_start_can_takeoff
  {
    size_t item_size = sizeof(ros_message->automatic_start_can_takeoff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_other_uavs
  {
    size_t item_size = sizeof(ros_message->num_other_uavs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_key_mrs_msgs__msg__UavStatus(
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
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: uav_name
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

  // Field name: uav_type
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

  // Field name: uav_mass
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

  // Field name: control_manager_diag_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: control_manager_diag_color
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: controllers
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

  // Field name: gains
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

  // Field name: trackers
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

  // Field name: constraints
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

  // Field name: null_tracker
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: secs_flown
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: odom_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: odom_color
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: odom_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: odom_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: odom_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: odom_hdg
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: odom_frame
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

  // Field name: odom_estimators
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

  // Field name: horizontal_estimator
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

  // Field name: vertical_estimator
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

  // Field name: heading_estimator
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

  // Field name: agl_estimator
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

  // Field name: max_flight_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cmd_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cmd_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cmd_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cmd_hdg
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cpu_load
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cpu_load_total
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cpu_ghz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cpu_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: free_ram
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: total_ram
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: free_hdd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hw_api_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hw_api_color
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: hw_api_battery_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hw_api_state_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hw_api_cmd_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hw_api_mode
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

  // Field name: hw_api_armed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: hw_api_gnss_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: hw_api_gnss_qual
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mag_norm_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hw_api_gnss_fix_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: hw_api_gnss_num_sats
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: hw_api_gnss_pos_acc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hw_api_gnss_status_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mag_norm
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery_volt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery_curr
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery_wh_drained
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: thrust
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mass_estimate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mass_set
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: custom_topics
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
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mrs_msgs__msg__CustomTopic(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: custom_string_outputs
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

  // Field name: node_cpu_loads
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mrs_msgs__msg__NodeCpuLoad(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: flying_normally
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: rc_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: have_goal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tracking_trajectory
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: callbacks_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: collision_avoidance_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: avoiding_collision
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: automatic_start_can_takeoff
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: num_other_uavs
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
    using DataType = mrs_msgs__msg__UavStatus;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_msgs__msg__UavStatus * ros_message = static_cast<const mrs_msgs__msg__UavStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_msgs__msg__UavStatus(ros_message, cdr);
}

static bool _UavStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_msgs__msg__UavStatus * ros_message = static_cast<mrs_msgs__msg__UavStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_msgs__msg__UavStatus(cdr, ros_message);
}

static uint32_t _UavStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_msgs__msg__UavStatus(
      untyped_ros_message, 0));
}

static size_t _UavStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_msgs__msg__UavStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_UavStatus = {
  "mrs_msgs::msg",
  "UavStatus",
  _UavStatus__cdr_serialize,
  _UavStatus__cdr_deserialize,
  _UavStatus__get_serialized_size,
  _UavStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _UavStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UavStatus,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__UavStatus__get_type_hash,
  &mrs_msgs__msg__UavStatus__get_type_description,
  &mrs_msgs__msg__UavStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, UavStatus)() {
  return &_UavStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
