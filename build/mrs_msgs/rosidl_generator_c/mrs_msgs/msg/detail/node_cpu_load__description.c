// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/NodeCpuLoad.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/node_cpu_load__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__NodeCpuLoad__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb5, 0xd6, 0xd5, 0x33, 0x00, 0xf9, 0x03, 0xb6,
      0x65, 0xa7, 0x58, 0x16, 0x24, 0x8e, 0xe8, 0x73,
      0x92, 0xd7, 0x8d, 0x4f, 0x01, 0x0a, 0x79, 0x63,
      0x3d, 0x16, 0x37, 0x42, 0xba, 0x97, 0xec, 0x11,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_msgs__msg__NodeCpuLoad__TYPE_NAME[] = "mrs_msgs/msg/NodeCpuLoad";

// Define type names, field names, and default values
static char mrs_msgs__msg__NodeCpuLoad__FIELD_NAME__node_names[] = "node_names";
static char mrs_msgs__msg__NodeCpuLoad__FIELD_NAME__cpu_loads[] = "cpu_loads";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__NodeCpuLoad__FIELDS[] = {
  {
    {mrs_msgs__msg__NodeCpuLoad__FIELD_NAME__node_names, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__NodeCpuLoad__FIELD_NAME__cpu_loads, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__NodeCpuLoad__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__NodeCpuLoad__TYPE_NAME, 24, 24},
      {mrs_msgs__msg__NodeCpuLoad__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# A list of names of all ROS nodes running on this UAV\n"
  "string[] node_names\n"
  "# A list of the corresponding CPU loads of these nodes relative to a single CPU core (i.e. a maximal load of a 2-core CPU is 200.0)\n"
  "float32[] cpu_loads";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__NodeCpuLoad__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__NodeCpuLoad__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 227, 227},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__NodeCpuLoad__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__NodeCpuLoad__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
