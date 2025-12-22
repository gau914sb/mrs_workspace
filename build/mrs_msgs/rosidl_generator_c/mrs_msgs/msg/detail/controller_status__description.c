// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/ControllerStatus.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/controller_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__ControllerStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xce, 0x80, 0x7b, 0x76, 0x94, 0x24, 0xd3, 0x31,
      0x3c, 0xfb, 0x4b, 0x8d, 0x13, 0x32, 0x02, 0x49,
      0xa0, 0x22, 0x2b, 0x38, 0x88, 0x24, 0xf8, 0x2d,
      0xa4, 0xa0, 0x51, 0xdd, 0x02, 0x16, 0x22, 0x6a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_msgs__msg__ControllerStatus__TYPE_NAME[] = "mrs_msgs/msg/ControllerStatus";

// Define type names, field names, and default values
static char mrs_msgs__msg__ControllerStatus__FIELD_NAME__active[] = "active";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__ControllerStatus__FIELDS[] = {
  {
    {mrs_msgs__msg__ControllerStatus__FIELD_NAME__active, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__ControllerStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__ControllerStatus__TYPE_NAME, 29, 29},
      {mrs_msgs__msg__ControllerStatus__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool active";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__ControllerStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__ControllerStatus__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 12, 12},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__ControllerStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__ControllerStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
