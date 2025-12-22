// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/LandoffDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/landoff_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__LANDOFF_DIAGNOSTICS__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__LANDOFF_DIAGNOSTICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__LandoffDiagnostics __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__LandoffDiagnostics __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LandoffDiagnostics_
{
  using Type = LandoffDiagnostics_<ContainerAllocator>;

  explicit LandoffDiagnostics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->active = false;
      this->landing = false;
      this->taking_off = false;
      this->elanding = false;
    }
  }

  explicit LandoffDiagnostics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->active = false;
      this->landing = false;
      this->taking_off = false;
      this->elanding = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _active_type =
    bool;
  _active_type active;
  using _landing_type =
    bool;
  _landing_type landing;
  using _taking_off_type =
    bool;
  _taking_off_type taking_off;
  using _elanding_type =
    bool;
  _elanding_type elanding;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__landing(
    const bool & _arg)
  {
    this->landing = _arg;
    return *this;
  }
  Type & set__taking_off(
    const bool & _arg)
  {
    this->taking_off = _arg;
    return *this;
  }
  Type & set__elanding(
    const bool & _arg)
  {
    this->elanding = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::LandoffDiagnostics_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::LandoffDiagnostics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::LandoffDiagnostics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::LandoffDiagnostics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::LandoffDiagnostics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::LandoffDiagnostics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::LandoffDiagnostics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::LandoffDiagnostics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::LandoffDiagnostics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::LandoffDiagnostics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__LandoffDiagnostics
    std::shared_ptr<mrs_msgs::msg::LandoffDiagnostics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__LandoffDiagnostics
    std::shared_ptr<mrs_msgs::msg::LandoffDiagnostics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LandoffDiagnostics_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    if (this->landing != other.landing) {
      return false;
    }
    if (this->taking_off != other.taking_off) {
      return false;
    }
    if (this->elanding != other.elanding) {
      return false;
    }
    return true;
  }
  bool operator!=(const LandoffDiagnostics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LandoffDiagnostics_

// alias to use template instance with default allocator
using LandoffDiagnostics =
  mrs_msgs::msg::LandoffDiagnostics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__LANDOFF_DIAGNOSTICS__STRUCT_HPP_
