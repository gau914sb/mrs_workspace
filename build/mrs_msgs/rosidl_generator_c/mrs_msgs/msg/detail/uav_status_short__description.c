// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/UavStatusShort.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/uav_status_short__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__UavStatusShort__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2d, 0xcc, 0xcb, 0x36, 0xae, 0xab, 0x12, 0x90,
      0x7d, 0x6b, 0x58, 0xe3, 0x1d, 0x16, 0x8d, 0x97,
      0xf7, 0xe7, 0x40, 0x89, 0xeb, 0xf9, 0x19, 0x62,
      0x63, 0x0b, 0x84, 0x55, 0xbe, 0x3f, 0x3f, 0xe9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_msgs__msg__UavStatusShort__TYPE_NAME[] = "mrs_msgs/msg/UavStatusShort";

// Define type names, field names, and default values
static char mrs_msgs__msg__UavStatusShort__FIELD_NAME__odom_hz[] = "odom_hz";
static char mrs_msgs__msg__UavStatusShort__FIELD_NAME__odom_color[] = "odom_color";
static char mrs_msgs__msg__UavStatusShort__FIELD_NAME__odom_x[] = "odom_x";
static char mrs_msgs__msg__UavStatusShort__FIELD_NAME__odom_y[] = "odom_y";
static char mrs_msgs__msg__UavStatusShort__FIELD_NAME__odom_z[] = "odom_z";
static char mrs_msgs__msg__UavStatusShort__FIELD_NAME__odom_hdg[] = "odom_hdg";
static char mrs_msgs__msg__UavStatusShort__FIELD_NAME__cmd_x[] = "cmd_x";
static char mrs_msgs__msg__UavStatusShort__FIELD_NAME__cmd_y[] = "cmd_y";
static char mrs_msgs__msg__UavStatusShort__FIELD_NAME__cmd_z[] = "cmd_z";
static char mrs_msgs__msg__UavStatusShort__FIELD_NAME__cmd_hdg[] = "cmd_hdg";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__UavStatusShort__FIELDS[] = {
  {
    {mrs_msgs__msg__UavStatusShort__FIELD_NAME__odom_hz, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatusShort__FIELD_NAME__odom_color, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatusShort__FIELD_NAME__odom_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatusShort__FIELD_NAME__odom_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatusShort__FIELD_NAME__odom_z, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatusShort__FIELD_NAME__odom_hdg, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatusShort__FIELD_NAME__cmd_x, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatusShort__FIELD_NAME__cmd_y, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatusShort__FIELD_NAME__cmd_z, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatusShort__FIELD_NAME__cmd_hdg, 7, 7},
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
mrs_msgs__msg__UavStatusShort__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__UavStatusShort__TYPE_NAME, 27, 27},
      {mrs_msgs__msg__UavStatusShort__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 odom_hz\n"
  "int16 odom_color\n"
  "float32 odom_x\n"
  "float32 odom_y\n"
  "float32 odom_z\n"
  "float32 odom_hdg\n"
  "\n"
  "float32 cmd_x\n"
  "float32 cmd_y\n"
  "float32 cmd_z\n"
  "float32 cmd_hdg";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__UavStatusShort__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__UavStatusShort__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 154, 154},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__UavStatusShort__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__UavStatusShort__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
