// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/UavStatus.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/uav_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `uav_name`
// Member `uav_type`
// Member `uav_mass`
// Member `controllers`
// Member `gains`
// Member `trackers`
// Member `constraints`
// Member `odom_frame`
// Member `odom_estimators`
// Member `horizontal_estimator`
// Member `vertical_estimator`
// Member `heading_estimator`
// Member `agl_estimator`
// Member `hw_api_mode`
// Member `custom_string_outputs`
#include "rosidl_runtime_c/string_functions.h"
// Member `custom_topics`
#include "mrs_msgs/msg/detail/custom_topic__functions.h"
// Member `node_cpu_loads`
#include "mrs_msgs/msg/detail/node_cpu_load__functions.h"

bool
mrs_msgs__msg__UavStatus__init(mrs_msgs__msg__UavStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_msgs__msg__UavStatus__fini(msg);
    return false;
  }
  // uav_name
  if (!rosidl_runtime_c__String__init(&msg->uav_name)) {
    mrs_msgs__msg__UavStatus__fini(msg);
    return false;
  }
  // uav_type
  if (!rosidl_runtime_c__String__init(&msg->uav_type)) {
    mrs_msgs__msg__UavStatus__fini(msg);
    return false;
  }
  // uav_mass
  if (!rosidl_runtime_c__String__init(&msg->uav_mass)) {
    mrs_msgs__msg__UavStatus__fini(msg);
    return false;
  }
  // control_manager_diag_hz
  // control_manager_diag_color
  // controllers
  if (!rosidl_runtime_c__String__Sequence__init(&msg->controllers, 0)) {
    mrs_msgs__msg__UavStatus__fini(msg);
    return false;
  }
  // gains
  if (!rosidl_runtime_c__String__Sequence__init(&msg->gains, 0)) {
    mrs_msgs__msg__UavStatus__fini(msg);
    return false;
  }
  // trackers
  if (!rosidl_runtime_c__String__Sequence__init(&msg->trackers, 0)) {
    mrs_msgs__msg__UavStatus__fini(msg);
    return false;
  }
  // constraints
  if (!rosidl_runtime_c__String__Sequence__init(&msg->constraints, 0)) {
    mrs_msgs__msg__UavStatus__fini(msg);
    return false;
  }
  // null_tracker
  // secs_flown
  // odom_hz
  // odom_color
  // odom_x
  // odom_y
  // odom_z
  // odom_hdg
  // odom_frame
  if (!rosidl_runtime_c__String__init(&msg->odom_frame)) {
    mrs_msgs__msg__UavStatus__fini(msg);
    return false;
  }
  // odom_estimators
  if (!rosidl_runtime_c__String__Sequence__init(&msg->odom_estimators, 0)) {
    mrs_msgs__msg__UavStatus__fini(msg);
    return false;
  }
  // horizontal_estimator
  if (!rosidl_runtime_c__String__init(&msg->horizontal_estimator)) {
    mrs_msgs__msg__UavStatus__fini(msg);
    return false;
  }
  // vertical_estimator
  if (!rosidl_runtime_c__String__init(&msg->vertical_estimator)) {
    mrs_msgs__msg__UavStatus__fini(msg);
    return false;
  }
  // heading_estimator
  if (!rosidl_runtime_c__String__init(&msg->heading_estimator)) {
    mrs_msgs__msg__UavStatus__fini(msg);
    return false;
  }
  // agl_estimator
  if (!rosidl_runtime_c__String__init(&msg->agl_estimator)) {
    mrs_msgs__msg__UavStatus__fini(msg);
    return false;
  }
  // max_flight_z
  // cmd_x
  // cmd_y
  // cmd_z
  // cmd_hdg
  // cpu_load
  // cpu_load_total
  // cpu_ghz
  // cpu_temperature
  // free_ram
  // total_ram
  // free_hdd
  // hw_api_hz
  // hw_api_color
  // hw_api_battery_hz
  // hw_api_state_hz
  // hw_api_cmd_hz
  // hw_api_mode
  if (!rosidl_runtime_c__String__init(&msg->hw_api_mode)) {
    mrs_msgs__msg__UavStatus__fini(msg);
    return false;
  }
  // hw_api_armed
  // hw_api_gnss_ok
  // hw_api_gnss_qual
  // mag_norm_hz
  // hw_api_gnss_fix_type
  // hw_api_gnss_num_sats
  // hw_api_gnss_pos_acc
  // hw_api_gnss_status_hz
  // mag_norm
  // battery_volt
  // battery_curr
  // battery_wh_drained
  // thrust
  // mass_estimate
  // mass_set
  // custom_topics
  if (!mrs_msgs__msg__CustomTopic__Sequence__init(&msg->custom_topics, 0)) {
    mrs_msgs__msg__UavStatus__fini(msg);
    return false;
  }
  // custom_string_outputs
  if (!rosidl_runtime_c__String__Sequence__init(&msg->custom_string_outputs, 0)) {
    mrs_msgs__msg__UavStatus__fini(msg);
    return false;
  }
  // node_cpu_loads
  if (!mrs_msgs__msg__NodeCpuLoad__init(&msg->node_cpu_loads)) {
    mrs_msgs__msg__UavStatus__fini(msg);
    return false;
  }
  // flying_normally
  // rc_mode
  // have_goal
  // tracking_trajectory
  // callbacks_enabled
  // collision_avoidance_enabled
  // avoiding_collision
  // automatic_start_can_takeoff
  // num_other_uavs
  return true;
}

