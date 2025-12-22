// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/EulerAngles.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/euler_angles__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__EulerAngles__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x61, 0x5e, 0x72, 0x6e, 0xc1, 0x9b, 0x81, 0xd9,
      0x28, 0x35, 0x4b, 0x8f, 0xad, 0x8e, 0x67, 0x01,
      0x1b, 0xe9, 0xcb, 0x1b, 0xd5, 0x16, 0x87, 0xd8,
      0x48, 0xca, 0x6f, 0x8a, 0xa6, 0x50, 0x7f, 0x41,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_msgs__msg__EulerAngles__TYPE_NAME[] = "mrs_msgs/msg/EulerAngles";

// Define type names, field names, and default values
static char mrs_msgs__msg__EulerAngles__FIELD_NAME__yaw[] = "yaw";
static char mrs_msgs__msg__EulerAngles__FIELD_NAME__pitch[] = "pitch";
static char mrs_msgs__msg__EulerAngles__FIELD_NAME__roll[] = "roll";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__EulerAngles__FIELDS[] = {
  {
    {mrs_msgs__msg__EulerAngles__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__EulerAngles__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__EulerAngles__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__EulerAngles__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__EulerAngles__TYPE_NAME, 24, 24},
      {mrs_msgs__msg__EulerAngles__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 yaw\n"
  "float64 pitch\n"
  "float64 roll";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__EulerAngles__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__EulerAngles__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 39, 39},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__EulerAngles__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__EulerAngles__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
