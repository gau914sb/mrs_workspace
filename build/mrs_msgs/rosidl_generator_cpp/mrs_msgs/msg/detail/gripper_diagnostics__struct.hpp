// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/GripperDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gripper_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__GRIPPER_DIAGNOSTICS__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__GRIPPER_DIAGNOSTICS__STRUCT_HPP_

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
# define DEPRECATED__mrs_msgs__msg__GripperDiagnostics __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__GripperDiagnostics __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripperDiagnostics_
{
  using Type = GripperDiagnostics_<ContainerAllocator>;

  explicit GripperDiagnostics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper_on = false;
      this->gripping_object = false;
      this->has_hall = false;
      this->hall1_debug = 0l;
      this->hall2_debug = 0l;
      this->has_ultrasonic = false;
      this->ultrasonic1_debug = 0l;
      this->ultrasonic2_debug = 0l;
      this->has_proximity = false;
      this->proximity1_debug = 0l;
      this->proximity2_debug = 0l;
    }
  }

  explicit GripperDiagnostics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper_on = false;
      this->gripping_object = false;
      this->has_hall = false;
      this->hall1_debug = 0l;
      this->hall2_debug = 0l;
      this->has_ultrasonic = false;
      this->ultrasonic1_debug = 0l;
      this->ultrasonic2_debug = 0l;
      this->has_proximity = false;
      this->proximity1_debug = 0l;
      this->proximity2_debug = 0l;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _gripper_on_type =
    bool;
  _gripper_on_type gripper_on;
  using _gripping_object_type =
    bool;
  _gripping_object_type gripping_object;
  using _has_hall_type =
    bool;
  _has_hall_type has_hall;
  using _hall1_debug_type =
    int32_t;
  _hall1_debug_type hall1_debug;
  using _hall2_debug_type =
    int32_t;
  _hall2_debug_type hall2_debug;
  using _has_ultrasonic_type =
    bool;
  _has_ultrasonic_type has_ultrasonic;
  using _ultrasonic1_debug_type =
    int32_t;
  _ultrasonic1_debug_type ultrasonic1_debug;
  using _ultrasonic2_debug_type =
    int32_t;
  _ultrasonic2_debug_type ultrasonic2_debug;
  using _has_proximity_type =
    bool;
  _has_proximity_type has_proximity;
  using _proximity1_debug_type =
    int32_t;
  _proximity1_debug_type proximity1_debug;
  using _proximity2_debug_type =
    int32_t;
  _proximity2_debug_type proximity2_debug;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__gripper_on(
    const bool & _arg)
  {
    this->gripper_on = _arg;
    return *this;
  }
  Type & set__gripping_object(
    const bool & _arg)
  {
    this->gripping_object = _arg;
    return *this;
  }
  Type & set__has_hall(
    const bool & _arg)
  {
    this->has_hall = _arg;
    return *this;
  }
  Type & set__hall1_debug(
    const int32_t & _arg)
  {
    this->hall1_debug = _arg;
    return *this;
  }
  Type & set__hall2_debug(
    const int32_t & _arg)
  {
    this->hall2_debug = _arg;
    return *this;
  }
  Type & set__has_ultrasonic(
    const bool & _arg)
  {
    this->has_ultrasonic = _arg;
    return *this;
  }
  Type & set__ultrasonic1_debug(
    const int32_t & _arg)
  {
    this->ultrasonic1_debug = _arg;
    return *this;
  }
  Type & set__ultrasonic2_debug(
    const int32_t & _arg)
  {
    this->ultrasonic2_debug = _arg;
    return *this;
  }
  Type & set__has_proximity(
    const bool & _arg)
  {
    this->has_proximity = _arg;
    return *this;
  }
  Type & set__proximity1_debug(
    const int32_t & _arg)
  {
    this->proximity1_debug = _arg;
    return *this;
  }
  Type & set__proximity2_debug(
    const int32_t & _arg)
  {
    this->proximity2_debug = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::GripperDiagnostics_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::GripperDiagnostics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::GripperDiagnostics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::GripperDiagnostics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::GripperDiagnostics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::GripperDiagnostics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::GripperDiagnostics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::GripperDiagnostics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::GripperDiagnostics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::GripperDiagnostics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__GripperDiagnostics
    std::shared_ptr<mrs_msgs::msg::GripperDiagnostics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__GripperDiagnostics
    std::shared_ptr<mrs_msgs::msg::GripperDiagnostics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperDiagnostics_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->gripper_on != other.gripper_on) {
      return false;
    }
    if (this->gripping_object != other.gripping_object) {
      return false;
    }
    if (this->has_hall != other.has_hall) {
      return false;
    }
    if (this->hall1_debug != other.hall1_debug) {
      return false;
    }
    if (this->hall2_debug != other.hall2_debug) {
      return false;
    }
    if (this->has_ultrasonic != other.has_ultrasonic) {
      return false;
    }
    if (this->ultrasonic1_debug != other.ultrasonic1_debug) {
      return false;
    }
    if (this->ultrasonic2_debug != other.ultrasonic2_debug) {
      return false;
    }
    if (this->has_proximity != other.has_proximity) {
      return false;
    }
    if (this->proximity1_debug != other.proximity1_debug) {
      return false;
    }
    if (this->proximity2_debug != other.proximity2_debug) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperDiagnostics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperDiagnostics_

// alias to use template instance with default allocator
using GripperDiagnostics =
  mrs_msgs::msg::GripperDiagnostics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__GRIPPER_DIAGNOSTICS__STRUCT_HPP_
