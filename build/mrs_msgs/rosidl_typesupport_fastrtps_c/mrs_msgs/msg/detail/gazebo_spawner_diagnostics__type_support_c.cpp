// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_msgs:msg/GazeboSpawnerDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/gazebo_spawner_diagnostics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_msgs/msg/detail/gazebo_spawner_diagnostics__struct.h"
#include "mrs_msgs/msg/detail/gazebo_spawner_diagnostics__functions.h"
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

#include "rosidl_runtime_c/string.h"  // active_vehicles, queued_vehicles
#include "rosidl_runtime_c/string_functions.h"  // active_vehicles, queued_vehicles

// forward declare type support functions


using _GazeboSpawnerDiagnostics__ros_msg_type = mrs_msgs__msg__GazeboSpawnerDiagnostics;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_mrs_msgs__msg__GazeboSpawnerDiagnostics(
  const mrs_msgs__msg__GazeboSpawnerDiagnostics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: spawn_called
  {
    cdr << (ros_message->spawn_called ? true : false);
  }

  // Field name: processing
  {
    cdr << (ros_message->processing ? true : false);
  }

  // Field name: active_vehicles
  {
    size_t size = ros_message->active_vehicles.size;
    auto array_ptr = ros_message->active_vehicles.data;
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

  // Field name: queued_vehicles
  {
    size_t size = ros_message->queued_vehicles.size;
    auto array_ptr = ros_message->queued_vehicles.data;
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

  // Field name: queued_processes
  {
    cdr << ros_message->queued_processes;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_deserialize_mrs_msgs__msg__GazeboSpawnerDiagnostics(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__GazeboSpawnerDiagnostics * ros_message)
{
  // Field name: spawn_called
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->spawn_called = tmp ? true : false;
  }

  // Field name: processing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->processing = tmp ? true : false;
  }

  // Field name: active_vehicles
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

    if (ros_message->active_vehicles.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->active_vehicles);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->active_vehicles, size)) {
      fprintf(stderr, "failed to create array for field 'active_vehicles'");
      return false;
    }
    auto array_ptr = ros_message->active_vehicles.data;
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
        fprintf(stderr, "failed to assign string into field 'active_vehicles'\n");
        return false;
      }
    }
  }

  // Field name: queued_vehicles
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

    if (ros_message->queued_vehicles.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->queued_vehicles);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->queued_vehicles, size)) {
      fprintf(stderr, "failed to create array for field 'queued_vehicles'");
      return false;
    }
    auto array_ptr = ros_message->queued_vehicles.data;
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
        fprintf(stderr, "failed to assign string into field 'queued_vehicles'\n");
        return false;
      }
    }
  }

  // Field name: queued_processes
  {
    cdr >> ros_message->queued_processes;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_mrs_msgs__msg__GazeboSpawnerDiagnostics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GazeboSpawnerDiagnostics__ros_msg_type * ros_message = static_cast<const _GazeboSpawnerDiagnostics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: spawn_called
  {
    size_t item_size = sizeof(ros_message->spawn_called);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: processing
  {
    size_t item_size = sizeof(ros_message->processing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: active_vehicles
  {
    size_t array_size = ros_message->active_vehicles.size;
    auto array_ptr = ros_message->active_vehicles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: queued_vehicles
  {
    size_t array_size = ros_message->queued_vehicles.size;
    auto array_ptr = ros_message->queued_vehicles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: queued_processes
  {
    size_t item_size = sizeof(ros_message->queued_processes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_mrs_msgs__msg__GazeboSpawnerDiagnostics(
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

  // Field name: spawn_called
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: processing
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: active_vehicles
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

  // Field name: queued_vehicles
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

  // Field name: queued_processes
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
    using DataType = mrs_msgs__msg__GazeboSpawnerDiagnostics;
    is_plain =
      (
      offsetof(DataType, queued_processes) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_key_mrs_msgs__msg__GazeboSpawnerDiagnostics(
  const mrs_msgs__msg__GazeboSpawnerDiagnostics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: spawn_called
  {
    cdr << (ros_message->spawn_called ? true : false);
  }

  // Field name: processing
  {
    cdr << (ros_message->processing ? true : false);
  }

  // Field name: active_vehicles
  {
    size_t size = ros_message->active_vehicles.size;
    auto array_ptr = ros_message->active_vehicles.data;
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

  // Field name: queued_vehicles
  {
    size_t size = ros_message->queued_vehicles.size;
    auto array_ptr = ros_message->queued_vehicles.data;
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

  // Field name: queued_processes
  {
    cdr << ros_message->queued_processes;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_key_mrs_msgs__msg__GazeboSpawnerDiagnostics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GazeboSpawnerDiagnostics__ros_msg_type * ros_message = static_cast<const _GazeboSpawnerDiagnostics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: spawn_called
  {
    size_t item_size = sizeof(ros_message->spawn_called);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: processing
  {
    size_t item_size = sizeof(ros_message->processing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: active_vehicles
  {
    size_t array_size = ros_message->active_vehicles.size;
    auto array_ptr = ros_message->active_vehicles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: queued_vehicles
  {
    size_t array_size = ros_message->queued_vehicles.size;
    auto array_ptr = ros_message->queued_vehicles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: queued_processes
  {
    size_t item_size = sizeof(ros_message->queued_processes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_key_mrs_msgs__msg__GazeboSpawnerDiagnostics(
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
  // Field name: spawn_called
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: processing
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: active_vehicles
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

  // Field name: queued_vehicles
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

  // Field name: queued_processes
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
    using DataType = mrs_msgs__msg__GazeboSpawnerDiagnostics;
    is_plain =
      (
      offsetof(DataType, queued_processes) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GazeboSpawnerDiagnostics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_msgs__msg__GazeboSpawnerDiagnostics * ros_message = static_cast<const mrs_msgs__msg__GazeboSpawnerDiagnostics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_msgs__msg__GazeboSpawnerDiagnostics(ros_message, cdr);
}

static bool _GazeboSpawnerDiagnostics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_msgs__msg__GazeboSpawnerDiagnostics * ros_message = static_cast<mrs_msgs__msg__GazeboSpawnerDiagnostics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_msgs__msg__GazeboSpawnerDiagnostics(cdr, ros_message);
}

static uint32_t _GazeboSpawnerDiagnostics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_msgs__msg__GazeboSpawnerDiagnostics(
      untyped_ros_message, 0));
}

static size_t _GazeboSpawnerDiagnostics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_msgs__msg__GazeboSpawnerDiagnostics(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GazeboSpawnerDiagnostics = {
  "mrs_msgs::msg",
  "GazeboSpawnerDiagnostics",
  _GazeboSpawnerDiagnostics__cdr_serialize,
  _GazeboSpawnerDiagnostics__cdr_deserialize,
  _GazeboSpawnerDiagnostics__get_serialized_size,
  _GazeboSpawnerDiagnostics__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GazeboSpawnerDiagnostics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GazeboSpawnerDiagnostics,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__GazeboSpawnerDiagnostics__get_type_hash,
  &mrs_msgs__msg__GazeboSpawnerDiagnostics__get_type_description,
  &mrs_msgs__msg__GazeboSpawnerDiagnostics__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, GazeboSpawnerDiagnostics)() {
  return &_GazeboSpawnerDiagnostics__type_support;
}

#if defined(__cplusplus)
}
#endif
