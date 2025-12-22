// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/HwApiControlGroupCmd.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/hw_api_control_group_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__HwApiControlGroupCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa7, 0x0c, 0xb8, 0xd7, 0x9a, 0xd2, 0x38, 0x4e,
      0x67, 0xb0, 0xfe, 0x5a, 0xf1, 0xbb, 0xac, 0x7f,
      0x45, 0xd9, 0x69, 0x98, 0x6e, 0x60, 0x1f, 0xc2,
      0xe7, 0xe7, 0xca, 0x3c, 0x4b, 0x7f, 0x39, 0x12,
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

static char mrs_msgs__msg__HwApiControlGroupCmd__TYPE_NAME[] = "mrs_msgs/msg/HwApiControlGroupCmd";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char mrs_msgs__msg__HwApiControlGroupCmd__FIELD_NAME__stamp[] = "stamp";
static char mrs_msgs__msg__HwApiControlGroupCmd__FIELD_NAME__roll[] = "roll";
static char mrs_msgs__msg__HwApiControlGroupCmd__FIELD_NAME__pitch[] = "pitch";
static char mrs_msgs__msg__HwApiControlGroupCmd__FIELD_NAME__yaw[] = "yaw";
static char mrs_msgs__msg__HwApiControlGroupCmd__FIELD_NAME__throttle[] = "throttle";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__HwApiControlGroupCmd__FIELDS[] = {
  {
    {mrs_msgs__msg__HwApiControlGroupCmd__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiControlGroupCmd__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiControlGroupCmd__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiControlGroupCmd__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiControlGroupCmd__FIELD_NAME__throttle, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__HwApiControlGroupCmd__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__HwApiControlGroupCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__HwApiControlGroupCmd__TYPE_NAME, 33, 33},
      {mrs_msgs__msg__HwApiControlGroupCmd__FIELDS, 5, 5},
    },
    {mrs_msgs__msg__HwApiControlGroupCmd__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
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
  "# 4DOF control vector, in the Front-Left-Up body frame\n"
  "#\n"
  "# The control group signals are first passed through a mixer matrix,\n"
  "# then desaturated and applied to the motor outputs [0, 1].\n"
  "float32 roll # [-1, 1]\n"
  "float32 pitch # [-1, 1]\n"
  "float32 yaw # [-1, 1]\n"
  "float32 throttle # [0, 1]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__HwApiControlGroupCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__HwApiControlGroupCmd__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 312, 312},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__HwApiControlGroupCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__HwApiControlGroupCmd__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
