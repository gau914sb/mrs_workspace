// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/path__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__Path__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa3, 0xdc, 0x0c, 0x00, 0x7e, 0x44, 0x91, 0xc5,
      0x41, 0xbd, 0x9a, 0xa5, 0xf1, 0xb7, 0xcc, 0x74,
      0x4e, 0xf4, 0xed, 0xd4, 0xa4, 0xaf, 0xed, 0x3a,
      0x6d, 0xb4, 0x0d, 0xd3, 0xb1, 0x13, 0xdd, 0xbb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "mrs_msgs/msg/detail/reference__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

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
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mrs_msgs__msg__Path__TYPE_NAME[] = "mrs_msgs/msg/Path";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char mrs_msgs__msg__Reference__TYPE_NAME[] = "mrs_msgs/msg/Reference";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mrs_msgs__msg__Path__FIELD_NAME__header[] = "header";
static char mrs_msgs__msg__Path__FIELD_NAME__input_id[] = "input_id";
static char mrs_msgs__msg__Path__FIELD_NAME__use_heading[] = "use_heading";
static char mrs_msgs__msg__Path__FIELD_NAME__fly_now[] = "fly_now";
static char mrs_msgs__msg__Path__FIELD_NAME__stop_at_waypoints[] = "stop_at_waypoints";
static char mrs_msgs__msg__Path__FIELD_NAME__loop[] = "loop";
static char mrs_msgs__msg__Path__FIELD_NAME__max_execution_time[] = "max_execution_time";
static char mrs_msgs__msg__Path__FIELD_NAME__max_deviation_from_path[] = "max_deviation_from_path";
static char mrs_msgs__msg__Path__FIELD_NAME__dont_prepend_current_state[] = "dont_prepend_current_state";
static char mrs_msgs__msg__Path__FIELD_NAME__override_heading_atan2[] = "override_heading_atan2";
static char mrs_msgs__msg__Path__FIELD_NAME__override_constraints[] = "override_constraints";
static char mrs_msgs__msg__Path__FIELD_NAME__override_max_velocity_horizontal[] = "override_max_velocity_horizontal";
static char mrs_msgs__msg__Path__FIELD_NAME__override_max_acceleration_horizontal[] = "override_max_acceleration_horizontal";
static char mrs_msgs__msg__Path__FIELD_NAME__override_max_jerk_horizontal[] = "override_max_jerk_horizontal";
static char mrs_msgs__msg__Path__FIELD_NAME__override_max_velocity_vertical[] = "override_max_velocity_vertical";
static char mrs_msgs__msg__Path__FIELD_NAME__override_max_acceleration_vertical[] = "override_max_acceleration_vertical";
static char mrs_msgs__msg__Path__FIELD_NAME__override_max_jerk_vertical[] = "override_max_jerk_vertical";
static char mrs_msgs__msg__Path__FIELD_NAME__relax_heading[] = "relax_heading";
static char mrs_msgs__msg__Path__FIELD_NAME__points[] = "points";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__Path__FIELDS[] = {
  {
    {mrs_msgs__msg__Path__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Path__FIELD_NAME__input_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Path__FIELD_NAME__use_heading, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Path__FIELD_NAME__fly_now, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Path__FIELD_NAME__stop_at_waypoints, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Path__FIELD_NAME__loop, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Path__FIELD_NAME__max_execution_time, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Path__FIELD_NAME__max_deviation_from_path, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Path__FIELD_NAME__dont_prepend_current_state, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Path__FIELD_NAME__override_heading_atan2, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Path__FIELD_NAME__override_constraints, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Path__FIELD_NAME__override_max_velocity_horizontal, 32, 32},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Path__FIELD_NAME__override_max_acceleration_horizontal, 36, 36},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Path__FIELD_NAME__override_max_jerk_horizontal, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Path__FIELD_NAME__override_max_velocity_vertical, 30, 30},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Path__FIELD_NAME__override_max_acceleration_vertical, 34, 34},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Path__FIELD_NAME__override_max_jerk_vertical, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Path__FIELD_NAME__relax_heading, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Path__FIELD_NAME__points, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mrs_msgs__msg__Reference__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__Path__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__Path__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__Path__TYPE_NAME, 17, 17},
      {mrs_msgs__msg__Path__FIELDS, 19, 19},
    },
    {mrs_msgs__msg__Path__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Reference__EXPECTED_HASH, mrs_msgs__msg__Reference__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mrs_msgs__msg__Reference__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "int64 input_id\n"
  "\n"
  "bool use_heading\n"
  "bool fly_now\n"
  "bool stop_at_waypoints\n"
  "bool loop\n"
  "\n"
  "# how much time [s] is given to the solver (fallback sampling is triggered after that)\n"
  "# used when > 0, value from the config is used otherwise\n"
  "float64 max_execution_time\n"
  "\n"
  "# how much [s] can the resulting trajectory deviate from the path\n"
  "# used when > 0, value from the config is used otherwise\n"
  "float64 max_deviation_from_path\n"
  "\n"
  "# when true, the by-default-ON prepanding of the current state is disabled\n"
  "bool dont_prepend_current_state\n"
  "\n"
  "# when true, the heading in the resulting trajectory will be tangential along the trajectory\n"
  "bool override_heading_atan2\n"
  "\n"
  "bool override_constraints\n"
  "float64 override_max_velocity_horizontal\n"
  "float64 override_max_acceleration_horizontal\n"
  "float64 override_max_jerk_horizontal\n"
  "float64 override_max_velocity_vertical\n"
  "float64 override_max_acceleration_vertical\n"
  "float64 override_max_jerk_vertical\n"
  "\n"
  "bool relax_heading\n"
  "\n"
  "Reference[] points";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__Path__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__Path__TYPE_NAME, 17, 17},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 968, 968},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__Path__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__Path__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *mrs_msgs__msg__Reference__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
