// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/UavManagerDiagnostics.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/uav_manager_diagnostics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__UavManagerDiagnostics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8d, 0x7c, 0x0a, 0x5a, 0x30, 0x17, 0x5a, 0xae,
      0x61, 0xe3, 0xbb, 0x98, 0x93, 0x3b, 0x8e, 0x0e,
      0x6a, 0xba, 0x10, 0x52, 0x7b, 0x7b, 0x33, 0x11,
      0x0d, 0xe3, 0x8e, 0xf9, 0x06, 0x3d, 0xb4, 0xff,
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

static char mrs_msgs__msg__UavManagerDiagnostics__TYPE_NAME[] = "mrs_msgs/msg/UavManagerDiagnostics";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char mrs_msgs__msg__UavManagerDiagnostics__FIELD_NAME__stamp[] = "stamp";
static char mrs_msgs__msg__UavManagerDiagnostics__FIELD_NAME__uav_name[] = "uav_name";
static char mrs_msgs__msg__UavManagerDiagnostics__FIELD_NAME__home_latitude[] = "home_latitude";
static char mrs_msgs__msg__UavManagerDiagnostics__FIELD_NAME__home_longitude[] = "home_longitude";
static char mrs_msgs__msg__UavManagerDiagnostics__FIELD_NAME__cur_latitude[] = "cur_latitude";
static char mrs_msgs__msg__UavManagerDiagnostics__FIELD_NAME__cur_longitude[] = "cur_longitude";
static char mrs_msgs__msg__UavManagerDiagnostics__FIELD_NAME__flight_time[] = "flight_time";
static char mrs_msgs__msg__UavManagerDiagnostics__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__UavManagerDiagnostics__FIELDS[] = {
  {
    {mrs_msgs__msg__UavManagerDiagnostics__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavManagerDiagnostics__FIELD_NAME__uav_name, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavManagerDiagnostics__FIELD_NAME__home_latitude, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavManagerDiagnostics__FIELD_NAME__home_longitude, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavManagerDiagnostics__FIELD_NAME__cur_latitude, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavManagerDiagnostics__FIELD_NAME__cur_longitude, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavManagerDiagnostics__FIELD_NAME__flight_time, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavManagerDiagnostics__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__UavManagerDiagnostics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__UavManagerDiagnostics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__UavManagerDiagnostics__TYPE_NAME, 34, 34},
      {mrs_msgs__msg__UavManagerDiagnostics__FIELDS, 8, 8},
    },
    {mrs_msgs__msg__UavManagerDiagnostics__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This reports on the state of the UavManager\n"
  "\n"
  "builtin_interfaces/Time stamp\n"
  "\n"
  "string uav_name\n"
  "\n"
  "# home position latitude and longitude, if available\n"
  "float64 home_latitude\n"
  "float64 home_longitude\n"
  "\n"
  "# current latitude and longitude, if available\n"
  "float64 cur_latitude\n"
  "float64 cur_longitude\n"
  "\n"
  "float64 flight_time # [s]\n"
  "\n"
  "# current tracker state\n"
  "uint8 state\n"
  "uint8 STATE_INVALID    = 0\n"
  "uint8 STATE_IDLING     = 1\n"
  "uint8 STATE_TAKING_OFF = 2\n"
  "uint8 STATE_FLYING     = 3\n"
  "uint8 STATE_LANDING    = 4\n"
  "uint8 STATE_EMERGENCY  = 5";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__UavManagerDiagnostics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__UavManagerDiagnostics__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 510, 510},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__UavManagerDiagnostics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__UavManagerDiagnostics__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
