// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/FutureTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/future_trajectory.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__FUTURE_TRAJECTORY__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__FUTURE_TRAJECTORY__STRUCT_HPP_

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
// Member 'points'
#include "mrs_msgs/msg/detail/future_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__FutureTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__FutureTrajectory __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FutureTrajectory_
{
  using Type = FutureTrajectory_<ContainerAllocator>;

  explicit FutureTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uav_name = "";
      this->priority = 0l;
      this->collision_avoidance = false;
    }
  }

  explicit FutureTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    uav_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uav_name = "";
      this->priority = 0l;
      this->collision_avoidance = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _uav_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _uav_name_type uav_name;
  using _priority_type =
    int32_t;
  _priority_type priority;
  using _collision_avoidance_type =
    bool;
  _collision_avoidance_type collision_avoidance;
  using _points_type =
    std::vector<mrs_msgs::msg::FuturePoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::msg::FuturePoint_<ContainerAllocator>>>;
  _points_type points;

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
  Type & set__priority(
    const int32_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__collision_avoidance(
    const bool & _arg)
  {
    this->collision_avoidance = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<mrs_msgs::msg::FuturePoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::msg::FuturePoint_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::FutureTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::FutureTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::FutureTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::FutureTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::FutureTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::FutureTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::FutureTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::FutureTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::FutureTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::FutureTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__FutureTrajectory
    std::shared_ptr<mrs_msgs::msg::FutureTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__FutureTrajectory
    std::shared_ptr<mrs_msgs::msg::FutureTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FutureTrajectory_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->uav_name != other.uav_name) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->collision_avoidance != other.collision_avoidance) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    return true;
  }
  bool operator!=(const FutureTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FutureTrajectory_

// alias to use template instance with default allocator
using FutureTrajectory =
  mrs_msgs::msg::FutureTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__FUTURE_TRAJECTORY__STRUCT_HPP_
