// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/EstimatorInput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/estimator_input.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__ESTIMATOR_INPUT__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__ESTIMATOR_INPUT__STRUCT_HPP_

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
// Member 'control_acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__EstimatorInput __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__EstimatorInput __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstimatorInput_
{
  using Type = EstimatorInput_<ContainerAllocator>;

  explicit EstimatorInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    control_acceleration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_hdg_rate = 0.0;
    }
  }

  explicit EstimatorInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    control_acceleration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_hdg_rate = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _control_acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _control_acceleration_type control_acceleration;
  using _control_hdg_rate_type =
    double;
  _control_hdg_rate_type control_hdg_rate;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__control_acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->control_acceleration = _arg;
    return *this;
  }
  Type & set__control_hdg_rate(
    const double & _arg)
  {
    this->control_hdg_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::EstimatorInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::EstimatorInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::EstimatorInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::EstimatorInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::EstimatorInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::EstimatorInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::EstimatorInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::EstimatorInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::EstimatorInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::EstimatorInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__EstimatorInput
    std::shared_ptr<mrs_msgs::msg::EstimatorInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__EstimatorInput
    std::shared_ptr<mrs_msgs::msg::EstimatorInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstimatorInput_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->control_acceleration != other.control_acceleration) {
      return false;
    }
    if (this->control_hdg_rate != other.control_hdg_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstimatorInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstimatorInput_

// alias to use template instance with default allocator
using EstimatorInput =
  mrs_msgs::msg::EstimatorInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__ESTIMATOR_INPUT__STRUCT_HPP_
