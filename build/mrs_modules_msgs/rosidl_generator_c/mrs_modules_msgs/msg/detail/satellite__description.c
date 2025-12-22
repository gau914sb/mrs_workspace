// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_modules_msgs:msg/Satellite.idl
// generated code does not contain a copyright notice

#include "mrs_modules_msgs/msg/detail/satellite__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_modules_msgs
const rosidl_type_hash_t *
mrs_modules_msgs__msg__Satellite__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0x85, 0x62, 0x82, 0xb9, 0xa9, 0xe9, 0xf3,
      0x8b, 0x86, 0x6d, 0xec, 0xf3, 0x53, 0x5e, 0xcd,
      0xc4, 0x9e, 0x5c, 0x13, 0x41, 0xa0, 0x94, 0xd5,
      0xde, 0x25, 0xef, 0xbf, 0x8d, 0x70, 0xb7, 0x5b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_modules_msgs__msg__Satellite__TYPE_NAME[] = "mrs_modules_msgs/msg/Satellite";

// Define type names, field names, and default values
static char mrs_modules_msgs__msg__Satellite__FIELD_NAME__prn[] = "prn";
static char mrs_modules_msgs__msg__Satellite__FIELD_NAME__elevation[] = "elevation";
static char mrs_modules_msgs__msg__Satellite__FIELD_NAME__azimuth[] = "azimuth";
static char mrs_modules_msgs__msg__Satellite__FIELD_NAME__snr[] = "snr";

static rosidl_runtime_c__type_description__Field mrs_modules_msgs__msg__Satellite__FIELDS[] = {
  {
    {mrs_modules_msgs__msg__Satellite__FIELD_NAME__prn, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Satellite__FIELD_NAME__elevation, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Satellite__FIELD_NAME__azimuth, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Satellite__FIELD_NAME__snr, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_modules_msgs__msg__Satellite__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_modules_msgs__msg__Satellite__TYPE_NAME, 30, 30},
      {mrs_modules_msgs__msg__Satellite__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Satellite data structure used in GPGSV messages\n"
  "\n"
  "# PRN number of the satellite\n"
  "# GPS = 1..32\n"
  "# SBAS = 33..64\n"
  "# GLO = 65..96\n"
  "uint8 prn\n"
  "\n"
  "# Elevation, degrees. Maximum 90\n"
  "uint8 elevation\n"
  "\n"
  "# Azimuth, True North degrees. [0, 359]\n"
  "uint16 azimuth\n"
  "\n"
  "# Signal to noise ratio, 0-99 dB. -1 when null in NMEA sentence (not tracking)\n"
  "int8 snr";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_modules_msgs__msg__Satellite__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_modules_msgs__msg__Satellite__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 330, 330},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_modules_msgs__msg__Satellite__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_modules_msgs__msg__Satellite__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
