// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_modules_msgs:msg/GripperDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/gripper_diagnostics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_modules_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_modules_msgs/msg/detail/gripper_diagnostics__struct.h"
#include "mrs_modules_msgs/msg/detail/gripper_diagnostics__functions.h"
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

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
bool cdr_serialize_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
bool cdr_deserialize_builtin_interfaces__msg__Time(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Time * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
bool cdr_serialize_key_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
size_t get_serialized_size_key_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
size_t max_serialized_size_key_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _GripperDiagnostics__ros_msg_type = mrs_modules_msgs__msg__GripperDiagnostics;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
bool cdr_serialize_mrs_modules_msgs__msg__GripperDiagnostics(
  const mrs_modules_msgs__msg__GripperDiagnostics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: stamp
  {
    cdr_serialize_builtin_interfaces__msg__Time(
      &ros_message->stamp, cdr);
  }

  // Field name: gripper_on
  {
    cdr << (ros_message->gripper_on ? true : false);
  }

  // Field name: gripping_object
  {
    cdr << (ros_message->gripping_object ? true : false);
  }

  // Field name: has_hall
  {
    cdr << (ros_message->has_hall ? true : false);
  }

  // Field name: hall1_debug
  {
    cdr << ros_message->hall1_debug;
  }

  // Field name: hall2_debug
  {
    cdr << ros_message->hall2_debug;
  }

  // Field name: has_ultrasonic
  {
    cdr << (ros_message->has_ultrasonic ? true : false);
  }

  // Field name: ultrasonic1_debug
  {
    cdr << ros_message->ultrasonic1_debug;
  }

  // Field name: ultrasonic2_debug
  {
    cdr << ros_message->ultrasonic2_debug;
  }

  // Field name: has_proximity
  {
    cdr << (ros_message->has_proximity ? true : false);
  }

  // Field name: proximity1_debug
  {
    cdr << ros_message->proximity1_debug;
  }

  // Field name: proximity2_debug
  {
    cdr << ros_message->proximity2_debug;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
bool cdr_deserialize_mrs_modules_msgs__msg__GripperDiagnostics(
  eprosima::fastcdr::Cdr & cdr,
  mrs_modules_msgs__msg__GripperDiagnostics * ros_message)
{
  // Field name: stamp
  {
    cdr_deserialize_builtin_interfaces__msg__Time(cdr, &ros_message->stamp);
  }

  // Field name: gripper_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gripper_on = tmp ? true : false;
  }

  // Field name: gripping_object
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gripping_object = tmp ? true : false;
  }

  // Field name: has_hall
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_hall = tmp ? true : false;
  }

  // Field name: hall1_debug
  {
    cdr >> ros_message->hall1_debug;
  }

  // Field name: hall2_debug
  {
    cdr >> ros_message->hall2_debug;
  }

  // Field name: has_ultrasonic
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_ultrasonic = tmp ? true : false;
  }

  // Field name: ultrasonic1_debug
  {
    cdr >> ros_message->ultrasonic1_debug;
  }

  // Field name: ultrasonic2_debug
  {
    cdr >> ros_message->ultrasonic2_debug;
  }

  // Field name: has_proximity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_proximity = tmp ? true : false;
  }

  // Field name: proximity1_debug
  {
    cdr >> ros_message->proximity1_debug;
  }

  // Field name: proximity2_debug
  {
    cdr >> ros_message->proximity2_debug;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t get_serialized_size_mrs_modules_msgs__msg__GripperDiagnostics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GripperDiagnostics__ros_msg_type * ros_message = static_cast<const _GripperDiagnostics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: stamp
  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  // Field name: gripper_on
  {
    size_t item_size = sizeof(ros_message->gripper_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gripping_object
  {
    size_t item_size = sizeof(ros_message->gripping_object);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_hall
  {
    size_t item_size = sizeof(ros_message->has_hall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hall1_debug
  {
    size_t item_size = sizeof(ros_message->hall1_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hall2_debug
  {
    size_t item_size = sizeof(ros_message->hall2_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_ultrasonic
  {
    size_t item_size = sizeof(ros_message->has_ultrasonic);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ultrasonic1_debug
  {
    size_t item_size = sizeof(ros_message->ultrasonic1_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ultrasonic2_debug
  {
    size_t item_size = sizeof(ros_message->ultrasonic2_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_proximity
  {
    size_t item_size = sizeof(ros_message->has_proximity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: proximity1_debug
  {
    size_t item_size = sizeof(ros_message->proximity1_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: proximity2_debug
  {
    size_t item_size = sizeof(ros_message->proximity2_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t max_serialized_size_mrs_modules_msgs__msg__GripperDiagnostics(
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

  // Field name: gripper_on
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: gripping_object
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: has_hall
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: hall1_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hall2_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: has_ultrasonic
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ultrasonic1_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ultrasonic2_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: has_proximity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: proximity1_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: proximity2_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_modules_msgs__msg__GripperDiagnostics;
    is_plain =
      (
      offsetof(DataType, proximity2_debug) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
bool cdr_serialize_key_mrs_modules_msgs__msg__GripperDiagnostics(
  const mrs_modules_msgs__msg__GripperDiagnostics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: stamp
  {
    cdr_serialize_key_builtin_interfaces__msg__Time(
      &ros_message->stamp, cdr);
  }

  // Field name: gripper_on
  {
    cdr << (ros_message->gripper_on ? true : false);
  }

  // Field name: gripping_object
  {
    cdr << (ros_message->gripping_object ? true : false);
  }

  // Field name: has_hall
  {
    cdr << (ros_message->has_hall ? true : false);
  }

  // Field name: hall1_debug
  {
    cdr << ros_message->hall1_debug;
  }

  // Field name: hall2_debug
  {
    cdr << ros_message->hall2_debug;
  }

  // Field name: has_ultrasonic
  {
    cdr << (ros_message->has_ultrasonic ? true : false);
  }

  // Field name: ultrasonic1_debug
  {
    cdr << ros_message->ultrasonic1_debug;
  }

  // Field name: ultrasonic2_debug
  {
    cdr << ros_message->ultrasonic2_debug;
  }

  // Field name: has_proximity
  {
    cdr << (ros_message->has_proximity ? true : false);
  }

  // Field name: proximity1_debug
  {
    cdr << ros_message->proximity1_debug;
  }

  // Field name: proximity2_debug
  {
    cdr << ros_message->proximity2_debug;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t get_serialized_size_key_mrs_modules_msgs__msg__GripperDiagnostics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GripperDiagnostics__ros_msg_type * ros_message = static_cast<const _GripperDiagnostics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: stamp
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  // Field name: gripper_on
  {
    size_t item_size = sizeof(ros_message->gripper_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gripping_object
  {
    size_t item_size = sizeof(ros_message->gripping_object);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_hall
  {
    size_t item_size = sizeof(ros_message->has_hall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hall1_debug
  {
    size_t item_size = sizeof(ros_message->hall1_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hall2_debug
  {
    size_t item_size = sizeof(ros_message->hall2_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_ultrasonic
  {
    size_t item_size = sizeof(ros_message->has_ultrasonic);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ultrasonic1_debug
  {
    size_t item_size = sizeof(ros_message->ultrasonic1_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ultrasonic2_debug
  {
    size_t item_size = sizeof(ros_message->ultrasonic2_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_proximity
  {
    size_t item_size = sizeof(ros_message->has_proximity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: proximity1_debug
  {
    size_t item_size = sizeof(ros_message->proximity1_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: proximity2_debug
  {
    size_t item_size = sizeof(ros_message->proximity2_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t max_serialized_size_key_mrs_modules_msgs__msg__GripperDiagnostics(
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

  // Field name: gripper_on
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: gripping_object
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: has_hall
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: hall1_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hall2_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: has_ultrasonic
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ultrasonic1_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ultrasonic2_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: has_proximity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: proximity1_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: proximity2_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_modules_msgs__msg__GripperDiagnostics;
    is_plain =
      (
      offsetof(DataType, proximity2_debug) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GripperDiagnostics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_modules_msgs__msg__GripperDiagnostics * ros_message = static_cast<const mrs_modules_msgs__msg__GripperDiagnostics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_modules_msgs__msg__GripperDiagnostics(ros_message, cdr);
}

static bool _GripperDiagnostics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_modules_msgs__msg__GripperDiagnostics * ros_message = static_cast<mrs_modules_msgs__msg__GripperDiagnostics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_modules_msgs__msg__GripperDiagnostics(cdr, ros_message);
}

static uint32_t _GripperDiagnostics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_modules_msgs__msg__GripperDiagnostics(
      untyped_ros_message, 0));
}

static size_t _GripperDiagnostics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_modules_msgs__msg__GripperDiagnostics(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GripperDiagnostics = {
  "mrs_modules_msgs::msg",
  "GripperDiagnostics",
  _GripperDiagnostics__cdr_serialize,
  _GripperDiagnostics__cdr_deserialize,
  _GripperDiagnostics__get_serialized_size,
  _GripperDiagnostics__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GripperDiagnostics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GripperDiagnostics,
  get_message_typesupport_handle_function,
  &mrs_modules_msgs__msg__GripperDiagnostics__get_type_hash,
  &mrs_modules_msgs__msg__GripperDiagnostics__get_type_description,
  &mrs_modules_msgs__msg__GripperDiagnostics__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_modules_msgs, msg, GripperDiagnostics)() {
  return &_GripperDiagnostics__type_support;
}

#if defined(__cplusplus)
}
#endif
