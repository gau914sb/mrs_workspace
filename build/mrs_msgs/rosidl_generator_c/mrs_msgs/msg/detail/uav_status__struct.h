// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/UavStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/uav_status.h"


#ifndef MRS_MSGS__MSG__DETAIL__UAV_STATUS__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__UAV_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'uav_name'
// Member 'uav_type'
// Member 'uav_mass'
// Member 'controllers'
// Member 'gains'
// Member 'trackers'
// Member 'constraints'
// Member 'odom_frame'
// Member 'odom_estimators'
// Member 'horizontal_estimator'
// Member 'vertical_estimator'
// Member 'heading_estimator'
// Member 'agl_estimator'
// Member 'hw_api_mode'
// Member 'custom_string_outputs'
#include "rosidl_runtime_c/string.h"
// Member 'custom_topics'
#include "mrs_msgs/msg/detail/custom_topic__struct.h"
// Member 'node_cpu_loads'
#include "mrs_msgs/msg/detail/node_cpu_load__struct.h"

/// Struct defined in msg/UavStatus in the package mrs_msgs.
/**
  * Standard ROS header with stamp and coordinate frame ID
 */
typedef struct mrs_msgs__msg__UavStatus
{
  std_msgs__msg__Header header;
  /// Unique name of the UAV
  rosidl_runtime_c__String uav_name;
  /// Name of the UAV model
  rosidl_runtime_c__String uav_type;
  /// The current estimated UAV's mass as a string for display purposes
  rosidl_runtime_c__String uav_mass;
  /// Frequency of receiving the Control Manager diagnostics
  float control_manager_diag_hz;
  /// Display color (for TUI visualization purposes)
  int16_t control_manager_diag_color;
  /// A list of the available control algorithms, the first element is the active controller
  rosidl_runtime_c__String__Sequence controllers;
  /// A list of the available control gain presets for the current controller, the first element is the active preset
  rosidl_runtime_c__String__Sequence gains;
  /// A list of the available trajectory tracking (pre-shaping) algorithms, the first element is the active algorithm
  rosidl_runtime_c__String__Sequence trackers;
  /// A list of the available dynamic constraint presets for the current tracker, the first element is the active preset
  rosidl_runtime_c__String__Sequence constraints;
  /// True if the null (no-output) tracker is active
  bool null_tracker;
  /// Flight time
  uint32_t secs_flown;
  /// Frequency of receiving the Estimation Manager diagnostics
  float odom_hz;
  /// Display color (for TUI visualization purposes)
  int16_t odom_color;
  /// X position of the UAV in the current estimation coordinate frame
  float odom_x;
  /// Y position of the UAV in the current estimation coordinate frame
  float odom_y;
  /// Z position of the UAV in the current estimation coordinate frame
  float odom_z;
  /// Heading of the UAV in the current estimation coordinate frame
  float odom_hdg;
  /// Name of the current estimation coordinate frame
  rosidl_runtime_c__String odom_frame;
  /// A list of the available ego-state estimation sources, the first element is the active source
  rosidl_runtime_c__String__Sequence odom_estimators;
  /// Name of the current source used for estimation of the UAV's horizontal position
  rosidl_runtime_c__String horizontal_estimator;
  /// Name of the current source used for estimation of the UAV's vertical position
  rosidl_runtime_c__String vertical_estimator;
  /// Name of the current source used for estimation of the UAV's heading
  rosidl_runtime_c__String heading_estimator;
  /// Name of the current source used for estimation of the UAV's above ground level
  rosidl_runtime_c__String agl_estimator;
  /// Maximal allowed Z coordinate of the UAV
  float max_flight_z;
  /// Setpoint X position of the UAV in the current estimation coordinate frame
  float cmd_x;
  /// Setpoint Y position of the UAV in the current estimation coordinate frame
  float cmd_y;
  /// Setpoint Z position of the UAV in the current estimation coordinate frame
  float cmd_z;
  /// Setpoint heading of the UAV in the current estimation coordinate frame
  float cmd_hdg;
  /// Current load of the CPU in percent relative all CPU cores (i.e. a maximal load of a 2-core CPU is 100.0)
  float cpu_load;
  /// Current load of the CPU in percent relative to a single CPU core (i.e. a maximal load of a 2-core CPU is 200.0)
  float cpu_load_total;
  /// Current average frequency of the CPU in gigahertz
  float cpu_ghz;
  /// Current temperature of the CPU in degrees Celsius (or zero if not supported by the current system)
  float cpu_temperature;
  /// The amount of free RAM in gigabytes
  float free_ram;
  /// The total available RAM in gigabytes
  float total_ram;
  /// The amount of free disk space in gigabytes
  int32_t free_hdd;
  /// Frequency of receiving the Hardware API diagnostics
  float hw_api_hz;
  /// Display color (for TUI visualization purposes)
  int16_t hw_api_color;
  /// Frequency of receiving the battery status from the Hardware API
  float hw_api_battery_hz;
  /// Frequency of receiving the Hardware API status
  float hw_api_state_hz;
  /// Frequency of receiving the Hardware API commanded setpoint
  float hw_api_cmd_hz;
  /// Name of the current mode reported by the Hardware API (e.g.: "OFFBOARD", "AUTO.LAND", etc.)
  rosidl_runtime_c__String hw_api_mode;
  /// True if the vehicle is armed (actuator movement is enabled)
  bool hw_api_armed;
  /// True if the GPS data is being received correctly
  bool hw_api_gnss_ok;
  /// A measure of the GPS position quality
  float hw_api_gnss_qual;
  /// Frequency of receiving the magnetic field norm
  float mag_norm_hz;
  /// Gnss fix type
  /// 0 -> No GPS connected
  /// 1 -> No position information, GPS is connected
  /// 2 -> 2D position
  /// 3 -> 3D position
  /// 4 -> DGPS/SBAS aided 3D position
  /// 5 -> TK float, 3D position
  /// 6 -> TK Fixed, 3D position
  /// 7 -> Static fixed, typically used for base stations
  /// 8 -> PPP, 3D position
  uint8_t hw_api_gnss_fix_type;
  /// Number of satellites used for gnss solution
  uint8_t hw_api_gnss_num_sats;
  /// Estimated accuracy of the gnss solution (in meters)
  float hw_api_gnss_pos_acc;
  /// Rate of the gnss status message
  float hw_api_gnss_status_hz;
  /// Norm of the  magnetic field (in Gauss, 10Gauss = 1mT)
  float mag_norm;
  /// Battery voltage in volts
  float battery_volt;
  /// Battery current in amperes
  float battery_curr;
  /// Estimate of the drained battery power in watthours
  float battery_wh_drained;
  /// Current collective thrust relative to max. thrust (i.e. between 0 and 1)
  float thrust;
  /// Current estimated mass of the vehicle
  float mass_estimate;
  /// Nominal mass of the vehicle
  float mass_set;
  /// A list of custom topics to be displayed in the TUI
  mrs_msgs__msg__CustomTopic__Sequence custom_topics;
  /// A list of custom strings to be displayed in the TUI
  rosidl_runtime_c__String__Sequence custom_string_outputs;
  /// A list of node names and a list of their corresponding CPU loads relative to a single CPU core
  mrs_msgs__msg__NodeCpuLoad node_cpu_loads;
  /// True if the UAV is flying and there are no emergency or safety maneuvers taking place
  bool flying_normally;
  /// True if the UAV is currently controlled by the RC
  bool rc_mode;
  /// True if the UAV is currently flying to a goal waypoint
  bool have_goal;
  /// True if the UAV is currently following a trajectory (implies have_goal == true)
  bool tracking_trajectory;
  /// True if the control pipeline is ready to receive and execute waypoints and trajectories
  bool callbacks_enabled;
  /// True if collision avoidance with other UAVs using the NimbRo network is enabled
  bool collision_avoidance_enabled;
  /// True if the UAV is currently performing a maneuver to avoid a collision with another UAV
  bool avoiding_collision;
  /// True if the UAV is ready to take off
  bool automatic_start_can_takeoff;
  /// The number of other UAVs whose predicted trajectory is available to this one (for collision avoidance purposes)
  uint16_t num_other_uavs;
} mrs_msgs__msg__UavStatus;

// Struct for a sequence of mrs_msgs__msg__UavStatus.
typedef struct mrs_msgs__msg__UavStatus__Sequence
{
  mrs_msgs__msg__UavStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__UavStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__UAV_STATUS__STRUCT_H_
