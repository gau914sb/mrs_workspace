// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/GainManagerDiagnostics.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/gain_manager_diagnostics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__GainManagerDiagnostics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0x63, 0x10, 0x3b, 0x93, 0x66, 0x3b, 0x66,
      0x77, 0x9c, 0x99, 0x74, 0x8f, 0x1d, 0x8e, 0x1d,
      0xe1, 0x8a, 0x8d, 0x1c, 0x9e, 0x8b, 0xa6, 0xeb,
      0xe5, 0x26, 0xb1, 0xe8, 0x77, 0x98, 0xcc, 0x65,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mrs_msgs/msg/detail/se3_gains__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__Se3Gains__EXPECTED_HASH = {1, {
    0x48, 0xf9, 0x39, 0x14, 0xf5, 0x92, 0x34, 0x29,
    0x88, 0x75, 0xf7, 0x82, 0x73, 0xb4, 0xfb, 0xd7,
    0x2e, 0xe1, 0x1c, 0x4d, 0x37, 0xd6, 0x60, 0x4f,
    0x1b, 0x47, 0x83, 0xe3, 0xd2, 0x06, 0xe1, 0x9b,
  }};
#endif

static char mrs_msgs__msg__GainManagerDiagnostics__TYPE_NAME[] = "mrs_msgs/msg/GainManagerDiagnostics";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mrs_msgs__msg__Se3Gains__TYPE_NAME[] = "mrs_msgs/msg/Se3Gains";

// Define type names, field names, and default values
static char mrs_msgs__msg__GainManagerDiagnostics__FIELD_NAME__stamp[] = "stamp";
static char mrs_msgs__msg__GainManagerDiagnostics__FIELD_NAME__loaded[] = "loaded";
static char mrs_msgs__msg__GainManagerDiagnostics__FIELD_NAME__available[] = "available";
static char mrs_msgs__msg__GainManagerDiagnostics__FIELD_NAME__current_name[] = "current_name";
static char mrs_msgs__msg__GainManagerDiagnostics__FIELD_NAME__current_values[] = "current_values";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__GainManagerDiagnostics__FIELDS[] = {
  {
    {mrs_msgs__msg__GainManagerDiagnostics__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GainManagerDiagnostics__FIELD_NAME__loaded, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GainManagerDiagnostics__FIELD_NAME__available, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GainManagerDiagnostics__FIELD_NAME__current_name, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GainManagerDiagnostics__FIELD_NAME__current_values, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__msg__Se3Gains__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__GainManagerDiagnostics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Se3Gains__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__GainManagerDiagnostics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__GainManagerDiagnostics__TYPE_NAME, 35, 35},
      {mrs_msgs__msg__GainManagerDiagnostics__FIELDS, 5, 5},
    },
    {mrs_msgs__msg__GainManagerDiagnostics__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Se3Gains__EXPECTED_HASH, mrs_msgs__msg__Se3Gains__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrs_msgs__msg__Se3Gains__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The diagnostics of the GainManager.\n"
  "\n"
  "builtin_interfaces/Time stamp\n"
  "\n"
  "# The list of all loaded gains.\n"
  "string[] loaded\n"
  "\n"
  "# The list of gains which are available for the currently active state estimator.\n"
  "string[] available\n"
  "\n"
  "# The name of the current gains.\n"
  "string current_name\n"
  "\n"
  "# The particular values of the current gains.\n"
  "mrs_msgs/Se3Gains current_values";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__GainManagerDiagnostics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__GainManagerDiagnostics__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 354, 354},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__GainManagerDiagnostics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__GainManagerDiagnostics__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mrs_msgs__msg__Se3Gains__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
