// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_modules_msgs:msg/GimbalPRY.idl
// generated code does not contain a copyright notice

#include "mrs_modules_msgs/msg/detail/gimbal_pry__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_modules_msgs
const rosidl_type_hash_t *
mrs_modules_msgs__msg__GimbalPRY__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0xee, 0x42, 0x0d, 0x89, 0xac, 0xd5, 0xe2,
      0xda, 0x02, 0xac, 0x5b, 0x4d, 0xfc, 0x8b, 0xab,
      0x35, 0x65, 0xd2, 0xa7, 0x87, 0x59, 0x20, 0x9c,
      0x15, 0x63, 0xd7, 0xf7, 0x78, 0xe8, 0x8f, 0x37,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_modules_msgs__msg__GimbalPRY__TYPE_NAME[] = "mrs_modules_msgs/msg/GimbalPRY";

// Define type names, field names, and default values
static char mrs_modules_msgs__msg__GimbalPRY__FIELD_NAME__pitch[] = "pitch";
static char mrs_modules_msgs__msg__GimbalPRY__FIELD_NAME__roll[] = "roll";
static char mrs_modules_msgs__msg__GimbalPRY__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field mrs_modules_msgs__msg__GimbalPRY__FIELDS[] = {
  {
    {mrs_modules_msgs__msg__GimbalPRY__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__GimbalPRY__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__GimbalPRY__FIELD_NAME__yaw, 3, 3},
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
mrs_modules_msgs__msg__GimbalPRY__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_modules_msgs__msg__GimbalPRY__TYPE_NAME, 30, 30},
      {mrs_modules_msgs__msg__GimbalPRY__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 pitch\n"
  "float32 roll\n"
  "float32 yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_modules_msgs__msg__GimbalPRY__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_modules_msgs__msg__GimbalPRY__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 39, 39},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_modules_msgs__msg__GimbalPRY__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_modules_msgs__msg__GimbalPRY__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
