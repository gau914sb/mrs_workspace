// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/ControllerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/controller_status.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__CONTROLLER_STATUS__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__CONTROLLER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__ControllerStatus __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__ControllerStatus __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControllerStatus_
{
  using Type = ControllerStatus_<ContainerAllocator>;

  explicit ControllerStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->active = false;
    }
  }

  explicit ControllerStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->active = false;
    }
  }

  // field types and members
  using _active_type =
    bool;
  _active_type active;

  // setters for named parameter idiom
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::ControllerStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::ControllerStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::ControllerStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::ControllerStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::ControllerStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::ControllerStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::ControllerStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::ControllerStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::ControllerStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::ControllerStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__ControllerStatus
    std::shared_ptr<mrs_msgs::msg::ControllerStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__ControllerStatus
    std::shared_ptr<mrs_msgs::msg::ControllerStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerStatus_ & other) const
  {
    if (this->active != other.active) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerStatus_

// alias to use template instance with default allocator
using ControllerStatus =
  mrs_msgs::msg::ControllerStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__CONTROLLER_STATUS__STRUCT_HPP_
