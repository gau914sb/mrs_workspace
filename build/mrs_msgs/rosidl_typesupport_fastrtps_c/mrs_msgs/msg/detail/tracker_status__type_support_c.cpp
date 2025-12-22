// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_msgs:msg/TrackerStatus.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/tracker_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_msgs/msg/detail/tracker_status__struct.h"
#include "mrs_msgs/msg/detail/tracker_status__functions.h"
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

#include "mrs_msgs/msg/detail/reference_stamped__functions.h"  // trajectory_reference

// forward declare type support functions

bool cdr_serialize_mrs_msgs__msg__ReferenceStamped(
  const mrs_msgs__msg__ReferenceStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mrs_msgs__msg__ReferenceStamped(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__ReferenceStamped * ros_message);

size_t get_serialized_size_mrs_msgs__msg__ReferenceStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mrs_msgs__msg__ReferenceStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mrs_msgs__msg__ReferenceStamped(
  const mrs_msgs__msg__ReferenceStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mrs_msgs__msg__ReferenceStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mrs_msgs__msg__ReferenceStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, ReferenceStamped)();


using _TrackerStatus__ros_msg_type = mrs_msgs__msg__TrackerStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_mrs_msgs__msg__TrackerStatus(
  const mrs_msgs__msg__TrackerStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: active
  {
    cdr << (ros_message->active ? true : false);
  }

  // Field name: callbacks_enabled
  {
    cdr << (ros_message->callbacks_enabled ? true : false);
  }

  // Field name: state
  {
    cdr << ros_message->state;
  }

  // Field name: have_goal
  {
    cdr << (ros_message->have_goal ? true : false);
  }

  // Field name: tracking_trajectory
  {
    cdr << (ros_message->tracking_trajectory ? true : false);
  }

  // Field name: trajectory_length
  {
    cdr << ros_message->trajectory_length;
  }

  // Field name: trajectory_idx
  {
    cdr << ros_message->trajectory_idx;
  }

  // Field name: trajectory_reference
  {
    cdr_serialize_mrs_msgs__msg__ReferenceStamped(
      &ros_message->trajectory_reference, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_deserialize_mrs_msgs__msg__TrackerStatus(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__TrackerStatus * ros_message)
{
  // Field name: active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active = tmp ? true : false;
  }

  // Field name: callbacks_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->callbacks_enabled = tmp ? true : false;
  }

  // Field name: state
  {
    cdr >> ros_message->state;
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

  // Field name: trajectory_length
  {
    cdr >> ros_message->trajectory_length;
  }

  // Field name: trajectory_idx
  {
    cdr >> ros_message->trajectory_idx;
  }

  // Field name: trajectory_reference
  {
    cdr_deserialize_mrs_msgs__msg__ReferenceStamped(cdr, &ros_message->trajectory_reference);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_mrs_msgs__msg__TrackerStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrackerStatus__ros_msg_type * ros_message = static_cast<const _TrackerStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: active
  {
    size_t item_size = sizeof(ros_message->active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: callbacks_enabled
  {
    size_t item_size = sizeof(ros_message->callbacks_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: state
  {
    size_t item_size = sizeof(ros_message->state);
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

  // Field name: trajectory_length
  {
    size_t item_size = sizeof(ros_message->trajectory_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: trajectory_idx
  {
    size_t item_size = sizeof(ros_message->trajectory_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: trajectory_reference
  current_alignment += get_serialized_size_mrs_msgs__msg__ReferenceStamped(
    &(ros_message->trajectory_reference), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_mrs_msgs__msg__TrackerStatus(
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

  // Field name: active
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

  // Field name: state
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

  // Field name: trajectory_length
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: trajectory_idx
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: trajectory_reference
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mrs_msgs__msg__ReferenceStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_msgs__msg__TrackerStatus;
    is_plain =
      (
      offsetof(DataType, trajectory_reference) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_key_mrs_msgs__msg__TrackerStatus(
  const mrs_msgs__msg__TrackerStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: active
  {
    cdr << (ros_message->active ? true : false);
  }

  // Field name: callbacks_enabled
  {
    cdr << (ros_message->callbacks_enabled ? true : false);
  }

  // Field name: state
  {
    cdr << ros_message->state;
  }

  // Field name: have_goal
  {
    cdr << (ros_message->have_goal ? true : false);
  }

  // Field name: tracking_trajectory
  {
    cdr << (ros_message->tracking_trajectory ? true : false);
  }

  // Field name: trajectory_length
  {
    cdr << ros_message->trajectory_length;
  }

  // Field name: trajectory_idx
  {
    cdr << ros_message->trajectory_idx;
  }

  // Field name: trajectory_reference
  {
    cdr_serialize_key_mrs_msgs__msg__ReferenceStamped(
      &ros_message->trajectory_reference, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_key_mrs_msgs__msg__TrackerStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrackerStatus__ros_msg_type * ros_message = static_cast<const _TrackerStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: active
  {
    size_t item_size = sizeof(ros_message->active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: callbacks_enabled
  {
    size_t item_size = sizeof(ros_message->callbacks_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: state
  {
    size_t item_size = sizeof(ros_message->state);
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

  // Field name: trajectory_length
  {
    size_t item_size = sizeof(ros_message->trajectory_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: trajectory_idx
  {
    size_t item_size = sizeof(ros_message->trajectory_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: trajectory_reference
  current_alignment += get_serialized_size_key_mrs_msgs__msg__ReferenceStamped(
    &(ros_message->trajectory_reference), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_key_mrs_msgs__msg__TrackerStatus(
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
  // Field name: active
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

  // Field name: state
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

  // Field name: trajectory_length
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: trajectory_idx
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: trajectory_reference
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mrs_msgs__msg__ReferenceStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_msgs__msg__TrackerStatus;
    is_plain =
      (
      offsetof(DataType, trajectory_reference) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TrackerStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_msgs__msg__TrackerStatus * ros_message = static_cast<const mrs_msgs__msg__TrackerStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_msgs__msg__TrackerStatus(ros_message, cdr);
}

static bool _TrackerStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_msgs__msg__TrackerStatus * ros_message = static_cast<mrs_msgs__msg__TrackerStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_msgs__msg__TrackerStatus(cdr, ros_message);
}

static uint32_t _TrackerStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_msgs__msg__TrackerStatus(
      untyped_ros_message, 0));
}

static size_t _TrackerStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_msgs__msg__TrackerStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TrackerStatus = {
  "mrs_msgs::msg",
  "TrackerStatus",
  _TrackerStatus__cdr_serialize,
  _TrackerStatus__cdr_deserialize,
  _TrackerStatus__get_serialized_size,
  _TrackerStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TrackerStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrackerStatus,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__TrackerStatus__get_type_hash,
  &mrs_msgs__msg__TrackerStatus__get_type_description,
  &mrs_msgs__msg__TrackerStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, TrackerStatus)() {
  return &_TrackerStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