void
mrs_msgs__msg__UavStatus__fini(mrs_msgs__msg__UavStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // uav_name
  rosidl_runtime_c__String__fini(&msg->uav_name);
  // uav_type
  rosidl_runtime_c__String__fini(&msg->uav_type);
  // uav_mass
  rosidl_runtime_c__String__fini(&msg->uav_mass);
  // control_manager_diag_hz
  // control_manager_diag_color
  // controllers
  rosidl_runtime_c__String__Sequence__fini(&msg->controllers);
  // gains
  rosidl_runtime_c__String__Sequence__fini(&msg->gains);
  // trackers
  rosidl_runtime_c__String__Sequence__fini(&msg->trackers);
  // constraints
  rosidl_runtime_c__String__Sequence__fini(&msg->constraints);
  // null_tracker
  // secs_flown
  // odom_hz
  // odom_color
  // odom_x
  // odom_y
  // odom_z
  // odom_hdg
  // odom_frame
  rosidl_runtime_c__String__fini(&msg->odom_frame);
  // odom_estimators
  rosidl_runtime_c__String__Sequence__fini(&msg->odom_estimators);
  // horizontal_estimator
  rosidl_runtime_c__String__fini(&msg->horizontal_estimator);
  // vertical_estimator
  rosidl_runtime_c__String__fini(&msg->vertical_estimator);
  // heading_estimator
  rosidl_runtime_c__String__fini(&msg->heading_estimator);
  // agl_estimator
  rosidl_runtime_c__String__fini(&msg->agl_estimator);
  // max_flight_z
  // cmd_x
  // cmd_y
  // cmd_z
  // cmd_hdg
  // cpu_load
  // cpu_load_total
  // cpu_ghz
  // cpu_temperature
  // free_ram
  // total_ram
  // free_hdd
  // hw_api_hz
  // hw_api_color
  // hw_api_battery_hz
  // hw_api_state_hz
  // hw_api_cmd_hz
  // hw_api_mode
  rosidl_runtime_c__String__fini(&msg->hw_api_mode);
  // hw_api_armed
  // hw_api_gnss_ok
  // hw_api_gnss_qual
  // mag_norm_hz
  // hw_api_gnss_fix_type
  // hw_api_gnss_num_sats
  // hw_api_gnss_pos_acc
  // hw_api_gnss_status_hz
  // mag_norm
  // battery_volt
  // battery_curr
  // battery_wh_drained
  // thrust
  // mass_estimate
  // mass_set
  // custom_topics
  mrs_msgs__msg__CustomTopic__Sequence__fini(&msg->custom_topics);
  // custom_string_outputs
  rosidl_runtime_c__String__Sequence__fini(&msg->custom_string_outputs);
  // node_cpu_loads
  mrs_msgs__msg__NodeCpuLoad__fini(&msg->node_cpu_loads);
  // flying_normally
  // rc_mode
  // have_goal
  // tracking_trajectory
  // callbacks_enabled
  // collision_avoidance_enabled
  // avoiding_collision
  // automatic_start_can_takeoff
  // num_other_uavs
}

