// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_msgs:msg/ControlManagerDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/control_manager_diagnostics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_msgs/msg/detail/control_manager_diagnostics__struct.h"
#include "mrs_msgs/msg/detail/control_manager_diagnostics__functions.h"
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
#include "mrs_msgs/msg/detail/controller_status__functions.h"  // controller_status
#include "mrs_msgs/msg/detail/tracker_status__functions.h"  // tracker_status
#include "rosidl_runtime_c/primitives_sequence.h"  // human_switchable_controllers, human_switchable_trackers
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // human_switchable_controllers, human_switchable_trackers
#include "rosidl_runtime_c/string.h"  // active_controller, active_tracker, available_controllers, available_trackers, uav_name
#include "rosidl_runtime_c/string_functions.h"  // active_controller, active_tracker, available_controllers, available_trackers, uav_name

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

bool cdr_serialize_mrs_msgs__msg__ControllerStatus(
  const mrs_msgs__msg__ControllerStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mrs_msgs__msg__ControllerStatus(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__ControllerStatus * ros_message);

size_t get_serialized_size_mrs_msgs__msg__ControllerStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mrs_msgs__msg__ControllerStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mrs_msgs__msg__ControllerStatus(
  const mrs_msgs__msg__ControllerStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mrs_msgs__msg__ControllerStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mrs_msgs__msg__ControllerStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, ControllerStatus)();

bool cdr_serialize_mrs_msgs__msg__TrackerStatus(
  const mrs_msgs__msg__TrackerStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mrs_msgs__msg__TrackerStatus(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__TrackerStatus * ros_message);

size_t get_serialized_size_mrs_msgs__msg__TrackerStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mrs_msgs__msg__TrackerStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mrs_msgs__msg__TrackerStatus(
  const mrs_msgs__msg__TrackerStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mrs_msgs__msg__TrackerStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mrs_msgs__msg__TrackerStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, TrackerStatus)();


using _ControlManagerDiagnostics__ros_msg_type = mrs_msgs__msg__ControlManagerDiagnostics;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_mrs_msgs__msg__ControlManagerDiagnostics(
  const mrs_msgs__msg__ControlManagerDiagnostics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: stamp
  {
    cdr_serialize_builtin_interfaces__msg__Time(
      &ros_message->stamp, cdr);
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

  // Field name: output_enabled
  {
    cdr << (ros_message->output_enabled ? true : false);
  }

  // Field name: flying_normally
  {
    cdr << (ros_message->flying_normally ? true : false);
  }

  // Field name: joystick_active
  {
    cdr << (ros_message->joystick_active ? true : false);
  }

  // Field name: bumper_active
  {
    cdr << (ros_message->bumper_active ? true : false);
  }

  // Field name: desired_uav_state_rate
  {
    cdr << ros_message->desired_uav_state_rate;
  }

  // Field name: active_tracker
  {
    const rosidl_runtime_c__String * str = &ros_message->active_tracker;
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

  // Field name: tracker_status
  {
    cdr_serialize_mrs_msgs__msg__TrackerStatus(
      &ros_message->tracker_status, cdr);
  }

  // Field name: active_controller
  {
    const rosidl_runtime_c__String * str = &ros_message->active_controller;
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

  // Field name: controller_status
  {
    cdr_serialize_mrs_msgs__msg__ControllerStatus(
      &ros_message->controller_status, cdr);
  }

  // Field name: available_controllers
  {
    size_t size = ros_message->available_controllers.size;
    auto array_ptr = ros_message->available_controllers.data;
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

  // Field name: available_trackers
  {
    size_t size = ros_message->available_trackers.size;
    auto array_ptr = ros_message->available_trackers.data;
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

  // Field name: human_switchable_controllers
  {
    size_t size = ros_message->human_switchable_controllers.size;
    auto array_ptr = ros_message->human_switchable_controllers.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: human_switchable_trackers
  {
    size_t size = ros_message->human_switchable_trackers.size;
    auto array_ptr = ros_message->human_switchable_trackers.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_deserialize_mrs_msgs__msg__ControlManagerDiagnostics(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__ControlManagerDiagnostics * ros_message)
{
  // Field name: stamp
  {
    cdr_deserialize_builtin_interfaces__msg__Time(cdr, &ros_message->stamp);
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

  // Field name: output_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->output_enabled = tmp ? true : false;
  }

  // Field name: flying_normally
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flying_normally = tmp ? true : false;
  }

  // Field name: joystick_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->joystick_active = tmp ? true : false;
  }

  // Field name: bumper_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->bumper_active = tmp ? true : false;
  }

  // Field name: desired_uav_state_rate
  {
    cdr >> ros_message->desired_uav_state_rate;
  }

  // Field name: active_tracker
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->active_tracker.data) {
      rosidl_runtime_c__String__init(&ros_message->active_tracker);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->active_tracker,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'active_tracker'\n");
      return false;
    }
  }

  // Field name: tracker_status
  {
    cdr_deserialize_mrs_msgs__msg__TrackerStatus(cdr, &ros_message->tracker_status);
  }

  // Field name: active_controller
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->active_controller.data) {
      rosidl_runtime_c__String__init(&ros_message->active_controller);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->active_controller,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'active_controller'\n");
      return false;
    }
  }

  // Field name: controller_status
  {
    cdr_deserialize_mrs_msgs__msg__ControllerStatus(cdr, &ros_message->controller_status);
  }

  // Field name: available_controllers
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

    if (ros_message->available_controllers.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->available_controllers);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->available_controllers, size)) {
      fprintf(stderr, "failed to create array for field 'available_controllers'");
      return false;
    }
    auto array_ptr = ros_message->available_controllers.data;
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
        fprintf(stderr, "failed to assign string into field 'available_controllers'\n");
        return false;
      }
    }
  }

  // Field name: available_trackers
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

    if (ros_message->available_trackers.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->available_trackers);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->available_trackers, size)) {
      fprintf(stderr, "failed to create array for field 'available_trackers'");
      return false;
    }
    auto array_ptr = ros_message->available_trackers.data;
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
        fprintf(stderr, "failed to assign string into field 'available_trackers'\n");
        return false;
      }
    }
  }

  // Field name: human_switchable_controllers
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

    if (ros_message->human_switchable_controllers.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->human_switchable_controllers);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->human_switchable_controllers, size)) {
      fprintf(stderr, "failed to create array for field 'human_switchable_controllers'");
      return false;
    }
    auto array_ptr = ros_message->human_switchable_controllers.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: human_switchable_trackers
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

    if (ros_message->human_switchable_trackers.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->human_switchable_trackers);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->human_switchable_trackers, size)) {
      fprintf(stderr, "failed to create array for field 'human_switchable_trackers'");
      return false;
    }
    auto array_ptr = ros_message->human_switchable_trackers.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_mrs_msgs__msg__ControlManagerDiagnostics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlManagerDiagnostics__ros_msg_type * ros_message = static_cast<const _ControlManagerDiagnostics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: stamp
  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  // Field name: uav_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->uav_name.size + 1);

  // Field name: output_enabled
  {
    size_t item_size = sizeof(ros_message->output_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: flying_normally
  {
    size_t item_size = sizeof(ros_message->flying_normally);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joystick_active
  {
    size_t item_size = sizeof(ros_message->joystick_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bumper_active
  {
    size_t item_size = sizeof(ros_message->bumper_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: desired_uav_state_rate
  {
    size_t item_size = sizeof(ros_message->desired_uav_state_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: active_tracker
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->active_tracker.size + 1);

  // Field name: tracker_status
  current_alignment += get_serialized_size_mrs_msgs__msg__TrackerStatus(
    &(ros_message->tracker_status), current_alignment);

  // Field name: active_controller
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->active_controller.size + 1);

  // Field name: controller_status
  current_alignment += get_serialized_size_mrs_msgs__msg__ControllerStatus(
    &(ros_message->controller_status), current_alignment);

  // Field name: available_controllers
  {
    size_t array_size = ros_message->available_controllers.size;
    auto array_ptr = ros_message->available_controllers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: available_trackers
  {
    size_t array_size = ros_message->available_trackers.size;
    auto array_ptr = ros_message->available_trackers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: human_switchable_controllers
  {
    size_t array_size = ros_message->human_switchable_controllers.size;
    auto array_ptr = ros_message->human_switchable_controllers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: human_switchable_trackers
  {
    size_t array_size = ros_message->human_switchable_trackers.size;
    auto array_ptr = ros_message->human_switchable_trackers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_mrs_msgs__msg__ControlManagerDiagnostics(
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

  // Field name: output_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: flying_normally
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: joystick_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: bumper_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: desired_uav_state_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: active_tracker
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

  // Field name: tracker_status
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mrs_msgs__msg__TrackerStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: active_controller
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

  // Field name: controller_status
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mrs_msgs__msg__ControllerStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: available_controllers
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

  // Field name: available_trackers
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

  // Field name: human_switchable_controllers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: human_switchable_trackers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_msgs__msg__ControlManagerDiagnostics;
    is_plain =
      (
      offsetof(DataType, human_switchable_trackers) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_key_mrs_msgs__msg__ControlManagerDiagnostics(
  const mrs_msgs__msg__ControlManagerDiagnostics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: stamp
  {
    cdr_serialize_key_builtin_interfaces__msg__Time(
      &ros_message->stamp, cdr);
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

  // Field name: output_enabled
  {
    cdr << (ros_message->output_enabled ? true : false);
  }

  // Field name: flying_normally
  {
    cdr << (ros_message->flying_normally ? true : false);
  }

  // Field name: joystick_active
  {
    cdr << (ros_message->joystick_active ? true : false);
  }

  // Field name: bumper_active
  {
    cdr << (ros_message->bumper_active ? true : false);
  }

  // Field name: desired_uav_state_rate
  {
    cdr << ros_message->desired_uav_state_rate;
  }

  // Field name: active_tracker
  {
    const rosidl_runtime_c__String * str = &ros_message->active_tracker;
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

  // Field name: tracker_status
  {
    cdr_serialize_key_mrs_msgs__msg__TrackerStatus(
      &ros_message->tracker_status, cdr);
  }

  // Field name: active_controller
  {
    const rosidl_runtime_c__String * str = &ros_message->active_controller;
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

  // Field name: controller_status
  {
    cdr_serialize_key_mrs_msgs__msg__ControllerStatus(
      &ros_message->controller_status, cdr);
  }

  // Field name: available_controllers
  {
    size_t size = ros_message->available_controllers.size;
    auto array_ptr = ros_message->available_controllers.data;
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

  // Field name: available_trackers
  {
    size_t size = ros_message->available_trackers.size;
    auto array_ptr = ros_message->available_trackers.data;
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

  // Field name: human_switchable_controllers
  {
    size_t size = ros_message->human_switchable_controllers.size;
    auto array_ptr = ros_message->human_switchable_controllers.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: human_switchable_trackers
  {
    size_t size = ros_message->human_switchable_trackers.size;
    auto array_ptr = ros_message->human_switchable_trackers.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_key_mrs_msgs__msg__ControlManagerDiagnostics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlManagerDiagnostics__ros_msg_type * ros_message = static_cast<const _ControlManagerDiagnostics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: stamp
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  // Field name: uav_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->uav_name.size + 1);

  // Field name: output_enabled
  {
    size_t item_size = sizeof(ros_message->output_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: flying_normally
  {
    size_t item_size = sizeof(ros_message->flying_normally);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joystick_active
  {
    size_t item_size = sizeof(ros_message->joystick_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bumper_active
  {
    size_t item_size = sizeof(ros_message->bumper_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: desired_uav_state_rate
  {
    size_t item_size = sizeof(ros_message->desired_uav_state_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: active_tracker
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->active_tracker.size + 1);

  // Field name: tracker_status
  current_alignment += get_serialized_size_key_mrs_msgs__msg__TrackerStatus(
    &(ros_message->tracker_status), current_alignment);

  // Field name: active_controller
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->active_controller.size + 1);

  // Field name: controller_status
  current_alignment += get_serialized_size_key_mrs_msgs__msg__ControllerStatus(
    &(ros_message->controller_status), current_alignment);

  // Field name: available_controllers
  {
    size_t array_size = ros_message->available_controllers.size;
    auto array_ptr = ros_message->available_controllers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: available_trackers
  {
    size_t array_size = ros_message->available_trackers.size;
    auto array_ptr = ros_message->available_trackers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: human_switchable_controllers
  {
    size_t array_size = ros_message->human_switchable_controllers.size;
    auto array_ptr = ros_message->human_switchable_controllers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: human_switchable_trackers
  {
    size_t array_size = ros_message->human_switchable_trackers.size;
    auto array_ptr = ros_message->human_switchable_trackers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_key_mrs_msgs__msg__ControlManagerDiagnostics(
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

  // Field name: output_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: flying_normally
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: joystick_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: bumper_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: desired_uav_state_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: active_tracker
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

  // Field name: tracker_status
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mrs_msgs__msg__TrackerStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: active_controller
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

  // Field name: controller_status
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mrs_msgs__msg__ControllerStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: available_controllers
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

  // Field name: available_trackers
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

  // Field name: human_switchable_controllers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: human_switchable_trackers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_msgs__msg__ControlManagerDiagnostics;
    is_plain =
      (
      offsetof(DataType, human_switchable_trackers) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ControlManagerDiagnostics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_msgs__msg__ControlManagerDiagnostics * ros_message = static_cast<const mrs_msgs__msg__ControlManagerDiagnostics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_msgs__msg__ControlManagerDiagnostics(ros_message, cdr);
}

static bool _ControlManagerDiagnostics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_msgs__msg__ControlManagerDiagnostics * ros_message = static_cast<mrs_msgs__msg__ControlManagerDiagnostics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_msgs__msg__ControlManagerDiagnostics(cdr, ros_message);
}

static uint32_t _ControlManagerDiagnostics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_msgs__msg__ControlManagerDiagnostics(
      untyped_ros_message, 0));
}

static size_t _ControlManagerDiagnostics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_msgs__msg__ControlManagerDiagnostics(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControlManagerDiagnostics = {
  "mrs_msgs::msg",
  "ControlManagerDiagnostics",
  _ControlManagerDiagnostics__cdr_serialize,
  _ControlManagerDiagnostics__cdr_deserialize,
  _ControlManagerDiagnostics__get_serialized_size,
  _ControlManagerDiagnostics__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ControlManagerDiagnostics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlManagerDiagnostics,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__ControlManagerDiagnostics__get_type_hash,
  &mrs_msgs__msg__ControlManagerDiagnostics__get_type_description,
  &mrs_msgs__msg__ControlManagerDiagnostics__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, ControlManagerDiagnostics)() {
  return &_ControlManagerDiagnostics__type_support;
}

#if defined(__cplusplus)
}
#endif
