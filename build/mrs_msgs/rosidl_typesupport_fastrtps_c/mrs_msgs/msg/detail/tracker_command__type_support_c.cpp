// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_msgs:msg/TrackerCommand.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/tracker_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_msgs/msg/detail/tracker_command__struct.h"
#include "mrs_msgs/msg/detail/tracker_command__functions.h"
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

#include "geometry_msgs/msg/detail/point__functions.h"  // attitude_rate, position
#include "geometry_msgs/msg/detail/quaternion__functions.h"  // orientation
#include "geometry_msgs/msg/detail/vector3__functions.h"  // acceleration, jerk, snap, velocity
#include "mrs_msgs/msg/detail/mpc_prediction_full_state__functions.h"  // full_state_prediction
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_serialize_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_deserialize_geometry_msgs__msg__Point(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Point * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_serialize_key_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_serialize_geometry_msgs__msg__Quaternion(
  const geometry_msgs__msg__Quaternion * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_deserialize_geometry_msgs__msg__Quaternion(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Quaternion * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t get_serialized_size_geometry_msgs__msg__Quaternion(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t max_serialized_size_geometry_msgs__msg__Quaternion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_serialize_key_geometry_msgs__msg__Quaternion(
  const geometry_msgs__msg__Quaternion * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Quaternion(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Quaternion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Quaternion)();

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

bool cdr_serialize_mrs_msgs__msg__MpcPredictionFullState(
  const mrs_msgs__msg__MpcPredictionFullState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mrs_msgs__msg__MpcPredictionFullState(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__MpcPredictionFullState * ros_message);

size_t get_serialized_size_mrs_msgs__msg__MpcPredictionFullState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mrs_msgs__msg__MpcPredictionFullState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mrs_msgs__msg__MpcPredictionFullState(
  const mrs_msgs__msg__MpcPredictionFullState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mrs_msgs__msg__MpcPredictionFullState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mrs_msgs__msg__MpcPredictionFullState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, MpcPredictionFullState)();

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


using _TrackerCommand__ros_msg_type = mrs_msgs__msg__TrackerCommand;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_mrs_msgs__msg__TrackerCommand(
  const mrs_msgs__msg__TrackerCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: position
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->position, cdr);
  }

  // Field name: velocity
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->velocity, cdr);
  }

  // Field name: acceleration
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->acceleration, cdr);
  }

  // Field name: jerk
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->jerk, cdr);
  }

  // Field name: snap
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->snap, cdr);
  }

  // Field name: full_state_prediction
  {
    cdr_serialize_mrs_msgs__msg__MpcPredictionFullState(
      &ros_message->full_state_prediction, cdr);
  }

  // Field name: orientation
  {
    cdr_serialize_geometry_msgs__msg__Quaternion(
      &ros_message->orientation, cdr);
  }

  // Field name: attitude_rate
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->attitude_rate, cdr);
  }

  // Field name: throttle
  {
    cdr << ros_message->throttle;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: heading_rate
  {
    cdr << ros_message->heading_rate;
  }

  // Field name: heading_acceleration
  {
    cdr << ros_message->heading_acceleration;
  }

  // Field name: heading_jerk
  {
    cdr << ros_message->heading_jerk;
  }

  // Field name: disable_position_gains
  {
    cdr << (ros_message->disable_position_gains ? true : false);
  }

  // Field name: disable_antiwindups
  {
    cdr << (ros_message->disable_antiwindups ? true : false);
  }

  // Field name: use_position_horizontal
  {
    cdr << ros_message->use_position_horizontal;
  }

  // Field name: use_position_vertical
  {
    cdr << ros_message->use_position_vertical;
  }

  // Field name: use_velocity_horizontal
  {
    cdr << ros_message->use_velocity_horizontal;
  }

  // Field name: use_velocity_vertical
  {
    cdr << ros_message->use_velocity_vertical;
  }

  // Field name: use_acceleration
  {
    cdr << ros_message->use_acceleration;
  }

  // Field name: use_jerk
  {
    cdr << ros_message->use_jerk;
  }

  // Field name: use_snap
  {
    cdr << ros_message->use_snap;
  }

  // Field name: use_attitude_rate
  {
    cdr << ros_message->use_attitude_rate;
  }

  // Field name: use_heading
  {
    cdr << ros_message->use_heading;
  }

  // Field name: use_heading_rate
  {
    cdr << ros_message->use_heading_rate;
  }

  // Field name: use_heading_acceleration
  {
    cdr << ros_message->use_heading_acceleration;
  }

  // Field name: use_heading_jerk
  {
    cdr << ros_message->use_heading_jerk;
  }

  // Field name: use_orientation
  {
    cdr << ros_message->use_orientation;
  }

  // Field name: use_throttle
  {
    cdr << ros_message->use_throttle;
  }

  // Field name: use_full_state_prediction
  {
    cdr << ros_message->use_full_state_prediction;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_deserialize_mrs_msgs__msg__TrackerCommand(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__TrackerCommand * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: position
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->position);
  }

  // Field name: velocity
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->velocity);
  }

  // Field name: acceleration
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->acceleration);
  }

  // Field name: jerk
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->jerk);
  }

  // Field name: snap
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->snap);
  }

  // Field name: full_state_prediction
  {
    cdr_deserialize_mrs_msgs__msg__MpcPredictionFullState(cdr, &ros_message->full_state_prediction);
  }

  // Field name: orientation
  {
    cdr_deserialize_geometry_msgs__msg__Quaternion(cdr, &ros_message->orientation);
  }

  // Field name: attitude_rate
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->attitude_rate);
  }

  // Field name: throttle
  {
    cdr >> ros_message->throttle;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: heading_rate
  {
    cdr >> ros_message->heading_rate;
  }

  // Field name: heading_acceleration
  {
    cdr >> ros_message->heading_acceleration;
  }

  // Field name: heading_jerk
  {
    cdr >> ros_message->heading_jerk;
  }

  // Field name: disable_position_gains
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->disable_position_gains = tmp ? true : false;
  }

  // Field name: disable_antiwindups
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->disable_antiwindups = tmp ? true : false;
  }

  // Field name: use_position_horizontal
  {
    cdr >> ros_message->use_position_horizontal;
  }

  // Field name: use_position_vertical
  {
    cdr >> ros_message->use_position_vertical;
  }

  // Field name: use_velocity_horizontal
  {
    cdr >> ros_message->use_velocity_horizontal;
  }

  // Field name: use_velocity_vertical
  {
    cdr >> ros_message->use_velocity_vertical;
  }

  // Field name: use_acceleration
  {
    cdr >> ros_message->use_acceleration;
  }

  // Field name: use_jerk
  {
    cdr >> ros_message->use_jerk;
  }

  // Field name: use_snap
  {
    cdr >> ros_message->use_snap;
  }

  // Field name: use_attitude_rate
  {
    cdr >> ros_message->use_attitude_rate;
  }

  // Field name: use_heading
  {
    cdr >> ros_message->use_heading;
  }

  // Field name: use_heading_rate
  {
    cdr >> ros_message->use_heading_rate;
  }

  // Field name: use_heading_acceleration
  {
    cdr >> ros_message->use_heading_acceleration;
  }

  // Field name: use_heading_jerk
  {
    cdr >> ros_message->use_heading_jerk;
  }

  // Field name: use_orientation
  {
    cdr >> ros_message->use_orientation;
  }

  // Field name: use_throttle
  {
    cdr >> ros_message->use_throttle;
  }

  // Field name: use_full_state_prediction
  {
    cdr >> ros_message->use_full_state_prediction;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_mrs_msgs__msg__TrackerCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrackerCommand__ros_msg_type * ros_message = static_cast<const _TrackerCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: position
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->position), current_alignment);

  // Field name: velocity
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->velocity), current_alignment);

  // Field name: acceleration
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->acceleration), current_alignment);

  // Field name: jerk
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->jerk), current_alignment);

  // Field name: snap
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->snap), current_alignment);

  // Field name: full_state_prediction
  current_alignment += get_serialized_size_mrs_msgs__msg__MpcPredictionFullState(
    &(ros_message->full_state_prediction), current_alignment);

  // Field name: orientation
  current_alignment += get_serialized_size_geometry_msgs__msg__Quaternion(
    &(ros_message->orientation), current_alignment);

  // Field name: attitude_rate
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->attitude_rate), current_alignment);

  // Field name: throttle
  {
    size_t item_size = sizeof(ros_message->throttle);
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

  // Field name: heading_acceleration
  {
    size_t item_size = sizeof(ros_message->heading_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_jerk
  {
    size_t item_size = sizeof(ros_message->heading_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disable_position_gains
  {
    size_t item_size = sizeof(ros_message->disable_position_gains);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disable_antiwindups
  {
    size_t item_size = sizeof(ros_message->disable_antiwindups);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_position_horizontal
  {
    size_t item_size = sizeof(ros_message->use_position_horizontal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_position_vertical
  {
    size_t item_size = sizeof(ros_message->use_position_vertical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_velocity_horizontal
  {
    size_t item_size = sizeof(ros_message->use_velocity_horizontal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_velocity_vertical
  {
    size_t item_size = sizeof(ros_message->use_velocity_vertical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_acceleration
  {
    size_t item_size = sizeof(ros_message->use_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_jerk
  {
    size_t item_size = sizeof(ros_message->use_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_snap
  {
    size_t item_size = sizeof(ros_message->use_snap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_attitude_rate
  {
    size_t item_size = sizeof(ros_message->use_attitude_rate);
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

  // Field name: use_heading_acceleration
  {
    size_t item_size = sizeof(ros_message->use_heading_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_heading_jerk
  {
    size_t item_size = sizeof(ros_message->use_heading_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_orientation
  {
    size_t item_size = sizeof(ros_message->use_orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_throttle
  {
    size_t item_size = sizeof(ros_message->use_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_full_state_prediction
  {
    size_t item_size = sizeof(ros_message->use_full_state_prediction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_mrs_msgs__msg__TrackerCommand(
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

  // Field name: position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

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

  // Field name: acceleration
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

  // Field name: jerk
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

  // Field name: snap
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

  // Field name: full_state_prediction
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mrs_msgs__msg__MpcPredictionFullState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: orientation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Quaternion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: attitude_rate
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: throttle
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

  // Field name: heading_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: heading_jerk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: disable_position_gains
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: disable_antiwindups
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_position_horizontal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_position_vertical
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_velocity_horizontal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_velocity_vertical
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_jerk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_snap
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_attitude_rate
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

  // Field name: use_heading_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_heading_jerk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_orientation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_throttle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_full_state_prediction
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
    using DataType = mrs_msgs__msg__TrackerCommand;
    is_plain =
      (
      offsetof(DataType, use_full_state_prediction) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_key_mrs_msgs__msg__TrackerCommand(
  const mrs_msgs__msg__TrackerCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: position
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->position, cdr);
  }

  // Field name: velocity
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->velocity, cdr);
  }

  // Field name: acceleration
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->acceleration, cdr);
  }

  // Field name: jerk
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->jerk, cdr);
  }

  // Field name: snap
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->snap, cdr);
  }

  // Field name: full_state_prediction
  {
    cdr_serialize_key_mrs_msgs__msg__MpcPredictionFullState(
      &ros_message->full_state_prediction, cdr);
  }

  // Field name: orientation
  {
    cdr_serialize_key_geometry_msgs__msg__Quaternion(
      &ros_message->orientation, cdr);
  }

  // Field name: attitude_rate
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->attitude_rate, cdr);
  }

  // Field name: throttle
  {
    cdr << ros_message->throttle;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: heading_rate
  {
    cdr << ros_message->heading_rate;
  }

  // Field name: heading_acceleration
  {
    cdr << ros_message->heading_acceleration;
  }

  // Field name: heading_jerk
  {
    cdr << ros_message->heading_jerk;
  }

  // Field name: disable_position_gains
  {
    cdr << (ros_message->disable_position_gains ? true : false);
  }

  // Field name: disable_antiwindups
  {
    cdr << (ros_message->disable_antiwindups ? true : false);
  }

  // Field name: use_position_horizontal
  {
    cdr << ros_message->use_position_horizontal;
  }

  // Field name: use_position_vertical
  {
    cdr << ros_message->use_position_vertical;
  }

  // Field name: use_velocity_horizontal
  {
    cdr << ros_message->use_velocity_horizontal;
  }

  // Field name: use_velocity_vertical
  {
    cdr << ros_message->use_velocity_vertical;
  }

  // Field name: use_acceleration
  {
    cdr << ros_message->use_acceleration;
  }

  // Field name: use_jerk
  {
    cdr << ros_message->use_jerk;
  }

  // Field name: use_snap
  {
    cdr << ros_message->use_snap;
  }

  // Field name: use_attitude_rate
  {
    cdr << ros_message->use_attitude_rate;
  }

  // Field name: use_heading
  {
    cdr << ros_message->use_heading;
  }

  // Field name: use_heading_rate
  {
    cdr << ros_message->use_heading_rate;
  }

  // Field name: use_heading_acceleration
  {
    cdr << ros_message->use_heading_acceleration;
  }

  // Field name: use_heading_jerk
  {
    cdr << ros_message->use_heading_jerk;
  }

  // Field name: use_orientation
  {
    cdr << ros_message->use_orientation;
  }

  // Field name: use_throttle
  {
    cdr << ros_message->use_throttle;
  }

  // Field name: use_full_state_prediction
  {
    cdr << ros_message->use_full_state_prediction;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_key_mrs_msgs__msg__TrackerCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrackerCommand__ros_msg_type * ros_message = static_cast<const _TrackerCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: position
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->position), current_alignment);

  // Field name: velocity
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->velocity), current_alignment);

  // Field name: acceleration
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->acceleration), current_alignment);

  // Field name: jerk
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->jerk), current_alignment);

  // Field name: snap
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->snap), current_alignment);

  // Field name: full_state_prediction
  current_alignment += get_serialized_size_key_mrs_msgs__msg__MpcPredictionFullState(
    &(ros_message->full_state_prediction), current_alignment);

  // Field name: orientation
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Quaternion(
    &(ros_message->orientation), current_alignment);

  // Field name: attitude_rate
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->attitude_rate), current_alignment);

  // Field name: throttle
  {
    size_t item_size = sizeof(ros_message->throttle);
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

  // Field name: heading_acceleration
  {
    size_t item_size = sizeof(ros_message->heading_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_jerk
  {
    size_t item_size = sizeof(ros_message->heading_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disable_position_gains
  {
    size_t item_size = sizeof(ros_message->disable_position_gains);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disable_antiwindups
  {
    size_t item_size = sizeof(ros_message->disable_antiwindups);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_position_horizontal
  {
    size_t item_size = sizeof(ros_message->use_position_horizontal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_position_vertical
  {
    size_t item_size = sizeof(ros_message->use_position_vertical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_velocity_horizontal
  {
    size_t item_size = sizeof(ros_message->use_velocity_horizontal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_velocity_vertical
  {
    size_t item_size = sizeof(ros_message->use_velocity_vertical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_acceleration
  {
    size_t item_size = sizeof(ros_message->use_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_jerk
  {
    size_t item_size = sizeof(ros_message->use_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_snap
  {
    size_t item_size = sizeof(ros_message->use_snap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_attitude_rate
  {
    size_t item_size = sizeof(ros_message->use_attitude_rate);
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

  // Field name: use_heading_acceleration
  {
    size_t item_size = sizeof(ros_message->use_heading_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_heading_jerk
  {
    size_t item_size = sizeof(ros_message->use_heading_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_orientation
  {
    size_t item_size = sizeof(ros_message->use_orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_throttle
  {
    size_t item_size = sizeof(ros_message->use_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_full_state_prediction
  {
    size_t item_size = sizeof(ros_message->use_full_state_prediction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_key_mrs_msgs__msg__TrackerCommand(
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

  // Field name: position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

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

  // Field name: acceleration
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

  // Field name: jerk
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

  // Field name: snap
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

  // Field name: full_state_prediction
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mrs_msgs__msg__MpcPredictionFullState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: orientation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Quaternion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: attitude_rate
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: throttle
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

  // Field name: heading_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: heading_jerk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: disable_position_gains
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: disable_antiwindups
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_position_horizontal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_position_vertical
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_velocity_horizontal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_velocity_vertical
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_jerk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_snap
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_attitude_rate
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

  // Field name: use_heading_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_heading_jerk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_orientation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_throttle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_full_state_prediction
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
    using DataType = mrs_msgs__msg__TrackerCommand;
    is_plain =
      (
      offsetof(DataType, use_full_state_prediction) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TrackerCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_msgs__msg__TrackerCommand * ros_message = static_cast<const mrs_msgs__msg__TrackerCommand *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_msgs__msg__TrackerCommand(ros_message, cdr);
}

static bool _TrackerCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_msgs__msg__TrackerCommand * ros_message = static_cast<mrs_msgs__msg__TrackerCommand *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_msgs__msg__TrackerCommand(cdr, ros_message);
}

static uint32_t _TrackerCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_msgs__msg__TrackerCommand(
      untyped_ros_message, 0));
}

static size_t _TrackerCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_msgs__msg__TrackerCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TrackerCommand = {
  "mrs_msgs::msg",
  "TrackerCommand",
  _TrackerCommand__cdr_serialize,
  _TrackerCommand__cdr_deserialize,
  _TrackerCommand__get_serialized_size,
  _TrackerCommand__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TrackerCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrackerCommand,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__TrackerCommand__get_type_hash,
  &mrs_msgs__msg__TrackerCommand__get_type_description,
  &mrs_msgs__msg__TrackerCommand__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, TrackerCommand)() {
  return &_TrackerCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
