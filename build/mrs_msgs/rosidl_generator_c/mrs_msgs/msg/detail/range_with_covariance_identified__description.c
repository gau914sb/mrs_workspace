// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/RangeWithCovarianceIdentified.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/range_with_covariance_identified__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__RangeWithCovarianceIdentified__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x19, 0xe1, 0x5d, 0xb9, 0x40, 0x66, 0x98, 0xc7,
      0x59, 0xe8, 0xe3, 0x77, 0xbd, 0xc1, 0xde, 0x44,
      0x73, 0xc5, 0x1d, 0x01, 0x11, 0xb6, 0xc9, 0x66,
      0x5e, 0xdc, 0x8e, 0xd9, 0xcf, 0x20, 0x21, 0x2a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "sensor_msgs/msg/detail/range__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__Range__EXPECTED_HASH = {1, {
    0xb4, 0x2b, 0x62, 0x56, 0x2e, 0x93, 0xcb, 0xfe,
    0x9d, 0x42, 0xb8, 0x2f, 0xe5, 0x99, 0x4d, 0xfa,
    0x3d, 0x63, 0xd7, 0xd5, 0xc9, 0x0a, 0x31, 0x79,
    0x81, 0x70, 0x3f, 0x73, 0x88, 0xad, 0xff, 0x3a,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mrs_msgs__msg__RangeWithCovarianceIdentified__TYPE_NAME[] = "mrs_msgs/msg/RangeWithCovarianceIdentified";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char sensor_msgs__msg__Range__TYPE_NAME[] = "sensor_msgs/msg/Range";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mrs_msgs__msg__RangeWithCovarianceIdentified__FIELD_NAME__id[] = "id";
static char mrs_msgs__msg__RangeWithCovarianceIdentified__FIELD_NAME__range[] = "range";
static char mrs_msgs__msg__RangeWithCovarianceIdentified__FIELD_NAME__variance[] = "variance";
static char mrs_msgs__msg__RangeWithCovarianceIdentified__FIELD_NAME__power_a[] = "power_a";
static char mrs_msgs__msg__RangeWithCovarianceIdentified__FIELD_NAME__power_b[] = "power_b";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__RangeWithCovarianceIdentified__FIELDS[] = {
  {
    {mrs_msgs__msg__RangeWithCovarianceIdentified__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__RangeWithCovarianceIdentified__FIELD_NAME__range, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__Range__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__RangeWithCovarianceIdentified__FIELD_NAME__variance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__RangeWithCovarianceIdentified__FIELD_NAME__power_a, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__RangeWithCovarianceIdentified__FIELD_NAME__power_b, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__RangeWithCovarianceIdentified__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__Range__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__RangeWithCovarianceIdentified__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__RangeWithCovarianceIdentified__TYPE_NAME, 42, 42},
      {mrs_msgs__msg__RangeWithCovarianceIdentified__FIELDS, 5, 5},
    },
    {mrs_msgs__msg__RangeWithCovarianceIdentified__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__Range__EXPECTED_HASH, sensor_msgs__msg__Range__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = sensor_msgs__msg__Range__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 id\n"
  "sensor_msgs/Range range\n"
  "float64 variance\n"
  "float64 power_a\n"
  "float64 power_b";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__RangeWithCovarianceIdentified__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__RangeWithCovarianceIdentified__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 82, 82},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__RangeWithCovarianceIdentified__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__RangeWithCovarianceIdentified__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sensor_msgs__msg__Range__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
