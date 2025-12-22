// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_modules_msgs:msg/Bestpos.idl
// generated code does not contain a copyright notice

#include "mrs_modules_msgs/msg/detail/bestpos__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_modules_msgs
const rosidl_type_hash_t *
mrs_modules_msgs__msg__Bestpos__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe7, 0x8d, 0x7b, 0x17, 0x1a, 0x27, 0x55, 0xbd,
      0x8a, 0x1e, 0x79, 0x7c, 0x9e, 0x64, 0x8d, 0x38,
      0x25, 0x1b, 0x89, 0x17, 0x34, 0x20, 0xb7, 0x42,
      0xfa, 0x6d, 0x3e, 0x27, 0x9d, 0x96, 0xb0, 0xc0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
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

static char mrs_modules_msgs__msg__Bestpos__TYPE_NAME[] = "mrs_modules_msgs/msg/Bestpos";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mrs_modules_msgs__msg__TersusMessageHeader__TYPE_NAME[] = "mrs_modules_msgs/msg/TersusMessageHeader";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__header[] = "header";
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__tersus_msg_header[] = "tersus_msg_header";
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__solution_status[] = "solution_status";
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__position_type[] = "position_type";
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__latitude[] = "latitude";
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__longitude[] = "longitude";
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__height[] = "height";
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__undulation[] = "undulation";
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__datum_id[] = "datum_id";
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__latitude_std[] = "latitude_std";
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__longitude_std[] = "longitude_std";
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__height_std[] = "height_std";
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__base_station_id[] = "base_station_id";
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__diff_age[] = "diff_age";
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__solution_age[] = "solution_age";
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__num_satellites_tracked[] = "num_satellites_tracked";
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__num_satellites_used_in_solution[] = "num_satellites_used_in_solution";
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__num_gps_and_glonass_l1_used_in_solution[] = "num_gps_and_glonass_l1_used_in_solution";
static char mrs_modules_msgs__msg__Bestpos__FIELD_NAME__num_gps_and_glonass_l1_and_l2_used_in_solution[] = "num_gps_and_glonass_l1_and_l2_used_in_solution";

static rosidl_runtime_c__type_description__Field mrs_modules_msgs__msg__Bestpos__FIELDS[] = {
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__tersus_msg_header, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_modules_msgs__msg__TersusMessageHeader__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__solution_status, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__position_type, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__undulation, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__datum_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__latitude_std, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__longitude_std, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__height_std, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__base_station_id, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__diff_age, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__solution_age, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__num_satellites_tracked, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__num_satellites_used_in_solution, 31, 31},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__num_gps_and_glonass_l1_used_in_solution, 39, 39},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_modules_msgs__msg__Bestpos__FIELD_NAME__num_gps_and_glonass_l1_and_l2_used_in_solution, 46, 46},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_modules_msgs__msg__Bestpos__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
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
mrs_modules_msgs__msg__Bestpos__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_modules_msgs__msg__Bestpos__TYPE_NAME, 28, 28},
      {mrs_modules_msgs__msg__Bestpos__FIELDS, 19, 19},
    },
    {mrs_modules_msgs__msg__Bestpos__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_modules_msgs__msg__TersusMessageHeader__EXPECTED_HASH, mrs_modules_msgs__msg__TersusMessageHeader__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrs_modules_msgs__msg__TersusMessageHeader__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This is modified version from Novatel\n"
  "# For original Novatel see: http://docs.ros.org/jade/api/novatel_msgs/html/msg/BESTPOS.html\n"
  "# For Tersus see section 3.1.3 BESTPOS in https://www.tersus-gnss.com/assets/upload/file/20180608173259349.pdf\n"
  "# --------------------------------------------------------------------------------------\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "# message 42\n"
  "mrs_modules_msgs/TersusMessageHeader tersus_msg_header\n"
  "\n"
  "string solution_status\n"
  "string position_type\n"
  "\n"
  "float64 latitude  # (degrees)\n"
  "float64 longitude # (degrees)\n"
  "float64 height    # height above mean sea level (meters)\n"
  "\n"
  "float32 undulation  # undulation - the relationship between the geoid and the ellipsoid (m) of the chosen datum\n"
  "string datum_id\n"
  "\n"
  "float32 latitude_std  # latitude standard deviation (m)\n"
  "float32 longitude_std # longitude standard deviation (m)\n"
  "float32 height_std    # height standard deviation (m)\n"
  "\n"
  "string base_station_id   # base station id\n"
  "\n"
  "float32 diff_age      # differential age in seconds\n"
  "float32 solution_age  # solution age in seconds\n"
  "\n"
  "uint8 num_satellites_tracked                          # number of satellites tracked\n"
  "uint8 num_satellites_used_in_solution                 # number of satellites used in solution\n"
  "uint8 num_gps_and_glonass_l1_used_in_solution         # number of satellites with l1/e1/b1 signals used in solution\n"
  "uint8 num_gps_and_glonass_l1_and_l2_used_in_solution  # number of satellites with multi-frequency signals used in solution\n"
  "# TODO: define the rest of the message if it is necessary";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_modules_msgs__msg__Bestpos__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_modules_msgs__msg__Bestpos__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1507, 1507},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_modules_msgs__msg__Bestpos__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_modules_msgs__msg__Bestpos__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mrs_modules_msgs__msg__TersusMessageHeader__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
