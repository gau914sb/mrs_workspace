// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_modules_msgs:msg/RangeInformation.idl
// generated code does not contain a copyright notice

#include "mrs_modules_msgs/msg/detail/range_information__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_modules_msgs
const rosidl_type_hash_t *
mrs_modules_msgs__msg__RangeInformation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0x00, 0x29, 0x9d, 0x24, 0x54, 0x51, 0xe1,
      0x5c, 0xa1, 0x9b, 0x67, 0x62, 0xe6, 0xa7, 0x83,
      0x98, 0x94, 0xcf, 0xbd, 0xc7, 0xff, 0xc1, 0xb3,
      0xfa, 0x95, 0x2f, 0xcd, 0x35, 0x57, 0x57, 0x81,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_modules_msgs__msg__RangeInformation__TYPE_NAME[] = "mrs_modules_msgs/msg/RangeInformation";

// Define type names, field names, and default values
static char mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__prn_number[] = "prn_number";
static char mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__glofreq[] = "glofreq";
static char mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__psr[] = "psr";
static char mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__psr_std[] = "psr_std";
static char mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__adr[] = "adr";
static char mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__adr_std[] = "adr_std";
static char mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__dopp[] = "dopp";
static char mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__noise_density_ratio[] = "noise_density_ratio";
static char mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__locktime[] = "locktime";
static char mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__tracking_status[] = "tracking_status";

static rosidl_runtime_c__type_description__Field mrs_modules_msgs__msg__RangeInformation__FIELDS[] = {
  {
    {mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__prn_number, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__glofreq, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__psr, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__psr_std, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__adr, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__adr_std, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__dopp, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__noise_density_ratio, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__locktime, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__RangeInformation__FIELD_NAME__tracking_status, 15, 15},
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
mrs_modules_msgs__msg__RangeInformation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_modules_msgs__msg__RangeInformation__TYPE_NAME, 37, 37},
      {mrs_modules_msgs__msg__RangeInformation__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#Satellite Range information structure used in range messages\n"
  "\n"
  "#Satelite PRN number of range measurement\n"
  "uint16 prn_number\n"
  "\n"
  "#GLONASS Frequency\n"
  "uint16 glofreq\n"
  "\n"
  "#Pseudorange measurement(m)\n"
  "float64 psr\n"
  "\n"
  "#Pseudorange measurement standard deviation(m)\n"
  "float32 psr_std\n"
  "\n"
  "#Carrier phase, in cycles\n"
  "float64 adr\n"
  "\n"
  "#Estimated carrier phase standard deviation(cycles)\n"
  "float32 adr_std\n"
  "\n"
  "#Instantaneous carrier Doppler frequency(Hz)\n"
  "float32 dopp\n"
  "\n"
  "#Carrier to noise density ratio\n"
  "float32 noise_density_ratio\n"
  "\n"
  "## of seconds of continous tracking\n"
  "float32 locktime\n"
  "\n"
  "#Tracking status\n"
  "uint32 tracking_status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_modules_msgs__msg__RangeInformation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_modules_msgs__msg__RangeInformation__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 586, 586},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_modules_msgs__msg__RangeInformation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_modules_msgs__msg__RangeInformation__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
