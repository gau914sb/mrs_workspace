// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_modules_msgs:msg/GpsStatus.idl
// generated code does not contain a copyright notice

#include "mrs_modules_msgs/msg/detail/gps_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_modules_msgs
const rosidl_type_hash_t *
mrs_modules_msgs__msg__GpsStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x55, 0xb9, 0x46, 0x7f, 0x8c, 0x8d, 0xb1, 0x9b,
      0xb3, 0x21, 0x49, 0xb1, 0x45, 0x7e, 0x7a, 0x97,
      0x09, 0x1e, 0x68, 0x7b, 0xb0, 0x9b, 0xfd, 0xea,
      0x9d, 0x8e, 0xc4, 0x75, 0x8e, 0x69, 0xde, 0xad,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_modules_msgs__msg__GpsStatus__TYPE_NAME[] = "mrs_modules_msgs/msg/GpsStatus";

// Define type names, field names, and default values
static char mrs_modules_msgs__msg__GpsStatus__FIELD_NAME__quality[] = "quality";

static rosidl_runtime_c__type_description__Field mrs_modules_msgs__msg__GpsStatus__FIELDS[] = {
  {
    {mrs_modules_msgs__msg__GpsStatus__FIELD_NAME__quality, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_modules_msgs__msg__GpsStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_modules_msgs__msg__GpsStatus__TYPE_NAME, 30, 30},
      {mrs_modules_msgs__msg__GpsStatus__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 quality\n"
  "uint32 GPS_QUALITY_NO_FIX=0\n"
  "uint32 GPS_QUALITY_SIGLE_POINT=1\n"
  "uint32 GPS_QUALITY_PSEUDORANGE_DIFFERENTIAL=2\n"
  "uint32 GPS_QUALITY_RTK_FIX=4\n"
  "uint32 GPS_QUALITY_RTK_FLOAT=5";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_modules_msgs__msg__GpsStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_modules_msgs__msg__GpsStatus__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 182, 182},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_modules_msgs__msg__GpsStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_modules_msgs__msg__GpsStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
