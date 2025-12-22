// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_modules_msgs:msg/TersusMessageHeader.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/tersus_message_header__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_modules_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_modules_msgs/msg/detail/tersus_message_header__struct.h"
#include "mrs_modules_msgs/msg/detail/tersus_message_header__functions.h"
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

#include "rosidl_runtime_c/string.h"  // message_name, port_address, time_status
#include "rosidl_runtime_c/string_functions.h"  // message_name, port_address, time_status

// forward declare type support functions


using _TersusMessageHeader__ros_msg_type = mrs_modules_msgs__msg__TersusMessageHeader;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
bool cdr_serialize_mrs_modules_msgs__msg__TersusMessageHeader(
  const mrs_modules_msgs__msg__TersusMessageHeader * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: message_name
  {
    const rosidl_runtime_c__String * str = &ros_message->message_name;
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

  // Field name: port_address
  {
    const rosidl_runtime_c__String * str = &ros_message->port_address;
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

  // Field name: sequence
  {
    cdr << ros_message->sequence;
  }

  // Field name: idle_time
  {
    cdr << ros_message->idle_time;
  }

  // Field name: time_status
  {
    const rosidl_runtime_c__String * str = &ros_message->time_status;
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

  // Field name: gps_week
  {
    cdr << ros_message->gps_week;
  }

  // Field name: gps_week_seconds
  {
    cdr << ros_message->gps_week_seconds;
  }

  // Field name: receiver_status
  {
    cdr << ros_message->receiver_status;
  }

  // Field name: software_version
  {
    cdr << ros_message->software_version;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
bool cdr_deserialize_mrs_modules_msgs__msg__TersusMessageHeader(
  eprosima::fastcdr::Cdr & cdr,
  mrs_modules_msgs__msg__TersusMessageHeader * ros_message)
{
  // Field name: message_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message_name.data) {
      rosidl_runtime_c__String__init(&ros_message->message_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message_name'\n");
      return false;
    }
  }

  // Field name: port_address
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->port_address.data) {
      rosidl_runtime_c__String__init(&ros_message->port_address);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->port_address,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'port_address'\n");
      return false;
    }
  }

  // Field name: sequence
  {
    cdr >> ros_message->sequence;
  }

  // Field name: idle_time
  {
    cdr >> ros_message->idle_time;
  }

  // Field name: time_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->time_status.data) {
      rosidl_runtime_c__String__init(&ros_message->time_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->time_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'time_status'\n");
      return false;
    }
  }

  // Field name: gps_week
  {
    cdr >> ros_message->gps_week;
  }

  // Field name: gps_week_seconds
  {
    cdr >> ros_message->gps_week_seconds;
  }

  // Field name: receiver_status
  {
    cdr >> ros_message->receiver_status;
  }

  // Field name: software_version
  {
    cdr >> ros_message->software_version;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t get_serialized_size_mrs_modules_msgs__msg__TersusMessageHeader(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TersusMessageHeader__ros_msg_type * ros_message = static_cast<const _TersusMessageHeader__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: message_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message_name.size + 1);

  // Field name: port_address
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->port_address.size + 1);

  // Field name: sequence
  {
    size_t item_size = sizeof(ros_message->sequence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: idle_time
  {
    size_t item_size = sizeof(ros_message->idle_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: time_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->time_status.size + 1);

  // Field name: gps_week
  {
    size_t item_size = sizeof(ros_message->gps_week);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gps_week_seconds
  {
    size_t item_size = sizeof(ros_message->gps_week_seconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: receiver_status
  {
    size_t item_size = sizeof(ros_message->receiver_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: software_version
  {
    size_t item_size = sizeof(ros_message->software_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t max_serialized_size_mrs_modules_msgs__msg__TersusMessageHeader(
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

  // Field name: message_name
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

  // Field name: port_address
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

  // Field name: sequence
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: idle_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: time_status
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

  // Field name: gps_week
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: gps_week_seconds
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: receiver_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: software_version
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
    using DataType = mrs_modules_msgs__msg__TersusMessageHeader;
    is_plain =
      (
      offsetof(DataType, software_version) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
bool cdr_serialize_key_mrs_modules_msgs__msg__TersusMessageHeader(
  const mrs_modules_msgs__msg__TersusMessageHeader * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: message_name
  {
    const rosidl_runtime_c__String * str = &ros_message->message_name;
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

  // Field name: port_address
  {
    const rosidl_runtime_c__String * str = &ros_message->port_address;
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

  // Field name: sequence
  {
    cdr << ros_message->sequence;
  }

  // Field name: idle_time
  {
    cdr << ros_message->idle_time;
  }

  // Field name: time_status
  {
    const rosidl_runtime_c__String * str = &ros_message->time_status;
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

  // Field name: gps_week
  {
    cdr << ros_message->gps_week;
  }

  // Field name: gps_week_seconds
  {
    cdr << ros_message->gps_week_seconds;
  }

  // Field name: receiver_status
  {
    cdr << ros_message->receiver_status;
  }

  // Field name: software_version
  {
    cdr << ros_message->software_version;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t get_serialized_size_key_mrs_modules_msgs__msg__TersusMessageHeader(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TersusMessageHeader__ros_msg_type * ros_message = static_cast<const _TersusMessageHeader__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: message_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message_name.size + 1);

  // Field name: port_address
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->port_address.size + 1);

  // Field name: sequence
  {
    size_t item_size = sizeof(ros_message->sequence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: idle_time
  {
    size_t item_size = sizeof(ros_message->idle_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: time_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->time_status.size + 1);

  // Field name: gps_week
  {
    size_t item_size = sizeof(ros_message->gps_week);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gps_week_seconds
  {
    size_t item_size = sizeof(ros_message->gps_week_seconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: receiver_status
  {
    size_t item_size = sizeof(ros_message->receiver_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: software_version
  {
    size_t item_size = sizeof(ros_message->software_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t max_serialized_size_key_mrs_modules_msgs__msg__TersusMessageHeader(
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
  // Field name: message_name
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

  // Field name: port_address
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

  // Field name: sequence
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: idle_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: time_status
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

  // Field name: gps_week
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: gps_week_seconds
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: receiver_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: software_version
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
    using DataType = mrs_modules_msgs__msg__TersusMessageHeader;
    is_plain =
      (
      offsetof(DataType, software_version) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TersusMessageHeader__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_modules_msgs__msg__TersusMessageHeader * ros_message = static_cast<const mrs_modules_msgs__msg__TersusMessageHeader *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_modules_msgs__msg__TersusMessageHeader(ros_message, cdr);
}

static bool _TersusMessageHeader__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_modules_msgs__msg__TersusMessageHeader * ros_message = static_cast<mrs_modules_msgs__msg__TersusMessageHeader *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_modules_msgs__msg__TersusMessageHeader(cdr, ros_message);
}

static uint32_t _TersusMessageHeader__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_modules_msgs__msg__TersusMessageHeader(
      untyped_ros_message, 0));
}

static size_t _TersusMessageHeader__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_modules_msgs__msg__TersusMessageHeader(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TersusMessageHeader = {
  "mrs_modules_msgs::msg",
  "TersusMessageHeader",
  _TersusMessageHeader__cdr_serialize,
  _TersusMessageHeader__cdr_deserialize,
  _TersusMessageHeader__get_serialized_size,
  _TersusMessageHeader__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TersusMessageHeader__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TersusMessageHeader,
  get_message_typesupport_handle_function,
  &mrs_modules_msgs__msg__TersusMessageHeader__get_type_hash,
  &mrs_modules_msgs__msg__TersusMessageHeader__get_type_description,
  &mrs_modules_msgs__msg__TersusMessageHeader__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_modules_msgs, msg, TersusMessageHeader)() {
  return &_TersusMessageHeader__type_support;
}

#if defined(__cplusplus)
}
#endif
