// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_modules_msgs:msg/Time.idl
// generated code does not contain a copyright notice

#include "mrs_modules_msgs/msg/detail/time__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_modules_msgs
const rosidl_type_hash_t *
mrs_modules_msgs__msg__Time__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0xad, 0x85, 0x61, 0x31, 0x36, 0xc2, 0xfd,
      0x88, 0xd6, 0x3a, 0x9e, 0xfa, 0x98, 0x3a, 0xc1,
      0xed, 0x3b, 0x6f, 0xca, 0x40, 0xb0, 0xbd, 0x74,
      0x79, 0x99, 0xf3, 0xa2, 0x24, 0x39, 0x0c, 0xab,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mrs_modules_msgs__msg__Time__TYPE_NAME[] = "mrs_modules_msgs/msg/Time";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mrs_modules_msgs__msg__Time__FIELD_NAME__header[] = "header";
static char mrs_modules_msgs__msg__Time__FIELD_NAME__clock_status[] = "clock_status";
static char mrs_modules_msgs__msg__Time__FIELD_NAME__offset[] = "offset";
static char mrs_modules_msgs__msg__Time__FIELD_NAME__offset_std[] = "offset_std";
static char mrs_modules_msgs__msg__Time__FIELD_NAME__utc_offset[] = "utc_offset";
static char mrs_modules_msgs__msg__Time__FIELD_NAME__utc_year[] = "utc_year";
static char mrs_modules_msgs__msg__Time__FIELD_NAME__utc_month[] = "utc_month";
static char mrs_modules_msgs__msg__Time__FIELD_NAME__utc_day[] = "utc_day";
static char mrs_modules_msgs__msg__Time__FIELD_NAME__utc_hour[] = "utc_hour";
static char mrs_modules_msgs__msg__Time__FIELD_NAME__utc_minute[] = "utc_minute";
static char mrs_modules_msgs__msg__Time__FIELD_NAME__utc_millisecond[] = "utc_millisecond";
static char mrs_modules_msgs__msg__Time__FIELD_NAME__utc_status[] = "utc_status";

static rosidl_runtime_c__type_description__Field mrs_modules_msgs__msg__Time__FIELDS[] = {
  {
    {mrs_modules_msgs__msg__Time__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Time__FIELD_NAME__clock_status, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Time__FIELD_NAME__offset, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Time__FIELD_NAME__offset_std, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Time__FIELD_NAME__utc_offset, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Time__FIELD_NAME__utc_year, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Time__FIELD_NAME__utc_month, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Time__FIELD_NAME__utc_day, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Time__FIELD_NAME__utc_hour, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Time__FIELD_NAME__utc_minute, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Time__FIELD_NAME__utc_millisecond, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Time__FIELD_NAME__utc_status, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_modules_msgs__msg__Time__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_modules_msgs__msg__Time__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_modules_msgs__msg__Time__TYPE_NAME, 25, 25},
      {mrs_modules_msgs__msg__Time__FIELDS, 12, 12},
    },
    {mrs_modules_msgs__msg__Time__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Parsed Best Position or HP pos data from Tersus receiver\n"
  "std_msgs/Header header\n"
  "\n"
  "# Clock model status\n"
  "string clock_status\n"
  "\n"
  "# Receiver clock offset, in seconds, from GPS reference time. A positive offset\n"
  "# implies that the receiver clock is ahead of GPS reference time. To derive\n"
  "# GPS reference time, use the following formula:\n"
  "# GPS reference time = receiver time - offset\n"
  "float64 offset\n"
  "\n"
  "# Standard deviation of the offset\n"
  "float64 offset_std\n"
  "\n"
  "# The offset of the GPS reference time from UTC time, computed using almanac\n"
  "# parameters. UTC time is GPS reference time plus the current UTC offset plus\n"
  "# the receiver clock offset:\n"
  "# UTC time = GPS reference time + offset + UTC offset\n"
  "float64 utc_offset\n"
  "\n"
  "uint32 utc_year\n"
  "uint8 utc_month\n"
  "uint8 utc_day\n"
  "uint8 utc_hour\n"
  "uint8 utc_minute\n"
  "uint32 utc_millisecond\n"
  "\n"
  "string utc_status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_modules_msgs__msg__Time__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_modules_msgs__msg__Time__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 825, 825},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_modules_msgs__msg__Time__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_modules_msgs__msg__Time__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
