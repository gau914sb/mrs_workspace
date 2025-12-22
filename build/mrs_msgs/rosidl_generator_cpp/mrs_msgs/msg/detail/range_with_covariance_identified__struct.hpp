// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/RangeWithCovarianceIdentified.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/range_with_covariance_identified.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__RANGE_WITH_COVARIANCE_IDENTIFIED__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__RANGE_WITH_COVARIANCE_IDENTIFIED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'range'
#include "sensor_msgs/msg/detail/range__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__RangeWithCovarianceIdentified __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__RangeWithCovarianceIdentified __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RangeWithCovarianceIdentified_
{
  using Type = RangeWithCovarianceIdentified_<ContainerAllocator>;

  explicit RangeWithCovarianceIdentified_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : range(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->variance = 0.0;
      this->power_a = 0.0;
      this->power_b = 0.0;
    }
  }

  explicit RangeWithCovarianceIdentified_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : range(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->variance = 0.0;
      this->power_a = 0.0;
      this->power_b = 0.0;
    }
  }

  // field types and members
  using _id_type =
    uint64_t;
  _id_type id;
  using _range_type =
    sensor_msgs::msg::Range_<ContainerAllocator>;
  _range_type range;
  using _variance_type =
    double;
  _variance_type variance;
  using _power_a_type =
    double;
  _power_a_type power_a;
  using _power_b_type =
    double;
  _power_b_type power_b;

  // setters for named parameter idiom
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__range(
    const sensor_msgs::msg::Range_<ContainerAllocator> & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__variance(
    const double & _arg)
  {
    this->variance = _arg;
    return *this;
  }
  Type & set__power_a(
    const double & _arg)
  {
    this->power_a = _arg;
    return *this;
  }
  Type & set__power_b(
    const double & _arg)
  {
    this->power_b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::RangeWithCovarianceIdentified_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::RangeWithCovarianceIdentified_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::RangeWithCovarianceIdentified_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::RangeWithCovarianceIdentified_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::RangeWithCovarianceIdentified_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::RangeWithCovarianceIdentified_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::RangeWithCovarianceIdentified_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::RangeWithCovarianceIdentified_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::RangeWithCovarianceIdentified_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::RangeWithCovarianceIdentified_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__RangeWithCovarianceIdentified
    std::shared_ptr<mrs_msgs::msg::RangeWithCovarianceIdentified_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__RangeWithCovarianceIdentified
    std::shared_ptr<mrs_msgs::msg::RangeWithCovarianceIdentified_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RangeWithCovarianceIdentified_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->variance != other.variance) {
      return false;
    }
    if (this->power_a != other.power_a) {
      return false;
    }
    if (this->power_b != other.power_b) {
      return false;
    }
    return true;
  }
  bool operator!=(const RangeWithCovarianceIdentified_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RangeWithCovarianceIdentified_

// alias to use template instance with default allocator
using RangeWithCovarianceIdentified =
  mrs_msgs::msg::RangeWithCovarianceIdentified_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__RANGE_WITH_COVARIANCE_IDENTIFIED__STRUCT_HPP_
