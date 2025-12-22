// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/UavStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/uav_status.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__UAV_STATUS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__UAV_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/uav_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_UavStatus_num_other_uavs
{
public:
  explicit Init_UavStatus_num_other_uavs(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::UavStatus num_other_uavs(::mrs_msgs::msg::UavStatus::_num_other_uavs_type arg)
  {
    msg_.num_other_uavs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_automatic_start_can_takeoff
{
public:
  explicit Init_UavStatus_automatic_start_can_takeoff(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_num_other_uavs automatic_start_can_takeoff(::mrs_msgs::msg::UavStatus::_automatic_start_can_takeoff_type arg)
  {
    msg_.automatic_start_can_takeoff = std::move(arg);
    return Init_UavStatus_num_other_uavs(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_avoiding_collision
{
public:
  explicit Init_UavStatus_avoiding_collision(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_automatic_start_can_takeoff avoiding_collision(::mrs_msgs::msg::UavStatus::_avoiding_collision_type arg)
  {
    msg_.avoiding_collision = std::move(arg);
    return Init_UavStatus_automatic_start_can_takeoff(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_collision_avoidance_enabled
{
public:
  explicit Init_UavStatus_collision_avoidance_enabled(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_avoiding_collision collision_avoidance_enabled(::mrs_msgs::msg::UavStatus::_collision_avoidance_enabled_type arg)
  {
    msg_.collision_avoidance_enabled = std::move(arg);
    return Init_UavStatus_avoiding_collision(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_callbacks_enabled
{
public:
  explicit Init_UavStatus_callbacks_enabled(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_collision_avoidance_enabled callbacks_enabled(::mrs_msgs::msg::UavStatus::_callbacks_enabled_type arg)
  {
    msg_.callbacks_enabled = std::move(arg);
    return Init_UavStatus_collision_avoidance_enabled(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_tracking_trajectory
{
public:
  explicit Init_UavStatus_tracking_trajectory(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_callbacks_enabled tracking_trajectory(::mrs_msgs::msg::UavStatus::_tracking_trajectory_type arg)
  {
    msg_.tracking_trajectory = std::move(arg);
    return Init_UavStatus_callbacks_enabled(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_have_goal
{
public:
  explicit Init_UavStatus_have_goal(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_tracking_trajectory have_goal(::mrs_msgs::msg::UavStatus::_have_goal_type arg)
  {
    msg_.have_goal = std::move(arg);
    return Init_UavStatus_tracking_trajectory(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_rc_mode
{
public:
  explicit Init_UavStatus_rc_mode(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_have_goal rc_mode(::mrs_msgs::msg::UavStatus::_rc_mode_type arg)
  {
    msg_.rc_mode = std::move(arg);
    return Init_UavStatus_have_goal(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_flying_normally
{
public:
  explicit Init_UavStatus_flying_normally(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_rc_mode flying_normally(::mrs_msgs::msg::UavStatus::_flying_normally_type arg)
  {
    msg_.flying_normally = std::move(arg);
    return Init_UavStatus_rc_mode(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_node_cpu_loads
{
public:
  explicit Init_UavStatus_node_cpu_loads(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_flying_normally node_cpu_loads(::mrs_msgs::msg::UavStatus::_node_cpu_loads_type arg)
  {
    msg_.node_cpu_loads = std::move(arg);
    return Init_UavStatus_flying_normally(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_custom_string_outputs
{
public:
  explicit Init_UavStatus_custom_string_outputs(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_node_cpu_loads custom_string_outputs(::mrs_msgs::msg::UavStatus::_custom_string_outputs_type arg)
  {
    msg_.custom_string_outputs = std::move(arg);
    return Init_UavStatus_node_cpu_loads(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_custom_topics
{
public:
  explicit Init_UavStatus_custom_topics(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_custom_string_outputs custom_topics(::mrs_msgs::msg::UavStatus::_custom_topics_type arg)
  {
    msg_.custom_topics = std::move(arg);
    return Init_UavStatus_custom_string_outputs(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_mass_set
{
public:
  explicit Init_UavStatus_mass_set(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_custom_topics mass_set(::mrs_msgs::msg::UavStatus::_mass_set_type arg)
  {
    msg_.mass_set = std::move(arg);
    return Init_UavStatus_custom_topics(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_mass_estimate
{
public:
  explicit Init_UavStatus_mass_estimate(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_mass_set mass_estimate(::mrs_msgs::msg::UavStatus::_mass_estimate_type arg)
  {
    msg_.mass_estimate = std::move(arg);
    return Init_UavStatus_mass_set(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_thrust
{
public:
  explicit Init_UavStatus_thrust(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_mass_estimate thrust(::mrs_msgs::msg::UavStatus::_thrust_type arg)
  {
    msg_.thrust = std::move(arg);
    return Init_UavStatus_mass_estimate(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_battery_wh_drained
{
public:
  explicit Init_UavStatus_battery_wh_drained(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_thrust battery_wh_drained(::mrs_msgs::msg::UavStatus::_battery_wh_drained_type arg)
  {
    msg_.battery_wh_drained = std::move(arg);
    return Init_UavStatus_thrust(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_battery_curr
{
public:
  explicit Init_UavStatus_battery_curr(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_battery_wh_drained battery_curr(::mrs_msgs::msg::UavStatus::_battery_curr_type arg)
  {
    msg_.battery_curr = std::move(arg);
    return Init_UavStatus_battery_wh_drained(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_battery_volt
{
public:
  explicit Init_UavStatus_battery_volt(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_battery_curr battery_volt(::mrs_msgs::msg::UavStatus::_battery_volt_type arg)
  {
    msg_.battery_volt = std::move(arg);
    return Init_UavStatus_battery_curr(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_mag_norm
{
public:
  explicit Init_UavStatus_mag_norm(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_battery_volt mag_norm(::mrs_msgs::msg::UavStatus::_mag_norm_type arg)
  {
    msg_.mag_norm = std::move(arg);
    return Init_UavStatus_battery_volt(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_hw_api_gnss_status_hz
{
public:
  explicit Init_UavStatus_hw_api_gnss_status_hz(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_mag_norm hw_api_gnss_status_hz(::mrs_msgs::msg::UavStatus::_hw_api_gnss_status_hz_type arg)
  {
    msg_.hw_api_gnss_status_hz = std::move(arg);
    return Init_UavStatus_mag_norm(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_hw_api_gnss_pos_acc
{
public:
  explicit Init_UavStatus_hw_api_gnss_pos_acc(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_hw_api_gnss_status_hz hw_api_gnss_pos_acc(::mrs_msgs::msg::UavStatus::_hw_api_gnss_pos_acc_type arg)
  {
    msg_.hw_api_gnss_pos_acc = std::move(arg);
    return Init_UavStatus_hw_api_gnss_status_hz(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_hw_api_gnss_num_sats
{
public:
  explicit Init_UavStatus_hw_api_gnss_num_sats(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_hw_api_gnss_pos_acc hw_api_gnss_num_sats(::mrs_msgs::msg::UavStatus::_hw_api_gnss_num_sats_type arg)
  {
    msg_.hw_api_gnss_num_sats = std::move(arg);
    return Init_UavStatus_hw_api_gnss_pos_acc(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_hw_api_gnss_fix_type
{
public:
  explicit Init_UavStatus_hw_api_gnss_fix_type(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_hw_api_gnss_num_sats hw_api_gnss_fix_type(::mrs_msgs::msg::UavStatus::_hw_api_gnss_fix_type_type arg)
  {
    msg_.hw_api_gnss_fix_type = std::move(arg);
    return Init_UavStatus_hw_api_gnss_num_sats(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_mag_norm_hz
{
public:
  explicit Init_UavStatus_mag_norm_hz(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_hw_api_gnss_fix_type mag_norm_hz(::mrs_msgs::msg::UavStatus::_mag_norm_hz_type arg)
  {
    msg_.mag_norm_hz = std::move(arg);
    return Init_UavStatus_hw_api_gnss_fix_type(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_hw_api_gnss_qual
{
public:
  explicit Init_UavStatus_hw_api_gnss_qual(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_mag_norm_hz hw_api_gnss_qual(::mrs_msgs::msg::UavStatus::_hw_api_gnss_qual_type arg)
  {
    msg_.hw_api_gnss_qual = std::move(arg);
    return Init_UavStatus_mag_norm_hz(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_hw_api_gnss_ok
{
public:
  explicit Init_UavStatus_hw_api_gnss_ok(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_hw_api_gnss_qual hw_api_gnss_ok(::mrs_msgs::msg::UavStatus::_hw_api_gnss_ok_type arg)
  {
    msg_.hw_api_gnss_ok = std::move(arg);
    return Init_UavStatus_hw_api_gnss_qual(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_hw_api_armed
{
public:
  explicit Init_UavStatus_hw_api_armed(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_hw_api_gnss_ok hw_api_armed(::mrs_msgs::msg::UavStatus::_hw_api_armed_type arg)
  {
    msg_.hw_api_armed = std::move(arg);
    return Init_UavStatus_hw_api_gnss_ok(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_hw_api_mode
{
public:
  explicit Init_UavStatus_hw_api_mode(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_hw_api_armed hw_api_mode(::mrs_msgs::msg::UavStatus::_hw_api_mode_type arg)
  {
    msg_.hw_api_mode = std::move(arg);
    return Init_UavStatus_hw_api_armed(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_hw_api_cmd_hz
{
public:
  explicit Init_UavStatus_hw_api_cmd_hz(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_hw_api_mode hw_api_cmd_hz(::mrs_msgs::msg::UavStatus::_hw_api_cmd_hz_type arg)
  {
    msg_.hw_api_cmd_hz = std::move(arg);
    return Init_UavStatus_hw_api_mode(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_hw_api_state_hz
{
public:
  explicit Init_UavStatus_hw_api_state_hz(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_hw_api_cmd_hz hw_api_state_hz(::mrs_msgs::msg::UavStatus::_hw_api_state_hz_type arg)
  {
    msg_.hw_api_state_hz = std::move(arg);
    return Init_UavStatus_hw_api_cmd_hz(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_hw_api_battery_hz
{
public:
  explicit Init_UavStatus_hw_api_battery_hz(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_hw_api_state_hz hw_api_battery_hz(::mrs_msgs::msg::UavStatus::_hw_api_battery_hz_type arg)
  {
    msg_.hw_api_battery_hz = std::move(arg);
    return Init_UavStatus_hw_api_state_hz(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_hw_api_color
{
public:
  explicit Init_UavStatus_hw_api_color(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_hw_api_battery_hz hw_api_color(::mrs_msgs::msg::UavStatus::_hw_api_color_type arg)
  {
    msg_.hw_api_color = std::move(arg);
    return Init_UavStatus_hw_api_battery_hz(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_hw_api_hz
{
public:
  explicit Init_UavStatus_hw_api_hz(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_hw_api_color hw_api_hz(::mrs_msgs::msg::UavStatus::_hw_api_hz_type arg)
  {
    msg_.hw_api_hz = std::move(arg);
    return Init_UavStatus_hw_api_color(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_free_hdd
{
public:
  explicit Init_UavStatus_free_hdd(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_hw_api_hz free_hdd(::mrs_msgs::msg::UavStatus::_free_hdd_type arg)
  {
    msg_.free_hdd = std::move(arg);
    return Init_UavStatus_hw_api_hz(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_total_ram
{
public:
  explicit Init_UavStatus_total_ram(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_free_hdd total_ram(::mrs_msgs::msg::UavStatus::_total_ram_type arg)
  {
    msg_.total_ram = std::move(arg);
    return Init_UavStatus_free_hdd(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_free_ram
{
public:
  explicit Init_UavStatus_free_ram(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_total_ram free_ram(::mrs_msgs::msg::UavStatus::_free_ram_type arg)
  {
    msg_.free_ram = std::move(arg);
    return Init_UavStatus_total_ram(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_cpu_temperature
{
public:
  explicit Init_UavStatus_cpu_temperature(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_free_ram cpu_temperature(::mrs_msgs::msg::UavStatus::_cpu_temperature_type arg)
  {
    msg_.cpu_temperature = std::move(arg);
    return Init_UavStatus_free_ram(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_cpu_ghz
{
public:
  explicit Init_UavStatus_cpu_ghz(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_cpu_temperature cpu_ghz(::mrs_msgs::msg::UavStatus::_cpu_ghz_type arg)
  {
    msg_.cpu_ghz = std::move(arg);
    return Init_UavStatus_cpu_temperature(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_cpu_load_total
{
public:
  explicit Init_UavStatus_cpu_load_total(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_cpu_ghz cpu_load_total(::mrs_msgs::msg::UavStatus::_cpu_load_total_type arg)
  {
    msg_.cpu_load_total = std::move(arg);
    return Init_UavStatus_cpu_ghz(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_cpu_load
{
public:
  explicit Init_UavStatus_cpu_load(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_cpu_load_total cpu_load(::mrs_msgs::msg::UavStatus::_cpu_load_type arg)
  {
    msg_.cpu_load = std::move(arg);
    return Init_UavStatus_cpu_load_total(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_cmd_hdg
{
public:
  explicit Init_UavStatus_cmd_hdg(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_cpu_load cmd_hdg(::mrs_msgs::msg::UavStatus::_cmd_hdg_type arg)
  {
    msg_.cmd_hdg = std::move(arg);
    return Init_UavStatus_cpu_load(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_cmd_z
{
public:
  explicit Init_UavStatus_cmd_z(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_cmd_hdg cmd_z(::mrs_msgs::msg::UavStatus::_cmd_z_type arg)
  {
    msg_.cmd_z = std::move(arg);
    return Init_UavStatus_cmd_hdg(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_cmd_y
{
public:
  explicit Init_UavStatus_cmd_y(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_cmd_z cmd_y(::mrs_msgs::msg::UavStatus::_cmd_y_type arg)
  {
    msg_.cmd_y = std::move(arg);
    return Init_UavStatus_cmd_z(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_cmd_x
{
public:
  explicit Init_UavStatus_cmd_x(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_cmd_y cmd_x(::mrs_msgs::msg::UavStatus::_cmd_x_type arg)
  {
    msg_.cmd_x = std::move(arg);
    return Init_UavStatus_cmd_y(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_max_flight_z
{
public:
  explicit Init_UavStatus_max_flight_z(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_cmd_x max_flight_z(::mrs_msgs::msg::UavStatus::_max_flight_z_type arg)
  {
    msg_.max_flight_z = std::move(arg);
    return Init_UavStatus_cmd_x(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_agl_estimator
{
public:
  explicit Init_UavStatus_agl_estimator(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_max_flight_z agl_estimator(::mrs_msgs::msg::UavStatus::_agl_estimator_type arg)
  {
    msg_.agl_estimator = std::move(arg);
    return Init_UavStatus_max_flight_z(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_heading_estimator
{
public:
  explicit Init_UavStatus_heading_estimator(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_agl_estimator heading_estimator(::mrs_msgs::msg::UavStatus::_heading_estimator_type arg)
  {
    msg_.heading_estimator = std::move(arg);
    return Init_UavStatus_agl_estimator(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_vertical_estimator
{
public:
  explicit Init_UavStatus_vertical_estimator(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_heading_estimator vertical_estimator(::mrs_msgs::msg::UavStatus::_vertical_estimator_type arg)
  {
    msg_.vertical_estimator = std::move(arg);
    return Init_UavStatus_heading_estimator(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_horizontal_estimator
{
public:
  explicit Init_UavStatus_horizontal_estimator(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_vertical_estimator horizontal_estimator(::mrs_msgs::msg::UavStatus::_horizontal_estimator_type arg)
  {
    msg_.horizontal_estimator = std::move(arg);
    return Init_UavStatus_vertical_estimator(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_odom_estimators
{
public:
  explicit Init_UavStatus_odom_estimators(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_horizontal_estimator odom_estimators(::mrs_msgs::msg::UavStatus::_odom_estimators_type arg)
  {
    msg_.odom_estimators = std::move(arg);
    return Init_UavStatus_horizontal_estimator(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_odom_frame
{
public:
  explicit Init_UavStatus_odom_frame(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_odom_estimators odom_frame(::mrs_msgs::msg::UavStatus::_odom_frame_type arg)
  {
    msg_.odom_frame = std::move(arg);
    return Init_UavStatus_odom_estimators(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_odom_hdg
{
public:
  explicit Init_UavStatus_odom_hdg(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_odom_frame odom_hdg(::mrs_msgs::msg::UavStatus::_odom_hdg_type arg)
  {
    msg_.odom_hdg = std::move(arg);
    return Init_UavStatus_odom_frame(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_odom_z
{
public:
  explicit Init_UavStatus_odom_z(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_odom_hdg odom_z(::mrs_msgs::msg::UavStatus::_odom_z_type arg)
  {
    msg_.odom_z = std::move(arg);
    return Init_UavStatus_odom_hdg(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_odom_y
{
public:
  explicit Init_UavStatus_odom_y(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_odom_z odom_y(::mrs_msgs::msg::UavStatus::_odom_y_type arg)
  {
    msg_.odom_y = std::move(arg);
    return Init_UavStatus_odom_z(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_odom_x
{
public:
  explicit Init_UavStatus_odom_x(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_odom_y odom_x(::mrs_msgs::msg::UavStatus::_odom_x_type arg)
  {
    msg_.odom_x = std::move(arg);
    return Init_UavStatus_odom_y(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_odom_color
{
public:
  explicit Init_UavStatus_odom_color(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_odom_x odom_color(::mrs_msgs::msg::UavStatus::_odom_color_type arg)
  {
    msg_.odom_color = std::move(arg);
    return Init_UavStatus_odom_x(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_odom_hz
{
public:
  explicit Init_UavStatus_odom_hz(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_odom_color odom_hz(::mrs_msgs::msg::UavStatus::_odom_hz_type arg)
  {
    msg_.odom_hz = std::move(arg);
    return Init_UavStatus_odom_color(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_secs_flown
{
public:
  explicit Init_UavStatus_secs_flown(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_odom_hz secs_flown(::mrs_msgs::msg::UavStatus::_secs_flown_type arg)
  {
    msg_.secs_flown = std::move(arg);
    return Init_UavStatus_odom_hz(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_null_tracker
{
public:
  explicit Init_UavStatus_null_tracker(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_secs_flown null_tracker(::mrs_msgs::msg::UavStatus::_null_tracker_type arg)
  {
    msg_.null_tracker = std::move(arg);
    return Init_UavStatus_secs_flown(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_constraints
{
public:
  explicit Init_UavStatus_constraints(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_null_tracker constraints(::mrs_msgs::msg::UavStatus::_constraints_type arg)
  {
    msg_.constraints = std::move(arg);
    return Init_UavStatus_null_tracker(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_trackers
{
public:
  explicit Init_UavStatus_trackers(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_constraints trackers(::mrs_msgs::msg::UavStatus::_trackers_type arg)
  {
    msg_.trackers = std::move(arg);
    return Init_UavStatus_constraints(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_gains
{
public:
  explicit Init_UavStatus_gains(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_trackers gains(::mrs_msgs::msg::UavStatus::_gains_type arg)
  {
    msg_.gains = std::move(arg);
    return Init_UavStatus_trackers(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_controllers
{
public:
  explicit Init_UavStatus_controllers(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_gains controllers(::mrs_msgs::msg::UavStatus::_controllers_type arg)
  {
    msg_.controllers = std::move(arg);
    return Init_UavStatus_gains(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_control_manager_diag_color
{
public:
  explicit Init_UavStatus_control_manager_diag_color(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_controllers control_manager_diag_color(::mrs_msgs::msg::UavStatus::_control_manager_diag_color_type arg)
  {
    msg_.control_manager_diag_color = std::move(arg);
    return Init_UavStatus_controllers(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_control_manager_diag_hz
{
public:
  explicit Init_UavStatus_control_manager_diag_hz(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_control_manager_diag_color control_manager_diag_hz(::mrs_msgs::msg::UavStatus::_control_manager_diag_hz_type arg)
  {
    msg_.control_manager_diag_hz = std::move(arg);
    return Init_UavStatus_control_manager_diag_color(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_uav_mass
{
public:
  explicit Init_UavStatus_uav_mass(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_control_manager_diag_hz uav_mass(::mrs_msgs::msg::UavStatus::_uav_mass_type arg)
  {
    msg_.uav_mass = std::move(arg);
    return Init_UavStatus_control_manager_diag_hz(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_uav_type
{
public:
  explicit Init_UavStatus_uav_type(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_uav_mass uav_type(::mrs_msgs::msg::UavStatus::_uav_type_type arg)
  {
    msg_.uav_type = std::move(arg);
    return Init_UavStatus_uav_mass(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_uav_name
{
public:
  explicit Init_UavStatus_uav_name(::mrs_msgs::msg::UavStatus & msg)
  : msg_(msg)
  {}
  Init_UavStatus_uav_type uav_name(::mrs_msgs::msg::UavStatus::_uav_name_type arg)
  {
    msg_.uav_name = std::move(arg);
    return Init_UavStatus_uav_type(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

class Init_UavStatus_header
{
public:
  Init_UavStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UavStatus_uav_name header(::mrs_msgs::msg::UavStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UavStatus_uav_name(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::UavStatus>()
{
  return mrs_msgs::msg::builder::Init_UavStatus_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__UAV_STATUS__BUILDER_HPP_
