// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/ReferenceWithVelocity.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/reference_with_velocity__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__ReferenceWithVelocity__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0x92, 0x03, 0xdd, 0xe8, 0xcf, 0xe4, 0x54,
      0xca, 0x44, 0xac, 0xf1, 0x61, 0x56, 0x78, 0x2c,
      0x0e, 0xce, 0x89, 0xa1, 0xf6, 0x10, 0x51, 0x89,
      0xf3, 0xa2, 0x2d, 0x72, 0x57, 0x1d, 0x77, 0xfa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
#endif

static char mrs_msgs__msg__ReferenceWithVelocity__TYPE_NAME[] = "mrs_msgs/msg/ReferenceWithVelocity";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";

// Define type names, field names, and default values
static char mrs_msgs__msg__ReferenceWithVelocity__FIELD_NAME__position[] = "position";
static char mrs_msgs__msg__ReferenceWithVelocity__FIELD_NAME__heading[] = "heading";
static char mrs_msgs__msg__ReferenceWithVelocity__FIELD_NAME__enforce_velocity[] = "enforce_velocity";
static char mrs_msgs__msg__ReferenceWithVelocity__FIELD_NAME__velocity[] = "velocity";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__ReferenceWithVelocity__FIELDS[] = {
  {
    {mrs_msgs__msg__ReferenceWithVelocity__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ReferenceWithVelocity__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ReferenceWithVelocity__FIELD_NAME__enforce_velocity, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ReferenceWithVelocity__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__ReferenceWithVelocity__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__ReferenceWithVelocity__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__ReferenceWithVelocity__TYPE_NAME, 34, 34},
      {mrs_msgs__msg__ReferenceWithVelocity__FIELDS, 4, 4},
    },
    {mrs_msgs__msg__ReferenceWithVelocity__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message defines a control reference with a Position+Heading.\n"
  "\n"
  "geometry_msgs/Point position\n"
  "\n"
  "# Heading is atan2() of XY-world projection of the UAV's body X-axis.\n"
  "float64 heading\n"
  "\n"
  "bool enforce_velocity\n"
  "geometry_msgs/Vector3 velocity";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__ReferenceWithVelocity__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__ReferenceWithVelocity__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 239, 239},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__ReferenceWithVelocity__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__ReferenceWithVelocity__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
