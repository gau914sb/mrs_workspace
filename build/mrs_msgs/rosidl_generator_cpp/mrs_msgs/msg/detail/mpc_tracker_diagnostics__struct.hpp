// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/MpcTrackerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/mpc_tracker_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__MPC_TRACKER_DIAGNOSTICS__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__MPC_TRACKER_DIAGNOSTICS__STRUCT_HPP_

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
// Member 'setpoint'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__MpcTrackerDiagnostics __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__MpcTrackerDiagnostics __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MpcTrackerDiagnostics_
{
  using Type = MpcTrackerDiagnostics_<ContainerAllocator>;

  explicit MpcTrackerDiagnostics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    setpoint(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uav_name = "";
      this->active = false;
      this->collision_avoidance_active = false;
      this->avoiding_collision = false;
    }
  }

  explicit MpcTrackerDiagnostics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    uav_name(_alloc),
    setpoint(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uav_name = "";
      this->active = false;
      this->collision_avoidance_active = false;
      this->avoiding_collision = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _uav_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _uav_name_type uav_name;
  using _active_type =
    bool;
  _active_type active;
  using _collision_avoidance_active_type =
    bool;
  _collision_avoidance_active_type collision_avoidance_active;
  using _avoiding_collision_type =
    bool;
  _avoiding_collision_type avoiding_collision;
  using _avoidance_active_uavs_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _avoidance_active_uavs_type avoidance_active_uavs;
  using _setpoint_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _setpoint_type setpoint;

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
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__collision_avoidance_active(
    const bool & _arg)
  {
    this->collision_avoidance_active = _arg;
    return *this;
  }
  Type & set__avoiding_collision(
    const bool & _arg)
  {
    this->avoiding_collision = _arg;
    return *this;
  }
  Type & set__avoidance_active_uavs(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->avoidance_active_uavs = _arg;
    return *this;
  }
  Type & set__setpoint(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->setpoint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::MpcTrackerDiagnostics_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::MpcTrackerDiagnostics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::MpcTrackerDiagnostics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::MpcTrackerDiagnostics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::MpcTrackerDiagnostics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::MpcTrackerDiagnostics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::MpcTrackerDiagnostics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::MpcTrackerDiagnostics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::MpcTrackerDiagnostics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::MpcTrackerDiagnostics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__MpcTrackerDiagnostics
    std::shared_ptr<mrs_msgs::msg::MpcTrackerDiagnostics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__MpcTrackerDiagnostics
    std::shared_ptr<mrs_msgs::msg::MpcTrackerDiagnostics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MpcTrackerDiagnostics_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->uav_name != other.uav_name) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    if (this->collision_avoidance_active != other.collision_avoidance_active) {
      return false;
    }
    if (this->avoiding_collision != other.avoiding_collision) {
      return false;
    }
    if (this->avoidance_active_uavs != other.avoidance_active_uavs) {
      return false;
    }
    if (this->setpoint != other.setpoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const MpcTrackerDiagnostics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MpcTrackerDiagnostics_

// alias to use template instance with default allocator
using MpcTrackerDiagnostics =
  mrs_msgs::msg::MpcTrackerDiagnostics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__MPC_TRACKER_DIAGNOSTICS__STRUCT_HPP_
