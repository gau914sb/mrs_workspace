// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/Prism.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/prism__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__Prism__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0xbb, 0x96, 0x60, 0x86, 0xdf, 0x6f, 0xd7,
      0x96, 0xb8, 0x80, 0x99, 0x16, 0x17, 0x25, 0x3a,
      0x48, 0x0e, 0xd3, 0x44, 0xa2, 0x28, 0xa4, 0xff,
      0xbf, 0x00, 0xdc, 0x8f, 0x2e, 0x0b, 0x6f, 0xef,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mrs_msgs/msg/detail/point2_d__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t mrs_msgs__msg__Point2D__EXPECTED_HASH = {1, {
    0x8b, 0x29, 0xc1, 0xd6, 0x5b, 0xaa, 0x59, 0x27,
    0x24, 0x76, 0xbe, 0x8e, 0x76, 0x8a, 0xd2, 0x03,
    0x93, 0x4c, 0xf5, 0xac, 0x4c, 0xe4, 0x93, 0xc4,
    0xd6, 0x26, 0x1f, 0x5d, 0x8b, 0xf1, 0xec, 0x2f,
  }};
#endif

static char mrs_msgs__msg__Prism__TYPE_NAME[] = "mrs_msgs/msg/Prism";
static char mrs_msgs__msg__Point2D__TYPE_NAME[] = "mrs_msgs/msg/Point2D";

// Define type names, field names, and default values
static char mrs_msgs__msg__Prism__FIELD_NAME__horizontal_frame[] = "horizontal_frame";
static char mrs_msgs__msg__Prism__FIELD_NAME__vertical_frame[] = "vertical_frame";
static char mrs_msgs__msg__Prism__FIELD_NAME__points[] = "points";
static char mrs_msgs__msg__Prism__FIELD_NAME__max_z[] = "max_z";
static char mrs_msgs__msg__Prism__FIELD_NAME__min_z[] = "min_z";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__Prism__FIELDS[] = {
  {
    {mrs_msgs__msg__Prism__FIELD_NAME__horizontal_frame, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Prism__FIELD_NAME__vertical_frame, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Prism__FIELD_NAME__points, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mrs_msgs__msg__Point2D__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Prism__FIELD_NAME__max_z, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Prism__FIELD_NAME__min_z, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__Prism__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {mrs_msgs__msg__Point2D__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__Prism__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__Prism__TYPE_NAME, 18, 18},
      {mrs_msgs__msg__Prism__FIELDS, 5, 5},
    },
    {mrs_msgs__msg__Prism__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&mrs_msgs__msg__Point2D__EXPECTED_HASH, mrs_msgs__msg__Point2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = mrs_msgs__msg__Point2D__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string horizontal_frame\n"
  "string vertical_frame\n"
  "mrs_msgs/Point2D[] points\n"
  "float64 max_z\n"
  "float64 min_z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__Prism__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__Prism__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 100, 100},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__Prism__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__Prism__get_individual_type_description_source(NULL),
    sources[1] = *mrs_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
