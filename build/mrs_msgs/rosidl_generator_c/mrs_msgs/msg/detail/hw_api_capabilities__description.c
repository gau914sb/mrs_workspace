// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/HwApiCapabilities.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/hw_api_capabilities__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__HwApiCapabilities__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x38, 0x1c, 0x60, 0x84, 0x72, 0x04, 0x71, 0xe2,
      0xe2, 0x6b, 0x48, 0xa7, 0xc9, 0x44, 0x27, 0x5a,
      0xe9, 0x18, 0x7e, 0xde, 0xcd, 0xa8, 0x94, 0x61,
      0x4e, 0x93, 0x87, 0x8f, 0x04, 0x5d, 0xe8, 0x5e,
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

static char mrs_msgs__msg__HwApiCapabilities__TYPE_NAME[] = "mrs_msgs/msg/HwApiCapabilities";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__stamp[] = "stamp";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__api_name[] = "api_name";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__accepts_actuator_cmd[] = "accepts_actuator_cmd";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__accepts_attitude_cmd[] = "accepts_attitude_cmd";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__accepts_attitude_rate_cmd[] = "accepts_attitude_rate_cmd";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__accepts_control_group_cmd[] = "accepts_control_group_cmd";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__accepts_acceleration_hdg_rate_cmd[] = "accepts_acceleration_hdg_rate_cmd";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__accepts_acceleration_hdg_cmd[] = "accepts_acceleration_hdg_cmd";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__accepts_velocity_hdg_rate_cmd[] = "accepts_velocity_hdg_rate_cmd";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__accepts_velocity_hdg_cmd[] = "accepts_velocity_hdg_cmd";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__accepts_position_cmd[] = "accepts_position_cmd";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_ground_truth[] = "produces_ground_truth";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_gnss[] = "produces_gnss";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_gnss_status[] = "produces_gnss_status";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_rtk[] = "produces_rtk";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_imu[] = "produces_imu";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_distance_sensor[] = "produces_distance_sensor";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_altitude[] = "produces_altitude";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_magnetometer_heading[] = "produces_magnetometer_heading";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_rc_channels[] = "produces_rc_channels";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_battery_state[] = "produces_battery_state";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_position[] = "produces_position";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_orientation[] = "produces_orientation";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_velocity[] = "produces_velocity";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_angular_velocity[] = "produces_angular_velocity";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_odometry[] = "produces_odometry";
static char mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_magnetic_field[] = "produces_magnetic_field";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__HwApiCapabilities__FIELDS[] = {
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__api_name, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__accepts_actuator_cmd, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__accepts_attitude_cmd, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__accepts_attitude_rate_cmd, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__accepts_control_group_cmd, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__accepts_acceleration_hdg_rate_cmd, 33, 33},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__accepts_acceleration_hdg_cmd, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__accepts_velocity_hdg_rate_cmd, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__accepts_velocity_hdg_cmd, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__accepts_position_cmd, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_ground_truth, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_gnss, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_gnss_status, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_rtk, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_imu, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_distance_sensor, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_altitude, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_magnetometer_heading, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_rc_channels, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_battery_state, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_position, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_orientation, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_velocity, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_angular_velocity, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_odometry, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__HwApiCapabilities__FIELD_NAME__produces_magnetic_field, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__HwApiCapabilities__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__HwApiCapabilities__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__HwApiCapabilities__TYPE_NAME, 30, 30},
      {mrs_msgs__msg__HwApiCapabilities__FIELDS, 27, 27},
    },
    {mrs_msgs__msg__HwApiCapabilities__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time stamp\n"
  "\n"
  "string api_name\n"
  "\n"
  "bool accepts_actuator_cmd\n"
  "bool accepts_attitude_cmd\n"
  "bool accepts_attitude_rate_cmd\n"
  "bool accepts_control_group_cmd\n"
  "bool accepts_acceleration_hdg_rate_cmd\n"
  "bool accepts_acceleration_hdg_cmd\n"
  "bool accepts_velocity_hdg_rate_cmd\n"
  "bool accepts_velocity_hdg_cmd\n"
  "bool accepts_position_cmd\n"
  "\n"
  "bool produces_ground_truth\n"
  "bool produces_gnss\n"
  "bool produces_gnss_status\n"
  "bool produces_rtk\n"
  "bool produces_imu\n"
  "bool produces_distance_sensor\n"
  "bool produces_altitude\n"
  "bool produces_magnetometer_heading\n"
  "bool produces_rc_channels\n"
  "bool produces_battery_state\n"
  "bool produces_position\n"
  "bool produces_orientation\n"
  "bool produces_velocity\n"
  "bool produces_angular_velocity\n"
  "bool produces_odometry\n"
  "bool produces_magnetic_field";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__HwApiCapabilities__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__HwApiCapabilities__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 732, 732},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__HwApiCapabilities__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__HwApiCapabilities__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
