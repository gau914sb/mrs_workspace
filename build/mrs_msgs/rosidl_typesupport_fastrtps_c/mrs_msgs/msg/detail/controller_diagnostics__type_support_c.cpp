// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_msgs:msg/ControllerDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/controller_diagnostics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_msgs/msg/detail/controller_diagnostics__struct.h"
#include "mrs_msgs/msg/detail/controller_diagnostics__functions.h"
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
#include "rosidl_runtime_c/string.h"  // controller
#include "rosidl_runtime_c/string_functions.h"  // controller

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


using _ControllerDiagnostics__ros_msg_type = mrs_msgs__msg__ControllerDiagnostics;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_mrs_msgs__msg__ControllerDiagnostics(
  const mrs_msgs__msg__ControllerDiagnostics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: stamp
  {
    cdr_serialize_builtin_interfaces__msg__Time(
      &ros_message->stamp, cdr);
  }

  // Field name: controller
  {
    const rosidl_runtime_c__String * str = &ros_message->controller;
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

  // Field name: ramping_up
  {
    cdr << (ros_message->ramping_up ? true : false);
  }

  // Field name: mass_estimator
  {
    cdr << (ros_message->mass_estimator ? true : false);
  }

  // Field name: mass_difference
  {
    cdr << ros_message->mass_difference;
  }

  // Field name: total_mass
  {
    cdr << ros_message->total_mass;
  }

  // Field name: disturbance_estimator
  {
    cdr << (ros_message->disturbance_estimator ? true : false);
  }

  // Field name: disturbance_wx_w
  {
    cdr << ros_message->disturbance_wx_w;
  }

  // Field name: disturbance_wy_w
  {
    cdr << ros_message->disturbance_wy_w;
  }

  // Field name: disturbance_bx_w
  {
    cdr << ros_message->disturbance_bx_w;
  }

  // Field name: disturbance_by_w
  {
    cdr << ros_message->disturbance_by_w;
  }

  // Field name: disturbance_bx_b
  {
    cdr << ros_message->disturbance_bx_b;
  }

  // Field name: disturbance_by_b
  {
    cdr << ros_message->disturbance_by_b;
  }

  // Field name: controller_enforcing_constraints
  {
    cdr << (ros_message->controller_enforcing_constraints ? true : false);
  }

  // Field name: horizontal_speed_constraint
  {
    cdr << ros_message->horizontal_speed_constraint;
  }

  // Field name: horizontal_acc_constraint
  {
    cdr << ros_message->horizontal_acc_constraint;
  }

  // Field name: vertical_asc_speed_constraint
  {
    cdr << ros_message->vertical_asc_speed_constraint;
  }

  // Field name: vertical_asc_acc_constraint
  {
    cdr << ros_message->vertical_asc_acc_constraint;
  }

  // Field name: vertical_desc_speed_constraint
  {
    cdr << ros_message->vertical_desc_speed_constraint;
  }

  // Field name: vertical_desc_acc_constraint
  {
    cdr << ros_message->vertical_desc_acc_constraint;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_deserialize_mrs_msgs__msg__ControllerDiagnostics(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__ControllerDiagnostics * ros_message)
{
  // Field name: stamp
  {
    cdr_deserialize_builtin_interfaces__msg__Time(cdr, &ros_message->stamp);
  }

  // Field name: controller
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->controller.data) {
      rosidl_runtime_c__String__init(&ros_message->controller);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->controller,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'controller'\n");
      return false;
    }
  }

  // Field name: ramping_up
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ramping_up = tmp ? true : false;
  }

  // Field name: mass_estimator
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mass_estimator = tmp ? true : false;
  }

  // Field name: mass_difference
  {
    cdr >> ros_message->mass_difference;
  }

  // Field name: total_mass
  {
    cdr >> ros_message->total_mass;
  }

  // Field name: disturbance_estimator
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->disturbance_estimator = tmp ? true : false;
  }

  // Field name: disturbance_wx_w
  {
    cdr >> ros_message->disturbance_wx_w;
  }

  // Field name: disturbance_wy_w
  {
    cdr >> ros_message->disturbance_wy_w;
  }

  // Field name: disturbance_bx_w
  {
    cdr >> ros_message->disturbance_bx_w;
  }

  // Field name: disturbance_by_w
  {
    cdr >> ros_message->disturbance_by_w;
  }

  // Field name: disturbance_bx_b
  {
    cdr >> ros_message->disturbance_bx_b;
  }

  // Field name: disturbance_by_b
  {
    cdr >> ros_message->disturbance_by_b;
  }

  // Field name: controller_enforcing_constraints
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->controller_enforcing_constraints = tmp ? true : false;
  }

  // Field name: horizontal_speed_constraint
  {
    cdr >> ros_message->horizontal_speed_constraint;
  }

  // Field name: horizontal_acc_constraint
  {
    cdr >> ros_message->horizontal_acc_constraint;
  }

  // Field name: vertical_asc_speed_constraint
  {
    cdr >> ros_message->vertical_asc_speed_constraint;
  }

  // Field name: vertical_asc_acc_constraint
  {
    cdr >> ros_message->vertical_asc_acc_constraint;
  }

  // Field name: vertical_desc_speed_constraint
  {
    cdr >> ros_message->vertical_desc_speed_constraint;
  }

  // Field name: vertical_desc_acc_constraint
  {
    cdr >> ros_message->vertical_desc_acc_constraint;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_mrs_msgs__msg__ControllerDiagnostics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControllerDiagnostics__ros_msg_type * ros_message = static_cast<const _ControllerDiagnostics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: stamp
  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  // Field name: controller
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->controller.size + 1);

  // Field name: ramping_up
  {
    size_t item_size = sizeof(ros_message->ramping_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mass_estimator
  {
    size_t item_size = sizeof(ros_message->mass_estimator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mass_difference
  {
    size_t item_size = sizeof(ros_message->mass_difference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: total_mass
  {
    size_t item_size = sizeof(ros_message->total_mass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disturbance_estimator
  {
    size_t item_size = sizeof(ros_message->disturbance_estimator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disturbance_wx_w
  {
    size_t item_size = sizeof(ros_message->disturbance_wx_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disturbance_wy_w
  {
    size_t item_size = sizeof(ros_message->disturbance_wy_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disturbance_bx_w
  {
    size_t item_size = sizeof(ros_message->disturbance_bx_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disturbance_by_w
  {
    size_t item_size = sizeof(ros_message->disturbance_by_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disturbance_bx_b
  {
    size_t item_size = sizeof(ros_message->disturbance_bx_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disturbance_by_b
  {
    size_t item_size = sizeof(ros_message->disturbance_by_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: controller_enforcing_constraints
  {
    size_t item_size = sizeof(ros_message->controller_enforcing_constraints);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: horizontal_speed_constraint
  {
    size_t item_size = sizeof(ros_message->horizontal_speed_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: horizontal_acc_constraint
  {
    size_t item_size = sizeof(ros_message->horizontal_acc_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_asc_speed_constraint
  {
    size_t item_size = sizeof(ros_message->vertical_asc_speed_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_asc_acc_constraint
  {
    size_t item_size = sizeof(ros_message->vertical_asc_acc_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_desc_speed_constraint
  {
    size_t item_size = sizeof(ros_message->vertical_desc_speed_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_desc_acc_constraint
  {
    size_t item_size = sizeof(ros_message->vertical_desc_acc_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_mrs_msgs__msg__ControllerDiagnostics(
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

  // Field name: controller
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

  // Field name: ramping_up
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mass_estimator
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mass_difference
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: total_mass
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: disturbance_estimator
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: disturbance_wx_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: disturbance_wy_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: disturbance_bx_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: disturbance_by_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: disturbance_bx_b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: disturbance_by_b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: controller_enforcing_constraints
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: horizontal_speed_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: horizontal_acc_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_asc_speed_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_asc_acc_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_desc_speed_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_desc_acc_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_msgs__msg__ControllerDiagnostics;
    is_plain =
      (
      offsetof(DataType, vertical_desc_acc_constraint) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_key_mrs_msgs__msg__ControllerDiagnostics(
  const mrs_msgs__msg__ControllerDiagnostics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: stamp
  {
    cdr_serialize_key_builtin_interfaces__msg__Time(
      &ros_message->stamp, cdr);
  }

  // Field name: controller
  {
    const rosidl_runtime_c__String * str = &ros_message->controller;
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

  // Field name: ramping_up
  {
    cdr << (ros_message->ramping_up ? true : false);
  }

  // Field name: mass_estimator
  {
    cdr << (ros_message->mass_estimator ? true : false);
  }

  // Field name: mass_difference
  {
    cdr << ros_message->mass_difference;
  }

  // Field name: total_mass
  {
    cdr << ros_message->total_mass;
  }

  // Field name: disturbance_estimator
  {
    cdr << (ros_message->disturbance_estimator ? true : false);
  }

  // Field name: disturbance_wx_w
  {
    cdr << ros_message->disturbance_wx_w;
  }

  // Field name: disturbance_wy_w
  {
    cdr << ros_message->disturbance_wy_w;
  }

  // Field name: disturbance_bx_w
  {
    cdr << ros_message->disturbance_bx_w;
  }

  // Field name: disturbance_by_w
  {
    cdr << ros_message->disturbance_by_w;
  }

  // Field name: disturbance_bx_b
  {
    cdr << ros_message->disturbance_bx_b;
  }

  // Field name: disturbance_by_b
  {
    cdr << ros_message->disturbance_by_b;
  }

  // Field name: controller_enforcing_constraints
  {
    cdr << (ros_message->controller_enforcing_constraints ? true : false);
  }

  // Field name: horizontal_speed_constraint
  {
    cdr << ros_message->horizontal_speed_constraint;
  }

  // Field name: horizontal_acc_constraint
  {
    cdr << ros_message->horizontal_acc_constraint;
  }

  // Field name: vertical_asc_speed_constraint
  {
    cdr << ros_message->vertical_asc_speed_constraint;
  }

  // Field name: vertical_asc_acc_constraint
  {
    cdr << ros_message->vertical_asc_acc_constraint;
  }

  // Field name: vertical_desc_speed_constraint
  {
    cdr << ros_message->vertical_desc_speed_constraint;
  }

  // Field name: vertical_desc_acc_constraint
  {
    cdr << ros_message->vertical_desc_acc_constraint;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_key_mrs_msgs__msg__ControllerDiagnostics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControllerDiagnostics__ros_msg_type * ros_message = static_cast<const _ControllerDiagnostics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: stamp
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  // Field name: controller
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->controller.size + 1);

  // Field name: ramping_up
  {
    size_t item_size = sizeof(ros_message->ramping_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mass_estimator
  {
    size_t item_size = sizeof(ros_message->mass_estimator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mass_difference
  {
    size_t item_size = sizeof(ros_message->mass_difference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: total_mass
  {
    size_t item_size = sizeof(ros_message->total_mass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disturbance_estimator
  {
    size_t item_size = sizeof(ros_message->disturbance_estimator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disturbance_wx_w
  {
    size_t item_size = sizeof(ros_message->disturbance_wx_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disturbance_wy_w
  {
    size_t item_size = sizeof(ros_message->disturbance_wy_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disturbance_bx_w
  {
    size_t item_size = sizeof(ros_message->disturbance_bx_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disturbance_by_w
  {
    size_t item_size = sizeof(ros_message->disturbance_by_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disturbance_bx_b
  {
    size_t item_size = sizeof(ros_message->disturbance_bx_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disturbance_by_b
  {
    size_t item_size = sizeof(ros_message->disturbance_by_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: controller_enforcing_constraints
  {
    size_t item_size = sizeof(ros_message->controller_enforcing_constraints);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: horizontal_speed_constraint
  {
    size_t item_size = sizeof(ros_message->horizontal_speed_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: horizontal_acc_constraint
  {
    size_t item_size = sizeof(ros_message->horizontal_acc_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_asc_speed_constraint
  {
    size_t item_size = sizeof(ros_message->vertical_asc_speed_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_asc_acc_constraint
  {
    size_t item_size = sizeof(ros_message->vertical_asc_acc_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_desc_speed_constraint
  {
    size_t item_size = sizeof(ros_message->vertical_desc_speed_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_desc_acc_constraint
  {
    size_t item_size = sizeof(ros_message->vertical_desc_acc_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_key_mrs_msgs__msg__ControllerDiagnostics(
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

  // Field name: controller
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

  // Field name: ramping_up
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mass_estimator
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mass_difference
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: total_mass
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: disturbance_estimator
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: disturbance_wx_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: disturbance_wy_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: disturbance_bx_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: disturbance_by_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: disturbance_bx_b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: disturbance_by_b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: controller_enforcing_constraints
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: horizontal_speed_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: horizontal_acc_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_asc_speed_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_asc_acc_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_desc_speed_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_desc_acc_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_msgs__msg__ControllerDiagnostics;
    is_plain =
      (
      offsetof(DataType, vertical_desc_acc_constraint) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ControllerDiagnostics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_msgs__msg__ControllerDiagnostics * ros_message = static_cast<const mrs_msgs__msg__ControllerDiagnostics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_msgs__msg__ControllerDiagnostics(ros_message, cdr);
}

static bool _ControllerDiagnostics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_msgs__msg__ControllerDiagnostics * ros_message = static_cast<mrs_msgs__msg__ControllerDiagnostics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_msgs__msg__ControllerDiagnostics(cdr, ros_message);
}

static uint32_t _ControllerDiagnostics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_msgs__msg__ControllerDiagnostics(
      untyped_ros_message, 0));
}

static size_t _ControllerDiagnostics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_msgs__msg__ControllerDiagnostics(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControllerDiagnostics = {
  "mrs_msgs::msg",
  "ControllerDiagnostics",
  _ControllerDiagnostics__cdr_serialize,
  _ControllerDiagnostics__cdr_deserialize,
  _ControllerDiagnostics__get_serialized_size,
  _ControllerDiagnostics__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ControllerDiagnostics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControllerDiagnostics,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__ControllerDiagnostics__get_type_hash,
  &mrs_msgs__msg__ControllerDiagnostics__get_type_description,
  &mrs_msgs__msg__ControllerDiagnostics__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, ControllerDiagnostics)() {
  return &_ControllerDiagnostics__type_support;
}

#if defined(__cplusplus)
}
#endif
