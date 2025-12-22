// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_modules_msgs:msg/Trackstat.idl
// generated code does not contain a copyright notice

#include "mrs_modules_msgs/msg/detail/trackstat__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_modules_msgs
const rosidl_type_hash_t *
mrs_modules_msgs__msg__Trackstat__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1f, 0xb8, 0xcf, 0xfc, 0x2b, 0xe3, 0x68, 0xe4,
      0x2e, 0x4f, 0xa5, 0xba, 0x10, 0xf8, 0x35, 0x65,
      0x3b, 0x7a, 0x33, 0xa7, 0x47, 0x4c, 0xa8, 0x76,
      0x04, 0xce, 0xeb, 0x1e, 0xb6, 0x73, 0x29, 0x21,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mrs_modules_msgs/msg/detail/trackstat_channel__functions.h"
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
static const rosidl_type_hash_t mrs_modules_msgs__msg__TrackstatChannel__EXPECTED_HASH = {1, {
    0xcb, 0xcc, 0xe9, 0x27, 0xbe, 0xa0, 0x66, 0xb3,
    0x32, 0x5e, 0xae, 0x83, 0x09, 0x13, 0xda, 0x0e,
    0x73, 0x88, 0x4a, 0x52, 0xd0, 0x19, 0x36, 0x60,
    0xf4, 0xf2, 0xf9, 0x74, 0xb5, 0x1a, 0xe4, 0xf9,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mrs_modules_msgs__msg__Trackstat__TYPE_NAME[] = "mrs_modules_msgs/msg/Trackstat";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mrs_modules_msgs__msg__TrackstatChannel__TYPE_NAME[] = "mrs_modules_msgs/msg/TrackstatChannel";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mrs_modules_msgs__msg__Trackstat__FIELD_NAME__header[] = "header";
static char mrs_modules_msgs__msg__Trackstat__FIELD_NAME__solution_status[] = "solution_status";
static char mrs_modules_msgs__msg__Trackstat__FIELD_NAME__position_type[] = "position_type";
static char mrs_modules_msgs__msg__Trackstat__FIELD_NAME__cutoff[] = "cutoff";
static char mrs_modules_msgs__msg__Trackstat__FIELD_NAME__channels[] = "channels";

static rosidl_runtime_c__type_description__Field mrs_modules_msgs__msg__Trackstat__FIELDS[] = {
  {
    {mrs_modules_msgs__msg__Trackstat__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Trackstat__FIELD_NAME__solution_status, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Trackstat__FIELD_NAME__position_type, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Trackstat__FIELD_NAME__cutoff, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Trackstat__FIELD_NAME__channels, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mrs_modules_msgs__msg__TrackstatChannel__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_modules_msgs__msg__Trackstat__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TrackstatChannel__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_modules_msgs__msg__Trackstat__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_modules_msgs__msg__Trackstat__TYPE_NAME, 30, 30},
      {mrs_modules_msgs__msg__Trackstat__FIELDS, 5, 5},
    },
    {mrs_modules_msgs__msg__Trackstat__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_modules_msgs__msg__TrackstatChannel__EXPECTED_HASH, mrs_modules_msgs__msg__TrackstatChannel__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrs_modules_msgs__msg__TrackstatChannel__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Channel tracking status information for each of the receiver parallel channels\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "string solution_status\n"
  "string position_type\n"
  "\n"
  "# Tracking elevation cutff-off angle\n"
  "float32 cutoff\n"
  "\n"
  "TrackstatChannel[] channels";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_modules_msgs__msg__Trackstat__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_modules_msgs__msg__Trackstat__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 232, 232},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_modules_msgs__msg__Trackstat__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_modules_msgs__msg__Trackstat__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mrs_modules_msgs__msg__TrackstatChannel__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
