// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/DynamicsConstraints.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/dynamics_constraints__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__DynamicsConstraints__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe5, 0xfc, 0x53, 0x2b, 0x43, 0x5a, 0xe9, 0xb4,
      0xa4, 0xd7, 0x03, 0x76, 0x3d, 0x8f, 0x75, 0xdc,
      0xb8, 0xf9, 0xee, 0xb9, 0x82, 0x92, 0xe2, 0xce,
      0x1e, 0xfa, 0x88, 0x8e, 0x85, 0x4c, 0x3c, 0x36,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_msgs__msg__DynamicsConstraints__TYPE_NAME[] = "mrs_msgs/msg/DynamicsConstraints";

// Define type names, field names, and default values
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__horizontal_speed[] = "horizontal_speed";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__horizontal_acceleration[] = "horizontal_acceleration";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__horizontal_jerk[] = "horizontal_jerk";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__horizontal_snap[] = "horizontal_snap";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__vertical_ascending_speed[] = "vertical_ascending_speed";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__vertical_ascending_acceleration[] = "vertical_ascending_acceleration";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__vertical_ascending_jerk[] = "vertical_ascending_jerk";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__vertical_ascending_snap[] = "vertical_ascending_snap";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__vertical_descending_speed[] = "vertical_descending_speed";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__vertical_descending_acceleration[] = "vertical_descending_acceleration";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__vertical_descending_jerk[] = "vertical_descending_jerk";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__vertical_descending_snap[] = "vertical_descending_snap";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__heading_speed[] = "heading_speed";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__heading_acceleration[] = "heading_acceleration";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__heading_jerk[] = "heading_jerk";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__heading_snap[] = "heading_snap";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__roll_rate[] = "roll_rate";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__pitch_rate[] = "pitch_rate";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__yaw_rate[] = "yaw_rate";
static char mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__tilt[] = "tilt";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__DynamicsConstraints__FIELDS[] = {
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__horizontal_speed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__horizontal_acceleration, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__horizontal_jerk, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__horizontal_snap, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__vertical_ascending_speed, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__vertical_ascending_acceleration, 31, 31},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__vertical_ascending_jerk, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__vertical_ascending_snap, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__vertical_descending_speed, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__vertical_descending_acceleration, 32, 32},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__vertical_descending_jerk, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__vertical_descending_snap, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__heading_speed, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__heading_acceleration, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__heading_jerk, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__heading_snap, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__roll_rate, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__pitch_rate, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__yaw_rate, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__FIELD_NAME__tilt, 4, 4},
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
mrs_msgs__msg__DynamicsConstraints__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__DynamicsConstraints__TYPE_NAME, 32, 32},
      {mrs_msgs__msg__DynamicsConstraints__FIELDS, 20, 20},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# UAV dynamics constraints\n"
  "\n"
  "# speed: m/s\n"
  "# acceleration: m/s^2\n"
  "# jerk: m/s^3\n"
  "# snap: m/s^4\n"
  "\n"
  "# translational dynamics\n"
  "\n"
  "float64 horizontal_speed\n"
  "float64 horizontal_acceleration\n"
  "float64 horizontal_jerk\n"
  "float64 horizontal_snap\n"
  "\n"
  "float64 vertical_ascending_speed\n"
  "float64 vertical_ascending_acceleration\n"
  "float64 vertical_ascending_jerk\n"
  "float64 vertical_ascending_snap\n"
  "\n"
  "float64 vertical_descending_speed\n"
  "float64 vertical_descending_acceleration\n"
  "float64 vertical_descending_jerk\n"
  "float64 vertical_descending_snap\n"
  "\n"
  "# heading\n"
  "\n"
  "float64 heading_speed\n"
  "float64 heading_acceleration\n"
  "float64 heading_jerk\n"
  "float64 heading_snap\n"
  "\n"
  "# angular rates: rad/s\n"
  "\n"
  "float64 roll_rate\n"
  "float64 pitch_rate\n"
  "float64 yaw_rate\n"
  "\n"
  "# maximum tilt, rad\n"
  "# max angle between body-3 and world-3 axes\n"
  "\n"
  "float64 tilt";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__DynamicsConstraints__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__DynamicsConstraints__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 766, 766},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__DynamicsConstraints__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__DynamicsConstraints__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
