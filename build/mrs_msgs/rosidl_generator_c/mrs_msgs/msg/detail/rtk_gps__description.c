// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/RtkGps.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/rtk_gps__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__RtkGps__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x84, 0xb4, 0xde, 0x02, 0x8d, 0x62, 0x3b, 0x9a,
      0xae, 0x6a, 0x65, 0x94, 0x9d, 0x12, 0x18, 0x1f,
      0xdd, 0x54, 0x8f, 0x88, 0xea, 0xa8, 0x5b, 0x5a,
      0xe6, 0xef, 0xba, 0x06, 0xec, 0xf4, 0x9f, 0x5b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "mrs_msgs/msg/detail/rtk_fix_type__functions.h"
#include "sensor_msgs/msg/detail/nav_sat_status__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "mrs_msgs/msg/detail/gps_data__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__GpsData__EXPECTED_HASH = {1, {
    0x57, 0xb7, 0x19, 0x09, 0x0c, 0xe8, 0x3a, 0x2f,
    0x9d, 0xa8, 0x1f, 0x85, 0x39, 0x7d, 0x2f, 0x3d,
    0x25, 0xd5, 0xce, 0x05, 0x91, 0xde, 0x18, 0x0d,
    0x98, 0xb2, 0xfd, 0xc4, 0xfc, 0x37, 0x5c, 0xe4,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__RtkFixType__EXPECTED_HASH = {1, {
    0x5f, 0x4f, 0xc4, 0xc9, 0x42, 0x02, 0x84, 0x1e,
    0xc3, 0x90, 0xf0, 0x6a, 0x8e, 0xcf, 0xc8, 0x88,
    0x7d, 0xac, 0xec, 0x99, 0x89, 0x8c, 0x73, 0x75,
    0xd2, 0x7f, 0x87, 0x4e, 0x82, 0xaf, 0xc1, 0xc5,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__NavSatStatus__EXPECTED_HASH = {1, {
    0xd1, 0xed, 0x3b, 0xef, 0xa6, 0x28, 0xe0, 0x95,
    0x71, 0xbd, 0x27, 0x3b, 0x88, 0x8b, 0xa1, 0xc1,
    0xfd, 0x18, 0x7c, 0x9a, 0x5e, 0x00, 0x06, 0xb3,
    0x85, 0xd7, 0xe5, 0xe9, 0x09, 0x5a, 0x32, 0x04,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mrs_msgs__msg__RtkGps__TYPE_NAME[] = "mrs_msgs/msg/RtkGps";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mrs_msgs__msg__GpsData__TYPE_NAME[] = "mrs_msgs/msg/GpsData";
static char mrs_msgs__msg__RtkFixType__TYPE_NAME[] = "mrs_msgs/msg/RtkFixType";
static char sensor_msgs__msg__NavSatStatus__TYPE_NAME[] = "sensor_msgs/msg/NavSatStatus";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mrs_msgs__msg__RtkGps__FIELD_NAME__header[] = "header";
static char mrs_msgs__msg__RtkGps__FIELD_NAME__gps[] = "gps";
static char mrs_msgs__msg__RtkGps__FIELD_NAME__status[] = "status";
static char mrs_msgs__msg__RtkGps__FIELD_NAME__fix_type[] = "fix_type";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__RtkGps__FIELDS[] = {
  {
    {mrs_msgs__msg__RtkGps__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__RtkGps__FIELD_NAME__gps, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__msg__GpsData__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__RtkGps__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__NavSatStatus__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__RtkGps__FIELD_NAME__fix_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__msg__RtkFixType__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__RtkGps__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsData__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__RtkFixType__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__NavSatStatus__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__RtkGps__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__RtkGps__TYPE_NAME, 19, 19},
      {mrs_msgs__msg__RtkGps__FIELDS, 4, 4},
    },
    {mrs_msgs__msg__RtkGps__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__GpsData__EXPECTED_HASH, mrs_msgs__msg__GpsData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrs_msgs__msg__GpsData__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__RtkFixType__EXPECTED_HASH, mrs_msgs__msg__RtkFixType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mrs_msgs__msg__RtkFixType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__NavSatStatus__EXPECTED_HASH, sensor_msgs__msg__NavSatStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = sensor_msgs__msg__NavSatStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "mrs_msgs/GpsData gps\n"
  "sensor_msgs/NavSatStatus status\n"
  "mrs_msgs/RtkFixType fix_type";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__RtkGps__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__RtkGps__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 105, 105},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__RtkGps__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__RtkGps__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mrs_msgs__msg__GpsData__get_individual_type_description_source(NULL);
    sources[3] = *mrs_msgs__msg__RtkFixType__get_individual_type_description_source(NULL);
    sources[4] = *sensor_msgs__msg__NavSatStatus__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