bool
mrs_msgs__msg__UavStatus__are_equal(const mrs_msgs__msg__UavStatus * lhs, const mrs_msgs__msg__UavStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // uav_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->uav_name), &(rhs->uav_name)))
  {
    return false;
  }
  // uav_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->uav_type), &(rhs->uav_type)))
  {
    return false;
  }
  // uav_mass
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->uav_mass), &(rhs->uav_mass)))
  {
    return false;
  }
  // control_manager_diag_hz
  if (lhs->control_manager_diag_hz != rhs->control_manager_diag_hz) {
    return false;
  }
  // control_manager_diag_color
  if (lhs->control_manager_diag_color != rhs->control_manager_diag_color) {
    return false;
  }
  // controllers
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->controllers), &(rhs->controllers)))
  {
    return false;
  }
  // gains
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->gains), &(rhs->gains)))
  {
    return false;
  }
  // trackers
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->trackers), &(rhs->trackers)))
  {
    return false;
  }
  // constraints
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->constraints), &(rhs->constraints)))
  {
    return false;
  }
  // null_tracker
  if (lhs->null_tracker != rhs->null_tracker) {
    return false;
  }
  // secs_flown
  if (lhs->secs_flown != rhs->secs_flown) {
    return false;
  }
  // odom_hz
  if (lhs->odom_hz != rhs->odom_hz) {
    return false;
  }
  // odom_color
  if (lhs->odom_color != rhs->odom_color) {
    return false;
  }
  // odom_x
  if (lhs->odom_x != rhs->odom_x) {
    return false;
  }
  // odom_y
  if (lhs->odom_y != rhs->odom_y) {
    return false;
  }
  // odom_z
  if (lhs->odom_z != rhs->odom_z) {
    return false;
  }
  // odom_hdg
  if (lhs->odom_hdg != rhs->odom_hdg) {
    return false;
  }
  // odom_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->odom_frame), &(rhs->odom_frame)))
  {
    return false;
  }
  // odom_estimators
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->odom_estimators), &(rhs->odom_estimators)))
  {
    return false;
  }
  // horizontal_estimator
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->horizontal_estimator), &(rhs->horizontal_estimator)))
  {
    return false;
  }
  // vertical_estimator
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->vertical_estimator), &(rhs->vertical_estimator)))
  {
    return false;
  }
  // heading_estimator
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->heading_estimator), &(rhs->heading_estimator)))
  {
    return false;
  }
  // agl_estimator
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->agl_estimator), &(rhs->agl_estimator)))
  {
    return false;
  }
  // max_flight_z
  if (lhs->max_flight_z != rhs->max_flight_z) {
    return false;
  }
  // cmd_x
  if (lhs->cmd_x != rhs->cmd_x) {
    return false;
  }
  // cmd_y
  if (lhs->cmd_y != rhs->cmd_y) {
    return false;
  }
  // cmd_z
  if (lhs->cmd_z != rhs->cmd_z) {
    return false;
  }
  // cmd_hdg
  if (lhs->cmd_hdg != rhs->cmd_hdg) {
    return false;
  }
  // cpu_load
  if (lhs->cpu_load != rhs->cpu_load) {
    return false;
  }
  // cpu_load_total
  if (lhs->cpu_load_total != rhs->cpu_load_total) {
    return false;
  }
  // cpu_ghz
  if (lhs->cpu_ghz != rhs->cpu_ghz) {
    return false;
  }
  // cpu_temperature
  if (lhs->cpu_temperature != rhs->cpu_temperature) {
    return false;
  }
  // free_ram
  if (lhs->free_ram != rhs->free_ram) {
    return false;
  }
  // total_ram
  if (lhs->total_ram != rhs->total_ram) {
    return false;
  }
  // free_hdd
  if (lhs->free_hdd != rhs->free_hdd) {
    return false;
  }
  // hw_api_hz
  if (lhs->hw_api_hz != rhs->hw_api_hz) {
    return false;
  }
  // hw_api_color
  if (lhs->hw_api_color != rhs->hw_api_color) {
    return false;
  }
  // hw_api_battery_hz
  if (lhs->hw_api_battery_hz != rhs->hw_api_battery_hz) {
    return false;
  }
  // hw_api_state_hz
  if (lhs->hw_api_state_hz != rhs->hw_api_state_hz) {
    return false;
  }
  // hw_api_cmd_hz
  if (lhs->hw_api_cmd_hz != rhs->hw_api_cmd_hz) {
    return false;
  }
  // hw_api_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hw_api_mode), &(rhs->hw_api_mode)))
  {
    return false;
  }
  // hw_api_armed
  if (lhs->hw_api_armed != rhs->hw_api_armed) {
    return false;
  }
  // hw_api_gnss_ok
  if (lhs->hw_api_gnss_ok != rhs->hw_api_gnss_ok) {
    return false;
  }
  // hw_api_gnss_qual
  if (lhs->hw_api_gnss_qual != rhs->hw_api_gnss_qual) {
    return false;
  }
  // mag_norm_hz
  if (lhs->mag_norm_hz != rhs->mag_norm_hz) {
    return false;
  }
  // hw_api_gnss_fix_type
  if (lhs->hw_api_gnss_fix_type != rhs->hw_api_gnss_fix_type) {
    return false;
  }
  // hw_api_gnss_num_sats
  if (lhs->hw_api_gnss_num_sats != rhs->hw_api_gnss_num_sats) {
    return false;
  }
  // hw_api_gnss_pos_acc
  if (lhs->hw_api_gnss_pos_acc != rhs->hw_api_gnss_pos_acc) {
    return false;
  }
  // hw_api_gnss_status_hz
  if (lhs->hw_api_gnss_status_hz != rhs->hw_api_gnss_status_hz) {
    return false;
  }
  // mag_norm
  if (lhs->mag_norm != rhs->mag_norm) {
    return false;
  }
  // battery_volt
  if (lhs->battery_volt != rhs->battery_volt) {
    return false;
  }
  // battery_curr
  if (lhs->battery_curr != rhs->battery_curr) {
    return false;
  }
  // battery_wh_drained
  if (lhs->battery_wh_drained != rhs->battery_wh_drained) {
    return false;
  }
  // thrust
  if (lhs->thrust != rhs->thrust) {
    return false;
  }
  // mass_estimate
  if (lhs->mass_estimate != rhs->mass_estimate) {
    return false;
  }
  // mass_set
  if (lhs->mass_set != rhs->mass_set) {
    return false;
  }
  // custom_topics
  if (!mrs_msgs__msg__CustomTopic__Sequence__are_equal(
      &(lhs->custom_topics), &(rhs->custom_topics)))
  {
    return false;
  }
  // custom_string_outputs
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->custom_string_outputs), &(rhs->custom_string_outputs)))
  {
    return false;
  }
  // node_cpu_loads
  if (!mrs_msgs__msg__NodeCpuLoad__are_equal(
      &(lhs->node_cpu_loads), &(rhs->node_cpu_loads)))
  {
    return false;
  }
  // flying_normally
  if (lhs->flying_normally != rhs->flying_normally) {
    return false;
  }
  // rc_mode
  if (lhs->rc_mode != rhs->rc_mode) {
    return false;
  }
  // have_goal
  if (lhs->have_goal != rhs->have_goal) {
    return false;
  }
  // tracking_trajectory
  if (lhs->tracking_trajectory != rhs->tracking_trajectory) {
    return false;
  }
  // callbacks_enabled
  if (lhs->callbacks_enabled != rhs->callbacks_enabled) {
    return false;
  }
  // collision_avoidance_enabled
  if (lhs->collision_avoidance_enabled != rhs->collision_avoidance_enabled) {
    return false;
  }
  // avoiding_collision
  if (lhs->avoiding_collision != rhs->avoiding_collision) {
    return false;
  }
  // automatic_start_can_takeoff
  if (lhs->automatic_start_can_takeoff != rhs->automatic_start_can_takeoff) {
    return false;
  }
  // num_other_uavs
  if (lhs->num_other_uavs != rhs->num_other_uavs) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__UavStatus__copy(
  const mrs_msgs__msg__UavStatus * input,
  mrs_msgs__msg__UavStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // uav_name
  if (!rosidl_runtime_c__String__copy(
      &(input->uav_name), &(output->uav_name)))
  {
    return false;
  }
  // uav_type
  if (!rosidl_runtime_c__String__copy(
      &(input->uav_type), &(output->uav_type)))
  {
    return false;
  }
  // uav_mass
  if (!rosidl_runtime_c__String__copy(
      &(input->uav_mass), &(output->uav_mass)))
  {
    return false;
  }
  // control_manager_diag_hz
  output->control_manager_diag_hz = input->control_manager_diag_hz;
  // control_manager_diag_color
  output->control_manager_diag_color = input->control_manager_diag_color;
  // controllers
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->controllers), &(output->controllers)))
  {
    return false;
  }
  // gains
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->gains), &(output->gains)))
  {
    return false;
  }
  // trackers
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->trackers), &(output->trackers)))
  {
    return false;
  }
  // constraints
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->constraints), &(output->constraints)))
  {
    return false;
  }
  // null_tracker
  output->null_tracker = input->null_tracker;
  // secs_flown
  output->secs_flown = input->secs_flown;
  // odom_hz
  output->odom_hz = input->odom_hz;
  // odom_color
  output->odom_color = input->odom_color;
  // odom_x
  output->odom_x = input->odom_x;
  // odom_y
  output->odom_y = input->odom_y;
  // odom_z
  output->odom_z = input->odom_z;
  // odom_hdg
  output->odom_hdg = input->odom_hdg;
  // odom_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->odom_frame), &(output->odom_frame)))
  {
    return false;
  }
  // odom_estimators
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->odom_estimators), &(output->odom_estimators)))
  {
    return false;
  }
  // horizontal_estimator
  if (!rosidl_runtime_c__String__copy(
      &(input->horizontal_estimator), &(output->horizontal_estimator)))
  {
    return false;
  }
  // vertical_estimator
  if (!rosidl_runtime_c__String__copy(
      &(input->vertical_estimator), &(output->vertical_estimator)))
  {
    return false;
  }
  // heading_estimator
  if (!rosidl_runtime_c__String__copy(
      &(input->heading_estimator), &(output->heading_estimator)))
  {
    return false;
  }
  // agl_estimator
  if (!rosidl_runtime_c__String__copy(
      &(input->agl_estimator), &(output->agl_estimator)))
  {
    return false;
  }
  // max_flight_z
  output->max_flight_z = input->max_flight_z;
  // cmd_x
  output->cmd_x = input->cmd_x;
  // cmd_y
  output->cmd_y = input->cmd_y;
  // cmd_z
  output->cmd_z = input->cmd_z;
  // cmd_hdg
  output->cmd_hdg = input->cmd_hdg;
  // cpu_load
  output->cpu_load = input->cpu_load;
  // cpu_load_total
  output->cpu_load_total = input->cpu_load_total;
  // cpu_ghz
  output->cpu_ghz = input->cpu_ghz;
  // cpu_temperature
  output->cpu_temperature = input->cpu_temperature;
  // free_ram
  output->free_ram = input->free_ram;
  // total_ram
  output->total_ram = input->total_ram;
  // free_hdd
  output->free_hdd = input->free_hdd;
  // hw_api_hz
  output->hw_api_hz = input->hw_api_hz;
  // hw_api_color
  output->hw_api_color = input->hw_api_color;
  // hw_api_battery_hz
  output->hw_api_battery_hz = input->hw_api_battery_hz;
  // hw_api_state_hz
  output->hw_api_state_hz = input->hw_api_state_hz;
  // hw_api_cmd_hz
  output->hw_api_cmd_hz = input->hw_api_cmd_hz;
  // hw_api_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->hw_api_mode), &(output->hw_api_mode)))
  {
    return false;
  }
  // hw_api_armed
  output->hw_api_armed = input->hw_api_armed;
  // hw_api_gnss_ok
  output->hw_api_gnss_ok = input->hw_api_gnss_ok;
  // hw_api_gnss_qual
  output->hw_api_gnss_qual = input->hw_api_gnss_qual;
  // mag_norm_hz
  output->mag_norm_hz = input->mag_norm_hz;
  // hw_api_gnss_fix_type
  output->hw_api_gnss_fix_type = input->hw_api_gnss_fix_type;
  // hw_api_gnss_num_sats
  output->hw_api_gnss_num_sats = input->hw_api_gnss_num_sats;
  // hw_api_gnss_pos_acc
  output->hw_api_gnss_pos_acc = input->hw_api_gnss_pos_acc;
  // hw_api_gnss_status_hz
  output->hw_api_gnss_status_hz = input->hw_api_gnss_status_hz;
  // mag_norm
  output->mag_norm = input->mag_norm;
  // battery_volt
  output->battery_volt = input->battery_volt;
  // battery_curr
  output->battery_curr = input->battery_curr;
  // battery_wh_drained
  output->battery_wh_drained = input->battery_wh_drained;
  // thrust
  output->thrust = input->thrust;
  // mass_estimate
  output->mass_estimate = input->mass_estimate;
  // mass_set
  output->mass_set = input->mass_set;
  // custom_topics
  if (!mrs_msgs__msg__CustomTopic__Sequence__copy(
      &(input->custom_topics), &(output->custom_topics)))
  {
    return false;
  }
  // custom_string_outputs
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->custom_string_outputs), &(output->custom_string_outputs)))
  {
    return false;
  }
  // node_cpu_loads
  if (!mrs_msgs__msg__NodeCpuLoad__copy(
      &(input->node_cpu_loads), &(output->node_cpu_loads)))
  {
    return false;
  }
  // flying_normally
  output->flying_normally = input->flying_normally;
  // rc_mode
  output->rc_mode = input->rc_mode;
  // have_goal
  output->have_goal = input->have_goal;
  // tracking_trajectory
  output->tracking_trajectory = input->tracking_trajectory;
  // callbacks_enabled
  output->callbacks_enabled = input->callbacks_enabled;
  // collision_avoidance_enabled
  output->collision_avoidance_enabled = input->collision_avoidance_enabled;
  // avoiding_collision
  output->avoiding_collision = input->avoiding_collision;
  // automatic_start_can_takeoff
  output->automatic_start_can_takeoff = input->automatic_start_can_takeoff;
  // num_other_uavs
  output->num_other_uavs = input->num_other_uavs;
  return true;
}

