// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/SafetyBorder.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/safety_border.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__SAFETY_BORDER__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__SAFETY_BORDER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'prism'
#include "mrs_msgs/msg/detail/prism__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__SafetyBorder __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__SafetyBorder __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SafetyBorder_
{
  using Type = SafetyBorder_<ContainerAllocator>;

  explicit SafetyBorder_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : prism(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->keep_obstacles = false;
      this->update_world_origin = false;
    }
  }

  explicit SafetyBorder_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : prism(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->keep_obstacles = false;
      this->update_world_origin = false;
    }
  }

  // field types and members
  using _prism_type =
    mrs_msgs::msg::Prism_<ContainerAllocator>;
  _prism_type prism;
  using _keep_obstacles_type =
    bool;
  _keep_obstacles_type keep_obstacles;
  using _update_world_origin_type =
    bool;
  _update_world_origin_type update_world_origin;

  // setters for named parameter idiom
  Type & set__prism(
    const mrs_msgs::msg::Prism_<ContainerAllocator> & _arg)
  {
    this->prism = _arg;
    return *this;
  }
  Type & set__keep_obstacles(
    const bool & _arg)
  {
    this->keep_obstacles = _arg;
    return *this;
  }
  Type & set__update_world_origin(
    const bool & _arg)
  {
    this->update_world_origin = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::SafetyBorder_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::SafetyBorder_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::SafetyBorder_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::SafetyBorder_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::SafetyBorder_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::SafetyBorder_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::SafetyBorder_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::SafetyBorder_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::SafetyBorder_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::SafetyBorder_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__SafetyBorder
    std::shared_ptr<mrs_msgs::msg::SafetyBorder_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__SafetyBorder
    std::shared_ptr<mrs_msgs::msg::SafetyBorder_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafetyBorder_ & other) const
  {
    if (this->prism != other.prism) {
      return false;
    }
    if (this->keep_obstacles != other.keep_obstacles) {
      return false;
    }
    if (this->update_world_origin != other.update_world_origin) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafetyBorder_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafetyBorder_

// alias to use template instance with default allocator
using SafetyBorder =
  mrs_msgs::msg::SafetyBorder_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__SAFETY_BORDER__STRUCT_HPP_
