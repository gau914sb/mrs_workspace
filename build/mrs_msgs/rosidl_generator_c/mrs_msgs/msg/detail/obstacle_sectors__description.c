// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/ObstacleSectors.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/obstacle_sectors__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__ObstacleSectors__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x39, 0x1b, 0xcc, 0x27, 0x6a, 0xee, 0xa2, 0xc0,
      0xa5, 0xcf, 0xf6, 0x3f, 0xee, 0x19, 0x12, 0x59,
      0xb3, 0x04, 0x86, 0xd0, 0xee, 0xcc, 0x8a, 0x85,
      0xfe, 0x83, 0xc3, 0x49, 0x45, 0x54, 0xcd, 0x3f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mrs_msgs__msg__ObstacleSectors__TYPE_NAME[] = "mrs_msgs/msg/ObstacleSectors";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mrs_msgs__msg__ObstacleSectors__FIELD_NAME__header[] = "header";
static char mrs_msgs__msg__ObstacleSectors__FIELD_NAME__n_horizontal_sectors[] = "n_horizontal_sectors";
static char mrs_msgs__msg__ObstacleSectors__FIELD_NAME__sectors_vertical_fov[] = "sectors_vertical_fov";
static char mrs_msgs__msg__ObstacleSectors__FIELD_NAME__sectors[] = "sectors";
static char mrs_msgs__msg__ObstacleSectors__FIELD_NAME__sector_sensors[] = "sector_sensors";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__ObstacleSectors__FIELDS[] = {
  {
    {mrs_msgs__msg__ObstacleSectors__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ObstacleSectors__FIELD_NAME__n_horizontal_sectors, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ObstacleSectors__FIELD_NAME__sectors_vertical_fov, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ObstacleSectors__FIELD_NAME__sectors, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ObstacleSectors__FIELD_NAME__sector_sensors, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__ObstacleSectors__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__ObstacleSectors__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__ObstacleSectors__TYPE_NAME, 28, 28},
      {mrs_msgs__msg__ObstacleSectors__FIELDS, 5, 5},
    },
    {mrs_msgs__msg__ObstacleSectors__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message represents the output from the mrs_bumper package.\n"
  "#\n"
  "# The *sectors* variable contains information about obstacles in the horizontal,\n"
  "# bottom and up sectors. Horizontal sectors take up the first part of the array.\n"
  "# Bottom and up sectors are the second and first elements from the end of the array:\n"
  "# sectors[0, 1, ..., n_horizontal_sectors-1] -> horizontal sectors\n"
  "# sectors[n_horizontal_sectors]              -> bottom sector\n"
  "# sectors[n_horizontal_sectors+1]            -> top sector\n"
  "#\n"
  "# The horizontal sectors are indexed counterclockwise, starting from the front facing\n"
  "# sector, relative to the MAV orientation (see picture below). The last two\n"
  "# elements of the *sectors* variable are the above and below sectors, respectively.\n"
  "#\n"
  "#         TOP VIEW\n"
  "#         --------\n"
  "#\n"
  "# |      \\\\         /            |\n"
  "# |       \\\\   0   /   (forward) |\n"
  "# |        \\\\     /        x     |\n"
  "# |                       ^     |\n"
  "# |          O O          |     |\n"
  "# |      1    X    3   <--* z   |\n"
  "# |          O O       y        |\n"
  "# |                             |\n"
  "# |        /     \\\\              |\n"
  "# |       /   2   \\\\             |\n"
  "# |      /         \\\\            |\n"
  "\n"
  "# Time at which the data in this message was generated, coordinate frame ID.\n"
  "std_msgs/Header header\n"
  "\n"
  "# Number of horizontal bumper sectors (total number of sectors -2).\n"
  "uint32    n_horizontal_sectors\n"
  "\n"
  "# Vertical FOV of the individual horizontal sectors.\n"
  "float64   sectors_vertical_fov\n"
  "\n"
  "# Distance to closest detected obstacle in each sector.\n"
  "float64[] sectors\n"
  "\n"
  "# Sensor ID of the sensor, which was used for obstacle detection in each sector.\n"
  "int8[]    sector_sensors\n"
  "\n"
  "## Obstacle distance special values.\n"
  "float64 OBSTACLE_NOT_DETECTED=-1\n"
  "float64 OBSTACLE_NO_DATA=-2\n"
  "\n"
  "## Sensor types enum.\n"
  "int8 SENSOR_NONE=-1\n"
  "int8 SENSOR_DEPTH=0\n"
  "int8 SENSOR_LIDAR1D=1\n"
  "int8 SENSOR_LIDAR2D=2\n"
  "int8 SENSOR_LIDAR3D=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__ObstacleSectors__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__ObstacleSectors__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1863, 1863},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__ObstacleSectors__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__ObstacleSectors__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
