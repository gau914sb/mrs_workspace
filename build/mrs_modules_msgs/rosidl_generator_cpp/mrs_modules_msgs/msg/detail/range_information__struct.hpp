// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/RangeInformation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/range_information.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__RANGE_INFORMATION__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__RANGE_INFORMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrs_modules_msgs__msg__RangeInformation __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__RangeInformation __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RangeInformation_
{
  using Type = RangeInformation_<ContainerAllocator>;

  explicit RangeInformation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prn_number = 0;
      this->glofreq = 0;
      this->psr = 0.0;
      this->psr_std = 0.0f;
      this->adr = 0.0;
      this->adr_std = 0.0f;
      this->dopp = 0.0f;
      this->noise_density_ratio = 0.0f;
      this->locktime = 0.0f;
      this->tracking_status = 0ul;
    }
  }

  explicit RangeInformation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prn_number = 0;
      this->glofreq = 0;
      this->psr = 0.0;
      this->psr_std = 0.0f;
      this->adr = 0.0;
      this->adr_std = 0.0f;
      this->dopp = 0.0f;
      this->noise_density_ratio = 0.0f;
      this->locktime = 0.0f;
      this->tracking_status = 0ul;
    }
  }

  // field types and members
  using _prn_number_type =
    uint16_t;
  _prn_number_type prn_number;
  using _glofreq_type =
    uint16_t;
  _glofreq_type glofreq;
  using _psr_type =
    double;
  _psr_type psr;
  using _psr_std_type =
    float;
  _psr_std_type psr_std;
  using _adr_type =
    double;
  _adr_type adr;
  using _adr_std_type =
    float;
  _adr_std_type adr_std;
  using _dopp_type =
    float;
  _dopp_type dopp;
  using _noise_density_ratio_type =
    float;
  _noise_density_ratio_type noise_density_ratio;
  using _locktime_type =
    float;
  _locktime_type locktime;
  using _tracking_status_type =
    uint32_t;
  _tracking_status_type tracking_status;

  // setters for named parameter idiom
  Type & set__prn_number(
    const uint16_t & _arg)
  {
    this->prn_number = _arg;
    return *this;
  }
  Type & set__glofreq(
    const uint16_t & _arg)
  {
    this->glofreq = _arg;
    return *this;
  }
  Type & set__psr(
    const double & _arg)
  {
    this->psr = _arg;
    return *this;
  }
  Type & set__psr_std(
    const float & _arg)
  {
    this->psr_std = _arg;
    return *this;
  }
  Type & set__adr(
    const double & _arg)
  {
    this->adr = _arg;
    return *this;
  }
  Type & set__adr_std(
    const float & _arg)
  {
    this->adr_std = _arg;
    return *this;
  }
  Type & set__dopp(
    const float & _arg)
  {
    this->dopp = _arg;
    return *this;
  }
  Type & set__noise_density_ratio(
    const float & _arg)
  {
    this->noise_density_ratio = _arg;
    return *this;
  }
  Type & set__locktime(
    const float & _arg)
  {
    this->locktime = _arg;
    return *this;
  }
  Type & set__tracking_status(
    const uint32_t & _arg)
  {
    this->tracking_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::RangeInformation_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::RangeInformation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::RangeInformation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::RangeInformation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::RangeInformation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::RangeInformation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::RangeInformation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::RangeInformation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::RangeInformation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::RangeInformation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__RangeInformation
    std::shared_ptr<mrs_modules_msgs::msg::RangeInformation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__RangeInformation
    std::shared_ptr<mrs_modules_msgs::msg::RangeInformation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RangeInformation_ & other) const
  {
    if (this->prn_number != other.prn_number) {
      return false;
    }
    if (this->glofreq != other.glofreq) {
      return false;
    }
    if (this->psr != other.psr) {
      return false;
    }
    if (this->psr_std != other.psr_std) {
      return false;
    }
    if (this->adr != other.adr) {
      return false;
    }
    if (this->adr_std != other.adr_std) {
      return false;
    }
    if (this->dopp != other.dopp) {
      return false;
    }
    if (this->noise_density_ratio != other.noise_density_ratio) {
      return false;
    }
    if (this->locktime != other.locktime) {
      return false;
    }
    if (this->tracking_status != other.tracking_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const RangeInformation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RangeInformation_

// alias to use template instance with default allocator
using RangeInformation =
  mrs_modules_msgs::msg::RangeInformation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__RANGE_INFORMATION__STRUCT_HPP_
