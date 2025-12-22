// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/ReferenceWithVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/reference_with_velocity.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__REFERENCE_WITH_VELOCITY__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__REFERENCE_WITH_VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__ReferenceWithVelocity __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__ReferenceWithVelocity __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReferenceWithVelocity_
{
  using Type = ReferenceWithVelocity_<ContainerAllocator>;

  explicit ReferenceWithVelocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0;
      this->enforce_velocity = false;
    }
  }

  explicit ReferenceWithVelocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0;
      this->enforce_velocity = false;
    }
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _heading_type =
    double;
  _heading_type heading;
  using _enforce_velocity_type =
    bool;
  _enforce_velocity_type enforce_velocity;
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__enforce_velocity(
    const bool & _arg)
  {
    this->enforce_velocity = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::ReferenceWithVelocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::ReferenceWithVelocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::ReferenceWithVelocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::ReferenceWithVelocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::ReferenceWithVelocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::ReferenceWithVelocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::ReferenceWithVelocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::ReferenceWithVelocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::ReferenceWithVelocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::ReferenceWithVelocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__ReferenceWithVelocity
    std::shared_ptr<mrs_msgs::msg::ReferenceWithVelocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__ReferenceWithVelocity
    std::shared_ptr<mrs_msgs::msg::ReferenceWithVelocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReferenceWithVelocity_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->enforce_velocity != other.enforce_velocity) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReferenceWithVelocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReferenceWithVelocity_

// alias to use template instance with default allocator
using ReferenceWithVelocity =
  mrs_msgs::msg::ReferenceWithVelocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__REFERENCE_WITH_VELOCITY__STRUCT_HPP_
