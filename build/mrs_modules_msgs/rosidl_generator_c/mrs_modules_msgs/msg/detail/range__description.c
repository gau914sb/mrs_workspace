// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_modules_msgs:msg/Range.idl
// generated code does not contain a copyright notice

#include "mrs_modules_msgs/msg/detail/range__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_modules_msgs
const rosidl_type_hash_t *
mrs_modules_msgs__msg__Range__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0xd5, 0xb4, 0xcb, 0xca, 0xf0, 0xd6, 0x33,
      0x10, 0x0b, 0xfa, 0x82, 0x06, 0x7c, 0xe9, 0x75,
      0x06, 0x7a, 0x36, 0xc7, 0x53, 0x40, 0xf8, 0xb8,
      0x80, 0x44, 0x88, 0x15, 0x6c, 0x1e, 0x75, 0x46,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "mrs_modules_msgs/msg/detail/range_information__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "mrs_modules_msgs/msg/detail/tersus_message_header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t mrs_modules_msgs__msg__RangeInformation__EXPECTED_HASH = {1, {
    0x2b, 0x00, 0x29, 0x9d, 0x24, 0x54, 0x51, 0xe1,
    0x5c, 0xa1, 0x9b, 0x67, 0x62, 0xe6, 0xa7, 0x83,
    0x98, 0x94, 0xcf, 0xbd, 0xc7, 0xff, 0xc1, 0xb3,
    0xfa, 0x95, 0x2f, 0xcd, 0x35, 0x57, 0x57, 0x81,
  }};
static const rosidl_type_hash_t mrs_modules_msgs__msg__TersusMessageHeader__EXPECTED_HASH = {1, {
    0x8e, 0x20, 0xcf, 0x69, 0x94, 0x09, 0x94, 0xf1,
    0xc1, 0xb1, 0xf3, 0x91, 0x35, 0x31, 0x51, 0x85,
    0x2e, 0x00, 0xae, 0x3e, 0x9c, 0x6b, 0x68, 0xe3,
    0x72, 0xf2, 0x28, 0x80, 0xf7, 0xc5, 0x24, 0xed,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mrs_modules_msgs__msg__Range__TYPE_NAME[] = "mrs_modules_msgs/msg/Range";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mrs_modules_msgs__msg__RangeInformation__TYPE_NAME[] = "mrs_modules_msgs/msg/RangeInformation";
static char mrs_modules_msgs__msg__TersusMessageHeader__TYPE_NAME[] = "mrs_modules_msgs/msg/TersusMessageHeader";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mrs_modules_msgs__msg__Range__FIELD_NAME__header[] = "header";
static char mrs_modules_msgs__msg__Range__FIELD_NAME__tersus_msg_header[] = "tersus_msg_header";
static char mrs_modules_msgs__msg__Range__FIELD_NAME__numb_of_observ[] = "numb_of_observ";
static char mrs_modules_msgs__msg__Range__FIELD_NAME__info[] = "info";

static rosidl_runtime_c__type_description__Field mrs_modules_msgs__msg__Range__FIELDS[] = {
  {
    {mrs_modules_msgs__msg__Range__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Range__FIELD_NAME__tersus_msg_header, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_modules_msgs__msg__TersusMessageHeader__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Range__FIELD_NAME__numb_of_observ, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Range__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mrs_modules_msgs__msg__RangeInformation__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_modules_msgs__msg__Range__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__RangeInformation__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__TersusMessageHeader__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_modules_msgs__msg__Range__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_modules_msgs__msg__Range__TYPE_NAME, 26, 26},
      {mrs_modules_msgs__msg__Range__FIELDS, 4, 4},
    },
    {mrs_modules_msgs__msg__Range__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_modules_msgs__msg__RangeInformation__EXPECTED_HASH, mrs_modules_msgs__msg__RangeInformation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrs_modules_msgs__msg__RangeInformation__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_modules_msgs__msg__TersusMessageHeader__EXPECTED_HASH, mrs_modules_msgs__msg__TersusMessageHeader__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mrs_modules_msgs__msg__TersusMessageHeader__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#Satellite Range information from Tersus receiver\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "TersusMessageHeader tersus_msg_header\n"
  "\n"
  "#number of observations\n"
  "int32 numb_of_observ\n"
  "\n"
  "#range information for the observed\n"
  "RangeInformation[] info";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_modules_msgs__msg__Range__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_modules_msgs__msg__Range__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 220, 220},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_modules_msgs__msg__Range__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_modules_msgs__msg__Range__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mrs_modules_msgs__msg__RangeInformation__get_individual_type_description_source(NULL);
    sources[3] = *mrs_modules_msgs__msg__TersusMessageHeader__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
