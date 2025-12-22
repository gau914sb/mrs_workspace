// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/VelocityReference.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/velocity_reference__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__VelocityReference__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2f, 0xb1, 0x96, 0x9c, 0x23, 0xbe, 0x43, 0x2d,
      0x05, 0x8a, 0xec, 0x82, 0xd7, 0xee, 0xa9, 0x3e,
      0x24, 0xaf, 0x8e, 0xf9, 0xb5, 0xe0, 0xb8, 0x67,
      0x56, 0x5e, 0xf4, 0x20, 0xb3, 0xf9, 0xcc, 0x93,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/vector3__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
#endif

static char mrs_msgs__msg__VelocityReference__TYPE_NAME[] = "mrs_msgs/msg/VelocityReference";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";

// Define type names, field names, and default values
static char mrs_msgs__msg__VelocityReference__FIELD_NAME__velocity[] = "velocity";
static char mrs_msgs__msg__VelocityReference__FIELD_NAME__altitude[] = "altitude";
static char mrs_msgs__msg__VelocityReference__FIELD_NAME__heading[] = "heading";
static char mrs_msgs__msg__VelocityReference__FIELD_NAME__heading_rate[] = "heading_rate";
static char mrs_msgs__msg__VelocityReference__FIELD_NAME__use_altitude[] = "use_altitude";
static char mrs_msgs__msg__VelocityReference__FIELD_NAME__use_heading[] = "use_heading";
static char mrs_msgs__msg__VelocityReference__FIELD_NAME__use_heading_rate[] = "use_heading_rate";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__VelocityReference__FIELDS[] = {
  {
    {mrs_msgs__msg__VelocityReference__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__VelocityReference__FIELD_NAME__altitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__VelocityReference__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__VelocityReference__FIELD_NAME__heading_rate, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__VelocityReference__FIELD_NAME__use_altitude, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__VelocityReference__FIELD_NAME__use_heading, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__VelocityReference__FIELD_NAME__use_heading_rate, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__VelocityReference__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__VelocityReference__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__VelocityReference__TYPE_NAME, 30, 30},
      {mrs_msgs__msg__VelocityReference__FIELDS, 7, 7},
    },
    {mrs_msgs__msg__VelocityReference__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# desired velocity [m/s]\n"
  "geometry_msgs/Vector3 velocity\n"
  "\n"
  "# altitude\n"
  "float64 altitude\n"
  "\n"
  "# desired heading and its rate, optional\n"
  "# heading is \"the azimuth of the body-x axis of the drone, a.k.a, the aircraft\\'s front\"\n"
  "float64 heading\n"
  "float64 heading_rate\n"
  "\n"
  "# overrides vertical velocity\n"
  "bool use_altitude\n"
  "\n"
  "bool use_heading\n"
  "\n"
  "# overrides heading\n"
  "bool use_heading_rate";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__VelocityReference__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__VelocityReference__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 362, 362},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__VelocityReference__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__VelocityReference__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
