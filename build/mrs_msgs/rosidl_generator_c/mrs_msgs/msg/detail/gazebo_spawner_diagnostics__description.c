// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/GazeboSpawnerDiagnostics.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/gazebo_spawner_diagnostics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__GazeboSpawnerDiagnostics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x18, 0x5c, 0x1a, 0x38, 0x3c, 0xa1, 0x61, 0x13,
      0xe3, 0xf8, 0x58, 0x8a, 0x6a, 0x47, 0x59, 0xfe,
      0x68, 0x11, 0x9f, 0x5f, 0x90, 0x97, 0x05, 0x33,
      0xa3, 0x77, 0x96, 0xff, 0x52, 0x87, 0x16, 0x68,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_msgs__msg__GazeboSpawnerDiagnostics__TYPE_NAME[] = "mrs_msgs/msg/GazeboSpawnerDiagnostics";

// Define type names, field names, and default values
static char mrs_msgs__msg__GazeboSpawnerDiagnostics__FIELD_NAME__spawn_called[] = "spawn_called";
static char mrs_msgs__msg__GazeboSpawnerDiagnostics__FIELD_NAME__processing[] = "processing";
static char mrs_msgs__msg__GazeboSpawnerDiagnostics__FIELD_NAME__active_vehicles[] = "active_vehicles";
static char mrs_msgs__msg__GazeboSpawnerDiagnostics__FIELD_NAME__queued_vehicles[] = "queued_vehicles";
static char mrs_msgs__msg__GazeboSpawnerDiagnostics__FIELD_NAME__queued_processes[] = "queued_processes";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__GazeboSpawnerDiagnostics__FIELDS[] = {
  {
    {mrs_msgs__msg__GazeboSpawnerDiagnostics__FIELD_NAME__spawn_called, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GazeboSpawnerDiagnostics__FIELD_NAME__processing, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GazeboSpawnerDiagnostics__FIELD_NAME__active_vehicles, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GazeboSpawnerDiagnostics__FIELD_NAME__queued_vehicles, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GazeboSpawnerDiagnostics__FIELD_NAME__queued_processes, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__GazeboSpawnerDiagnostics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__GazeboSpawnerDiagnostics__TYPE_NAME, 37, 37},
      {mrs_msgs__msg__GazeboSpawnerDiagnostics__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool spawn_called\n"
  "bool processing\n"
  "string[] active_vehicles\n"
  "string[] queued_vehicles\n"
  "uint8 queued_processes";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__GazeboSpawnerDiagnostics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__GazeboSpawnerDiagnostics__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 107, 107},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__GazeboSpawnerDiagnostics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__GazeboSpawnerDiagnostics__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
