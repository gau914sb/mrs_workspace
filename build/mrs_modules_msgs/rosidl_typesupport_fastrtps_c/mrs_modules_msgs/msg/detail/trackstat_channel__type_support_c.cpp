// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_modules_msgs:msg/TrackstatChannel.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/trackstat_channel__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_modules_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_modules_msgs/msg/detail/trackstat_channel__struct.h"
#include "mrs_modules_msgs/msg/detail/trackstat_channel__functions.h"
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

#include "rosidl_runtime_c/string.h"  // reject
#include "rosidl_runtime_c/string_functions.h"  // reject

// forward declare type support functions


using _TrackstatChannel__ros_msg_type = mrs_modules_msgs__msg__TrackstatChannel;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
bool cdr_serialize_mrs_modules_msgs__msg__TrackstatChannel(
  const mrs_modules_msgs__msg__TrackstatChannel * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: prn
  {
    cdr << ros_message->prn;
  }

  // Field name: glofreq
  {
    cdr << ros_message->glofreq;
  }

  // Field name: ch_tr_status
  {
    cdr << ros_message->ch_tr_status;
  }

  // Field name: psr
  {
    cdr << ros_message->psr;
  }

  // Field name: doppler
  {
    cdr << ros_message->doppler;
  }

  // Field name: c_no
  {
    cdr << ros_message->c_no;
  }

  // Field name: locktime
  {
    cdr << ros_message->locktime;
  }

  // Field name: psr_res
  {
    cdr << ros_message->psr_res;
  }

  // Field name: reject
  {
    const rosidl_runtime_c__String * str = &ros_message->reject;
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

  // Field name: psr_weight
  {
    cdr << ros_message->psr_weight;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
bool cdr_deserialize_mrs_modules_msgs__msg__TrackstatChannel(
  eprosima::fastcdr::Cdr & cdr,
  mrs_modules_msgs__msg__TrackstatChannel * ros_message)
{
  // Field name: prn
  {
    cdr >> ros_message->prn;
  }

  // Field name: glofreq
  {
    cdr >> ros_message->glofreq;
  }

  // Field name: ch_tr_status
  {
    cdr >> ros_message->ch_tr_status;
  }

  // Field name: psr
  {
    cdr >> ros_message->psr;
  }

  // Field name: doppler
  {
    cdr >> ros_message->doppler;
  }

  // Field name: c_no
  {
    cdr >> ros_message->c_no;
  }

  // Field name: locktime
  {
    cdr >> ros_message->locktime;
  }

  // Field name: psr_res
  {
    cdr >> ros_message->psr_res;
  }

  // Field name: reject
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->reject.data) {
      rosidl_runtime_c__String__init(&ros_message->reject);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->reject,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'reject'\n");
      return false;
    }
  }

  // Field name: psr_weight
  {
    cdr >> ros_message->psr_weight;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t get_serialized_size_mrs_modules_msgs__msg__TrackstatChannel(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrackstatChannel__ros_msg_type * ros_message = static_cast<const _TrackstatChannel__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: prn
  {
    size_t item_size = sizeof(ros_message->prn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: glofreq
  {
    size_t item_size = sizeof(ros_message->glofreq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ch_tr_status
  {
    size_t item_size = sizeof(ros_message->ch_tr_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: psr
  {
    size_t item_size = sizeof(ros_message->psr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: doppler
  {
    size_t item_size = sizeof(ros_message->doppler);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: c_no
  {
    size_t item_size = sizeof(ros_message->c_no);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: locktime
  {
    size_t item_size = sizeof(ros_message->locktime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: psr_res
  {
    size_t item_size = sizeof(ros_message->psr_res);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reject
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reject.size + 1);

  // Field name: psr_weight
  {
    size_t item_size = sizeof(ros_message->psr_weight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t max_serialized_size_mrs_modules_msgs__msg__TrackstatChannel(
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

  // Field name: prn
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: glofreq
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: ch_tr_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: psr
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: doppler
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: c_no
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: locktime
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: psr_res
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: reject
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

  // Field name: psr_weight
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
    using DataType = mrs_modules_msgs__msg__TrackstatChannel;
    is_plain =
      (
      offsetof(DataType, psr_weight) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
bool cdr_serialize_key_mrs_modules_msgs__msg__TrackstatChannel(
  const mrs_modules_msgs__msg__TrackstatChannel * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: prn
  {
    cdr << ros_message->prn;
  }

  // Field name: glofreq
  {
    cdr << ros_message->glofreq;
  }

  // Field name: ch_tr_status
  {
    cdr << ros_message->ch_tr_status;
  }

  // Field name: psr
  {
    cdr << ros_message->psr;
  }

  // Field name: doppler
  {
    cdr << ros_message->doppler;
  }

  // Field name: c_no
  {
    cdr << ros_message->c_no;
  }

  // Field name: locktime
  {
    cdr << ros_message->locktime;
  }

  // Field name: psr_res
  {
    cdr << ros_message->psr_res;
  }

  // Field name: reject
  {
    const rosidl_runtime_c__String * str = &ros_message->reject;
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

  // Field name: psr_weight
  {
    cdr << ros_message->psr_weight;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t get_serialized_size_key_mrs_modules_msgs__msg__TrackstatChannel(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrackstatChannel__ros_msg_type * ros_message = static_cast<const _TrackstatChannel__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: prn
  {
    size_t item_size = sizeof(ros_message->prn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: glofreq
  {
    size_t item_size = sizeof(ros_message->glofreq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ch_tr_status
  {
    size_t item_size = sizeof(ros_message->ch_tr_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: psr
  {
    size_t item_size = sizeof(ros_message->psr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: doppler
  {
    size_t item_size = sizeof(ros_message->doppler);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: c_no
  {
    size_t item_size = sizeof(ros_message->c_no);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: locktime
  {
    size_t item_size = sizeof(ros_message->locktime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: psr_res
  {
    size_t item_size = sizeof(ros_message->psr_res);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reject
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reject.size + 1);

  // Field name: psr_weight
  {
    size_t item_size = sizeof(ros_message->psr_weight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t max_serialized_size_key_mrs_modules_msgs__msg__TrackstatChannel(
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
  // Field name: prn
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: glofreq
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: ch_tr_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: psr
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: doppler
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: c_no
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: locktime
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: psr_res
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: reject
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

  // Field name: psr_weight
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
    using DataType = mrs_modules_msgs__msg__TrackstatChannel;
    is_plain =
      (
      offsetof(DataType, psr_weight) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TrackstatChannel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_modules_msgs__msg__TrackstatChannel * ros_message = static_cast<const mrs_modules_msgs__msg__TrackstatChannel *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_modules_msgs__msg__TrackstatChannel(ros_message, cdr);
}

static bool _TrackstatChannel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_modules_msgs__msg__TrackstatChannel * ros_message = static_cast<mrs_modules_msgs__msg__TrackstatChannel *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_modules_msgs__msg__TrackstatChannel(cdr, ros_message);
}

static uint32_t _TrackstatChannel__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_modules_msgs__msg__TrackstatChannel(
      untyped_ros_message, 0));
}

static size_t _TrackstatChannel__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_modules_msgs__msg__TrackstatChannel(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TrackstatChannel = {
  "mrs_modules_msgs::msg",
  "TrackstatChannel",
  _TrackstatChannel__cdr_serialize,
  _TrackstatChannel__cdr_deserialize,
  _TrackstatChannel__get_serialized_size,
  _TrackstatChannel__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TrackstatChannel__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrackstatChannel,
  get_message_typesupport_handle_function,
  &mrs_modules_msgs__msg__TrackstatChannel__get_type_hash,
  &mrs_modules_msgs__msg__TrackstatChannel__get_type_description,
  &mrs_modules_msgs__msg__TrackstatChannel__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_modules_msgs, msg, TrackstatChannel)() {
  return &_TrackstatChannel__type_support;
}

#if defined(__cplusplus)
}
#endif
