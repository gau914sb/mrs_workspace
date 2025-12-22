// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_modules_msgs:msg/Gpgst.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/gpgst__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_modules_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_modules_msgs/msg/detail/gpgst__struct.h"
#include "mrs_modules_msgs/msg/detail/gpgst__functions.h"
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

#include "rosidl_runtime_c/string.h"  // message_id
#include "rosidl_runtime_c/string_functions.h"  // message_id
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Gpgst__ros_msg_type = mrs_modules_msgs__msg__Gpgst;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
bool cdr_serialize_mrs_modules_msgs__msg__Gpgst(
  const mrs_modules_msgs__msg__Gpgst * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: message_id
  {
    const rosidl_runtime_c__String * str = &ros_message->message_id;
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

  // Field name: utc
  {
    cdr << ros_message->utc;
  }

  // Field name: rms
  {
    cdr << ros_message->rms;
  }

  // Field name: smjr_std
  {
    cdr << ros_message->smjr_std;
  }

  // Field name: smnr_std
  {
    cdr << ros_message->smnr_std;
  }

  // Field name: orient
  {
    cdr << ros_message->orient;
  }

  // Field name: lat_std
  {
    cdr << ros_message->lat_std;
  }

  // Field name: lon_std
  {
    cdr << ros_message->lon_std;
  }

  // Field name: alt_std
  {
    cdr << ros_message->alt_std;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
bool cdr_deserialize_mrs_modules_msgs__msg__Gpgst(
  eprosima::fastcdr::Cdr & cdr,
  mrs_modules_msgs__msg__Gpgst * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: message_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message_id.data) {
      rosidl_runtime_c__String__init(&ros_message->message_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message_id'\n");
      return false;
    }
  }

  // Field name: utc
  {
    cdr >> ros_message->utc;
  }

  // Field name: rms
  {
    cdr >> ros_message->rms;
  }

  // Field name: smjr_std
  {
    cdr >> ros_message->smjr_std;
  }

  // Field name: smnr_std
  {
    cdr >> ros_message->smnr_std;
  }

  // Field name: orient
  {
    cdr >> ros_message->orient;
  }

  // Field name: lat_std
  {
    cdr >> ros_message->lat_std;
  }

  // Field name: lon_std
  {
    cdr >> ros_message->lon_std;
  }

  // Field name: alt_std
  {
    cdr >> ros_message->alt_std;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t get_serialized_size_mrs_modules_msgs__msg__Gpgst(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Gpgst__ros_msg_type * ros_message = static_cast<const _Gpgst__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: message_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message_id.size + 1);

  // Field name: utc
  {
    size_t item_size = sizeof(ros_message->utc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rms
  {
    size_t item_size = sizeof(ros_message->rms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: smjr_std
  {
    size_t item_size = sizeof(ros_message->smjr_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: smnr_std
  {
    size_t item_size = sizeof(ros_message->smnr_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: orient
  {
    size_t item_size = sizeof(ros_message->orient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: lat_std
  {
    size_t item_size = sizeof(ros_message->lat_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: lon_std
  {
    size_t item_size = sizeof(ros_message->lon_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: alt_std
  {
    size_t item_size = sizeof(ros_message->alt_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t max_serialized_size_mrs_modules_msgs__msg__Gpgst(
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

  // Field name: message_id
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

  // Field name: utc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: rms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: smjr_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: smnr_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: orient
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: lat_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: lon_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: alt_std
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
    using DataType = mrs_modules_msgs__msg__Gpgst;
    is_plain =
      (
      offsetof(DataType, alt_std) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
bool cdr_serialize_key_mrs_modules_msgs__msg__Gpgst(
  const mrs_modules_msgs__msg__Gpgst * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: message_id
  {
    const rosidl_runtime_c__String * str = &ros_message->message_id;
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

  // Field name: utc
  {
    cdr << ros_message->utc;
  }

  // Field name: rms
  {
    cdr << ros_message->rms;
  }

  // Field name: smjr_std
  {
    cdr << ros_message->smjr_std;
  }

  // Field name: smnr_std
  {
    cdr << ros_message->smnr_std;
  }

  // Field name: orient
  {
    cdr << ros_message->orient;
  }

  // Field name: lat_std
  {
    cdr << ros_message->lat_std;
  }

  // Field name: lon_std
  {
    cdr << ros_message->lon_std;
  }

  // Field name: alt_std
  {
    cdr << ros_message->alt_std;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t get_serialized_size_key_mrs_modules_msgs__msg__Gpgst(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Gpgst__ros_msg_type * ros_message = static_cast<const _Gpgst__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: message_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message_id.size + 1);

  // Field name: utc
  {
    size_t item_size = sizeof(ros_message->utc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rms
  {
    size_t item_size = sizeof(ros_message->rms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: smjr_std
  {
    size_t item_size = sizeof(ros_message->smjr_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: smnr_std
  {
    size_t item_size = sizeof(ros_message->smnr_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: orient
  {
    size_t item_size = sizeof(ros_message->orient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: lat_std
  {
    size_t item_size = sizeof(ros_message->lat_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: lon_std
  {
    size_t item_size = sizeof(ros_message->lon_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: alt_std
  {
    size_t item_size = sizeof(ros_message->alt_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t max_serialized_size_key_mrs_modules_msgs__msg__Gpgst(
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

  // Field name: message_id
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

  // Field name: utc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: rms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: smjr_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: smnr_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: orient
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: lat_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: lon_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: alt_std
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
    using DataType = mrs_modules_msgs__msg__Gpgst;
    is_plain =
      (
      offsetof(DataType, alt_std) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Gpgst__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_modules_msgs__msg__Gpgst * ros_message = static_cast<const mrs_modules_msgs__msg__Gpgst *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_modules_msgs__msg__Gpgst(ros_message, cdr);
}

static bool _Gpgst__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_modules_msgs__msg__Gpgst * ros_message = static_cast<mrs_modules_msgs__msg__Gpgst *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_modules_msgs__msg__Gpgst(cdr, ros_message);
}

static uint32_t _Gpgst__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_modules_msgs__msg__Gpgst(
      untyped_ros_message, 0));
}

static size_t _Gpgst__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_modules_msgs__msg__Gpgst(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Gpgst = {
  "mrs_modules_msgs::msg",
  "Gpgst",
  _Gpgst__cdr_serialize,
  _Gpgst__cdr_deserialize,
  _Gpgst__get_serialized_size,
  _Gpgst__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Gpgst__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Gpgst,
  get_message_typesupport_handle_function,
  &mrs_modules_msgs__msg__Gpgst__get_type_hash,
  &mrs_modules_msgs__msg__Gpgst__get_type_description,
  &mrs_modules_msgs__msg__Gpgst__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_modules_msgs, msg, Gpgst)() {
  return &_Gpgst__type_support;
}

#if defined(__cplusplus)
}
#endif
