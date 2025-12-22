// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_msgs:msg/VelocityReference.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/velocity_reference__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_msgs/msg/detail/velocity_reference__struct.h"
#include "mrs_msgs/msg/detail/velocity_reference__functions.h"
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

#include "geometry_msgs/msg/detail/vector3__functions.h"  // velocity

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_serialize_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_deserialize_geometry_msgs__msg__Vector3(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Vector3 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_serialize_key_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();


using _VelocityReference__ros_msg_type = mrs_msgs__msg__VelocityReference;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_mrs_msgs__msg__VelocityReference(
  const mrs_msgs__msg__VelocityReference * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: velocity
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->velocity, cdr);
  }

  // Field name: altitude
  {
    cdr << ros_message->altitude;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: heading_rate
  {
    cdr << ros_message->heading_rate;
  }

  // Field name: use_altitude
  {
    cdr << (ros_message->use_altitude ? true : false);
  }

  // Field name: use_heading
  {
    cdr << (ros_message->use_heading ? true : false);
  }

  // Field name: use_heading_rate
  {
    cdr << (ros_message->use_heading_rate ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_deserialize_mrs_msgs__msg__VelocityReference(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__VelocityReference * ros_message)
{
  // Field name: velocity
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->velocity);
  }

  // Field name: altitude
  {
    cdr >> ros_message->altitude;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: heading_rate
  {
    cdr >> ros_message->heading_rate;
  }

  // Field name: use_altitude
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_altitude = tmp ? true : false;
  }

  // Field name: use_heading
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_heading = tmp ? true : false;
  }

  // Field name: use_heading_rate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_heading_rate = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_mrs_msgs__msg__VelocityReference(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VelocityReference__ros_msg_type * ros_message = static_cast<const _VelocityReference__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: velocity
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->velocity), current_alignment);

  // Field name: altitude
  {
    size_t item_size = sizeof(ros_message->altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_rate
  {
    size_t item_size = sizeof(ros_message->heading_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_altitude
  {
    size_t item_size = sizeof(ros_message->use_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_heading
  {
    size_t item_size = sizeof(ros_message->use_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_heading_rate
  {
    size_t item_size = sizeof(ros_message->use_heading_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_mrs_msgs__msg__VelocityReference(
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

  // Field name: velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: altitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: heading_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: use_altitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_heading_rate
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
    using DataType = mrs_msgs__msg__VelocityReference;
    is_plain =
      (
      offsetof(DataType, use_heading_rate) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_key_mrs_msgs__msg__VelocityReference(
  const mrs_msgs__msg__VelocityReference * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: velocity
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->velocity, cdr);
  }

  // Field name: altitude
  {
    cdr << ros_message->altitude;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: heading_rate
  {
    cdr << ros_message->heading_rate;
  }

  // Field name: use_altitude
  {
    cdr << (ros_message->use_altitude ? true : false);
  }

  // Field name: use_heading
  {
    cdr << (ros_message->use_heading ? true : false);
  }

  // Field name: use_heading_rate
  {
    cdr << (ros_message->use_heading_rate ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_key_mrs_msgs__msg__VelocityReference(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VelocityReference__ros_msg_type * ros_message = static_cast<const _VelocityReference__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: velocity
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->velocity), current_alignment);

  // Field name: altitude
  {
    size_t item_size = sizeof(ros_message->altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_rate
  {
    size_t item_size = sizeof(ros_message->heading_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_altitude
  {
    size_t item_size = sizeof(ros_message->use_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_heading
  {
    size_t item_size = sizeof(ros_message->use_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_heading_rate
  {
    size_t item_size = sizeof(ros_message->use_heading_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_key_mrs_msgs__msg__VelocityReference(
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
  // Field name: velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: altitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: heading_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: use_altitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_heading_rate
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
    using DataType = mrs_msgs__msg__VelocityReference;
    is_plain =
      (
      offsetof(DataType, use_heading_rate) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _VelocityReference__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_msgs__msg__VelocityReference * ros_message = static_cast<const mrs_msgs__msg__VelocityReference *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_msgs__msg__VelocityReference(ros_message, cdr);
}

static bool _VelocityReference__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_msgs__msg__VelocityReference * ros_message = static_cast<mrs_msgs__msg__VelocityReference *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_msgs__msg__VelocityReference(cdr, ros_message);
}

static uint32_t _VelocityReference__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_msgs__msg__VelocityReference(
      untyped_ros_message, 0));
}

static size_t _VelocityReference__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_msgs__msg__VelocityReference(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VelocityReference = {
  "mrs_msgs::msg",
  "VelocityReference",
  _VelocityReference__cdr_serialize,
  _VelocityReference__cdr_deserialize,
  _VelocityReference__get_serialized_size,
  _VelocityReference__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _VelocityReference__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VelocityReference,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__VelocityReference__get_type_hash,
  &mrs_msgs__msg__VelocityReference__get_type_description,
  &mrs_msgs__msg__VelocityReference__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, VelocityReference)() {
  return &_VelocityReference__type_support;
}

#if defined(__cplusplus)
}
#endif
