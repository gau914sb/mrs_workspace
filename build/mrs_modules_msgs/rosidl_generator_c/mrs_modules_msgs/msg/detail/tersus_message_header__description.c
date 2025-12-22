// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_modules_msgs:msg/TersusMessageHeader.idl
// generated code does not contain a copyright notice

#include "mrs_modules_msgs/msg/detail/tersus_message_header__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_modules_msgs
const rosidl_type_hash_t *
mrs_modules_msgs__msg__TersusMessageHeader__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8e, 0x20, 0xcf, 0x69, 0x94, 0x09, 0x94, 0xf1,
      0xc1, 0xb1, 0xf3, 0x91, 0x35, 0x31, 0x51, 0x85,
      0x2e, 0x00, 0xae, 0x3e, 0x9c, 0x6b, 0x68, 0xe3,
      0x72, 0xf2, 0x28, 0x80, 0xf7, 0xc5, 0x24, 0xed,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_modules_msgs__msg__TersusMessageHeader__TYPE_NAME[] = "mrs_modules_msgs/msg/TersusMessageHeader";

// Define type names, field names, and default values
static char mrs_modules_msgs__msg__TersusMessageHeader__FIELD_NAME__message_name[] = "message_name";
static char mrs_modules_msgs__msg__TersusMessageHeader__FIELD_NAME__port_address[] = "port_address";
static char mrs_modules_msgs__msg__TersusMessageHeader__FIELD_NAME__sequence[] = "sequence";
static char mrs_modules_msgs__msg__TersusMessageHeader__FIELD_NAME__idle_time[] = "idle_time";
static char mrs_modules_msgs__msg__TersusMessageHeader__FIELD_NAME__time_status[] = "time_status";
static char mrs_modules_msgs__msg__TersusMessageHeader__FIELD_NAME__gps_week[] = "gps_week";
static char mrs_modules_msgs__msg__TersusMessageHeader__FIELD_NAME__gps_week_seconds[] = "gps_week_seconds";
static char mrs_modules_msgs__msg__TersusMessageHeader__FIELD_NAME__receiver_status[] = "receiver_status";
static char mrs_modules_msgs__msg__TersusMessageHeader__FIELD_NAME__software_version[] = "software_version";

static rosidl_runtime_c__type_description__Field mrs_modules_msgs__msg__TersusMessageHeader__FIELDS[] = {
  {
    {mrs_modules_msgs__msg__TersusMessageHeader__FIELD_NAME__message_name, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TersusMessageHeader__FIELD_NAME__port_address, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TersusMessageHeader__FIELD_NAME__sequence, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TersusMessageHeader__FIELD_NAME__idle_time, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TersusMessageHeader__FIELD_NAME__time_status, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TersusMessageHeader__FIELD_NAME__gps_week, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TersusMessageHeader__FIELD_NAME__gps_week_seconds, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TersusMessageHeader__FIELD_NAME__receiver_status, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TersusMessageHeader__FIELD_NAME__software_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_modules_msgs__msg__TersusMessageHeader__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_modules_msgs__msg__TersusMessageHeader__TYPE_NAME, 40, 40},
      {mrs_modules_msgs__msg__TersusMessageHeader__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This is modified version from Novatel\n"
  "# For original Novatel see: http://docs.ros.org/jade/api/novatel_msgs/html/msg/CommonHeader.html\n"
  "# For Tersus see: https://www.tersus-gnss.com/assets/upload/file/20180608173259349.pdf\n"
  "# See section 1.5 in the Tersus manual.\n"
  "# --------------------------------------------------------------------------------------\n"
  "\n"
  "# On the wire, this header is preceeded by three sync bytes,\n"
  "# which are 0xAA 0x44 0x12, and a uint8 which is the header length.\n"
  "\n"
  "# Measurement source, format, response bit.\n"
  "string message_name\n"
  "\n"
  "string port_address\n"
  "\n"
  "uint16 sequence\n"
  "\n"
  "float32 idle_time\n"
  "\n"
  "# Table 1 in the Tersus manual.\n"
  "string time_status\n"
  "\n"
  "uint16 gps_week\n"
  "float32 gps_week_seconds\n"
  "\n"
  "uint32 receiver_status\n"
  "uint16 software_version";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_modules_msgs__msg__TersusMessageHeader__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_modules_msgs__msg__TersusMessageHeader__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 747, 747},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_modules_msgs__msg__TersusMessageHeader__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_modules_msgs__msg__TersusMessageHeader__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
