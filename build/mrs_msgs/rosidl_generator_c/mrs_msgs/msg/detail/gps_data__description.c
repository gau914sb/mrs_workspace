// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/GpsData.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/gps_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__GpsData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x57, 0xb7, 0x19, 0x09, 0x0c, 0xe8, 0x3a, 0x2f,
      0x9d, 0xa8, 0x1f, 0x85, 0x39, 0x7d, 0x2f, 0x3d,
      0x25, 0xd5, 0xce, 0x05, 0x91, 0xde, 0x18, 0x0d,
      0x98, 0xb2, 0xfd, 0xc4, 0xfc, 0x37, 0x5c, 0xe4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_msgs__msg__GpsData__TYPE_NAME[] = "mrs_msgs/msg/GpsData";

// Define type names, field names, and default values
static char mrs_msgs__msg__GpsData__FIELD_NAME__latitude[] = "latitude";
static char mrs_msgs__msg__GpsData__FIELD_NAME__longitude[] = "longitude";
static char mrs_msgs__msg__GpsData__FIELD_NAME__altitude[] = "altitude";
static char mrs_msgs__msg__GpsData__FIELD_NAME__covariance[] = "covariance";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__GpsData__FIELDS[] = {
  {
    {mrs_msgs__msg__GpsData__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsData__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsData__FIELD_NAME__altitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsData__FIELD_NAME__covariance, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      9,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__GpsData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__GpsData__TYPE_NAME, 20, 20},
      {mrs_msgs__msg__GpsData__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 latitude\n"
  "float64 longitude\n"
  "float64 altitude\n"
  "float64[9] covariance";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__GpsData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__GpsData__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 74, 74},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__GpsData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__GpsData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
