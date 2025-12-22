// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_modules_msgs:msg/ParachuteDiagnostics.idl
// generated code does not contain a copyright notice

#include "mrs_modules_msgs/msg/detail/parachute_diagnostics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_modules_msgs
const rosidl_type_hash_t *
mrs_modules_msgs__msg__ParachuteDiagnostics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0x4e, 0xdc, 0xef, 0x16, 0x40, 0xc7, 0x70,
      0xdf, 0x26, 0x79, 0x6b, 0x08, 0x23, 0xb5, 0xa0,
      0xc8, 0x4c, 0xf7, 0x9d, 0xde, 0x2f, 0x92, 0x51,
      0x39, 0x9a, 0x86, 0x06, 0x8c, 0xef, 0x8b, 0x35,
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

static char mrs_modules_msgs__msg__ParachuteDiagnostics__TYPE_NAME[] = "mrs_modules_msgs/msg/ParachuteDiagnostics";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char mrs_modules_msgs__msg__ParachuteDiagnostics__FIELD_NAME__stamp[] = "stamp";
static char mrs_modules_msgs__msg__ParachuteDiagnostics__FIELD_NAME__alive[] = "alive";
static char mrs_modules_msgs__msg__ParachuteDiagnostics__FIELD_NAME__armed[] = "armed";
static char mrs_modules_msgs__msg__ParachuteDiagnostics__FIELD_NAME__fired[] = "fired";

static rosidl_runtime_c__type_description__Field mrs_modules_msgs__msg__ParachuteDiagnostics__FIELDS[] = {
  {
    {mrs_modules_msgs__msg__ParachuteDiagnostics__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__ParachuteDiagnostics__FIELD_NAME__alive, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__ParachuteDiagnostics__FIELD_NAME__armed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__ParachuteDiagnostics__FIELD_NAME__fired, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_modules_msgs__msg__ParachuteDiagnostics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_modules_msgs__msg__ParachuteDiagnostics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_modules_msgs__msg__ParachuteDiagnostics__TYPE_NAME, 41, 41},
      {mrs_modules_msgs__msg__ParachuteDiagnostics__FIELDS, 4, 4},
    },
    {mrs_modules_msgs__msg__ParachuteDiagnostics__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time stamp\n"
  "\n"
  "bool alive\n"
  "bool armed\n"
  "bool fired";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_modules_msgs__msg__ParachuteDiagnostics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_modules_msgs__msg__ParachuteDiagnostics__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 64, 64},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_modules_msgs__msg__ParachuteDiagnostics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_modules_msgs__msg__ParachuteDiagnostics__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
