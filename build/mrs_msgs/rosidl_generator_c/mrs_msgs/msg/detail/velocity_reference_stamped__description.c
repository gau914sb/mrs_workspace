// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/VelocityReferenceStamped.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/velocity_reference_stamped__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__VelocityReferenceStamped__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0x3c, 0xb1, 0x5a, 0x2a, 0x03, 0xd6, 0x52,
      0x19, 0x33, 0xff, 0x17, 0xb7, 0x7c, 0x6d, 0xad,
      0xd7, 0x0e, 0x95, 0x2a, 0x37, 0xfa, 0xb3, 0xc6,
      0x34, 0x83, 0x1e, 0x0d, 0x7d, 0x70, 0x79, 0x6f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "mrs_msgs/msg/detail/velocity_reference__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__VelocityReference__EXPECTED_HASH = {1, {
    0x2f, 0xb1, 0x96, 0x9c, 0x23, 0xbe, 0x43, 0x2d,
    0x05, 0x8a, 0xec, 0x82, 0xd7, 0xee, 0xa9, 0x3e,
    0x24, 0xaf, 0x8e, 0xf9, 0xb5, 0xe0, 0xb8, 0x67,
    0x56, 0x5e, 0xf4, 0x20, 0xb3, 0xf9, 0xcc, 0x93,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mrs_msgs__msg__VelocityReferenceStamped__TYPE_NAME[] = "mrs_msgs/msg/VelocityReferenceStamped";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char mrs_msgs__msg__VelocityReference__TYPE_NAME[] = "mrs_msgs/msg/VelocityReference";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mrs_msgs__msg__VelocityReferenceStamped__FIELD_NAME__header[] = "header";
static char mrs_msgs__msg__VelocityReferenceStamped__FIELD_NAME__reference[] = "reference";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__VelocityReferenceStamped__FIELDS[] = {
  {
    {mrs_msgs__msg__VelocityReferenceStamped__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__VelocityReferenceStamped__FIELD_NAME__reference, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__msg__VelocityReference__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__VelocityReferenceStamped__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__VelocityReference__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__VelocityReferenceStamped__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__VelocityReferenceStamped__TYPE_NAME, 37, 37},
      {mrs_msgs__msg__VelocityReferenceStamped__FIELDS, 2, 2},
    },
    {mrs_msgs__msg__VelocityReferenceStamped__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__VelocityReference__EXPECTED_HASH, mrs_msgs__msg__VelocityReference__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mrs_msgs__msg__VelocityReference__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# contains the frame_id = your reference frame of choice\n"
  "std_msgs/Header header\n"
  "\n"
  "mrs_msgs/VelocityReference reference";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__VelocityReferenceStamped__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__VelocityReferenceStamped__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 118, 118},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__VelocityReferenceStamped__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__VelocityReferenceStamped__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[3] = *mrs_msgs__msg__VelocityReference__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
