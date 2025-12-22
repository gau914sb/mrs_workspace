// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/ErrorgraphElementArray.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/errorgraph_element_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__ErrorgraphElementArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6f, 0x2a, 0x00, 0x31, 0x78, 0xb7, 0x7c, 0x1f,
      0xec, 0xc4, 0xb6, 0xee, 0xed, 0xcd, 0x47, 0x2b,
      0x14, 0x7b, 0x83, 0x1b, 0x80, 0xba, 0xa1, 0xc3,
      0x6d, 0xbe, 0x56, 0x9b, 0x7a, 0x51, 0x53, 0x36,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mrs_msgs/msg/detail/errorgraph_error__functions.h"
#include "mrs_msgs/msg/detail/errorgraph_element__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "mrs_msgs/msg/detail/errorgraph_node_id__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__ErrorgraphElement__EXPECTED_HASH = {1, {
    0x6a, 0x24, 0x9b, 0xd0, 0x89, 0x00, 0xfe, 0x34,
    0x8b, 0x8e, 0x1a, 0x9b, 0x30, 0x56, 0x46, 0x48,
    0x2a, 0x13, 0x61, 0xfd, 0xa0, 0x66, 0xd1, 0xcd,
    0x73, 0xda, 0x40, 0x6b, 0x6c, 0xeb, 0xc0, 0x9d,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__ErrorgraphError__EXPECTED_HASH = {1, {
    0x7e, 0x8d, 0xfc, 0xe3, 0x40, 0x6d, 0x65, 0x3a,
    0x10, 0xf7, 0x22, 0xf3, 0x83, 0x4a, 0xd2, 0x52,
    0xf8, 0x4a, 0x5b, 0x5f, 0xcd, 0xb5, 0x3b, 0xb7,
    0x7b, 0xb1, 0xb2, 0xd5, 0x5f, 0x06, 0x2d, 0x7b,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__ErrorgraphNodeID__EXPECTED_HASH = {1, {
    0xe1, 0xed, 0x78, 0x53, 0x26, 0xee, 0xf1, 0xbd,
    0x09, 0x56, 0x7c, 0x7d, 0xa5, 0x4e, 0x14, 0x26,
    0x9c, 0x33, 0x7f, 0x4d, 0x51, 0xec, 0x7e, 0xfa,
    0x83, 0xae, 0xdf, 0x57, 0xf8, 0x2f, 0x89, 0x11,
  }};
#endif

static char mrs_msgs__msg__ErrorgraphElementArray__TYPE_NAME[] = "mrs_msgs/msg/ErrorgraphElementArray";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mrs_msgs__msg__ErrorgraphElement__TYPE_NAME[] = "mrs_msgs/msg/ErrorgraphElement";
static char mrs_msgs__msg__ErrorgraphError__TYPE_NAME[] = "mrs_msgs/msg/ErrorgraphError";
static char mrs_msgs__msg__ErrorgraphNodeID__TYPE_NAME[] = "mrs_msgs/msg/ErrorgraphNodeID";

// Define type names, field names, and default values
static char mrs_msgs__msg__ErrorgraphElementArray__FIELD_NAME__stamp[] = "stamp";
static char mrs_msgs__msg__ErrorgraphElementArray__FIELD_NAME__elements[] = "elements";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__ErrorgraphElementArray__FIELDS[] = {
  {
    {mrs_msgs__msg__ErrorgraphElementArray__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ErrorgraphElementArray__FIELD_NAME__elements, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mrs_msgs__msg__ErrorgraphElement__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__ErrorgraphElementArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ErrorgraphElement__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ErrorgraphError__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ErrorgraphNodeID__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__ErrorgraphElementArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__ErrorgraphElementArray__TYPE_NAME, 35, 35},
      {mrs_msgs__msg__ErrorgraphElementArray__FIELDS, 2, 2},
    },
    {mrs_msgs__msg__ErrorgraphElementArray__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__ErrorgraphElement__EXPECTED_HASH, mrs_msgs__msg__ErrorgraphElement__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrs_msgs__msg__ErrorgraphElement__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__ErrorgraphError__EXPECTED_HASH, mrs_msgs__msg__ErrorgraphError__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mrs_msgs__msg__ErrorgraphError__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__ErrorgraphNodeID__EXPECTED_HASH, mrs_msgs__msg__ErrorgraphNodeID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = mrs_msgs__msg__ErrorgraphNodeID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time stamp\n"
  "\n"
  "ErrorgraphElement[] elements";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__ErrorgraphElementArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__ErrorgraphElementArray__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 60, 60},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__ErrorgraphElementArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__ErrorgraphElementArray__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mrs_msgs__msg__ErrorgraphElement__get_individual_type_description_source(NULL);
    sources[3] = *mrs_msgs__msg__ErrorgraphError__get_individual_type_description_source(NULL);
    sources[4] = *mrs_msgs__msg__ErrorgraphNodeID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
