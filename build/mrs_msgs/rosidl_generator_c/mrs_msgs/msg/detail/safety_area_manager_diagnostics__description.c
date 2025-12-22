// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/SafetyAreaManagerDiagnostics.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/safety_area_manager_diagnostics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__SafetyAreaManagerDiagnostics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9f, 0x20, 0x91, 0xe1, 0x85, 0x67, 0xd7, 0xe3,
      0x25, 0x07, 0xcb, 0x30, 0xb4, 0x47, 0xda, 0x8f,
      0x6d, 0x73, 0xdd, 0xf7, 0x16, 0xa2, 0x4f, 0x19,
      0x7c, 0xa7, 0x2b, 0x56, 0x6a, 0x9a, 0x0e, 0x52,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "mrs_msgs/msg/detail/prism__functions.h"
#include "mrs_msgs/msg/detail/point2_d__functions.h"
#include "mrs_msgs/msg/detail/world_origin__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__Point2D__EXPECTED_HASH = {1, {
    0x8b, 0x29, 0xc1, 0xd6, 0x5b, 0xaa, 0x59, 0x27,
    0x24, 0x76, 0xbe, 0x8e, 0x76, 0x8a, 0xd2, 0x03,
    0x93, 0x4c, 0xf5, 0xac, 0x4c, 0xe4, 0x93, 0xc4,
    0xd6, 0x26, 0x1f, 0x5d, 0x8b, 0xf1, 0xec, 0x2f,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__Prism__EXPECTED_HASH = {1, {
    0xd9, 0xbb, 0x96, 0x60, 0x86, 0xdf, 0x6f, 0xd7,
    0x96, 0xb8, 0x80, 0x99, 0x16, 0x17, 0x25, 0x3a,
    0x48, 0x0e, 0xd3, 0x44, 0xa2, 0x28, 0xa4, 0xff,
    0xbf, 0x00, 0xdc, 0x8f, 0x2e, 0x0b, 0x6f, 0xef,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__WorldOrigin__EXPECTED_HASH = {1, {
    0xd7, 0x76, 0x7f, 0x09, 0x1b, 0xd6, 0x5c, 0x83,
    0xcf, 0xe8, 0xac, 0xce, 0x90, 0x2e, 0xdd, 0x3e,
    0x82, 0x50, 0x59, 0x25, 0x85, 0xef, 0x43, 0x0b,
    0xbc, 0x36, 0x00, 0xbb, 0x56, 0x6b, 0xb8, 0x33,
  }};
#endif

static char mrs_msgs__msg__SafetyAreaManagerDiagnostics__TYPE_NAME[] = "mrs_msgs/msg/SafetyAreaManagerDiagnostics";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mrs_msgs__msg__Point2D__TYPE_NAME[] = "mrs_msgs/msg/Point2D";
static char mrs_msgs__msg__Prism__TYPE_NAME[] = "mrs_msgs/msg/Prism";
static char mrs_msgs__msg__WorldOrigin__TYPE_NAME[] = "mrs_msgs/msg/WorldOrigin";

// Define type names, field names, and default values
static char mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELD_NAME__stamp[] = "stamp";
static char mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELD_NAME__uav_name[] = "uav_name";
static char mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELD_NAME__world_origin[] = "world_origin";
static char mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELD_NAME__safety_area_enabled[] = "safety_area_enabled";
static char mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELD_NAME__position_valid_2d[] = "position_valid_2d";
static char mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELD_NAME__position_valid_3d[] = "position_valid_3d";
static char mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELD_NAME__border[] = "border";
static char mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELD_NAME__obstacles_present[] = "obstacles_present";
static char mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELD_NAME__obstacles[] = "obstacles";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELDS[] = {
  {
    {mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELD_NAME__uav_name, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELD_NAME__world_origin, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__msg__WorldOrigin__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELD_NAME__safety_area_enabled, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELD_NAME__position_valid_2d, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELD_NAME__position_valid_3d, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELD_NAME__border, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__msg__Prism__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELD_NAME__obstacles_present, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELD_NAME__obstacles, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mrs_msgs__msg__Prism__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__SafetyAreaManagerDiagnostics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Point2D__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Prism__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__WorldOrigin__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__SafetyAreaManagerDiagnostics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__SafetyAreaManagerDiagnostics__TYPE_NAME, 41, 41},
      {mrs_msgs__msg__SafetyAreaManagerDiagnostics__FIELDS, 9, 9},
    },
    {mrs_msgs__msg__SafetyAreaManagerDiagnostics__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Point2D__EXPECTED_HASH, mrs_msgs__msg__Point2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrs_msgs__msg__Point2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Prism__EXPECTED_HASH, mrs_msgs__msg__Prism__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mrs_msgs__msg__Prism__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__WorldOrigin__EXPECTED_HASH, mrs_msgs__msg__WorldOrigin__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = mrs_msgs__msg__WorldOrigin__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time stamp\n"
  "string uav_name\n"
  "mrs_msgs/WorldOrigin world_origin\n"
  "bool safety_area_enabled\n"
  "bool position_valid_2d\n"
  "bool position_valid_3d\n"
  "mrs_msgs/Prism border\n"
  "bool obstacles_present\n"
  "mrs_msgs/Prism[] obstacles\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__SafetyAreaManagerDiagnostics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__SafetyAreaManagerDiagnostics__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 224, 224},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__SafetyAreaManagerDiagnostics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__SafetyAreaManagerDiagnostics__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mrs_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    sources[3] = *mrs_msgs__msg__Prism__get_individual_type_description_source(NULL);
    sources[4] = *mrs_msgs__msg__WorldOrigin__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
