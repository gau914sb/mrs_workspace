// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/VelocityReference.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/velocity_reference.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__VELOCITY_REFERENCE__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__VELOCITY_REFERENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__VelocityReference __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__VelocityReference __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VelocityReference_
{
  using Type = VelocityReference_<ContainerAllocator>;

  explicit VelocityReference_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->altitude = 0.0;
      this->heading = 0.0;
      this->heading_rate = 0.0;
      this->use_altitude = false;
      this->use_heading = false;
      this->use_heading_rate = false;
    }
  }

  explicit VelocityReference_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->altitude = 0.0;
      this->heading = 0.0;
      this->heading_rate = 0.0;
      this->use_altitude = false;
      this->use_heading = false;
      this->use_heading_rate = false;
    }
  }

  // field types and members
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _heading_type =
    double;
  _heading_type heading;
  using _heading_rate_type =
    double;
  _heading_rate_type heading_rate;
  using _use_altitude_type =
    bool;
  _use_altitude_type use_altitude;
  using _use_heading_type =
    bool;
  _use_heading_type use_heading;
  using _use_heading_rate_type =
    bool;
  _use_heading_rate_type use_heading_rate;

  // setters for named parameter idiom
  Type & set__velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__heading_rate(
    const double & _arg)
  {
    this->heading_rate = _arg;
    return *this;
  }
  Type & set__use_altitude(
    const bool & _arg)
  {
    this->use_altitude = _arg;
    return *this;
  }
  Type & set__use_heading(
    const bool & _arg)
  {
    this->use_heading = _arg;
    return *this;
  }
  Type & set__use_heading_rate(
    const bool & _arg)
  {
    this->use_heading_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::VelocityReference_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::VelocityReference_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::VelocityReference_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::VelocityReference_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::VelocityReference_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::VelocityReference_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::VelocityReference_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::VelocityReference_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::VelocityReference_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::VelocityReference_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__VelocityReference
    std::shared_ptr<mrs_msgs::msg::VelocityReference_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__VelocityReference
    std::shared_ptr<mrs_msgs::msg::VelocityReference_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VelocityReference_ & other) const
  {
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->heading_rate != other.heading_rate) {
      return false;
    }
    if (this->use_altitude != other.use_altitude) {
      return false;
    }
    if (this->use_heading != other.use_heading) {
      return false;
    }
    if (this->use_heading_rate != other.use_heading_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const VelocityReference_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VelocityReference_

// alias to use template instance with default allocator
using VelocityReference =
  mrs_msgs::msg::VelocityReference_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__VELOCITY_REFERENCE__STRUCT_HPP_
