// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_modules_msgs:msg/PclToolsDiagnostics.idl
// generated code does not contain a copyright notice

#include "mrs_modules_msgs/msg/detail/pcl_tools_diagnostics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_modules_msgs
const rosidl_type_hash_t *
mrs_modules_msgs__msg__PclToolsDiagnostics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x37, 0x9f, 0x76, 0x8b, 0x65, 0x57, 0x9f, 0xa9,
      0xba, 0x3c, 0x18, 0x6c, 0xec, 0xa2, 0x98, 0x6c,
      0xb4, 0xba, 0xce, 0xac, 0xd2, 0xea, 0x26, 0x31,
      0x24, 0x76, 0x3a, 0xde, 0x77, 0x85, 0x3c, 0x45,
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

static char mrs_modules_msgs__msg__PclToolsDiagnostics__TYPE_NAME[] = "mrs_modules_msgs/msg/PclToolsDiagnostics";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char mrs_modules_msgs__msg__PclToolsDiagnostics__FIELD_NAME__stamp[] = "stamp";
static char mrs_modules_msgs__msg__PclToolsDiagnostics__FIELD_NAME__sensor_name[] = "sensor_name";
static char mrs_modules_msgs__msg__PclToolsDiagnostics__FIELD_NAME__sensor_type[] = "sensor_type";
static char mrs_modules_msgs__msg__PclToolsDiagnostics__FIELD_NAME__frequency[] = "frequency";
static char mrs_modules_msgs__msg__PclToolsDiagnostics__FIELD_NAME__vfov[] = "vfov";
static char mrs_modules_msgs__msg__PclToolsDiagnostics__FIELD_NAME__rows_before[] = "rows_before";
static char mrs_modules_msgs__msg__PclToolsDiagnostics__FIELD_NAME__cols_before[] = "cols_before";
static char mrs_modules_msgs__msg__PclToolsDiagnostics__FIELD_NAME__rows_after[] = "rows_after";
static char mrs_modules_msgs__msg__PclToolsDiagnostics__FIELD_NAME__cols_after[] = "cols_after";

static rosidl_runtime_c__type_description__Field mrs_modules_msgs__msg__PclToolsDiagnostics__FIELDS[] = {
  {
    {mrs_modules_msgs__msg__PclToolsDiagnostics__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__PclToolsDiagnostics__FIELD_NAME__sensor_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__PclToolsDiagnostics__FIELD_NAME__sensor_type, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__PclToolsDiagnostics__FIELD_NAME__frequency, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__PclToolsDiagnostics__FIELD_NAME__vfov, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__PclToolsDiagnostics__FIELD_NAME__rows_before, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__PclToolsDiagnostics__FIELD_NAME__cols_before, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__PclToolsDiagnostics__FIELD_NAME__rows_after, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__PclToolsDiagnostics__FIELD_NAME__cols_after, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_modules_msgs__msg__PclToolsDiagnostics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_modules_msgs__msg__PclToolsDiagnostics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_modules_msgs__msg__PclToolsDiagnostics__TYPE_NAME, 40, 40},
      {mrs_modules_msgs__msg__PclToolsDiagnostics__FIELDS, 9, 9},
    },
    {mrs_modules_msgs__msg__PclToolsDiagnostics__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time   stamp\n"
  "string sensor_name\n"
  "uint8  sensor_type\n"
  "\n"
  "float32 frequency   # [Hz]\n"
  "float32 vfov        # [deg]\n"
  "uint16  rows_before # height of input data\n"
  "uint16  cols_before # width of input data\n"
  "uint16  rows_after  # height of output data\n"
  "uint16  cols_after  # width of output data\n"
  "\n"
  "# Sensor type\n"
  "int8 SENSOR_TYPE_NONE=-1\n"
  "int8 SENSOR_TYPE_LIDAR_3D=0\n"
  "int8 SENSOR_TYPE_DEPTH_CAMERA=1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_modules_msgs__msg__PclToolsDiagnostics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_modules_msgs__msg__PclToolsDiagnostics__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 398, 398},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_modules_msgs__msg__PclToolsDiagnostics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_modules_msgs__msg__PclToolsDiagnostics__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
