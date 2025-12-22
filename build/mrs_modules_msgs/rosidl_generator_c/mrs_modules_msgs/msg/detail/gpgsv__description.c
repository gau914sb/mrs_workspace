// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_modules_msgs:msg/Gpgsv.idl
// generated code does not contain a copyright notice

#include "mrs_modules_msgs/msg/detail/gpgsv__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_modules_msgs
const rosidl_type_hash_t *
mrs_modules_msgs__msg__Gpgsv__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc4, 0xbc, 0x5e, 0x10, 0x4e, 0x58, 0x8e, 0xb6,
      0xb0, 0x22, 0x94, 0x9d, 0x14, 0x7b, 0xee, 0x9a,
      0xf1, 0xe1, 0x6f, 0x0c, 0x38, 0xe1, 0x27, 0xe2,
      0x01, 0x73, 0x9c, 0x75, 0x2f, 0x64, 0x0b, 0x26,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mrs_modules_msgs/msg/detail/satellite__functions.h"
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
static const rosidl_type_hash_t mrs_modules_msgs__msg__Satellite__EXPECTED_HASH = {1, {
    0xf7, 0x85, 0x62, 0x82, 0xb9, 0xa9, 0xe9, 0xf3,
    0x8b, 0x86, 0x6d, 0xec, 0xf3, 0x53, 0x5e, 0xcd,
    0xc4, 0x9e, 0x5c, 0x13, 0x41, 0xa0, 0x94, 0xd5,
    0xde, 0x25, 0xef, 0xbf, 0x8d, 0x70, 0xb7, 0x5b,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mrs_modules_msgs__msg__Gpgsv__TYPE_NAME[] = "mrs_modules_msgs/msg/Gpgsv";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mrs_modules_msgs__msg__Satellite__TYPE_NAME[] = "mrs_modules_msgs/msg/Satellite";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mrs_modules_msgs__msg__Gpgsv__FIELD_NAME__header[] = "header";
static char mrs_modules_msgs__msg__Gpgsv__FIELD_NAME__message_id[] = "message_id";
static char mrs_modules_msgs__msg__Gpgsv__FIELD_NAME__n_msgs[] = "n_msgs";
static char mrs_modules_msgs__msg__Gpgsv__FIELD_NAME__msg_number[] = "msg_number";
static char mrs_modules_msgs__msg__Gpgsv__FIELD_NAME__n_satellites[] = "n_satellites";
static char mrs_modules_msgs__msg__Gpgsv__FIELD_NAME__satellites[] = "satellites";

static rosidl_runtime_c__type_description__Field mrs_modules_msgs__msg__Gpgsv__FIELDS[] = {
  {
    {mrs_modules_msgs__msg__Gpgsv__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Gpgsv__FIELD_NAME__message_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Gpgsv__FIELD_NAME__n_msgs, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Gpgsv__FIELD_NAME__msg_number, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Gpgsv__FIELD_NAME__n_satellites, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Gpgsv__FIELD_NAME__satellites, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mrs_modules_msgs__msg__Satellite__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_modules_msgs__msg__Gpgsv__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Satellite__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_modules_msgs__msg__Gpgsv__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_modules_msgs__msg__Gpgsv__TYPE_NAME, 26, 26},
      {mrs_modules_msgs__msg__Gpgsv__FIELDS, 6, 6},
    },
    {mrs_modules_msgs__msg__Gpgsv__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_modules_msgs__msg__Satellite__EXPECTED_HASH, mrs_modules_msgs__msg__Satellite__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrs_modules_msgs__msg__Satellite__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Total number of satellites in view and data about satellites\n"
  "# Because the NMEA sentence is limited to 4 satellites per message, several\n"
  "# of these messages may need to be synthesized to get data about all visible\n"
  "# satellites.\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "string message_id\n"
  "\n"
  "# Number of messages in this sequence\n"
  "uint8 n_msgs\n"
  "# This messages number in its sequence. The first message is number 1.\n"
  "uint8 msg_number\n"
  "\n"
  "# Number of satellites currently visible\n"
  "uint8 n_satellites\n"
  "\n"
  "# Up to 4 satellites are described in each message\n"
  "Satellite[] satellites";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_modules_msgs__msg__Gpgsv__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_modules_msgs__msg__Gpgsv__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 549, 549},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_modules_msgs__msg__Gpgsv__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_modules_msgs__msg__Gpgsv__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mrs_modules_msgs__msg__Satellite__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
