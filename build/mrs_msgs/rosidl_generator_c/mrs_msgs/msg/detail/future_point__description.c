// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/FuturePoint.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/future_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__FuturePoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb7, 0x8d, 0x3c, 0x1c, 0x9b, 0x79, 0x66, 0x3e,
      0x90, 0x8a, 0x9d, 0x20, 0x73, 0xa5, 0x0b, 0x60,
      0xdf, 0x52, 0x43, 0xab, 0xed, 0x2f, 0x8f, 0xe1,
      0x3e, 0x1d, 0xc5, 0x23, 0xfc, 0xce, 0xa5, 0x78,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_msgs__msg__FuturePoint__TYPE_NAME[] = "mrs_msgs/msg/FuturePoint";

// Define type names, field names, and default values
static char mrs_msgs__msg__FuturePoint__FIELD_NAME__x[] = "x";
static char mrs_msgs__msg__FuturePoint__FIELD_NAME__y[] = "y";
static char mrs_msgs__msg__FuturePoint__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__FuturePoint__FIELDS[] = {
  {
    {mrs_msgs__msg__FuturePoint__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__FuturePoint__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__FuturePoint__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__FuturePoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__FuturePoint__TYPE_NAME, 24, 24},
      {mrs_msgs__msg__FuturePoint__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 x\n"
  "float32 y\n"
  "float32 z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__FuturePoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__FuturePoint__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 30, 30},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__FuturePoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__FuturePoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
