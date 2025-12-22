// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/GripperDiagnostics.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/gripper_diagnostics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__GripperDiagnostics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0x96, 0xd9, 0x30, 0xb3, 0xb6, 0x94, 0x50,
      0x4f, 0x1c, 0x0c, 0xd6, 0x02, 0xd7, 0xf3, 0x63,
      0x01, 0xa6, 0x52, 0x19, 0x3d, 0x36, 0x26, 0xc8,
      0x74, 0xcf, 0xaa, 0x50, 0x8d, 0x1e, 0x1f, 0x72,
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

static char mrs_msgs__msg__GripperDiagnostics__TYPE_NAME[] = "mrs_msgs/msg/GripperDiagnostics";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__stamp[] = "stamp";
static char mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__gripper_on[] = "gripper_on";
static char mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__gripping_object[] = "gripping_object";
static char mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__has_hall[] = "has_hall";
static char mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__hall1_debug[] = "hall1_debug";
static char mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__hall2_debug[] = "hall2_debug";
static char mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__has_ultrasonic[] = "has_ultrasonic";
static char mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__ultrasonic1_debug[] = "ultrasonic1_debug";
static char mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__ultrasonic2_debug[] = "ultrasonic2_debug";
static char mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__has_proximity[] = "has_proximity";
static char mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__proximity1_debug[] = "proximity1_debug";
static char mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__proximity2_debug[] = "proximity2_debug";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__GripperDiagnostics__FIELDS[] = {
  {
    {mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__gripper_on, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__gripping_object, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__has_hall, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__hall1_debug, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__hall2_debug, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__has_ultrasonic, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__ultrasonic1_debug, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__ultrasonic2_debug, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__has_proximity, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__proximity1_debug, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GripperDiagnostics__FIELD_NAME__proximity2_debug, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__GripperDiagnostics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__GripperDiagnostics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__GripperDiagnostics__TYPE_NAME, 31, 31},
      {mrs_msgs__msg__GripperDiagnostics__FIELDS, 12, 12},
    },
    {mrs_msgs__msg__GripperDiagnostics__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
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
  "bool gripper_on\n"
  "bool gripping_object\n"
  "\n"
  "bool has_hall\n"
  "int32 hall1_debug\n"
  "int32 hall2_debug\n"
  "\n"
  "bool has_ultrasonic\n"
  "int32 ultrasonic1_debug\n"
  "int32 ultrasonic2_debug\n"
  "\n"
  "bool has_proximity\n"
  "int32 proximity1_debug\n"
  "int32 proximity2_debug";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__GripperDiagnostics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__GripperDiagnostics__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 254, 254},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__GripperDiagnostics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__GripperDiagnostics__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