mrs_msgs__msg__UavStatus *
mrs_msgs__msg__UavStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__UavStatus * msg = (mrs_msgs__msg__UavStatus *)allocator.allocate(sizeof(mrs_msgs__msg__UavStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__UavStatus));
  bool success = mrs_msgs__msg__UavStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__UavStatus__destroy(mrs_msgs__msg__UavStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__UavStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__UavStatus__Sequence__init(mrs_msgs__msg__UavStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__UavStatus * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__UavStatus *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__UavStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__UavStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__UavStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mrs_msgs__msg__UavStatus__Sequence__fini(mrs_msgs__msg__UavStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mrs_msgs__msg__UavStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mrs_msgs__msg__UavStatus__Sequence *
mrs_msgs__msg__UavStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__UavStatus__Sequence * array = (mrs_msgs__msg__UavStatus__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__UavStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__UavStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__UavStatus__Sequence__destroy(mrs_msgs__msg__UavStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__UavStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__UavStatus__Sequence__are_equal(const mrs_msgs__msg__UavStatus__Sequence * lhs, const mrs_msgs__msg__UavStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__UavStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__UavStatus__Sequence__copy(
  const mrs_msgs__msg__UavStatus__Sequence * input,
  mrs_msgs__msg__UavStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__UavStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__UavStatus * data =
      (mrs_msgs__msg__UavStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__UavStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__UavStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__UavStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
