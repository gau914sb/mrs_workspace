// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/TrackerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/tracker_status.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__TRACKER_STATUS__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__TRACKER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trajectory_reference'
#include "mrs_msgs/msg/detail/reference_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__TrackerStatus __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__TrackerStatus __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackerStatus_
{
  using Type = TrackerStatus_<ContainerAllocator>;

  explicit TrackerStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory_reference(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->active = false;
      this->callbacks_enabled = false;
      this->state = 0;
      this->have_goal = false;
      this->tracking_trajectory = false;
      this->trajectory_length = 0l;
      this->trajectory_idx = 0l;
    }
  }

  explicit TrackerStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory_reference(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->active = false;
      this->callbacks_enabled = false;
      this->state = 0;
      this->have_goal = false;
      this->tracking_trajectory = false;
      this->trajectory_length = 0l;
      this->trajectory_idx = 0l;
    }
  }

  // field types and members
  using _active_type =
    bool;
  _active_type active;
  using _callbacks_enabled_type =
    bool;
  _callbacks_enabled_type callbacks_enabled;
  using _state_type =
    uint8_t;
  _state_type state;
  using _have_goal_type =
    bool;
  _have_goal_type have_goal;
  using _tracking_trajectory_type =
    bool;
  _tracking_trajectory_type tracking_trajectory;
  using _trajectory_length_type =
    int32_t;
  _trajectory_length_type trajectory_length;
  using _trajectory_idx_type =
    int32_t;
  _trajectory_idx_type trajectory_idx;
  using _trajectory_reference_type =
    mrs_msgs::msg::ReferenceStamped_<ContainerAllocator>;
  _trajectory_reference_type trajectory_reference;

  // setters for named parameter idiom
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__callbacks_enabled(
    const bool & _arg)
  {
    this->callbacks_enabled = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
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
  Type & set__trajectory_length(
    const int32_t & _arg)
  {
    this->trajectory_length = _arg;
    return *this;
  }
  Type & set__trajectory_idx(
    const int32_t & _arg)
  {
    this->trajectory_idx = _arg;
    return *this;
  }
  Type & set__trajectory_reference(
    const mrs_msgs::msg::ReferenceStamped_<ContainerAllocator> & _arg)
  {
    this->trajectory_reference = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATE_INVALID =
    0u;
  static constexpr uint8_t STATE_IDLE =
    1u;
  static constexpr uint8_t STATE_TAKEOFF =
    2u;
  static constexpr uint8_t STATE_HOVER =
    3u;
  static constexpr uint8_t STATE_REFERENCE =
    4u;
  static constexpr uint8_t STATE_TRAJECTORY =
    5u;
  static constexpr uint8_t STATE_LAND =
    6u;

  // pointer types
  using RawPtr =
    mrs_msgs::msg::TrackerStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::TrackerStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::TrackerStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::TrackerStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::TrackerStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::TrackerStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::TrackerStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::TrackerStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::TrackerStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::TrackerStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__TrackerStatus
    std::shared_ptr<mrs_msgs::msg::TrackerStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__TrackerStatus
    std::shared_ptr<mrs_msgs::msg::TrackerStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackerStatus_ & other) const
  {
    if (this->active != other.active) {
      return false;
    }
    if (this->callbacks_enabled != other.callbacks_enabled) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->have_goal != other.have_goal) {
      return false;
    }
    if (this->tracking_trajectory != other.tracking_trajectory) {
      return false;
    }
    if (this->trajectory_length != other.trajectory_length) {
      return false;
    }
    if (this->trajectory_idx != other.trajectory_idx) {
      return false;
    }
    if (this->trajectory_reference != other.trajectory_reference) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackerStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackerStatus_

// alias to use template instance with default allocator
using TrackerStatus =
  mrs_msgs::msg::TrackerStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrackerStatus_<ContainerAllocator>::STATE_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrackerStatus_<ContainerAllocator>::STATE_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrackerStatus_<ContainerAllocator>::STATE_TAKEOFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrackerStatus_<ContainerAllocator>::STATE_HOVER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrackerStatus_<ContainerAllocator>::STATE_REFERENCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrackerStatus_<ContainerAllocator>::STATE_TRAJECTORY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrackerStatus_<ContainerAllocator>::STATE_LAND;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__TRACKER_STATUS__STRUCT_HPP_
