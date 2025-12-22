// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/WorldOrigin.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/world_origin__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__WorldOrigin__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd7, 0x76, 0x7f, 0x09, 0x1b, 0xd6, 0x5c, 0x83,
      0xcf, 0xe8, 0xac, 0xce, 0x90, 0x2e, 0xdd, 0x3e,
      0x82, 0x50, 0x59, 0x25, 0x85, 0xef, 0x43, 0x0b,
      0xbc, 0x36, 0x00, 0xbb, 0x56, 0x6b, 0xb8, 0x33,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_msgs__msg__WorldOrigin__TYPE_NAME[] = "mrs_msgs/msg/WorldOrigin";

// Define type names, field names, and default values
static char mrs_msgs__msg__WorldOrigin__FIELD_NAME__units[] = "units";
static char mrs_msgs__msg__WorldOrigin__FIELD_NAME__x[] = "x";
static char mrs_msgs__msg__WorldOrigin__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__WorldOrigin__FIELDS[] = {
  {
    {mrs_msgs__msg__WorldOrigin__FIELD_NAME__units, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__WorldOrigin__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__WorldOrigin__FIELD_NAME__y, 1, 1},
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
mrs_msgs__msg__WorldOrigin__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__WorldOrigin__TYPE_NAME, 24, 24},
      {mrs_msgs__msg__WorldOrigin__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string units\n"
  "float64 x\n"
  "float64 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__WorldOrigin__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__WorldOrigin__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 33, 33},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__WorldOrigin__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__WorldOrigin__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
