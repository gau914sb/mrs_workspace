// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/ErrorgraphNodeID.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/errorgraph_node_id__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__ErrorgraphNodeID__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe1, 0xed, 0x78, 0x53, 0x26, 0xee, 0xf1, 0xbd,
      0x09, 0x56, 0x7c, 0x7d, 0xa5, 0x4e, 0x14, 0x26,
      0x9c, 0x33, 0x7f, 0x4d, 0x51, 0xec, 0x7e, 0xfa,
      0x83, 0xae, 0xdf, 0x57, 0xf8, 0x2f, 0x89, 0x11,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_msgs__msg__ErrorgraphNodeID__TYPE_NAME[] = "mrs_msgs/msg/ErrorgraphNodeID";

// Define type names, field names, and default values
static char mrs_msgs__msg__ErrorgraphNodeID__FIELD_NAME__node[] = "node";
static char mrs_msgs__msg__ErrorgraphNodeID__FIELD_NAME__component[] = "component";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__ErrorgraphNodeID__FIELDS[] = {
  {
    {mrs_msgs__msg__ErrorgraphNodeID__FIELD_NAME__node, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ErrorgraphNodeID__FIELD_NAME__component, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__ErrorgraphNodeID__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__ErrorgraphNodeID__TYPE_NAME, 29, 29},
      {mrs_msgs__msg__ErrorgraphNodeID__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# unique identifier of a node that can be a source of an error\n"
  "string node\n"
  "# optional identifier of a component within the node\n"
  "string component";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__ErrorgraphNodeID__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__ErrorgraphNodeID__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 145, 145},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__ErrorgraphNodeID__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__ErrorgraphNodeID__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
