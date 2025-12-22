// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/EulerAngles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/euler_angles.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__EULER_ANGLES__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__EULER_ANGLES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__EulerAngles __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__EulerAngles __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EulerAngles_
{
  using Type = EulerAngles_<ContainerAllocator>;

  explicit EulerAngles_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->roll = 0.0;
    }
  }

  explicit EulerAngles_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->roll = 0.0;
    }
  }

  // field types and members
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _roll_type =
    double;
  _roll_type roll;

  // setters for named parameter idiom
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::EulerAngles_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::EulerAngles_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::EulerAngles_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::EulerAngles_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::EulerAngles_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::EulerAngles_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::EulerAngles_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::EulerAngles_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::EulerAngles_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::EulerAngles_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__EulerAngles
    std::shared_ptr<mrs_msgs::msg::EulerAngles_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__EulerAngles
    std::shared_ptr<mrs_msgs::msg::EulerAngles_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EulerAngles_ & other) const
  {
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    return true;
  }
  bool operator!=(const EulerAngles_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EulerAngles_

// alias to use template instance with default allocator
using EulerAngles =
  mrs_msgs::msg::EulerAngles_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__EULER_ANGLES__STRUCT_HPP_
