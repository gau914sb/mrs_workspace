// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_msgs:msg/ObstacleSectors.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/obstacle_sectors__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_msgs/msg/detail/obstacle_sectors__struct.h"
#include "mrs_msgs/msg/detail/obstacle_sectors__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // sector_sensors, sectors
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // sector_sensors, sectors
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

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


using _ObstacleSectors__ros_msg_type = mrs_msgs__msg__ObstacleSectors;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_mrs_msgs__msg__ObstacleSectors(
  const mrs_msgs__msg__ObstacleSectors * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: n_horizontal_sectors
  {
    cdr << ros_message->n_horizontal_sectors;
  }

  // Field name: sectors_vertical_fov
  {
    cdr << ros_message->sectors_vertical_fov;
  }

  // Field name: sectors
  {
    size_t size = ros_message->sectors.size;
    auto array_ptr = ros_message->sectors.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: sector_sensors
  {
    size_t size = ros_message->sector_sensors.size;
    auto array_ptr = ros_message->sector_sensors.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_deserialize_mrs_msgs__msg__ObstacleSectors(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__ObstacleSectors * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: n_horizontal_sectors
  {
    cdr >> ros_message->n_horizontal_sectors;
  }

  // Field name: sectors_vertical_fov
  {
    cdr >> ros_message->sectors_vertical_fov;
  }

  // Field name: sectors
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

    if (ros_message->sectors.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->sectors);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->sectors, size)) {
      fprintf(stderr, "failed to create array for field 'sectors'");
      return false;
    }
    auto array_ptr = ros_message->sectors.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: sector_sensors
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

    if (ros_message->sector_sensors.data) {
      rosidl_runtime_c__int8__Sequence__fini(&ros_message->sector_sensors);
    }
    if (!rosidl_runtime_c__int8__Sequence__init(&ros_message->sector_sensors, size)) {
      fprintf(stderr, "failed to create array for field 'sector_sensors'");
      return false;
    }
    auto array_ptr = ros_message->sector_sensors.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_mrs_msgs__msg__ObstacleSectors(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ObstacleSectors__ros_msg_type * ros_message = static_cast<const _ObstacleSectors__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: n_horizontal_sectors
  {
    size_t item_size = sizeof(ros_message->n_horizontal_sectors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sectors_vertical_fov
  {
    size_t item_size = sizeof(ros_message->sectors_vertical_fov);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sectors
  {
    size_t array_size = ros_message->sectors.size;
    auto array_ptr = ros_message->sectors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sector_sensors
  {
    size_t array_size = ros_message->sector_sensors.size;
    auto array_ptr = ros_message->sector_sensors.data;
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
size_t max_serialized_size_mrs_msgs__msg__ObstacleSectors(
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

  // Field name: n_horizontal_sectors
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sectors_vertical_fov
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: sectors
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: sector_sensors
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
    using DataType = mrs_msgs__msg__ObstacleSectors;
    is_plain =
      (
      offsetof(DataType, sector_sensors) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_key_mrs_msgs__msg__ObstacleSectors(
  const mrs_msgs__msg__ObstacleSectors * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: n_horizontal_sectors
  {
    cdr << ros_message->n_horizontal_sectors;
  }

  // Field name: sectors_vertical_fov
  {
    cdr << ros_message->sectors_vertical_fov;
  }

  // Field name: sectors
  {
    size_t size = ros_message->sectors.size;
    auto array_ptr = ros_message->sectors.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: sector_sensors
  {
    size_t size = ros_message->sector_sensors.size;
    auto array_ptr = ros_message->sector_sensors.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_key_mrs_msgs__msg__ObstacleSectors(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ObstacleSectors__ros_msg_type * ros_message = static_cast<const _ObstacleSectors__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: n_horizontal_sectors
  {
    size_t item_size = sizeof(ros_message->n_horizontal_sectors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sectors_vertical_fov
  {
    size_t item_size = sizeof(ros_message->sectors_vertical_fov);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sectors
  {
    size_t array_size = ros_message->sectors.size;
    auto array_ptr = ros_message->sectors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sector_sensors
  {
    size_t array_size = ros_message->sector_sensors.size;
    auto array_ptr = ros_message->sector_sensors.data;
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
size_t max_serialized_size_key_mrs_msgs__msg__ObstacleSectors(
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

  // Field name: n_horizontal_sectors
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sectors_vertical_fov
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: sectors
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: sector_sensors
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
    using DataType = mrs_msgs__msg__ObstacleSectors;
    is_plain =
      (
      offsetof(DataType, sector_sensors) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ObstacleSectors__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_msgs__msg__ObstacleSectors * ros_message = static_cast<const mrs_msgs__msg__ObstacleSectors *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_msgs__msg__ObstacleSectors(ros_message, cdr);
}

static bool _ObstacleSectors__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_msgs__msg__ObstacleSectors * ros_message = static_cast<mrs_msgs__msg__ObstacleSectors *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_msgs__msg__ObstacleSectors(cdr, ros_message);
}

static uint32_t _ObstacleSectors__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_msgs__msg__ObstacleSectors(
      untyped_ros_message, 0));
}

static size_t _ObstacleSectors__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_msgs__msg__ObstacleSectors(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ObstacleSectors = {
  "mrs_msgs::msg",
  "ObstacleSectors",
  _ObstacleSectors__cdr_serialize,
  _ObstacleSectors__cdr_deserialize,
  _ObstacleSectors__get_serialized_size,
  _ObstacleSectors__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ObstacleSectors__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ObstacleSectors,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__ObstacleSectors__get_type_hash,
  &mrs_msgs__msg__ObstacleSectors__get_type_description,
  &mrs_msgs__msg__ObstacleSectors__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, ObstacleSectors)() {
  return &_ObstacleSectors__type_support;
}

#if defined(__cplusplus)
}
#endif
