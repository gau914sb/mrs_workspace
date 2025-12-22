// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/PathReference.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/path_reference.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__PATH_REFERENCE__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__PATH_REFERENCE__STRUCT_HPP_

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
// Member 'points'
#include "mrs_msgs/msg/detail/reference__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__PathReference __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__PathReference __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathReference_
{
  using Type = PathReference_<ContainerAllocator>;

  explicit PathReference_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->use_heading = false;
      this->fly_now = false;
      this->loop = false;
    }
  }

  explicit PathReference_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->use_heading = false;
      this->fly_now = false;
      this->loop = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _use_heading_type =
    bool;
  _use_heading_type use_heading;
  using _fly_now_type =
    bool;
  _fly_now_type fly_now;
  using _loop_type =
    bool;
  _loop_type loop;
  using _points_type =
    std::vector<mrs_msgs::msg::Reference_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::msg::Reference_<ContainerAllocator>>>;
  _points_type points;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__use_heading(
    const bool & _arg)
  {
    this->use_heading = _arg;
    return *this;
  }
  Type & set__fly_now(
    const bool & _arg)
  {
    this->fly_now = _arg;
    return *this;
  }
  Type & set__loop(
    const bool & _arg)
  {
    this->loop = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<mrs_msgs::msg::Reference_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::msg::Reference_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::PathReference_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::PathReference_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::PathReference_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::PathReference_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::PathReference_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::PathReference_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::PathReference_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::PathReference_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::PathReference_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::PathReference_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__PathReference
    std::shared_ptr<mrs_msgs::msg::PathReference_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__PathReference
    std::shared_ptr<mrs_msgs::msg::PathReference_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathReference_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->use_heading != other.use_heading) {
      return false;
    }
    if (this->fly_now != other.fly_now) {
      return false;
    }
    if (this->loop != other.loop) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathReference_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathReference_

// alias to use template instance with default allocator
using PathReference =
  mrs_msgs::msg::PathReference_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__PATH_REFERENCE__STRUCT_HPP_
