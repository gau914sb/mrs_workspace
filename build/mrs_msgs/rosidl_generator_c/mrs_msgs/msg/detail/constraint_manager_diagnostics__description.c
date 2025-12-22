// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/ConstraintManagerDiagnostics.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/constraint_manager_diagnostics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__ConstraintManagerDiagnostics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd8, 0x98, 0x34, 0xaa, 0x7f, 0x43, 0x27, 0xb4,
      0x4d, 0xde, 0xe1, 0x38, 0x4f, 0x83, 0xad, 0x5d,
      0x1b, 0x29, 0x4f, 0x11, 0xfb, 0x50, 0xfa, 0xe1,
      0x7a, 0xae, 0x5f, 0xd4, 0x70, 0x13, 0x36, 0x0f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mrs_msgs/msg/detail/dynamics_constraints__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__DynamicsConstraints__EXPECTED_HASH = {1, {
    0xe5, 0xfc, 0x53, 0x2b, 0x43, 0x5a, 0xe9, 0xb4,
    0xa4, 0xd7, 0x03, 0x76, 0x3d, 0x8f, 0x75, 0xdc,
    0xb8, 0xf9, 0xee, 0xb9, 0x82, 0x92, 0xe2, 0xce,
    0x1e, 0xfa, 0x88, 0x8e, 0x85, 0x4c, 0x3c, 0x36,
  }};
#endif

static char mrs_msgs__msg__ConstraintManagerDiagnostics__TYPE_NAME[] = "mrs_msgs/msg/ConstraintManagerDiagnostics";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mrs_msgs__msg__DynamicsConstraints__TYPE_NAME[] = "mrs_msgs/msg/DynamicsConstraints";

// Define type names, field names, and default values
static char mrs_msgs__msg__ConstraintManagerDiagnostics__FIELD_NAME__stamp[] = "stamp";
static char mrs_msgs__msg__ConstraintManagerDiagnostics__FIELD_NAME__loaded[] = "loaded";
static char mrs_msgs__msg__ConstraintManagerDiagnostics__FIELD_NAME__available[] = "available";
static char mrs_msgs__msg__ConstraintManagerDiagnostics__FIELD_NAME__current_name[] = "current_name";
static char mrs_msgs__msg__ConstraintManagerDiagnostics__FIELD_NAME__current_values[] = "current_values";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__ConstraintManagerDiagnostics__FIELDS[] = {
  {
    {mrs_msgs__msg__ConstraintManagerDiagnostics__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ConstraintManagerDiagnostics__FIELD_NAME__loaded, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ConstraintManagerDiagnostics__FIELD_NAME__available, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ConstraintManagerDiagnostics__FIELD_NAME__current_name, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ConstraintManagerDiagnostics__FIELD_NAME__current_values, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__msg__DynamicsConstraints__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__ConstraintManagerDiagnostics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__DynamicsConstraints__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__ConstraintManagerDiagnostics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__ConstraintManagerDiagnostics__TYPE_NAME, 41, 41},
      {mrs_msgs__msg__ConstraintManagerDiagnostics__FIELDS, 5, 5},
    },
    {mrs_msgs__msg__ConstraintManagerDiagnostics__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__DynamicsConstraints__EXPECTED_HASH, mrs_msgs__msg__DynamicsConstraints__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrs_msgs__msg__DynamicsConstraints__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The diagnostics of the ConstraintManager.\n"
  "\n"
  "builtin_interfaces/Time stamp\n"
  "\n"
  "# The list of all loaded constraints.\n"
  "string[] loaded\n"
  "\n"
  "# The list of constraints which are available for the currently active state estimator.\n"
  "string[] available\n"
  "\n"
  "# The name of the current constraints.\n"
  "string current_name\n"
  "\n"
  "# The particular values of the current constraints.\n"
  "# Beware, those might be overloaded by the current controller.\n"
  "# Subscribe to \"control_manager/current_constraints\" for the\n"
  "# true values.\n"
  "mrs_msgs/DynamicsConstraints current_values";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__ConstraintManagerDiagnostics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__ConstraintManagerDiagnostics__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 534, 534},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__ConstraintManagerDiagnostics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__ConstraintManagerDiagnostics__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mrs_msgs__msg__DynamicsConstraints__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
