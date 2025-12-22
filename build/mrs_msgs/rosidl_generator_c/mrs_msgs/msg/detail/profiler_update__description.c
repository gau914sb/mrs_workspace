// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/ProfilerUpdate.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/profiler_update__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__ProfilerUpdate__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1b, 0xf6, 0x69, 0x96, 0x69, 0x0c, 0x60, 0xaa,
      0x6c, 0x77, 0x17, 0x55, 0x35, 0xe6, 0x71, 0xef,
      0x2b, 0x12, 0x04, 0x55, 0x05, 0x8d, 0x5d, 0x52,
      0xd5, 0x03, 0xb0, 0xf0, 0x19, 0x23, 0xa9, 0xca,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char mrs_msgs__msg__ProfilerUpdate__TYPE_NAME[] = "mrs_msgs/msg/ProfilerUpdate";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char mrs_msgs__msg__ProfilerUpdate__FIELD_NAME__stamp[] = "stamp";
static char mrs_msgs__msg__ProfilerUpdate__FIELD_NAME__node_name[] = "node_name";
static char mrs_msgs__msg__ProfilerUpdate__FIELD_NAME__routine_name[] = "routine_name";
static char mrs_msgs__msg__ProfilerUpdate__FIELD_NAME__iteration[] = "iteration";
static char mrs_msgs__msg__ProfilerUpdate__FIELD_NAME__duration[] = "duration";
static char mrs_msgs__msg__ProfilerUpdate__FIELD_NAME__event[] = "event";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__ProfilerUpdate__FIELDS[] = {
  {
    {mrs_msgs__msg__ProfilerUpdate__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ProfilerUpdate__FIELD_NAME__node_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ProfilerUpdate__FIELD_NAME__routine_name, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ProfilerUpdate__FIELD_NAME__iteration, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ProfilerUpdate__FIELD_NAME__duration, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ProfilerUpdate__FIELD_NAME__event, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__ProfilerUpdate__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__ProfilerUpdate__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__ProfilerUpdate__TYPE_NAME, 27, 27},
      {mrs_msgs__msg__ProfilerUpdate__FIELDS, 6, 6},
    },
    {mrs_msgs__msg__ProfilerUpdate__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string START=start\n"
  "string END=end\n"
  "builtin_interfaces/Time stamp\n"
  "string node_name\n"
  "string routine_name\n"
  "int64 iteration\n"
  "float64 duration\n"
  "string event";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__ProfilerUpdate__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__ProfilerUpdate__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 147, 147},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__ProfilerUpdate__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__ProfilerUpdate__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
