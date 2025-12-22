// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_msgs:msg/Prism.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/prism__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_msgs/msg/detail/prism__struct.h"
#include "mrs_msgs/msg/detail/prism__functions.h"
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

#include "mrs_msgs/msg/detail/point2_d__functions.h"  // points
#include "rosidl_runtime_c/string.h"  // horizontal_frame, vertical_frame
#include "rosidl_runtime_c/string_functions.h"  // horizontal_frame, vertical_frame

// forward declare type support functions

bool cdr_serialize_mrs_msgs__msg__Point2D(
  const mrs_msgs__msg__Point2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mrs_msgs__msg__Point2D(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__Point2D * ros_message);

size_t get_serialized_size_mrs_msgs__msg__Point2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mrs_msgs__msg__Point2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mrs_msgs__msg__Point2D(
  const mrs_msgs__msg__Point2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mrs_msgs__msg__Point2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mrs_msgs__msg__Point2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, Point2D)();


using _Prism__ros_msg_type = mrs_msgs__msg__Prism;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_mrs_msgs__msg__Prism(
  const mrs_msgs__msg__Prism * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: horizontal_frame
  {
    const rosidl_runtime_c__String * str = &ros_message->horizontal_frame;
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

  // Field name: vertical_frame
  {
    const rosidl_runtime_c__String * str = &ros_message->vertical_frame;
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

  // Field name: points
  {
    size_t size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_mrs_msgs__msg__Point2D(
        &array_ptr[i], cdr);
    }
  }

  // Field name: max_z
  {
    cdr << ros_message->max_z;
  }

  // Field name: min_z
  {
    cdr << ros_message->min_z;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_deserialize_mrs_msgs__msg__Prism(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__Prism * ros_message)
{
  // Field name: horizontal_frame
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->horizontal_frame.data) {
      rosidl_runtime_c__String__init(&ros_message->horizontal_frame);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->horizontal_frame,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'horizontal_frame'\n");
      return false;
    }
  }

  // Field name: vertical_frame
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->vertical_frame.data) {
      rosidl_runtime_c__String__init(&ros_message->vertical_frame);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->vertical_frame,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'vertical_frame'\n");
      return false;
    }
  }

  // Field name: points
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

    if (ros_message->points.data) {
      mrs_msgs__msg__Point2D__Sequence__fini(&ros_message->points);
    }
    if (!mrs_msgs__msg__Point2D__Sequence__init(&ros_message->points, size)) {
      fprintf(stderr, "failed to create array for field 'points'");
      return false;
    }
    auto array_ptr = ros_message->points.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_mrs_msgs__msg__Point2D(cdr, &array_ptr[i]);
    }
  }

  // Field name: max_z
  {
    cdr >> ros_message->max_z;
  }

  // Field name: min_z
  {
    cdr >> ros_message->min_z;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_mrs_msgs__msg__Prism(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Prism__ros_msg_type * ros_message = static_cast<const _Prism__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: horizontal_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->horizontal_frame.size + 1);

  // Field name: vertical_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->vertical_frame.size + 1);

  // Field name: points
  {
    size_t array_size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_mrs_msgs__msg__Point2D(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: max_z
  {
    size_t item_size = sizeof(ros_message->max_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_z
  {
    size_t item_size = sizeof(ros_message->min_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_mrs_msgs__msg__Prism(
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

  // Field name: horizontal_frame
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

  // Field name: vertical_frame
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

  // Field name: points
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
        max_serialized_size_mrs_msgs__msg__Point2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: max_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: min_z
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
    using DataType = mrs_msgs__msg__Prism;
    is_plain =
      (
      offsetof(DataType, min_z) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_key_mrs_msgs__msg__Prism(
  const mrs_msgs__msg__Prism * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: horizontal_frame
  {
    const rosidl_runtime_c__String * str = &ros_message->horizontal_frame;
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

  // Field name: vertical_frame
  {
    const rosidl_runtime_c__String * str = &ros_message->vertical_frame;
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

  // Field name: points
  {
    size_t size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_mrs_msgs__msg__Point2D(
        &array_ptr[i], cdr);
    }
  }

  // Field name: max_z
  {
    cdr << ros_message->max_z;
  }

  // Field name: min_z
  {
    cdr << ros_message->min_z;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_key_mrs_msgs__msg__Prism(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Prism__ros_msg_type * ros_message = static_cast<const _Prism__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: horizontal_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->horizontal_frame.size + 1);

  // Field name: vertical_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->vertical_frame.size + 1);

  // Field name: points
  {
    size_t array_size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_mrs_msgs__msg__Point2D(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: max_z
  {
    size_t item_size = sizeof(ros_message->max_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_z
  {
    size_t item_size = sizeof(ros_message->min_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_key_mrs_msgs__msg__Prism(
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
  // Field name: horizontal_frame
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

  // Field name: vertical_frame
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

  // Field name: points
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
        max_serialized_size_key_mrs_msgs__msg__Point2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: max_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: min_z
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
    using DataType = mrs_msgs__msg__Prism;
    is_plain =
      (
      offsetof(DataType, min_z) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Prism__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_msgs__msg__Prism * ros_message = static_cast<const mrs_msgs__msg__Prism *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_msgs__msg__Prism(ros_message, cdr);
}

static bool _Prism__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_msgs__msg__Prism * ros_message = static_cast<mrs_msgs__msg__Prism *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_msgs__msg__Prism(cdr, ros_message);
}

static uint32_t _Prism__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_msgs__msg__Prism(
      untyped_ros_message, 0));
}

static size_t _Prism__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_msgs__msg__Prism(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Prism = {
  "mrs_msgs::msg",
  "Prism",
  _Prism__cdr_serialize,
  _Prism__cdr_deserialize,
  _Prism__get_serialized_size,
  _Prism__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Prism__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Prism,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__Prism__get_type_hash,
  &mrs_msgs__msg__Prism__get_type_description,
  &mrs_msgs__msg__Prism__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, Prism)() {
  return &_Prism__type_support;
}

#if defined(__cplusplus)
}
#endif
