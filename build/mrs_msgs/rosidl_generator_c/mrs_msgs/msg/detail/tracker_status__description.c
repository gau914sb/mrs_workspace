// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/TrackerStatus.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/tracker_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__TrackerStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x11, 0xab, 0xd1, 0x82, 0xb8, 0xad, 0xac, 0x7b,
      0xa8, 0xd3, 0x13, 0xc4, 0xd4, 0xff, 0x9e, 0x22,
      0xb4, 0xb8, 0xc2, 0xda, 0x41, 0xdb, 0x31, 0x4b,
      0xac, 0xdf, 0xc0, 0x51, 0xb4, 0xe4, 0xee, 0xb3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mrs_msgs/msg/detail/reference_stamped__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "mrs_msgs/msg/detail/reference__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__Reference__EXPECTED_HASH = {1, {
    0xac, 0x0b, 0xfc, 0x8f, 0x9d, 0xde, 0x16, 0xc9,
    0xbc, 0x28, 0x24, 0x38, 0xb7, 0x54, 0x41, 0xec,
    0xba, 0xd7, 0x41, 0xd9, 0x2f, 0xfa, 0x6d, 0x47,
    0xb9, 0xd6, 0xe3, 0x6d, 0x4d, 0x5b, 0x11, 0x17,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__ReferenceStamped__EXPECTED_HASH = {1, {
    0xbe, 0xed, 0xbc, 0x78, 0x47, 0x32, 0x24, 0x9c,
    0xa5, 0xd7, 0xb0, 0x9f, 0x79, 0xe2, 0xb3, 0x5b,
    0x72, 0xa7, 0x76, 0x9e, 0x38, 0x63, 0xf1, 0x6a,
    0x06, 0x82, 0xe4, 0xce, 0xf7, 0xe6, 0x43, 0xf6,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mrs_msgs__msg__TrackerStatus__TYPE_NAME[] = "mrs_msgs/msg/TrackerStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char mrs_msgs__msg__Reference__TYPE_NAME[] = "mrs_msgs/msg/Reference";
static char mrs_msgs__msg__ReferenceStamped__TYPE_NAME[] = "mrs_msgs/msg/ReferenceStamped";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mrs_msgs__msg__TrackerStatus__FIELD_NAME__active[] = "active";
static char mrs_msgs__msg__TrackerStatus__FIELD_NAME__callbacks_enabled[] = "callbacks_enabled";
static char mrs_msgs__msg__TrackerStatus__FIELD_NAME__state[] = "state";
static char mrs_msgs__msg__TrackerStatus__FIELD_NAME__have_goal[] = "have_goal";
static char mrs_msgs__msg__TrackerStatus__FIELD_NAME__tracking_trajectory[] = "tracking_trajectory";
static char mrs_msgs__msg__TrackerStatus__FIELD_NAME__trajectory_length[] = "trajectory_length";
static char mrs_msgs__msg__TrackerStatus__FIELD_NAME__trajectory_idx[] = "trajectory_idx";
static char mrs_msgs__msg__TrackerStatus__FIELD_NAME__trajectory_reference[] = "trajectory_reference";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__TrackerStatus__FIELDS[] = {
  {
    {mrs_msgs__msg__TrackerStatus__FIELD_NAME__active, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerStatus__FIELD_NAME__callbacks_enabled, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerStatus__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerStatus__FIELD_NAME__have_goal, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerStatus__FIELD_NAME__tracking_trajectory, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerStatus__FIELD_NAME__trajectory_length, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerStatus__FIELD_NAME__trajectory_idx, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerStatus__FIELD_NAME__trajectory_reference, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__msg__ReferenceStamped__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__TrackerStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Reference__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ReferenceStamped__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__TrackerStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__TrackerStatus__TYPE_NAME, 26, 26},
      {mrs_msgs__msg__TrackerStatus__FIELDS, 8, 8},
    },
    {mrs_msgs__msg__TrackerStatus__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Reference__EXPECTED_HASH, mrs_msgs__msg__Reference__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mrs_msgs__msg__Reference__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__ReferenceStamped__EXPECTED_HASH, mrs_msgs__msg__ReferenceStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = mrs_msgs__msg__ReferenceStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool active\n"
  "bool callbacks_enabled\n"
  "\n"
  "# current tracker state\n"
  "uint8 state\n"
  "uint8 STATE_INVALID     = 0\n"
  "uint8 STATE_IDLE        = 1\n"
  "uint8 STATE_TAKEOFF     = 2\n"
  "uint8 STATE_HOVER       = 3\n"
  "uint8 STATE_REFERENCE   = 4\n"
  "uint8 STATE_TRAJECTORY  = 5\n"
  "uint8 STATE_LAND        = 6\n"
  "\n"
  "# is true whenever the tracker is doing something\n"
  "# in other words, not idling\n"
  "bool have_goal\n"
  "\n"
  "# is true only then a trajectory is being tracked\n"
  "bool tracking_trajectory\n"
  "\n"
  "int32 trajectory_length\n"
  "int32 trajectory_idx\n"
  "\n"
  "# only when following trajectory\n"
  "# the current reference in the trajectory UNINTERPOLATED\n"
  "mrs_msgs/ReferenceStamped trajectory_reference";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__TrackerStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__TrackerStatus__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 623, 623},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__TrackerStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__TrackerStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *mrs_msgs__msg__Reference__get_individual_type_description_source(NULL);
    sources[4] = *mrs_msgs__msg__ReferenceStamped__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
