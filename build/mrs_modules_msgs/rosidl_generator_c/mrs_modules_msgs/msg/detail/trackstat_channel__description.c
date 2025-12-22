// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_modules_msgs:msg/TrackstatChannel.idl
// generated code does not contain a copyright notice

#include "mrs_modules_msgs/msg/detail/trackstat_channel__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_modules_msgs
const rosidl_type_hash_t *
mrs_modules_msgs__msg__TrackstatChannel__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0xcc, 0xe9, 0x27, 0xbe, 0xa0, 0x66, 0xb3,
      0x32, 0x5e, 0xae, 0x83, 0x09, 0x13, 0xda, 0x0e,
      0x73, 0x88, 0x4a, 0x52, 0xd0, 0x19, 0x36, 0x60,
      0xf4, 0xf2, 0xf9, 0x74, 0xb5, 0x1a, 0xe4, 0xf9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_modules_msgs__msg__TrackstatChannel__TYPE_NAME[] = "mrs_modules_msgs/msg/TrackstatChannel";

// Define type names, field names, and default values
static char mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__prn[] = "prn";
static char mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__glofreq[] = "glofreq";
static char mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__ch_tr_status[] = "ch_tr_status";
static char mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__psr[] = "psr";
static char mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__doppler[] = "doppler";
static char mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__c_no[] = "c_no";
static char mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__locktime[] = "locktime";
static char mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__psr_res[] = "psr_res";
static char mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__reject[] = "reject";
static char mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__psr_weight[] = "psr_weight";

static rosidl_runtime_c__type_description__Field mrs_modules_msgs__msg__TrackstatChannel__FIELDS[] = {
  {
    {mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__prn, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__glofreq, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__ch_tr_status, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__psr, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__doppler, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__c_no, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__locktime, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__psr_res, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__reject, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TrackstatChannel__FIELD_NAME__psr_weight, 10, 10},
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
mrs_modules_msgs__msg__TrackstatChannel__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_modules_msgs__msg__TrackstatChannel__TYPE_NAME, 37, 37},
      {mrs_modules_msgs__msg__TrackstatChannel__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# A submessage of Trackstat that contains all of the data about a single hardware channel\n"
  "\n"
  "# Satellite PRN number\n"
  "int16 prn\n"
  "\n"
  "# GLONASS Frequency +7\n"
  "int16 glofreq\n"
  "\n"
  "# Channel tracking status\n"
  "uint32 ch_tr_status\n"
  "\n"
  "# Pseudorange (m)\n"
  "float64 psr\n"
  "\n"
  "# Doppler frequency (Hz)\n"
  "float32 doppler\n"
  "\n"
  "# Carrier to noise density ratio (dB-Hz)\n"
  "float32 c_no\n"
  "\n"
  "# Number of seconds of continuous tracking (no cycle slips)\n"
  "float32 locktime\n"
  "\n"
  "# Pseudorange residual from pseudorange filter (m)\n"
  "float32 psr_res\n"
  "\n"
  "# Range reject code from pseudorange filter\n"
  "string reject\n"
  "\n"
  "# Pseudorange filter weighting\n"
  "float32 psr_weight";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_modules_msgs__msg__TrackstatChannel__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_modules_msgs__msg__TrackstatChannel__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 593, 593},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_modules_msgs__msg__TrackstatChannel__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_modules_msgs__msg__TrackstatChannel__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
