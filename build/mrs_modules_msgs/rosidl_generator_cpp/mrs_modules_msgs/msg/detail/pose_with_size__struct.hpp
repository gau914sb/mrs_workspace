// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/PoseWithSize.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/pose_with_size.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__POSE_WITH_SIZE__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__POSE_WITH_SIZE__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__mrs_modules_msgs__msg__PoseWithSize __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__PoseWithSize __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseWithSize_
{
  using Type = PoseWithSize_<ContainerAllocator>;

  explicit PoseWithSize_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0;
      this->height = 0.0;
    }
  }

  explicit PoseWithSize_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0;
      this->height = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _width_type =
    double;
  _width_type width;
  using _height_type =
    double;
  _height_type height;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const double & _arg)
  {
    this->height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::PoseWithSize_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::PoseWithSize_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::PoseWithSize_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::PoseWithSize_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::PoseWithSize_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::PoseWithSize_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::PoseWithSize_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::PoseWithSize_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::PoseWithSize_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::PoseWithSize_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__PoseWithSize
    std::shared_ptr<mrs_modules_msgs::msg::PoseWithSize_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__PoseWithSize
    std::shared_ptr<mrs_modules_msgs::msg::PoseWithSize_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseWithSize_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseWithSize_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseWithSize_

// alias to use template instance with default allocator
using PoseWithSize =
  mrs_modules_msgs::msg::PoseWithSize_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__POSE_WITH_SIZE__STRUCT_HPP_
