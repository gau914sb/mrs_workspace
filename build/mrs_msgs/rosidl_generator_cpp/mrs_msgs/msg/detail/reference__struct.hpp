// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/Reference.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/reference.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__REFERENCE__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__REFERENCE__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__Reference __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__Reference __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Reference_
{
  using Type = Reference_<ContainerAllocator>;

  explicit Reference_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0;
    }
  }

  explicit Reference_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0;
    }
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _heading_type =
    double;
  _heading_type heading;

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

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::Reference_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::Reference_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::Reference_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::Reference_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::Reference_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::Reference_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::Reference_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::Reference_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::Reference_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::Reference_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__Reference
    std::shared_ptr<mrs_msgs::msg::Reference_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__Reference
    std::shared_ptr<mrs_msgs::msg::Reference_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reference_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reference_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reference_

// alias to use template instance with default allocator
using Reference =
  mrs_msgs::msg::Reference_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__REFERENCE__STRUCT_HPP_
