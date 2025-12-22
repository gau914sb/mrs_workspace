// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/TrackerCommand.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/tracker_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__TrackerCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdc, 0xed, 0xc8, 0x06, 0x64, 0xcc, 0xb0, 0x03,
      0xe6, 0x2a, 0x82, 0xaa, 0x7e, 0xd2, 0x61, 0xad,
      0xf5, 0xf4, 0x69, 0x9a, 0x99, 0x9e, 0x73, 0x83,
      0x4f, 0x6d, 0x75, 0xdc, 0x3a, 0xd0, 0x30, 0x05,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "mrs_msgs/msg/detail/mpc_prediction_full_state__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"

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
static const rosidl_type_hash_t mrs_msgs__msg__MpcPredictionFullState__EXPECTED_HASH = {1, {
    0x8c, 0x50, 0x36, 0xa4, 0xcc, 0x62, 0x36, 0xbf,
    0xbd, 0x92, 0x58, 0x58, 0x8c, 0xe2, 0x3f, 0x8d,
    0xe8, 0x93, 0xc8, 0x53, 0x25, 0xfd, 0xc8, 0xb2,
    0x5c, 0xe8, 0x33, 0xfd, 0xe1, 0x4d, 0xbb, 0xd3,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mrs_msgs__msg__TrackerCommand__TYPE_NAME[] = "mrs_msgs/msg/TrackerCommand";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char mrs_msgs__msg__MpcPredictionFullState__TYPE_NAME[] = "mrs_msgs/msg/MpcPredictionFullState";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__header[] = "header";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__position[] = "position";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__velocity[] = "velocity";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__acceleration[] = "acceleration";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__jerk[] = "jerk";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__snap[] = "snap";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__full_state_prediction[] = "full_state_prediction";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__orientation[] = "orientation";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__attitude_rate[] = "attitude_rate";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__throttle[] = "throttle";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__heading[] = "heading";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__heading_rate[] = "heading_rate";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__heading_acceleration[] = "heading_acceleration";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__heading_jerk[] = "heading_jerk";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__disable_position_gains[] = "disable_position_gains";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__disable_antiwindups[] = "disable_antiwindups";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_position_horizontal[] = "use_position_horizontal";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_position_vertical[] = "use_position_vertical";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_velocity_horizontal[] = "use_velocity_horizontal";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_velocity_vertical[] = "use_velocity_vertical";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_acceleration[] = "use_acceleration";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_jerk[] = "use_jerk";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_snap[] = "use_snap";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_attitude_rate[] = "use_attitude_rate";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_heading[] = "use_heading";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_heading_rate[] = "use_heading_rate";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_heading_acceleration[] = "use_heading_acceleration";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_heading_jerk[] = "use_heading_jerk";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_orientation[] = "use_orientation";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_throttle[] = "use_throttle";
static char mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_full_state_prediction[] = "use_full_state_prediction";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__TrackerCommand__FIELDS[] = {
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__acceleration, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__jerk, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__snap, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__full_state_prediction, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__msg__MpcPredictionFullState__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__orientation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__attitude_rate, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__throttle, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__heading_rate, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__heading_acceleration, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__heading_jerk, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__disable_position_gains, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__disable_antiwindups, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_position_horizontal, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_position_vertical, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_velocity_horizontal, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_velocity_vertical, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_acceleration, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_jerk, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_snap, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_attitude_rate, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_heading, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_heading_rate, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_heading_acceleration, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_heading_jerk, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_orientation, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_throttle, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrackerCommand__FIELD_NAME__use_full_state_prediction, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__TrackerCommand__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
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
  {
    {mrs_msgs__msg__MpcPredictionFullState__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__TrackerCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__TrackerCommand__TYPE_NAME, 27, 27},
      {mrs_msgs__msg__TrackerCommand__FIELDS, 31, 31},
    },
    {mrs_msgs__msg__TrackerCommand__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__MpcPredictionFullState__EXPECTED_HASH, mrs_msgs__msg__MpcPredictionFullState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = mrs_msgs__msg__MpcPredictionFullState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This represents the output of the currently active Tracker (mrs_uav_manager::Tracker).\n"
  "# This message is returned from a tracker by means of the update() function, called by the mrs_uav_manager::ControlManager.\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "# The desired position.\n"
  "geometry_msgs/Point position\n"
  "\n"
  "# The desired velocity.\n"
  "geometry_msgs/Vector3 velocity\n"
  "\n"
  "# The desired acceleration.\n"
  "geometry_msgs/Vector3 acceleration\n"
  "\n"
  "# The desired jerk.\n"
  "geometry_msgs/Vector3 jerk\n"
  "\n"
  "# The desired snap.\n"
  "geometry_msgs/Vector3 snap\n"
  "\n"
  "# all-state future prediction\n"
  "mrs_msgs/MpcPredictionFullState full_state_prediction\n"
  "\n"
  "# The desired orientation and attitude rate.\n"
  "# It is mutually exclusive to heading+heading_rate.\n"
  "geometry_msgs/Quaternion orientation\n"
  "geometry_msgs/Point attitude_rate\n"
  "\n"
  "# when used, it will override the throttle output of the controller\n"
  "float64 throttle\n"
  "\n"
  "# The desired heading and heading rate.\n"
  "# It is mutually exclusive to orientation+attitude_rate.\n"
  "float64 heading\n"
  "float64 heading_rate\n"
  "float64 heading_acceleration\n"
  "float64 heading_jerk\n"
  "\n"
  "# Whether the controller should mute its position feedback.\n"
  "# Useful, e.g., during takeoff or in situations where sudden control\n"
  "# error is expected but not immediately required to be fixed.\n"
  "bool disable_position_gains\n"
  "\n"
  "# Whether the controller should disable its antiwindups\n"
  "bool disable_antiwindups\n"
  "\n"
  "# Flags defining whether the XY or Z position reference was filled in.\n"
  "# If not, the controllers should pay no attention to it and to the corresponding control error.\n"
  "uint8 use_position_horizontal\n"
  "uint8 use_position_vertical\n"
  "\n"
  "# Flags defining whether the XY or Z velocity reference was filled in.\n"
  "# If not, the controllers should pay no attention to it and to the corresponding control error.\n"
  "uint8 use_velocity_horizontal\n"
  "uint8 use_velocity_vertical\n"
  "\n"
  "# Flags defining which references were filled in.\n"
  "# If not, the controllers should pay no attention to them and to the corresponding control errors.\n"
  "uint8 use_acceleration\n"
  "uint8 use_jerk\n"
  "uint8 use_snap\n"
  "uint8 use_attitude_rate\n"
  "uint8 use_heading\n"
  "uint8 use_heading_rate\n"
  "uint8 use_heading_acceleration\n"
  "uint8 use_heading_jerk\n"
  "uint8 use_orientation\n"
  "uint8 use_throttle\n"
  "uint8 use_full_state_prediction";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__TrackerCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__TrackerCommand__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2181, 2181},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__TrackerCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__TrackerCommand__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[5] = *mrs_msgs__msg__MpcPredictionFullState__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
