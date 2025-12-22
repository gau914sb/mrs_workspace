// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/UavStatus.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/uav_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__UavStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb7, 0x4a, 0x65, 0x67, 0x42, 0x56, 0xe6, 0xcc,
      0x6c, 0xff, 0x7c, 0xdb, 0xf1, 0xe6, 0x97, 0x59,
      0x54, 0x9b, 0xa6, 0x97, 0xfc, 0x8c, 0x90, 0xda,
      0x9e, 0xe8, 0xfd, 0x0e, 0x12, 0xc8, 0x53, 0x1c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mrs_msgs/msg/detail/custom_topic__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "mrs_msgs/msg/detail/node_cpu_load__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__CustomTopic__EXPECTED_HASH = {1, {
    0xa7, 0xa5, 0x24, 0xe4, 0xad, 0xf8, 0x65, 0x4a,
    0x3b, 0xe1, 0x9e, 0x7e, 0xa1, 0x17, 0x10, 0xed,
    0x8a, 0x63, 0x9d, 0x8a, 0xfc, 0x18, 0xe4, 0x47,
    0x9c, 0x10, 0xbb, 0x09, 0xfb, 0x9a, 0xcf, 0xcd,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__NodeCpuLoad__EXPECTED_HASH = {1, {
    0xb5, 0xd6, 0xd5, 0x33, 0x00, 0xf9, 0x03, 0xb6,
    0x65, 0xa7, 0x58, 0x16, 0x24, 0x8e, 0xe8, 0x73,
    0x92, 0xd7, 0x8d, 0x4f, 0x01, 0x0a, 0x79, 0x63,
    0x3d, 0x16, 0x37, 0x42, 0xba, 0x97, 0xec, 0x11,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mrs_msgs__msg__UavStatus__TYPE_NAME[] = "mrs_msgs/msg/UavStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mrs_msgs__msg__CustomTopic__TYPE_NAME[] = "mrs_msgs/msg/CustomTopic";
static char mrs_msgs__msg__NodeCpuLoad__TYPE_NAME[] = "mrs_msgs/msg/NodeCpuLoad";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mrs_msgs__msg__UavStatus__FIELD_NAME__header[] = "header";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__uav_name[] = "uav_name";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__uav_type[] = "uav_type";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__uav_mass[] = "uav_mass";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__control_manager_diag_hz[] = "control_manager_diag_hz";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__control_manager_diag_color[] = "control_manager_diag_color";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__controllers[] = "controllers";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__gains[] = "gains";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__trackers[] = "trackers";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__constraints[] = "constraints";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__null_tracker[] = "null_tracker";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__secs_flown[] = "secs_flown";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__odom_hz[] = "odom_hz";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__odom_color[] = "odom_color";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__odom_x[] = "odom_x";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__odom_y[] = "odom_y";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__odom_z[] = "odom_z";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__odom_hdg[] = "odom_hdg";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__odom_frame[] = "odom_frame";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__odom_estimators[] = "odom_estimators";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__horizontal_estimator[] = "horizontal_estimator";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__vertical_estimator[] = "vertical_estimator";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__heading_estimator[] = "heading_estimator";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__agl_estimator[] = "agl_estimator";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__max_flight_z[] = "max_flight_z";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__cmd_x[] = "cmd_x";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__cmd_y[] = "cmd_y";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__cmd_z[] = "cmd_z";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__cmd_hdg[] = "cmd_hdg";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__cpu_load[] = "cpu_load";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__cpu_load_total[] = "cpu_load_total";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__cpu_ghz[] = "cpu_ghz";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__cpu_temperature[] = "cpu_temperature";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__free_ram[] = "free_ram";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__total_ram[] = "total_ram";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__free_hdd[] = "free_hdd";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_hz[] = "hw_api_hz";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_color[] = "hw_api_color";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_battery_hz[] = "hw_api_battery_hz";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_state_hz[] = "hw_api_state_hz";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_cmd_hz[] = "hw_api_cmd_hz";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_mode[] = "hw_api_mode";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_armed[] = "hw_api_armed";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_gnss_ok[] = "hw_api_gnss_ok";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_gnss_qual[] = "hw_api_gnss_qual";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__mag_norm_hz[] = "mag_norm_hz";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_gnss_fix_type[] = "hw_api_gnss_fix_type";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_gnss_num_sats[] = "hw_api_gnss_num_sats";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_gnss_pos_acc[] = "hw_api_gnss_pos_acc";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_gnss_status_hz[] = "hw_api_gnss_status_hz";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__mag_norm[] = "mag_norm";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__battery_volt[] = "battery_volt";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__battery_curr[] = "battery_curr";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__battery_wh_drained[] = "battery_wh_drained";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__thrust[] = "thrust";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__mass_estimate[] = "mass_estimate";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__mass_set[] = "mass_set";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__custom_topics[] = "custom_topics";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__custom_string_outputs[] = "custom_string_outputs";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__node_cpu_loads[] = "node_cpu_loads";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__flying_normally[] = "flying_normally";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__rc_mode[] = "rc_mode";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__have_goal[] = "have_goal";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__tracking_trajectory[] = "tracking_trajectory";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__callbacks_enabled[] = "callbacks_enabled";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__collision_avoidance_enabled[] = "collision_avoidance_enabled";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__avoiding_collision[] = "avoiding_collision";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__automatic_start_can_takeoff[] = "automatic_start_can_takeoff";
static char mrs_msgs__msg__UavStatus__FIELD_NAME__num_other_uavs[] = "num_other_uavs";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__UavStatus__FIELDS[] = {
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__uav_name, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__uav_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__uav_mass, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__control_manager_diag_hz, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__control_manager_diag_color, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__controllers, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__gains, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__trackers, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__constraints, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__null_tracker, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__secs_flown, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__odom_hz, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__odom_color, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__odom_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__odom_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__odom_z, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__odom_hdg, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__odom_frame, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__odom_estimators, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__horizontal_estimator, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__vertical_estimator, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__heading_estimator, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__agl_estimator, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__max_flight_z, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__cmd_x, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__cmd_y, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__cmd_z, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__cmd_hdg, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__cpu_load, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__cpu_load_total, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__cpu_ghz, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__cpu_temperature, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__free_ram, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__total_ram, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__free_hdd, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_hz, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_color, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_battery_hz, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_state_hz, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_cmd_hz, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_mode, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_armed, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_gnss_ok, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_gnss_qual, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__mag_norm_hz, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_gnss_fix_type, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_gnss_num_sats, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_gnss_pos_acc, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__hw_api_gnss_status_hz, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__mag_norm, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__battery_volt, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__battery_curr, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__battery_wh_drained, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__thrust, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__mass_estimate, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__mass_set, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__custom_topics, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mrs_msgs__msg__CustomTopic__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__custom_string_outputs, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__node_cpu_loads, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__msg__NodeCpuLoad__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__flying_normally, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__rc_mode, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__have_goal, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__tracking_trajectory, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__callbacks_enabled, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__collision_avoidance_enabled, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__avoiding_collision, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__automatic_start_can_takeoff, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__UavStatus__FIELD_NAME__num_other_uavs, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__UavStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__CustomTopic__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__NodeCpuLoad__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__UavStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__UavStatus__TYPE_NAME, 22, 22},
      {mrs_msgs__msg__UavStatus__FIELDS, 69, 69},
    },
    {mrs_msgs__msg__UavStatus__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__CustomTopic__EXPECTED_HASH, mrs_msgs__msg__CustomTopic__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrs_msgs__msg__CustomTopic__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__NodeCpuLoad__EXPECTED_HASH, mrs_msgs__msg__NodeCpuLoad__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mrs_msgs__msg__NodeCpuLoad__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Standard ROS header with stamp and coordinate frame ID\n"
  "std_msgs/Header header\n"
  "\n"
  "# Unique name of the UAV\n"
  "string uav_name\n"
  "# Name of the UAV model\n"
  "string uav_type\n"
  "# The current estimated UAV's mass as a string for display purposes\n"
  "string uav_mass\n"
  "\n"
  "# Frequency of receiving the Control Manager diagnostics\n"
  "float32 control_manager_diag_hz\n"
  "# Display color (for TUI visualization purposes)\n"
  "int16 control_manager_diag_color\n"
  "# A list of the available control algorithms, the first element is the active controller\n"
  "string[] controllers\n"
  "# A list of the available control gain presets for the current controller, the first element is the active preset\n"
  "string[] gains\n"
  "# A list of the available trajectory tracking (pre-shaping) algorithms, the first element is the active algorithm\n"
  "string[] trackers\n"
  "# A list of the available dynamic constraint presets for the current tracker, the first element is the active preset\n"
  "string[] constraints\n"
  "# True if the null (no-output) tracker is active\n"
  "bool null_tracker\n"
  "# Flight time\n"
  "uint32 secs_flown\n"
  "\n"
  "# Frequency of receiving the Estimation Manager diagnostics\n"
  "float32 odom_hz\n"
  "# Display color (for TUI visualization purposes)\n"
  "int16 odom_color\n"
  "# X position of the UAV in the current estimation coordinate frame\n"
  "float32 odom_x\n"
  "# Y position of the UAV in the current estimation coordinate frame\n"
  "float32 odom_y\n"
  "# Z position of the UAV in the current estimation coordinate frame\n"
  "float32 odom_z\n"
  "# Heading of the UAV in the current estimation coordinate frame\n"
  "float32 odom_hdg\n"
  "# Name of the current estimation coordinate frame\n"
  "string odom_frame\n"
  "# A list of the available ego-state estimation sources, the first element is the active source\n"
  "string[] odom_estimators\n"
  "# Name of the current source used for estimation of the UAV's horizontal position\n"
  "string horizontal_estimator\n"
  "# Name of the current source used for estimation of the UAV's vertical position\n"
  "string vertical_estimator\n"
  "# Name of the current source used for estimation of the UAV's heading\n"
  "string heading_estimator\n"
  "# Name of the current source used for estimation of the UAV's above ground level\n"
  "string agl_estimator\n"
  "# Maximal allowed Z coordinate of the UAV\n"
  "float32 max_flight_z\n"
  "\n"
  "# Setpoint X position of the UAV in the current estimation coordinate frame\n"
  "float32 cmd_x\n"
  "# Setpoint Y position of the UAV in the current estimation coordinate frame\n"
  "float32 cmd_y\n"
  "# Setpoint Z position of the UAV in the current estimation coordinate frame\n"
  "float32 cmd_z\n"
  "# Setpoint heading of the UAV in the current estimation coordinate frame\n"
  "float32 cmd_hdg\n"
  "\n"
  "# Current load of the CPU in percent relative all CPU cores (i.e. a maximal load of a 2-core CPU is 100.0)\n"
  "float32 cpu_load\n"
  "# Current load of the CPU in percent relative to a single CPU core (i.e. a maximal load of a 2-core CPU is 200.0)\n"
  "float32 cpu_load_total\n"
  "# Current average frequency of the CPU in gigahertz\n"
  "float32 cpu_ghz\n"
  "# Current temperature of the CPU in degrees Celsius (or zero if not supported by the current system)\n"
  "float32 cpu_temperature\n"
  "# The amount of free RAM in gigabytes\n"
  "float32 free_ram\n"
  "# The total available RAM in gigabytes\n"
  "float32 total_ram\n"
  "# The amount of free disk space in gigabytes\n"
  "int32 free_hdd\n"
  "\n"
  "# Frequency of receiving the Hardware API diagnostics\n"
  "float32 hw_api_hz\n"
  "# Display color (for TUI visualization purposes)\n"
  "int16 hw_api_color\n"
  "# Frequency of receiving the battery status from the Hardware API\n"
  "float32 hw_api_battery_hz\n"
  "# Frequency of receiving the Hardware API status\n"
  "float32 hw_api_state_hz\n"
  "# Frequency of receiving the Hardware API commanded setpoint\n"
  "float32 hw_api_cmd_hz\n"
  "# Name of the current mode reported by the Hardware API (e.g.: \"OFFBOARD\", \"AUTO.LAND\", etc.)\n"
  "string hw_api_mode\n"
  "# True if the vehicle is armed (actuator movement is enabled)\n"
  "bool hw_api_armed\n"
  "# True if the GPS data is being received correctly\n"
  "bool hw_api_gnss_ok\n"
  "# A measure of the GPS position quality\n"
  "float32 hw_api_gnss_qual\n"
  "# Frequency of receiving the magnetic field norm\n"
  "float32 mag_norm_hz\n"
  "\n"
  "# Gnss fix type\n"
  "# 0 -> No GPS connected\n"
  "# 1 -> No position information, GPS is connected\n"
  "# 2 -> 2D position\n"
  "# 3 -> 3D position\n"
  "# 4 -> DGPS/SBAS aided 3D position\n"
  "# 5 -> TK float, 3D position\n"
  "# 6 -> TK Fixed, 3D position\n"
  "# 7 -> Static fixed, typically used for base stations\n"
  "# 8 -> PPP, 3D position\n"
  "uint8 hw_api_gnss_fix_type\n"
  "\n"
  "# Number of satellites used for gnss solution\n"
  "uint8 hw_api_gnss_num_sats\n"
  "\n"
  "# Estimated accuracy of the gnss solution (in meters)\n"
  "float32 hw_api_gnss_pos_acc\n"
  "\n"
  "# Rate of the gnss status message\n"
  "float32 hw_api_gnss_status_hz\n"
  "\n"
  "# Norm of the  magnetic field (in Gauss, 10Gauss = 1mT)\n"
  "float32 mag_norm\n"
  "# Battery voltage in volts\n"
  "float32 battery_volt\n"
  "# Battery current in amperes\n"
  "float32 battery_curr\n"
  "# Estimate of the drained battery power in watthours\n"
  "float32 battery_wh_drained\n"
  "# Current collective thrust relative to max. thrust (i.e. between 0 and 1)\n"
  "float32 thrust\n"
  "# Current estimated mass of the vehicle\n"
  "float32 mass_estimate\n"
  "# Nominal mass of the vehicle\n"
  "float32 mass_set\n"
  "\n"
  "# A list of custom topics to be displayed in the TUI\n"
  "CustomTopic[] custom_topics\n"
  "# A list of custom strings to be displayed in the TUI\n"
  "string[] custom_string_outputs\n"
  "\n"
  "# A list of node names and a list of their corresponding CPU loads relative to a single CPU core\n"
  "NodeCpuLoad node_cpu_loads\n"
  "\n"
  "# True if the UAV is flying and there are no emergency or safety maneuvers taking place\n"
  "bool flying_normally\n"
  "# True if the UAV is currently controlled by the RC\n"
  "bool rc_mode\n"
  "# True if the UAV is currently flying to a goal waypoint\n"
  "bool have_goal\n"
  "# True if the UAV is currently following a trajectory (implies have_goal == true)\n"
  "bool tracking_trajectory\n"
  "# True if the control pipeline is ready to receive and execute waypoints and trajectories\n"
  "bool callbacks_enabled\n"
  "# True if collision avoidance with other UAVs using the NimbRo network is enabled\n"
  "bool collision_avoidance_enabled\n"
  "# True if the UAV is currently performing a maneuver to avoid a collision with another UAV\n"
  "bool avoiding_collision\n"
  "# True if the UAV is ready to take off\n"
  "bool automatic_start_can_takeoff\n"
  "\n"
  "# The number of other UAVs whose predicted trajectory is available to this one (for collision avoidance purposes)\n"
  "uint16 num_other_uavs";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__UavStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__UavStatus__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 6131, 6131},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__UavStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__UavStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mrs_msgs__msg__CustomTopic__get_individual_type_description_source(NULL);
    sources[3] = *mrs_msgs__msg__NodeCpuLoad__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
