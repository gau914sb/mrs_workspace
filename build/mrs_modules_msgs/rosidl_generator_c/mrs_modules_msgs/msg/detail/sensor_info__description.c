// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_modules_msgs:msg/SensorInfo.idl
// generated code does not contain a copyright notice

#include "mrs_modules_msgs/msg/detail/sensor_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_modules_msgs
const rosidl_type_hash_t *
mrs_modules_msgs__msg__SensorInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0x27, 0x1c, 0x52, 0x54, 0xcd, 0x66, 0x49,
      0xf2, 0x73, 0x93, 0xc1, 0x90, 0x32, 0xcf, 0x54,
      0x75, 0x9f, 0x43, 0x37, 0x36, 0x5f, 0x1a, 0x6d,
      0xd6, 0xda, 0x15, 0x61, 0xf4, 0x38, 0xad, 0x55,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrs_modules_msgs__msg__SensorInfo__TYPE_NAME[] = "mrs_modules_msgs/msg/SensorInfo";

// Define type names, field names, and default values
static char mrs_modules_msgs__msg__SensorInfo__FIELD_NAME__name[] = "name";
static char mrs_modules_msgs__msg__SensorInfo__FIELD_NAME__topic[] = "topic";
static char mrs_modules_msgs__msg__SensorInfo__FIELD_NAME__type[] = "type";
static char mrs_modules_msgs__msg__SensorInfo__FIELD_NAME__expected_rate[] = "expected_rate";

static rosidl_runtime_c__type_description__Field mrs_modules_msgs__msg__SensorInfo__FIELDS[] = {
  {
    {mrs_modules_msgs__msg__SensorInfo__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__SensorInfo__FIELD_NAME__topic, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__SensorInfo__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__SensorInfo__FIELD_NAME__expected_rate, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_modules_msgs__msg__SensorInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_modules_msgs__msg__SensorInfo__TYPE_NAME, 31, 31},
      {mrs_modules_msgs__msg__SensorInfo__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# name of the sensor\n"
  "string name\n"
  "\n"
  "string topic\n"
  "\n"
  "# sensor type\n"
  "uint8 SENSOR_TYPE_UNKNOWN  = 0\n"
  "uint8 SENSOR_TYPE_CAMERA   = 1\n"
  "uint8 SENSOR_TYPE_LIDAR_1D = 2\n"
  "uint8 SENSOR_TYPE_LIDAR_2D = 3\n"
  "uint8 ENSOR_TYPE_LIDAR_3D = 4\n"
  "uint8 type\n"
  "\n"
  "float32 expected_rate";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_modules_msgs__msg__SensorInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_modules_msgs__msg__SensorInfo__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 250, 250},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_modules_msgs__msg__SensorInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_modules_msgs__msg__SensorInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
