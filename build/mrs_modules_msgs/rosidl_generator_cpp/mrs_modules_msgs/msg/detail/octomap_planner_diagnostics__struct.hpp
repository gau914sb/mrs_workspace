// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/OctomapPlannerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/octomap_planner_diagnostics.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__OCTOMAP_PLANNER_DIAGNOSTICS__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__OCTOMAP_PLANNER_DIAGNOSTICS__STRUCT_HPP_

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
// Member 'desired_reference'
// Member 'best_goal'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_modules_msgs__msg__OctomapPlannerDiagnostics __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__OctomapPlannerDiagnostics __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OctomapPlannerDiagnostics_
{
  using Type = OctomapPlannerDiagnostics_<ContainerAllocator>;

  explicit OctomapPlannerDiagnostics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    desired_reference(_init),
    best_goal(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->idle = false;
    }
  }

  explicit OctomapPlannerDiagnostics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    desired_reference(_alloc, _init),
    best_goal(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->idle = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _idle_type =
    bool;
  _idle_type idle;
  using _desired_reference_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _desired_reference_type desired_reference;
  using _best_goal_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _best_goal_type best_goal;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__idle(
    const bool & _arg)
  {
    this->idle = _arg;
    return *this;
  }
  Type & set__desired_reference(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->desired_reference = _arg;
    return *this;
  }
  Type & set__best_goal(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->best_goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::OctomapPlannerDiagnostics_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::OctomapPlannerDiagnostics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::OctomapPlannerDiagnostics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::OctomapPlannerDiagnostics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::OctomapPlannerDiagnostics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::OctomapPlannerDiagnostics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::OctomapPlannerDiagnostics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::OctomapPlannerDiagnostics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::OctomapPlannerDiagnostics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::OctomapPlannerDiagnostics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__OctomapPlannerDiagnostics
    std::shared_ptr<mrs_modules_msgs::msg::OctomapPlannerDiagnostics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__OctomapPlannerDiagnostics
    std::shared_ptr<mrs_modules_msgs::msg::OctomapPlannerDiagnostics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OctomapPlannerDiagnostics_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->idle != other.idle) {
      return false;
    }
    if (this->desired_reference != other.desired_reference) {
      return false;
    }
    if (this->best_goal != other.best_goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const OctomapPlannerDiagnostics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OctomapPlannerDiagnostics_

// alias to use template instance with default allocator
using OctomapPlannerDiagnostics =
  mrs_modules_msgs::msg::OctomapPlannerDiagnostics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__OCTOMAP_PLANNER_DIAGNOSTICS__STRUCT_HPP_
