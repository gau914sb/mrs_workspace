// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/UavState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/uav_state.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__UAV_STATE__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__UAV_STATE__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'acceleration'
// Member 'acceleration_disturbance'
#include "geometry_msgs/msg/detail/accel__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__UavState __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__UavState __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UavState_
{
  using Type = UavState_<ContainerAllocator>;

  explicit UavState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    velocity(_init),
    acceleration(_init),
    acceleration_disturbance(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->child_frame_id = "";
      this->estimator_horizontal = "";
      this->estimator_vertical = "";
      this->estimator_heading = "";
      this->estimator_iteration = 0ul;
    }
  }

  explicit UavState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    child_frame_id(_alloc),
    estimator_horizontal(_alloc),
    estimator_vertical(_alloc),
    estimator_heading(_alloc),
    pose(_alloc, _init),
    velocity(_alloc, _init),
    acceleration(_alloc, _init),
    acceleration_disturbance(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->child_frame_id = "";
      this->estimator_horizontal = "";
      this->estimator_vertical = "";
      this->estimator_heading = "";
      this->estimator_iteration = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _child_frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _child_frame_id_type child_frame_id;
  using _estimator_horizontal_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _estimator_horizontal_type estimator_horizontal;
  using _estimator_vertical_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _estimator_vertical_type estimator_vertical;
  using _estimator_heading_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _estimator_heading_type estimator_heading;
  using _estimator_iteration_type =
    uint32_t;
  _estimator_iteration_type estimator_iteration;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_type velocity;
  using _acceleration_type =
    geometry_msgs::msg::Accel_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _acceleration_disturbance_type =
    geometry_msgs::msg::Accel_<ContainerAllocator>;
  _acceleration_disturbance_type acceleration_disturbance;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__child_frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->child_frame_id = _arg;
    return *this;
  }
  Type & set__estimator_horizontal(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->estimator_horizontal = _arg;
    return *this;
  }
  Type & set__estimator_vertical(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->estimator_vertical = _arg;
    return *this;
  }
  Type & set__estimator_heading(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->estimator_heading = _arg;
    return *this;
  }
  Type & set__estimator_iteration(
    const uint32_t & _arg)
  {
    this->estimator_iteration = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Accel_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__acceleration_disturbance(
    const geometry_msgs::msg::Accel_<ContainerAllocator> & _arg)
  {
    this->acceleration_disturbance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::UavState_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::UavState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::UavState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::UavState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::UavState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::UavState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::UavState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::UavState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::UavState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::UavState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__UavState
    std::shared_ptr<mrs_msgs::msg::UavState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__UavState
    std::shared_ptr<mrs_msgs::msg::UavState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UavState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->child_frame_id != other.child_frame_id) {
      return false;
    }
    if (this->estimator_horizontal != other.estimator_horizontal) {
      return false;
    }
    if (this->estimator_vertical != other.estimator_vertical) {
      return false;
    }
    if (this->estimator_heading != other.estimator_heading) {
      return false;
    }
    if (this->estimator_iteration != other.estimator_iteration) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->acceleration_disturbance != other.acceleration_disturbance) {
      return false;
    }
    return true;
  }
  bool operator!=(const UavState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UavState_

// alias to use template instance with default allocator
using UavState =
  mrs_msgs::msg::UavState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__UAV_STATE__STRUCT_HPP_
