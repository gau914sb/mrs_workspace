// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/Point2D.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/point2_d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__Point2D__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8b, 0x29, 0xc1, 0xd6, 0x5b, 0xaa, 0x59, 0x27,
      0x24, 0x76, 0xbe, 0x8e, 0x76, 0x8a, 0xd2, 0x03,
      0x93, 0x4c, 0xf5, 0xac, 0x4c, 0xe4, 0x93, 0xc4,
      0xd6, 0x26, 0x1f, 0x5d, 0x8b, 0xf1, 0xec, 0x2f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_msgs__msg__Point2D__TYPE_NAME[] = "mrs_msgs/msg/Point2D";

// Define type names, field names, and default values
static char mrs_msgs__msg__Point2D__FIELD_NAME__x[] = "x";
static char mrs_msgs__msg__Point2D__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__Point2D__FIELDS[] = {
  {
    {mrs_msgs__msg__Point2D__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Point2D__FIELD_NAME__y, 1, 1},
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
mrs_msgs__msg__Point2D__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__Point2D__TYPE_NAME, 20, 20},
      {mrs_msgs__msg__Point2D__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 x\n"
  "float64 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__Point2D__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__Point2D__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 20, 20},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__Point2D__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__Point2D__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
