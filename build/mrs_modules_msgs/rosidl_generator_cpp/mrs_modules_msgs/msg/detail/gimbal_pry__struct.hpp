// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/GimbalPRY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gimbal_pry.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GIMBAL_PRY__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GIMBAL_PRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrs_modules_msgs__msg__GimbalPRY __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__GimbalPRY __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GimbalPRY_
{
  using Type = GimbalPRY_<ContainerAllocator>;

  explicit GimbalPRY_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitch = 0.0f;
      this->roll = 0.0f;
      this->yaw = 0.0f;
    }
  }

  explicit GimbalPRY_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitch = 0.0f;
      this->roll = 0.0f;
      this->yaw = 0.0f;
    }
  }

  // field types and members
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _roll_type =
    float;
  _roll_type roll;
  using _yaw_type =
    float;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::GimbalPRY_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::GimbalPRY_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::GimbalPRY_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::GimbalPRY_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::GimbalPRY_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::GimbalPRY_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::GimbalPRY_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::GimbalPRY_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::GimbalPRY_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::GimbalPRY_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__GimbalPRY
    std::shared_ptr<mrs_modules_msgs::msg::GimbalPRY_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__GimbalPRY
    std::shared_ptr<mrs_modules_msgs::msg::GimbalPRY_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GimbalPRY_ & other) const
  {
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const GimbalPRY_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GimbalPRY_

// alias to use template instance with default allocator
using GimbalPRY =
  mrs_modules_msgs::msg::GimbalPRY_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GIMBAL_PRY__STRUCT_HPP_
