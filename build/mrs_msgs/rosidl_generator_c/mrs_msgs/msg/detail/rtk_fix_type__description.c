// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/RtkFixType.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/rtk_fix_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__RtkFixType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5f, 0x4f, 0xc4, 0xc9, 0x42, 0x02, 0x84, 0x1e,
      0xc3, 0x90, 0xf0, 0x6a, 0x8e, 0xcf, 0xc8, 0x88,
      0x7d, 0xac, 0xec, 0x99, 0x89, 0x8c, 0x73, 0x75,
      0xd2, 0x7f, 0x87, 0x4e, 0x82, 0xaf, 0xc1, 0xc5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_msgs__msg__RtkFixType__TYPE_NAME[] = "mrs_msgs/msg/RtkFixType";

// Define type names, field names, and default values
static char mrs_msgs__msg__RtkFixType__FIELD_NAME__fix_type[] = "fix_type";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__RtkFixType__FIELDS[] = {
  {
    {mrs_msgs__msg__RtkFixType__FIELD_NAME__fix_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__RtkFixType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__RtkFixType__TYPE_NAME, 23, 23},
      {mrs_msgs__msg__RtkFixType__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 RTK_FIX=5\n"
  "uint8 RTK_FLOAT=4\n"
  "uint8 UNKNOWN=3\n"
  "uint8 DGPS=2\n"
  "uint8 SPS=1\n"
  "uint8 NO_FIX=0\n"
  "uint8 fix_type";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__RtkFixType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__RtkFixType__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 105, 105},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__RtkFixType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__RtkFixType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
