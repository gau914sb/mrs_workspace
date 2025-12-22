// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/Track.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/track__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__Track__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8a, 0x59, 0x48, 0x35, 0x8a, 0x9a, 0x5c, 0x46,
      0x01, 0x14, 0x8d, 0x4c, 0x35, 0x44, 0xfd, 0xf2,
      0x33, 0x0e, 0x03, 0xbc, 0x0d, 0x3f, 0xf6, 0x83,
      0x12, 0xf3, 0xb1, 0x70, 0x9c, 0xf2, 0xa0, 0xf3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
#endif

static char mrs_msgs__msg__Track__TYPE_NAME[] = "mrs_msgs/msg/Track";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";

// Define type names, field names, and default values
static char mrs_msgs__msg__Track__FIELD_NAME__id[] = "id";
static char mrs_msgs__msg__Track__FIELD_NAME__position[] = "position";
static char mrs_msgs__msg__Track__FIELD_NAME__position_covariance[] = "position_covariance";
static char mrs_msgs__msg__Track__FIELD_NAME__orientation[] = "orientation";
static char mrs_msgs__msg__Track__FIELD_NAME__orientation_covariance[] = "orientation_covariance";
static char mrs_msgs__msg__Track__FIELD_NAME__velocity[] = "velocity";
static char mrs_msgs__msg__Track__FIELD_NAME__velocity_covariance[] = "velocity_covariance";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__Track__FIELDS[] = {
  {
    {mrs_msgs__msg__Track__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Track__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Track__FIELD_NAME__position_covariance, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      9,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Track__FIELD_NAME__orientation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Track__FIELD_NAME__orientation_covariance, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      9,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Track__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Track__FIELD_NAME__velocity_covariance, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      9,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__Track__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__Track__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__Track__TYPE_NAME, 18, 18},
      {mrs_msgs__msg__Track__FIELDS, 7, 7},
    },
    {mrs_msgs__msg__Track__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message represents an object being tracked in a three-dimensional\n"
  "# free space by a multi-target tracking algorithm.\n"
  "# Each tracked objects has a unique and persistent track ID,\n"
  "# a position, orientation and velocity estimate with uncertainties represented\n"
  "# by covariance matrices.\n"
  "\n"
  "# An ID of this track that is unique and persistent for the tracked object.\n"
  "uint64 id\n"
  "\n"
  "# The rest of this message contains the state estimate of the track,\n"
  "# including its position, orientation, and velocity and their respective\n"
  "# uncertainty covariance matrices. These are all expressed in a coordinate\n"
  "# frame, that is given in the header of the meta-message, containing this message.\n"
  "\n"
  "# Three-dimensional position of the track.\n"
  "geometry_msgs/Point position\n"
  "\n"
  "# Row-major representation of the 3x3 matrix of position covariance.\n"
  "# In order, the parameters are:\n"
  "# (x, y, z)\n"
  "float64[9] position_covariance\n"
  "\n"
  "# Three-dimensional orientation of the track.\n"
  "geometry_msgs/Quaternion orientation\n"
  "\n"
  "# Row-major representation of the 3x3 matrix of orientation covariance.\n"
  "# The orientation parameters use a fixed-axis representation.\n"
  "# In order, the parameters are:\n"
  "# (rotation about X axis, rotation about Y axis, rotation about Z axis)\n"
  "float64[9] orientation_covariance\n"
  "\n"
  "# Velocity of the track in free space.\n"
  "geometry_msgs/Vector3 velocity\n"
  "\n"
  "# Row-major representation of the 3x3 matrix of velocity covariance.\n"
  "# In order, the parameters are:\n"
  "# (dx/dt, dy/dt, dz/dt)\n"
  "float64[9] velocity_covariance";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__Track__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__Track__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1481, 1481},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__Track__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__Track__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
