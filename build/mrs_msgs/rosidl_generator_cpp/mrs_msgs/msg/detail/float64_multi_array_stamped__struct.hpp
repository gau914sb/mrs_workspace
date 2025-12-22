// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/Float64MultiArrayStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/float64_multi_array_stamped.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__FLOAT64_MULTI_ARRAY_STAMPED__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__FLOAT64_MULTI_ARRAY_STAMPED__STRUCT_HPP_

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
// Member 'matrix'
#include "std_msgs/msg/detail/float64_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__Float64MultiArrayStamped __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__Float64MultiArrayStamped __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Float64MultiArrayStamped_
{
  using Type = Float64MultiArrayStamped_<ContainerAllocator>;

  explicit Float64MultiArrayStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    matrix(_init)
  {
    (void)_init;
  }

  explicit Float64MultiArrayStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    matrix(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _matrix_type =
    std_msgs::msg::Float64MultiArray_<ContainerAllocator>;
  _matrix_type matrix;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__matrix(
    const std_msgs::msg::Float64MultiArray_<ContainerAllocator> & _arg)
  {
    this->matrix = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::Float64MultiArrayStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::Float64MultiArrayStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::Float64MultiArrayStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::Float64MultiArrayStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::Float64MultiArrayStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::Float64MultiArrayStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::Float64MultiArrayStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::Float64MultiArrayStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::Float64MultiArrayStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::Float64MultiArrayStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__Float64MultiArrayStamped
    std::shared_ptr<mrs_msgs::msg::Float64MultiArrayStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__Float64MultiArrayStamped
    std::shared_ptr<mrs_msgs::msg::Float64MultiArrayStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Float64MultiArrayStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->matrix != other.matrix) {
      return false;
    }
    return true;
  }
  bool operator!=(const Float64MultiArrayStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Float64MultiArrayStamped_

// alias to use template instance with default allocator
using Float64MultiArrayStamped =
  mrs_msgs::msg::Float64MultiArrayStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__FLOAT64_MULTI_ARRAY_STAMPED__STRUCT_HPP_
