// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/ControlManagerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/control_manager_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__CONTROL_MANAGER_DIAGNOSTICS__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__CONTROL_MANAGER_DIAGNOSTICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'tracker_status'
#include "mrs_msgs/msg/detail/tracker_status__struct.hpp"
// Member 'controller_status'
#include "mrs_msgs/msg/detail/controller_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__ControlManagerDiagnostics __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__ControlManagerDiagnostics __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlManagerDiagnostics_
{
  using Type = ControlManagerDiagnostics_<ContainerAllocator>;

  explicit ControlManagerDiagnostics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    tracker_status(_init),
    controller_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uav_name = "";
      this->output_enabled = false;
      this->flying_normally = false;
      this->joystick_active = false;
      this->bumper_active = false;
      this->desired_uav_state_rate = 0.0;
      this->active_tracker = "";
      this->active_controller = "";
    }
  }

  explicit ControlManagerDiagnostics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    uav_name(_alloc),
    active_tracker(_alloc),
    tracker_status(_alloc, _init),
    active_controller(_alloc),
    controller_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uav_name = "";
      this->output_enabled = false;
      this->flying_normally = false;
      this->joystick_active = false;
      this->bumper_active = false;
      this->desired_uav_state_rate = 0.0;
      this->active_tracker = "";
      this->active_controller = "";
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _uav_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _uav_name_type uav_name;
  using _output_enabled_type =
    bool;
  _output_enabled_type output_enabled;
  using _flying_normally_type =
    bool;
  _flying_normally_type flying_normally;
  using _joystick_active_type =
    bool;
  _joystick_active_type joystick_active;
  using _bumper_active_type =
    bool;
  _bumper_active_type bumper_active;
  using _desired_uav_state_rate_type =
    double;
  _desired_uav_state_rate_type desired_uav_state_rate;
  using _active_tracker_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _active_tracker_type active_tracker;
  using _tracker_status_type =
    mrs_msgs::msg::TrackerStatus_<ContainerAllocator>;
  _tracker_status_type tracker_status;
  using _active_controller_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _active_controller_type active_controller;
  using _controller_status_type =
    mrs_msgs::msg::ControllerStatus_<ContainerAllocator>;
  _controller_status_type controller_status;
  using _available_controllers_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _available_controllers_type available_controllers;
  using _available_trackers_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _available_trackers_type available_trackers;
  using _human_switchable_controllers_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _human_switchable_controllers_type human_switchable_controllers;
  using _human_switchable_trackers_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _human_switchable_trackers_type human_switchable_trackers;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__uav_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->uav_name = _arg;
    return *this;
  }
  Type & set__output_enabled(
    const bool & _arg)
  {
    this->output_enabled = _arg;
    return *this;
  }
  Type & set__flying_normally(
    const bool & _arg)
  {
    this->flying_normally = _arg;
    return *this;
  }
  Type & set__joystick_active(
    const bool & _arg)
  {
    this->joystick_active = _arg;
    return *this;
  }
  Type & set__bumper_active(
    const bool & _arg)
  {
    this->bumper_active = _arg;
    return *this;
  }
  Type & set__desired_uav_state_rate(
    const double & _arg)
  {
    this->desired_uav_state_rate = _arg;
    return *this;
  }
  Type & set__active_tracker(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->active_tracker = _arg;
    return *this;
  }
  Type & set__tracker_status(
    const mrs_msgs::msg::TrackerStatus_<ContainerAllocator> & _arg)
  {
    this->tracker_status = _arg;
    return *this;
  }
  Type & set__active_controller(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->active_controller = _arg;
    return *this;
  }
  Type & set__controller_status(
    const mrs_msgs::msg::ControllerStatus_<ContainerAllocator> & _arg)
  {
    this->controller_status = _arg;
    return *this;
  }
  Type & set__available_controllers(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->available_controllers = _arg;
    return *this;
  }
  Type & set__available_trackers(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->available_trackers = _arg;
    return *this;
  }
  Type & set__human_switchable_controllers(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->human_switchable_controllers = _arg;
    return *this;
  }
  Type & set__human_switchable_trackers(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->human_switchable_trackers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::ControlManagerDiagnostics_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::ControlManagerDiagnostics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::ControlManagerDiagnostics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::ControlManagerDiagnostics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::ControlManagerDiagnostics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::ControlManagerDiagnostics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::ControlManagerDiagnostics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::ControlManagerDiagnostics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::ControlManagerDiagnostics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::ControlManagerDiagnostics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__ControlManagerDiagnostics
    std::shared_ptr<mrs_msgs::msg::ControlManagerDiagnostics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__ControlManagerDiagnostics
    std::shared_ptr<mrs_msgs::msg::ControlManagerDiagnostics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlManagerDiagnostics_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->uav_name != other.uav_name) {
      return false;
    }
    if (this->output_enabled != other.output_enabled) {
      return false;
    }
    if (this->flying_normally != other.flying_normally) {
      return false;
    }
    if (this->joystick_active != other.joystick_active) {
      return false;
    }
    if (this->bumper_active != other.bumper_active) {
      return false;
    }
    if (this->desired_uav_state_rate != other.desired_uav_state_rate) {
      return false;
    }
    if (this->active_tracker != other.active_tracker) {
      return false;
    }
    if (this->tracker_status != other.tracker_status) {
      return false;
    }
    if (this->active_controller != other.active_controller) {
      return false;
    }
    if (this->controller_status != other.controller_status) {
      return false;
    }
    if (this->available_controllers != other.available_controllers) {
      return false;
    }
    if (this->available_trackers != other.available_trackers) {
      return false;
    }
    if (this->human_switchable_controllers != other.human_switchable_controllers) {
      return false;
    }
    if (this->human_switchable_trackers != other.human_switchable_trackers) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlManagerDiagnostics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlManagerDiagnostics_

// alias to use template instance with default allocator
using ControlManagerDiagnostics =
  mrs_msgs::msg::ControlManagerDiagnostics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__CONTROL_MANAGER_DIAGNOSTICS__STRUCT_HPP_
