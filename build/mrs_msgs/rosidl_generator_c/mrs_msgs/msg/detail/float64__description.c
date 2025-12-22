// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/Float64.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/float64__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__Float64__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa3, 0x77, 0x03, 0xf8, 0x1a, 0x61, 0xfe, 0xb9,
      0x19, 0x24, 0xb7, 0x75, 0xf4, 0x20, 0x73, 0xe2,
      0xbe, 0xd4, 0x72, 0xe8, 0x4e, 0xe1, 0x80, 0xc7,
      0x53, 0x26, 0xba, 0x68, 0xd3, 0xf1, 0xdc, 0xe9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_msgs__msg__Float64__TYPE_NAME[] = "mrs_msgs/msg/Float64";

// Define type names, field names, and default values
static char mrs_msgs__msg__Float64__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__Float64__FIELDS[] = {
  {
    {mrs_msgs__msg__Float64__FIELD_NAME__value, 5, 5},
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
mrs_msgs__msg__Float64__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__Float64__TYPE_NAME, 20, 20},
      {mrs_msgs__msg__Float64__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__Float64__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__Float64__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 14, 14},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__Float64__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__Float64__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
