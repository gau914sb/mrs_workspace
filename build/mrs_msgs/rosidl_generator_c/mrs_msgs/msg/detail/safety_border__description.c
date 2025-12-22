// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/SafetyBorder.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/safety_border__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__SafetyBorder__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfc, 0xcc, 0x41, 0x7d, 0x30, 0x50, 0x39, 0x21,
      0xdd, 0x12, 0x7d, 0xdf, 0x45, 0x99, 0x1d, 0x99,
      0xd1, 0x94, 0x5e, 0x36, 0xab, 0x2f, 0xa3, 0x58,
      0x4b, 0xcb, 0xfa, 0x43, 0x2b, 0x93, 0xe5, 0x67,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mrs_msgs/msg/detail/prism__functions.h"
#include "mrs_msgs/msg/detail/point2_d__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
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
#endif

static char mrs_msgs__msg__SafetyBorder__TYPE_NAME[] = "mrs_msgs/msg/SafetyBorder";
static char mrs_msgs__msg__Point2D__TYPE_NAME[] = "mrs_msgs/msg/Point2D";
static char mrs_msgs__msg__Prism__TYPE_NAME[] = "mrs_msgs/msg/Prism";

// Define type names, field names, and default values
static char mrs_msgs__msg__SafetyBorder__FIELD_NAME__prism[] = "prism";
static char mrs_msgs__msg__SafetyBorder__FIELD_NAME__keep_obstacles[] = "keep_obstacles";
static char mrs_msgs__msg__SafetyBorder__FIELD_NAME__update_world_origin[] = "update_world_origin";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__SafetyBorder__FIELDS[] = {
  {
    {mrs_msgs__msg__SafetyBorder__FIELD_NAME__prism, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__msg__Prism__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__SafetyBorder__FIELD_NAME__keep_obstacles, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__SafetyBorder__FIELD_NAME__update_world_origin, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__SafetyBorder__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {mrs_msgs__msg__Point2D__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Prism__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__SafetyBorder__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__SafetyBorder__TYPE_NAME, 25, 25},
      {mrs_msgs__msg__SafetyBorder__FIELDS, 3, 3},
    },
    {mrs_msgs__msg__SafetyBorder__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&mrs_msgs__msg__Point2D__EXPECTED_HASH, mrs_msgs__msg__Point2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = mrs_msgs__msg__Point2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Prism__EXPECTED_HASH, mrs_msgs__msg__Prism__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrs_msgs__msg__Prism__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "mrs_msgs/Prism prism \n"
  "# when true, if there are some obstacles loaded, the new safety zone will keep them, otherwise they will be removed\n"
  "bool keep_obstacles\n"
  "# when true, the safety border centroid will be used to update the world origin\n"
  "bool update_world_origin ";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__SafetyBorder__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__SafetyBorder__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 264, 264},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__SafetyBorder__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__SafetyBorder__get_individual_type_description_source(NULL),
    sources[1] = *mrs_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    sources[2] = *mrs_msgs__msg__Prism__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
