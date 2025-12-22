// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/Se3Gains.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/se3_gains__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__Se3Gains__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0xf9, 0x39, 0x14, 0xf5, 0x92, 0x34, 0x29,
      0x88, 0x75, 0xf7, 0x82, 0x73, 0xb4, 0xfb, 0xd7,
      0x2e, 0xe1, 0x1c, 0x4d, 0x37, 0xd6, 0x60, 0x4f,
      0x1b, 0x47, 0x83, 0xe3, 0xd2, 0x06, 0xe1, 0x9b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_msgs__msg__Se3Gains__TYPE_NAME[] = "mrs_msgs/msg/Se3Gains";

// Define type names, field names, and default values
static char mrs_msgs__msg__Se3Gains__FIELD_NAME__kpxy[] = "kpxy";
static char mrs_msgs__msg__Se3Gains__FIELD_NAME__kvxy[] = "kvxy";
static char mrs_msgs__msg__Se3Gains__FIELD_NAME__kaxy[] = "kaxy";
static char mrs_msgs__msg__Se3Gains__FIELD_NAME__kpz[] = "kpz";
static char mrs_msgs__msg__Se3Gains__FIELD_NAME__kvz[] = "kvz";
static char mrs_msgs__msg__Se3Gains__FIELD_NAME__kaz[] = "kaz";
static char mrs_msgs__msg__Se3Gains__FIELD_NAME__kibxy[] = "kibxy";
static char mrs_msgs__msg__Se3Gains__FIELD_NAME__kibxy_lim[] = "kibxy_lim";
static char mrs_msgs__msg__Se3Gains__FIELD_NAME__kiwxy[] = "kiwxy";
static char mrs_msgs__msg__Se3Gains__FIELD_NAME__kiwxy_lim[] = "kiwxy_lim";
static char mrs_msgs__msg__Se3Gains__FIELD_NAME__kqrp[] = "kqrp";
static char mrs_msgs__msg__Se3Gains__FIELD_NAME__kqy[] = "kqy";
static char mrs_msgs__msg__Se3Gains__FIELD_NAME__km[] = "km";
static char mrs_msgs__msg__Se3Gains__FIELD_NAME__km_lim[] = "km_lim";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__Se3Gains__FIELDS[] = {
  {
    {mrs_msgs__msg__Se3Gains__FIELD_NAME__kpxy, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Se3Gains__FIELD_NAME__kvxy, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Se3Gains__FIELD_NAME__kaxy, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Se3Gains__FIELD_NAME__kpz, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Se3Gains__FIELD_NAME__kvz, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Se3Gains__FIELD_NAME__kaz, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Se3Gains__FIELD_NAME__kibxy, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Se3Gains__FIELD_NAME__kibxy_lim, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Se3Gains__FIELD_NAME__kiwxy, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Se3Gains__FIELD_NAME__kiwxy_lim, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Se3Gains__FIELD_NAME__kqrp, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Se3Gains__FIELD_NAME__kqy, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Se3Gains__FIELD_NAME__km, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Se3Gains__FIELD_NAME__km_lim, 6, 6},
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
mrs_msgs__msg__Se3Gains__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__Se3Gains__TYPE_NAME, 21, 21},
      {mrs_msgs__msg__Se3Gains__FIELDS, 14, 14},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This a set of gains for the SE(3) controller.\n"
  "\n"
  "# Horizontal position gain.\n"
  "float64 kpxy\n"
  "\n"
  "# Horizontal velocity gain.\n"
  "float64 kvxy\n"
  "\n"
  "# Horizontal acceleration gain.\n"
  "float64 kaxy\n"
  "\n"
  "# Vertical position gain.\n"
  "float64 kpz\n"
  "\n"
  "# Vertical velocity gain.\n"
  "float64 kvz\n"
  "\n"
  "# Vertical acceleration gain.\n"
  "float64 kaz\n"
  "\n"
  "# Body disturbance gain.\n"
  "float64 kibxy\n"
  "\n"
  "# Body disturbance estimator limit ([N]).\n"
  "float64 kibxy_lim\n"
  "\n"
  "# World disturbance gain.\n"
  "float64 kiwxy\n"
  "\n"
  "# World disturbance estimator limit  ([N]).\n"
  "float64 kiwxy_lim\n"
  "\n"
  "# Roll+pitch attitude gain.\n"
  "float64 kqrp\n"
  "\n"
  "# Yaw attitude gain.\n"
  "float64 kqy\n"
  "\n"
  "# Mass estimator gain.\n"
  "float64 km\n"
  "\n"
  "# Mass estimator limit ([m]).\n"
  "float64 km_lim";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__Se3Gains__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__Se3Gains__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 661, 661},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__Se3Gains__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__Se3Gains__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
