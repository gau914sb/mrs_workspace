// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/PoseWithCovarianceIdentified.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/pose_with_covariance_identified.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_IDENTIFIED__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_IDENTIFIED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__PoseWithCovarianceIdentified __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__PoseWithCovarianceIdentified __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseWithCovarianceIdentified_
{
  using Type = PoseWithCovarianceIdentified_<ContainerAllocator>;

  explicit PoseWithCovarianceIdentified_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      std::fill<typename std::array<double, 36>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  explicit PoseWithCovarianceIdentified_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      std::fill<typename std::array<double, 36>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  // field types and members
  using _id_type =
    uint64_t;
  _id_type id;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _covariance_type =
    std::array<double, 36>;
  _covariance_type covariance;

  // setters for named parameter idiom
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__covariance(
    const std::array<double, 36> & _arg)
  {
    this->covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::PoseWithCovarianceIdentified_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::PoseWithCovarianceIdentified_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::PoseWithCovarianceIdentified_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::PoseWithCovarianceIdentified_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::PoseWithCovarianceIdentified_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::PoseWithCovarianceIdentified_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::PoseWithCovarianceIdentified_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::PoseWithCovarianceIdentified_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::PoseWithCovarianceIdentified_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::PoseWithCovarianceIdentified_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__PoseWithCovarianceIdentified
    std::shared_ptr<mrs_msgs::msg::PoseWithCovarianceIdentified_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__PoseWithCovarianceIdentified
    std::shared_ptr<mrs_msgs::msg::PoseWithCovarianceIdentified_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseWithCovarianceIdentified_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseWithCovarianceIdentified_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseWithCovarianceIdentified_

// alias to use template instance with default allocator
using PoseWithCovarianceIdentified =
  mrs_msgs::msg::PoseWithCovarianceIdentified_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_IDENTIFIED__STRUCT_HPP_
