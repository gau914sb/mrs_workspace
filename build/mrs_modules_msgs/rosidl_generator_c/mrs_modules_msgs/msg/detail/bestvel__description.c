// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_modules_msgs:msg/Bestvel.idl
// generated code does not contain a copyright notice

#include "mrs_modules_msgs/msg/detail/bestvel__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_modules_msgs
const rosidl_type_hash_t *
mrs_modules_msgs__msg__Bestvel__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x06, 0xa8, 0x81, 0xd1, 0x69, 0xa6, 0xc7, 0xf2,
      0x06, 0x47, 0x96, 0x0a, 0x89, 0x2b, 0xd7, 0xfe,
      0x06, 0x3e, 0xa8, 0xc0, 0xd7, 0x67, 0xd3, 0xe3,
      0x1d, 0xa6, 0x59, 0xb3, 0xa4, 0x56, 0x75, 0xb8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "mrs_modules_msgs/msg/detail/tersus_message_header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t mrs_modules_msgs__msg__TersusMessageHeader__EXPECTED_HASH = {1, {
    0x8e, 0x20, 0xcf, 0x69, 0x94, 0x09, 0x94, 0xf1,
    0xc1, 0xb1, 0xf3, 0x91, 0x35, 0x31, 0x51, 0x85,
    0x2e, 0x00, 0xae, 0x3e, 0x9c, 0x6b, 0x68, 0xe3,
    0x72, 0xf2, 0x28, 0x80, 0xf7, 0xc5, 0x24, 0xed,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mrs_modules_msgs__msg__Bestvel__TYPE_NAME[] = "mrs_modules_msgs/msg/Bestvel";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mrs_modules_msgs__msg__TersusMessageHeader__TYPE_NAME[] = "mrs_modules_msgs/msg/TersusMessageHeader";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mrs_modules_msgs__msg__Bestvel__FIELD_NAME__header[] = "header";
static char mrs_modules_msgs__msg__Bestvel__FIELD_NAME__tersus_msg_header[] = "tersus_msg_header";
static char mrs_modules_msgs__msg__Bestvel__FIELD_NAME__solution_status[] = "solution_status";
static char mrs_modules_msgs__msg__Bestvel__FIELD_NAME__velocity_type[] = "velocity_type";
static char mrs_modules_msgs__msg__Bestvel__FIELD_NAME__latency[] = "latency";
static char mrs_modules_msgs__msg__Bestvel__FIELD_NAME__age[] = "age";
static char mrs_modules_msgs__msg__Bestvel__FIELD_NAME__horizontal_speed[] = "horizontal_speed";
static char mrs_modules_msgs__msg__Bestvel__FIELD_NAME__track_ground[] = "track_ground";
static char mrs_modules_msgs__msg__Bestvel__FIELD_NAME__vertical_speed[] = "vertical_speed";

static rosidl_runtime_c__type_description__Field mrs_modules_msgs__msg__Bestvel__FIELDS[] = {
  {
    {mrs_modules_msgs__msg__Bestvel__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestvel__FIELD_NAME__tersus_msg_header, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_modules_msgs__msg__TersusMessageHeader__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestvel__FIELD_NAME__solution_status, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestvel__FIELD_NAME__velocity_type, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestvel__FIELD_NAME__latency, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestvel__FIELD_NAME__age, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestvel__FIELD_NAME__horizontal_speed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestvel__FIELD_NAME__track_ground, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestvel__FIELD_NAME__vertical_speed, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_modules_msgs__msg__Bestvel__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TersusMessageHeader__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_modules_msgs__msg__Bestvel__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_modules_msgs__msg__Bestvel__TYPE_NAME, 28, 28},
      {mrs_modules_msgs__msg__Bestvel__FIELDS, 9, 9},
    },
    {mrs_modules_msgs__msg__Bestvel__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_modules_msgs__msg__TersusMessageHeader__EXPECTED_HASH, mrs_modules_msgs__msg__TersusMessageHeader__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrs_modules_msgs__msg__TersusMessageHeader__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# See section 3.1.4 BESTVEL in https://www.tersus-gnss.com/assets/upload/file/20180608173259349.pdf\n"
  "# --------------------------------------------------------------------------------------\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "# message 99\n"
  "TersusMessageHeader tersus_msg_header\n"
  "\n"
  "string solution_status\n"
  "string velocity_type\n"
  "\n"
  "# A measure of the latency in the velocity time tag in seconds.\n"
  "float32 latency\n"
  "\n"
  "# Differential age in seconds\n"
  "float32 age\n"
  "\n"
  "# Horizontal speed over ground, meters/second\n"
  "float64 horizontal_speed\n"
  "\n"
  "# Direction of motion over ground with respect to true North, degrees\n"
  "float64 track_ground\n"
  "\n"
  "# Vertical speed, where positive values correspond to increasing altitude, meters/second\n"
  "float64 vertical_speed";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_modules_msgs__msg__Bestvel__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_modules_msgs__msg__Bestvel__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 711, 711},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_modules_msgs__msg__Bestvel__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_modules_msgs__msg__Bestvel__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mrs_modules_msgs__msg__TersusMessageHeader__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
