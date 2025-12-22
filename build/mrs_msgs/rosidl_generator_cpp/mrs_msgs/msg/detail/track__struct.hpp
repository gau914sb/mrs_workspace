// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/Track.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/track.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__TRACK__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__TRACK__STRUCT_HPP_

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
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__Track __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__Track __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Track_
{
  using Type = Track_<ContainerAllocator>;

  explicit Track_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    orientation(_init),
    velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      std::fill<typename std::array<double, 9>::iterator, double>(this->position_covariance.begin(), this->position_covariance.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->orientation_covariance.begin(), this->orientation_covariance.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->velocity_covariance.begin(), this->velocity_covariance.end(), 0.0);
    }
  }

  explicit Track_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    position_covariance(_alloc),
    orientation(_alloc, _init),
    orientation_covariance(_alloc),
    velocity(_alloc, _init),
    velocity_covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      std::fill<typename std::array<double, 9>::iterator, double>(this->position_covariance.begin(), this->position_covariance.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->orientation_covariance.begin(), this->orientation_covariance.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->velocity_covariance.begin(), this->velocity_covariance.end(), 0.0);
    }
  }

  // field types and members
  using _id_type =
    uint64_t;
  _id_type id;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _position_covariance_type =
    std::array<double, 9>;
  _position_covariance_type position_covariance;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _orientation_covariance_type =
    std::array<double, 9>;
  _orientation_covariance_type orientation_covariance;
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;
  using _velocity_covariance_type =
    std::array<double, 9>;
  _velocity_covariance_type velocity_covariance;

  // setters for named parameter idiom
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__position_covariance(
    const std::array<double, 9> & _arg)
  {
    this->position_covariance = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__orientation_covariance(
    const std::array<double, 9> & _arg)
  {
    this->orientation_covariance = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__velocity_covariance(
    const std::array<double, 9> & _arg)
  {
    this->velocity_covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::Track_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::Track_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::Track_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::Track_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::Track_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::Track_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::Track_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::Track_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::Track_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::Track_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__Track
    std::shared_ptr<mrs_msgs::msg::Track_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__Track
    std::shared_ptr<mrs_msgs::msg::Track_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Track_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->position_covariance != other.position_covariance) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->orientation_covariance != other.orientation_covariance) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->velocity_covariance != other.velocity_covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Track_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Track_

// alias to use template instance with default allocator
using Track =
  mrs_msgs::msg::Track_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__TRACK__STRUCT_HPP_
