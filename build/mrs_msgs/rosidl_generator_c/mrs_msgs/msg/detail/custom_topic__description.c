// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/CustomTopic.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/custom_topic__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__CustomTopic__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa7, 0xa5, 0x24, 0xe4, 0xad, 0xf8, 0x65, 0x4a,
      0x3b, 0xe1, 0x9e, 0x7e, 0xa1, 0x17, 0x10, 0xed,
      0x8a, 0x63, 0x9d, 0x8a, 0xfc, 0x18, 0xe4, 0x47,
      0x9c, 0x10, 0xbb, 0x09, 0xfb, 0x9a, 0xcf, 0xcd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_msgs__msg__CustomTopic__TYPE_NAME[] = "mrs_msgs/msg/CustomTopic";

// Define type names, field names, and default values
static char mrs_msgs__msg__CustomTopic__FIELD_NAME__topic_name[] = "topic_name";
static char mrs_msgs__msg__CustomTopic__FIELD_NAME__topic_hz[] = "topic_hz";
static char mrs_msgs__msg__CustomTopic__FIELD_NAME__topic_color[] = "topic_color";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__CustomTopic__FIELDS[] = {
  {
    {mrs_msgs__msg__CustomTopic__FIELD_NAME__topic_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__CustomTopic__FIELD_NAME__topic_hz, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__CustomTopic__FIELD_NAME__topic_color, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__CustomTopic__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__CustomTopic__TYPE_NAME, 24, 24},
      {mrs_msgs__msg__CustomTopic__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string topic_name\n"
  "float32 topic_hz\n"
  "int16 topic_color";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__CustomTopic__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__CustomTopic__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 53, 53},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__CustomTopic__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__CustomTopic__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
