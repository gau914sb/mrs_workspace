// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/UavStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/uav_status.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__UAV_STATUS__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__UAV_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'custom_topics'
#include "mrs_msgs/msg/detail/custom_topic__struct.hpp"
// Member 'node_cpu_loads'
#include "mrs_msgs/msg/detail/node_cpu_load__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__UavStatus __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__UavStatus __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UavStatus_
{
  using Type = UavStatus_<ContainerAllocator>;

  explicit UavStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    node_cpu_loads(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uav_name = "";
      this->uav_type = "";
      this->uav_mass = "";
      this->control_manager_diag_hz = 0.0f;
      this->control_manager_diag_color = 0;
      this->null_tracker = false;
      this->secs_flown = 0ul;
      this->odom_hz = 0.0f;
      this->odom_color = 0;
      this->odom_x = 0.0f;
      this->odom_y = 0.0f;
      this->odom_z = 0.0f;
      this->odom_hdg = 0.0f;
      this->odom_frame = "";
      this->horizontal_estimator = "";
      this->vertical_estimator = "";
      this->heading_estimator = "";
      this->agl_estimator = "";
      this->max_flight_z = 0.0f;
      this->cmd_x = 0.0f;
      this->cmd_y = 0.0f;
      this->cmd_z = 0.0f;
      this->cmd_hdg = 0.0f;
      this->cpu_load = 0.0f;
      this->cpu_load_total = 0.0f;
      this->cpu_ghz = 0.0f;
      this->cpu_temperature = 0.0f;
      this->free_ram = 0.0f;
      this->total_ram = 0.0f;
      this->free_hdd = 0l;
      this->hw_api_hz = 0.0f;
      this->hw_api_color = 0;
      this->hw_api_battery_hz = 0.0f;
      this->hw_api_state_hz = 0.0f;
      this->hw_api_cmd_hz = 0.0f;
      this->hw_api_mode = "";
      this->hw_api_armed = false;
      this->hw_api_gnss_ok = false;
      this->hw_api_gnss_qual = 0.0f;
      this->mag_norm_hz = 0.0f;
      this->hw_api_gnss_fix_type = 0;
      this->hw_api_gnss_num_sats = 0;
      this->hw_api_gnss_pos_acc = 0.0f;
      this->hw_api_gnss_status_hz = 0.0f;
      this->mag_norm = 0.0f;
      this->battery_volt = 0.0f;
      this->battery_curr = 0.0f;
      this->battery_wh_drained = 0.0f;
      this->thrust = 0.0f;
      this->mass_estimate = 0.0f;
      this->mass_set = 0.0f;
      this->flying_normally = false;
      this->rc_mode = false;
      this->have_goal = false;
      this->tracking_trajectory = false;
      this->callbacks_enabled = false;
      this->collision_avoidance_enabled = false;
      this->avoiding_collision = false;
      this->automatic_start_can_takeoff = false;
      this->num_other_uavs = 0;
    }
  }

  explicit UavStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    uav_name(_alloc),
    uav_type(_alloc),
    uav_mass(_alloc),
    odom_frame(_alloc),
    horizontal_estimator(_alloc),
    vertical_estimator(_alloc),
    heading_estimator(_alloc),
    agl_estimator(_alloc),
    hw_api_mode(_alloc),
    node_cpu_loads(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uav_name = "";
      this->uav_type = "";
      this->uav_mass = "";
      this->control_manager_diag_hz = 0.0f;
      this->control_manager_diag_color = 0;
      this->null_tracker = false;
      this->secs_flown = 0ul;
      this->odom_hz = 0.0f;
      this->odom_color = 0;
      this->odom_x = 0.0f;
      this->odom_y = 0.0f;
      this->odom_z = 0.0f;
      this->odom_hdg = 0.0f;
      this->odom_frame = "";
      this->horizontal_estimator = "";
      this->vertical_estimator = "";
      this->heading_estimator = "";
      this->agl_estimator = "";
      this->max_flight_z = 0.0f;
      this->cmd_x = 0.0f;
      this->cmd_y = 0.0f;
      this->cmd_z = 0.0f;
      this->cmd_hdg = 0.0f;
      this->cpu_load = 0.0f;
      this->cpu_load_total = 0.0f;
      this->cpu_ghz = 0.0f;
      this->cpu_temperature = 0.0f;
      this->free_ram = 0.0f;
      this->total_ram = 0.0f;
      this->free_hdd = 0l;
      this->hw_api_hz = 0.0f;
      this->hw_api_color = 0;
      this->hw_api_battery_hz = 0.0f;
      this->hw_api_state_hz = 0.0f;
      this->hw_api_cmd_hz = 0.0f;
      this->hw_api_mode = "";
      this->hw_api_armed = false;
      this->hw_api_gnss_ok = false;
      this->hw_api_gnss_qual = 0.0f;
      this->mag_norm_hz = 0.0f;
      this->hw_api_gnss_fix_type = 0;
      this->hw_api_gnss_num_sats = 0;
      this->hw_api_gnss_pos_acc = 0.0f;
      this->hw_api_gnss_status_hz = 0.0f;
      this->mag_norm = 0.0f;
      this->battery_volt = 0.0f;
      this->battery_curr = 0.0f;
      this->battery_wh_drained = 0.0f;
      this->thrust = 0.0f;
      this->mass_estimate = 0.0f;
      this->mass_set = 0.0f;
      this->flying_normally = false;
      this->rc_mode = false;
      this->have_goal = false;
      this->tracking_trajectory = false;
      this->callbacks_enabled = false;
      this->collision_avoidance_enabled = false;
      this->avoiding_collision = false;
      this->automatic_start_can_takeoff = false;
      this->num_other_uavs = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _uav_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _uav_name_type uav_name;
  using _uav_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _uav_type_type uav_type;
  using _uav_mass_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _uav_mass_type uav_mass;
  using _control_manager_diag_hz_type =
    float;
  _control_manager_diag_hz_type control_manager_diag_hz;
  using _control_manager_diag_color_type =
    int16_t;
  _control_manager_diag_color_type control_manager_diag_color;
  using _controllers_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _controllers_type controllers;
  using _gains_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _gains_type gains;
  using _trackers_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _trackers_type trackers;
  using _constraints_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _constraints_type constraints;
  using _null_tracker_type =
    bool;
  _null_tracker_type null_tracker;
  using _secs_flown_type =
    uint32_t;
  _secs_flown_type secs_flown;
  using _odom_hz_type =
    float;
  _odom_hz_type odom_hz;
  using _odom_color_type =
    int16_t;
  _odom_color_type odom_color;
  using _odom_x_type =
    float;
  _odom_x_type odom_x;
  using _odom_y_type =
    float;
  _odom_y_type odom_y;
  using _odom_z_type =
    float;
  _odom_z_type odom_z;
  using _odom_hdg_type =
    float;
  _odom_hdg_type odom_hdg;
  using _odom_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _odom_frame_type odom_frame;
  using _odom_estimators_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _odom_estimators_type odom_estimators;
  using _horizontal_estimator_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _horizontal_estimator_type horizontal_estimator;
  using _vertical_estimator_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _vertical_estimator_type vertical_estimator;
  using _heading_estimator_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _heading_estimator_type heading_estimator;
  using _agl_estimator_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _agl_estimator_type agl_estimator;
  using _max_flight_z_type =
    float;
  _max_flight_z_type max_flight_z;
  using _cmd_x_type =
    float;
  _cmd_x_type cmd_x;
  using _cmd_y_type =
    float;
  _cmd_y_type cmd_y;
  using _cmd_z_type =
    float;
  _cmd_z_type cmd_z;
  using _cmd_hdg_type =
    float;
  _cmd_hdg_type cmd_hdg;
  using _cpu_load_type =
    float;
  _cpu_load_type cpu_load;
  using _cpu_load_total_type =
    float;
  _cpu_load_total_type cpu_load_total;
  using _cpu_ghz_type =
    float;
  _cpu_ghz_type cpu_ghz;
  using _cpu_temperature_type =
    float;
  _cpu_temperature_type cpu_temperature;
  using _free_ram_type =
    float;
  _free_ram_type free_ram;
  using _total_ram_type =
    float;
  _total_ram_type total_ram;
  using _free_hdd_type =
    int32_t;
  _free_hdd_type free_hdd;
  using _hw_api_hz_type =
    float;
  _hw_api_hz_type hw_api_hz;
  using _hw_api_color_type =
    int16_t;
  _hw_api_color_type hw_api_color;
  using _hw_api_battery_hz_type =
    float;
  _hw_api_battery_hz_type hw_api_battery_hz;
  using _hw_api_state_hz_type =
    float;
  _hw_api_state_hz_type hw_api_state_hz;
  using _hw_api_cmd_hz_type =
    float;
  _hw_api_cmd_hz_type hw_api_cmd_hz;
  using _hw_api_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hw_api_mode_type hw_api_mode;
  using _hw_api_armed_type =
    bool;
  _hw_api_armed_type hw_api_armed;
  using _hw_api_gnss_ok_type =
    bool;
  _hw_api_gnss_ok_type hw_api_gnss_ok;
  using _hw_api_gnss_qual_type =
    float;
  _hw_api_gnss_qual_type hw_api_gnss_qual;
  using _mag_norm_hz_type =
    float;
  _mag_norm_hz_type mag_norm_hz;
  using _hw_api_gnss_fix_type_type =
    uint8_t;
  _hw_api_gnss_fix_type_type hw_api_gnss_fix_type;
  using _hw_api_gnss_num_sats_type =
    uint8_t;
  _hw_api_gnss_num_sats_type hw_api_gnss_num_sats;
  using _hw_api_gnss_pos_acc_type =
    float;
  _hw_api_gnss_pos_acc_type hw_api_gnss_pos_acc;
  using _hw_api_gnss_status_hz_type =
    float;
  _hw_api_gnss_status_hz_type hw_api_gnss_status_hz;
  using _mag_norm_type =
    float;
  _mag_norm_type mag_norm;
  using _battery_volt_type =
    float;
  _battery_volt_type battery_volt;
  using _battery_curr_type =
    float;
  _battery_curr_type battery_curr;
  using _battery_wh_drained_type =
    float;
  _battery_wh_drained_type battery_wh_drained;
  using _thrust_type =
    float;
  _thrust_type thrust;
  using _mass_estimate_type =
    float;
  _mass_estimate_type mass_estimate;
  using _mass_set_type =
    float;
  _mass_set_type mass_set;
  using _custom_topics_type =
    std::vector<mrs_msgs::msg::CustomTopic_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::msg::CustomTopic_<ContainerAllocator>>>;
  _custom_topics_type custom_topics;
  using _custom_string_outputs_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _custom_string_outputs_type custom_string_outputs;
  using _node_cpu_loads_type =
    mrs_msgs::msg::NodeCpuLoad_<ContainerAllocator>;
  _node_cpu_loads_type node_cpu_loads;
  using _flying_normally_type =
    bool;
  _flying_normally_type flying_normally;
  using _rc_mode_type =
    bool;
  _rc_mode_type rc_mode;
  using _have_goal_type =
    bool;
  _have_goal_type have_goal;
  using _tracking_trajectory_type =
    bool;
  _tracking_trajectory_type tracking_trajectory;
  using _callbacks_enabled_type =
    bool;
  _callbacks_enabled_type callbacks_enabled;
  using _collision_avoidance_enabled_type =
    bool;
  _collision_avoidance_enabled_type collision_avoidance_enabled;
  using _avoiding_collision_type =
    bool;
  _avoiding_collision_type avoiding_collision;
  using _automatic_start_can_takeoff_type =
    bool;
  _automatic_start_can_takeoff_type automatic_start_can_takeoff;
  using _num_other_uavs_type =
    uint16_t;
  _num_other_uavs_type num_other_uavs;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__uav_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->uav_name = _arg;
    return *this;
  }
  Type & set__uav_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->uav_type = _arg;
    return *this;
  }
  Type & set__uav_mass(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->uav_mass = _arg;
    return *this;
  }
  Type & set__control_manager_diag_hz(
    const float & _arg)
  {
    this->control_manager_diag_hz = _arg;
    return *this;
  }
  Type & set__control_manager_diag_color(
    const int16_t & _arg)
  {
    this->control_manager_diag_color = _arg;
    return *this;
  }
  Type & set__controllers(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->controllers = _arg;
    return *this;
  }
  Type & set__gains(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->gains = _arg;
    return *this;
  }
  Type & set__trackers(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->trackers = _arg;
    return *this;
  }
  Type & set__constraints(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->constraints = _arg;
    return *this;
  }
  Type & set__null_tracker(
    const bool & _arg)
  {
    this->null_tracker = _arg;
    return *this;
  }
  Type & set__secs_flown(
    const uint32_t & _arg)
  {
    this->secs_flown = _arg;
    return *this;
  }
  Type & set__odom_hz(
    const float & _arg)
  {
    this->odom_hz = _arg;
    return *this;
  }
  Type & set__odom_color(
    const int16_t & _arg)
  {
    this->odom_color = _arg;
    return *this;
  }
  Type & set__odom_x(
    const float & _arg)
  {
    this->odom_x = _arg;
    return *this;
  }
  Type & set__odom_y(
    const float & _arg)
  {
    this->odom_y = _arg;
    return *this;
  }
  Type & set__odom_z(
    const float & _arg)
  {
    this->odom_z = _arg;
    return *this;
  }
  Type & set__odom_hdg(
    const float & _arg)
  {
    this->odom_hdg = _arg;
    return *this;
  }
  Type & set__odom_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->odom_frame = _arg;
    return *this;
  }
  Type & set__odom_estimators(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->odom_estimators = _arg;
    return *this;
  }
  Type & set__horizontal_estimator(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->horizontal_estimator = _arg;
    return *this;
  }
  Type & set__vertical_estimator(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->vertical_estimator = _arg;
    return *this;
  }
  Type & set__heading_estimator(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->heading_estimator = _arg;
    return *this;
  }
  Type & set__agl_estimator(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->agl_estimator = _arg;
    return *this;
  }
  Type & set__max_flight_z(
    const float & _arg)
  {
    this->max_flight_z = _arg;
    return *this;
  }
  Type & set__cmd_x(
    const float & _arg)
  {
    this->cmd_x = _arg;
    return *this;
  }
  Type & set__cmd_y(
    const float & _arg)
  {
    this->cmd_y = _arg;
    return *this;
  }
  Type & set__cmd_z(
    const float & _arg)
  {
    this->cmd_z = _arg;
    return *this;
  }
  Type & set__cmd_hdg(
    const float & _arg)
  {
    this->cmd_hdg = _arg;
    return *this;
  }
  Type & set__cpu_load(
    const float & _arg)
  {
    this->cpu_load = _arg;
    return *this;
  }
  Type & set__cpu_load_total(
    const float & _arg)
  {
    this->cpu_load_total = _arg;
    return *this;
  }
  Type & set__cpu_ghz(
    const float & _arg)
  {
    this->cpu_ghz = _arg;
    return *this;
  }
  Type & set__cpu_temperature(
    const float & _arg)
  {
    this->cpu_temperature = _arg;
    return *this;
  }
  Type & set__free_ram(
    const float & _arg)
  {
    this->free_ram = _arg;
    return *this;
  }
  Type & set__total_ram(
    const float & _arg)
  {
    this->total_ram = _arg;
    return *this;
  }
  Type & set__free_hdd(
    const int32_t & _arg)
  {
    this->free_hdd = _arg;
    return *this;
  }
  Type & set__hw_api_hz(
    const float & _arg)
  {
    this->hw_api_hz = _arg;
    return *this;
  }
  Type & set__hw_api_color(
    const int16_t & _arg)
  {
    this->hw_api_color = _arg;
    return *this;
  }
  Type & set__hw_api_battery_hz(
    const float & _arg)
  {
    this->hw_api_battery_hz = _arg;
    return *this;
  }
  Type & set__hw_api_state_hz(
    const float & _arg)
  {
    this->hw_api_state_hz = _arg;
    return *this;
  }
  Type & set__hw_api_cmd_hz(
    const float & _arg)
  {
    this->hw_api_cmd_hz = _arg;
    return *this;
  }
  Type & set__hw_api_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hw_api_mode = _arg;
    return *this;
  }
  Type & set__hw_api_armed(
    const bool & _arg)
  {
    this->hw_api_armed = _arg;
    return *this;
  }
  Type & set__hw_api_gnss_ok(
    const bool & _arg)
  {
    this->hw_api_gnss_ok = _arg;
    return *this;
  }
  Type & set__hw_api_gnss_qual(
    const float & _arg)
  {
    this->hw_api_gnss_qual = _arg;
    return *this;
  }
  Type & set__mag_norm_hz(
    const float & _arg)
  {
    this->mag_norm_hz = _arg;
    return *this;
  }
  Type & set__hw_api_gnss_fix_type(
    const uint8_t & _arg)
  {
    this->hw_api_gnss_fix_type = _arg;
    return *this;
  }
  Type & set__hw_api_gnss_num_sats(
    const uint8_t & _arg)
  {
    this->hw_api_gnss_num_sats = _arg;
    return *this;
  }
  Type & set__hw_api_gnss_pos_acc(
    const float & _arg)
  {
    this->hw_api_gnss_pos_acc = _arg;
    return *this;
  }
  Type & set__hw_api_gnss_status_hz(
    const float & _arg)
  {
    this->hw_api_gnss_status_hz = _arg;
    return *this;
  }
  Type & set__mag_norm(
    const float & _arg)
  {
    this->mag_norm = _arg;
    return *this;
  }
  Type & set__battery_volt(
    const float & _arg)
  {
    this->battery_volt = _arg;
    return *this;
  }
  Type & set__battery_curr(
    const float & _arg)
  {
    this->battery_curr = _arg;
    return *this;
  }
  Type & set__battery_wh_drained(
    const float & _arg)
  {
    this->battery_wh_drained = _arg;
    return *this;
  }
  Type & set__thrust(
    const float & _arg)
  {
    this->thrust = _arg;
    return *this;
  }
  Type & set__mass_estimate(
    const float & _arg)
  {
    this->mass_estimate = _arg;
    return *this;
  }
  Type & set__mass_set(
    const float & _arg)
  {
    this->mass_set = _arg;
    return *this;
  }
  Type & set__custom_topics(
    const std::vector<mrs_msgs::msg::CustomTopic_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::msg::CustomTopic_<ContainerAllocator>>> & _arg)
  {
    this->custom_topics = _arg;
    return *this;
  }
  Type & set__custom_string_outputs(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->custom_string_outputs = _arg;
    return *this;
  }
  Type & set__node_cpu_loads(
    const mrs_msgs::msg::NodeCpuLoad_<ContainerAllocator> & _arg)
  {
    this->node_cpu_loads = _arg;
    return *this;
  }
  Type & set__flying_normally(
    const bool & _arg)
  {
    this->flying_normally = _arg;
    return *this;
  }
  Type & set__rc_mode(
    const bool & _arg)
  {
    this->rc_mode = _arg;
    return *this;
  }
  Type & set__have_goal(
    const bool & _arg)
  {
    this->have_goal = _arg;
    return *this;
  }
  Type & set__tracking_trajectory(
    const bool & _arg)
  {
    this->tracking_trajectory = _arg;
    return *this;
  }
  Type & set__callbacks_enabled(
    const bool & _arg)
  {
    this->callbacks_enabled = _arg;
    return *this;
  }
  Type & set__collision_avoidance_enabled(
    const bool & _arg)
  {
    this->collision_avoidance_enabled = _arg;
    return *this;
  }
  Type & set__avoiding_collision(
    const bool & _arg)
  {
    this->avoiding_collision = _arg;
    return *this;
  }
  Type & set__automatic_start_can_takeoff(
    const bool & _arg)
  {
    this->automatic_start_can_takeoff = _arg;
    return *this;
  }
  Type & set__num_other_uavs(
    const uint16_t & _arg)
  {
    this->num_other_uavs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::UavStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::UavStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::UavStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::UavStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::UavStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::UavStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::UavStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::UavStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::UavStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::UavStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__UavStatus
    std::shared_ptr<mrs_msgs::msg::UavStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__UavStatus
    std::shared_ptr<mrs_msgs::msg::UavStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UavStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->uav_name != other.uav_name) {
      return false;
    }
    if (this->uav_type != other.uav_type) {
      return false;
    }
    if (this->uav_mass != other.uav_mass) {
      return false;
    }
    if (this->control_manager_diag_hz != other.control_manager_diag_hz) {
      return false;
    }
    if (this->control_manager_diag_color != other.control_manager_diag_color) {
      return false;
    }
    if (this->controllers != other.controllers) {
      return false;
    }
    if (this->gains != other.gains) {
      return false;
    }
    if (this->trackers != other.trackers) {
      return false;
    }
    if (this->constraints != other.constraints) {
      return false;
    }
    if (this->null_tracker != other.null_tracker) {
      return false;
    }
    if (this->secs_flown != other.secs_flown) {
      return false;
    }
    if (this->odom_hz != other.odom_hz) {
      return false;
    }
    if (this->odom_color != other.odom_color) {
      return false;
    }
    if (this->odom_x != other.odom_x) {
      return false;
    }
    if (this->odom_y != other.odom_y) {
      return false;
    }
    if (this->odom_z != other.odom_z) {
      return false;
    }
    if (this->odom_hdg != other.odom_hdg) {
      return false;
    }
    if (this->odom_frame != other.odom_frame) {
      return false;
    }
    if (this->odom_estimators != other.odom_estimators) {
      return false;
    }
    if (this->horizontal_estimator != other.horizontal_estimator) {
      return false;
    }
    if (this->vertical_estimator != other.vertical_estimator) {
      return false;
    }
    if (this->heading_estimator != other.heading_estimator) {
      return false;
    }
    if (this->agl_estimator != other.agl_estimator) {
      return false;
    }
    if (this->max_flight_z != other.max_flight_z) {
      return false;
    }
    if (this->cmd_x != other.cmd_x) {
      return false;
    }
    if (this->cmd_y != other.cmd_y) {
      return false;
    }
    if (this->cmd_z != other.cmd_z) {
      return false;
    }
    if (this->cmd_hdg != other.cmd_hdg) {
      return false;
    }
    if (this->cpu_load != other.cpu_load) {
      return false;
    }
    if (this->cpu_load_total != other.cpu_load_total) {
      return false;
    }
    if (this->cpu_ghz != other.cpu_ghz) {
      return false;
    }
    if (this->cpu_temperature != other.cpu_temperature) {
      return false;
    }
    if (this->free_ram != other.free_ram) {
      return false;
    }
    if (this->total_ram != other.total_ram) {
      return false;
    }
    if (this->free_hdd != other.free_hdd) {
      return false;
    }
    if (this->hw_api_hz != other.hw_api_hz) {
      return false;
    }
    if (this->hw_api_color != other.hw_api_color) {
      return false;
    }
    if (this->hw_api_battery_hz != other.hw_api_battery_hz) {
      return false;
    }
    if (this->hw_api_state_hz != other.hw_api_state_hz) {
      return false;
    }
    if (this->hw_api_cmd_hz != other.hw_api_cmd_hz) {
      return false;
    }
    if (this->hw_api_mode != other.hw_api_mode) {
      return false;
    }
    if (this->hw_api_armed != other.hw_api_armed) {
      return false;
    }
    if (this->hw_api_gnss_ok != other.hw_api_gnss_ok) {
      return false;
    }
    if (this->hw_api_gnss_qual != other.hw_api_gnss_qual) {
      return false;
    }
    if (this->mag_norm_hz != other.mag_norm_hz) {
      return false;
    }
    if (this->hw_api_gnss_fix_type != other.hw_api_gnss_fix_type) {
      return false;
    }
    if (this->hw_api_gnss_num_sats != other.hw_api_gnss_num_sats) {
      return false;
    }
    if (this->hw_api_gnss_pos_acc != other.hw_api_gnss_pos_acc) {
      return false;
    }
    if (this->hw_api_gnss_status_hz != other.hw_api_gnss_status_hz) {
      return false;
    }
    if (this->mag_norm != other.mag_norm) {
      return false;
    }
    if (this->battery_volt != other.battery_volt) {
      return false;
    }
    if (this->battery_curr != other.battery_curr) {
      return false;
    }
    if (this->battery_wh_drained != other.battery_wh_drained) {
      return false;
    }
    if (this->thrust != other.thrust) {
      return false;
    }
    if (this->mass_estimate != other.mass_estimate) {
      return false;
    }
    if (this->mass_set != other.mass_set) {
      return false;
    }
    if (this->custom_topics != other.custom_topics) {
      return false;
    }
    if (this->custom_string_outputs != other.custom_string_outputs) {
      return false;
    }
    if (this->node_cpu_loads != other.node_cpu_loads) {
      return false;
    }
    if (this->flying_normally != other.flying_normally) {
      return false;
    }
    if (this->rc_mode != other.rc_mode) {
      return false;
    }
    if (this->have_goal != other.have_goal) {
      return false;
    }
    if (this->tracking_trajectory != other.tracking_trajectory) {
      return false;
    }
    if (this->callbacks_enabled != other.callbacks_enabled) {
      return false;
    }
    if (this->collision_avoidance_enabled != other.collision_avoidance_enabled) {
      return false;
    }
    if (this->avoiding_collision != other.avoiding_collision) {
      return false;
    }
    if (this->automatic_start_can_takeoff != other.automatic_start_can_takeoff) {
      return false;
    }
    if (this->num_other_uavs != other.num_other_uavs) {
      return false;
    }
    return true;
  }
  bool operator!=(const UavStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UavStatus_

// alias to use template instance with default allocator
using UavStatus =
  mrs_msgs::msg::UavStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__UAV_STATUS__STRUCT_HPP_
