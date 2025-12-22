// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/PoseWithCovarianceArrayStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/pose_with_covariance_array_stamped.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_ARRAY_STAMPED__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_ARRAY_STAMPED__STRUCT_HPP_

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
// Member 'poses'
#include "mrs_msgs/msg/detail/pose_with_covariance_identified__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__PoseWithCovarianceArrayStamped __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__PoseWithCovarianceArrayStamped __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseWithCovarianceArrayStamped_
{
  using Type = PoseWithCovarianceArrayStamped_<ContainerAllocator>;

  explicit PoseWithCovarianceArrayStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit PoseWithCovarianceArrayStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _poses_type =
    std::vector<mrs_msgs::msg::PoseWithCovarianceIdentified_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::msg::PoseWithCovarianceIdentified_<ContainerAllocator>>>;
  _poses_type poses;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<mrs_msgs::msg::PoseWithCovarianceIdentified_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::msg::PoseWithCovarianceIdentified_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::PoseWithCovarianceArrayStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::PoseWithCovarianceArrayStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::PoseWithCovarianceArrayStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::PoseWithCovarianceArrayStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::PoseWithCovarianceArrayStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::PoseWithCovarianceArrayStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::PoseWithCovarianceArrayStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::PoseWithCovarianceArrayStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::PoseWithCovarianceArrayStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::PoseWithCovarianceArrayStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__PoseWithCovarianceArrayStamped
    std::shared_ptr<mrs_msgs::msg::PoseWithCovarianceArrayStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__PoseWithCovarianceArrayStamped
    std::shared_ptr<mrs_msgs::msg::PoseWithCovarianceArrayStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseWithCovarianceArrayStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseWithCovarianceArrayStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseWithCovarianceArrayStamped_

// alias to use template instance with default allocator
using PoseWithCovarianceArrayStamped =
  mrs_msgs::msg::PoseWithCovarianceArrayStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_ARRAY_STAMPED__STRUCT_HPP_
