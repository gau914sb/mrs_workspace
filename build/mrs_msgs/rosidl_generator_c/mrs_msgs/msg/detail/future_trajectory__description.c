// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/FutureTrajectory.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/future_trajectory__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__FutureTrajectory__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbb, 0x8c, 0x90, 0x30, 0x47, 0xb0, 0xa6, 0x34,
      0x16, 0x29, 0xce, 0x65, 0x4a, 0x8f, 0x56, 0xfd,
      0xbf, 0x2c, 0x1a, 0x19, 0xe6, 0xf3, 0x1c, 0xaa,
      0x45, 0xe4, 0x3e, 0x01, 0x2d, 0x03, 0x4b, 0xd9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "mrs_msgs/msg/detail/future_point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__FuturePoint__EXPECTED_HASH = {1, {
    0xb7, 0x8d, 0x3c, 0x1c, 0x9b, 0x79, 0x66, 0x3e,
    0x90, 0x8a, 0x9d, 0x20, 0x73, 0xa5, 0x0b, 0x60,
    0xdf, 0x52, 0x43, 0xab, 0xed, 0x2f, 0x8f, 0xe1,
    0x3e, 0x1d, 0xc5, 0x23, 0xfc, 0xce, 0xa5, 0x78,
  }};
#endif

static char mrs_msgs__msg__FutureTrajectory__TYPE_NAME[] = "mrs_msgs/msg/FutureTrajectory";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mrs_msgs__msg__FuturePoint__TYPE_NAME[] = "mrs_msgs/msg/FuturePoint";

// Define type names, field names, and default values
static char mrs_msgs__msg__FutureTrajectory__FIELD_NAME__stamp[] = "stamp";
static char mrs_msgs__msg__FutureTrajectory__FIELD_NAME__uav_name[] = "uav_name";
static char mrs_msgs__msg__FutureTrajectory__FIELD_NAME__priority[] = "priority";
static char mrs_msgs__msg__FutureTrajectory__FIELD_NAME__collision_avoidance[] = "collision_avoidance";
static char mrs_msgs__msg__FutureTrajectory__FIELD_NAME__points[] = "points";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__FutureTrajectory__FIELDS[] = {
  {
    {mrs_msgs__msg__FutureTrajectory__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__FutureTrajectory__FIELD_NAME__uav_name, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__FutureTrajectory__FIELD_NAME__priority, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__FutureTrajectory__FIELD_NAME__collision_avoidance, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__FutureTrajectory__FIELD_NAME__points, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mrs_msgs__msg__FuturePoint__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__FutureTrajectory__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__FuturePoint__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__FutureTrajectory__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__FutureTrajectory__TYPE_NAME, 29, 29},
      {mrs_msgs__msg__FutureTrajectory__FIELDS, 5, 5},
    },
    {mrs_msgs__msg__FutureTrajectory__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__FuturePoint__EXPECTED_HASH, mrs_msgs__msg__FuturePoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrs_msgs__msg__FuturePoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time stamp\n"
  "string uav_name\n"
  "int32 priority\n"
  "bool collision_avoidance\n"
  "FuturePoint[] points";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__FutureTrajectory__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__FutureTrajectory__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 107, 107},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__FutureTrajectory__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__FutureTrajectory__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mrs_msgs__msg__FuturePoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
