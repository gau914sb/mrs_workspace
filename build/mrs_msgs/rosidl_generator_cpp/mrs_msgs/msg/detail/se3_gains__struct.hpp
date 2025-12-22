// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/Se3Gains.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/se3_gains.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__SE3_GAINS__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__SE3_GAINS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__Se3Gains __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__Se3Gains __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Se3Gains_
{
  using Type = Se3Gains_<ContainerAllocator>;

  explicit Se3Gains_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kpxy = 0.0;
      this->kvxy = 0.0;
      this->kaxy = 0.0;
      this->kpz = 0.0;
      this->kvz = 0.0;
      this->kaz = 0.0;
      this->kibxy = 0.0;
      this->kibxy_lim = 0.0;
      this->kiwxy = 0.0;
      this->kiwxy_lim = 0.0;
      this->kqrp = 0.0;
      this->kqy = 0.0;
      this->km = 0.0;
      this->km_lim = 0.0;
    }
  }

  explicit Se3Gains_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kpxy = 0.0;
      this->kvxy = 0.0;
      this->kaxy = 0.0;
      this->kpz = 0.0;
      this->kvz = 0.0;
      this->kaz = 0.0;
      this->kibxy = 0.0;
      this->kibxy_lim = 0.0;
      this->kiwxy = 0.0;
      this->kiwxy_lim = 0.0;
      this->kqrp = 0.0;
      this->kqy = 0.0;
      this->km = 0.0;
      this->km_lim = 0.0;
    }
  }

  // field types and members
  using _kpxy_type =
    double;
  _kpxy_type kpxy;
  using _kvxy_type =
    double;
  _kvxy_type kvxy;
  using _kaxy_type =
    double;
  _kaxy_type kaxy;
  using _kpz_type =
    double;
  _kpz_type kpz;
  using _kvz_type =
    double;
  _kvz_type kvz;
  using _kaz_type =
    double;
  _kaz_type kaz;
  using _kibxy_type =
    double;
  _kibxy_type kibxy;
  using _kibxy_lim_type =
    double;
  _kibxy_lim_type kibxy_lim;
  using _kiwxy_type =
    double;
  _kiwxy_type kiwxy;
  using _kiwxy_lim_type =
    double;
  _kiwxy_lim_type kiwxy_lim;
  using _kqrp_type =
    double;
  _kqrp_type kqrp;
  using _kqy_type =
    double;
  _kqy_type kqy;
  using _km_type =
    double;
  _km_type km;
  using _km_lim_type =
    double;
  _km_lim_type km_lim;

  // setters for named parameter idiom
  Type & set__kpxy(
    const double & _arg)
  {
    this->kpxy = _arg;
    return *this;
  }
  Type & set__kvxy(
    const double & _arg)
  {
    this->kvxy = _arg;
    return *this;
  }
  Type & set__kaxy(
    const double & _arg)
  {
    this->kaxy = _arg;
    return *this;
  }
  Type & set__kpz(
    const double & _arg)
  {
    this->kpz = _arg;
    return *this;
  }
  Type & set__kvz(
    const double & _arg)
  {
    this->kvz = _arg;
    return *this;
  }
  Type & set__kaz(
    const double & _arg)
  {
    this->kaz = _arg;
    return *this;
  }
  Type & set__kibxy(
    const double & _arg)
  {
    this->kibxy = _arg;
    return *this;
  }
  Type & set__kibxy_lim(
    const double & _arg)
  {
    this->kibxy_lim = _arg;
    return *this;
  }
  Type & set__kiwxy(
    const double & _arg)
  {
    this->kiwxy = _arg;
    return *this;
  }
  Type & set__kiwxy_lim(
    const double & _arg)
  {
    this->kiwxy_lim = _arg;
    return *this;
  }
  Type & set__kqrp(
    const double & _arg)
  {
    this->kqrp = _arg;
    return *this;
  }
  Type & set__kqy(
    const double & _arg)
  {
    this->kqy = _arg;
    return *this;
  }
  Type & set__km(
    const double & _arg)
  {
    this->km = _arg;
    return *this;
  }
  Type & set__km_lim(
    const double & _arg)
  {
    this->km_lim = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::Se3Gains_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::Se3Gains_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::Se3Gains_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::Se3Gains_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::Se3Gains_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::Se3Gains_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::Se3Gains_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::Se3Gains_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::Se3Gains_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::Se3Gains_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__Se3Gains
    std::shared_ptr<mrs_msgs::msg::Se3Gains_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__Se3Gains
    std::shared_ptr<mrs_msgs::msg::Se3Gains_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Se3Gains_ & other) const
  {
    if (this->kpxy != other.kpxy) {
      return false;
    }
    if (this->kvxy != other.kvxy) {
      return false;
    }
    if (this->kaxy != other.kaxy) {
      return false;
    }
    if (this->kpz != other.kpz) {
      return false;
    }
    if (this->kvz != other.kvz) {
      return false;
    }
    if (this->kaz != other.kaz) {
      return false;
    }
    if (this->kibxy != other.kibxy) {
      return false;
    }
    if (this->kibxy_lim != other.kibxy_lim) {
      return false;
    }
    if (this->kiwxy != other.kiwxy) {
      return false;
    }
    if (this->kiwxy_lim != other.kiwxy_lim) {
      return false;
    }
    if (this->kqrp != other.kqrp) {
      return false;
    }
    if (this->kqy != other.kqy) {
      return false;
    }
    if (this->km != other.km) {
      return false;
    }
    if (this->km_lim != other.km_lim) {
      return false;
    }
    return true;
  }
  bool operator!=(const Se3Gains_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Se3Gains_

// alias to use template instance with default allocator
using Se3Gains =
  mrs_msgs::msg::Se3Gains_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__SE3_GAINS__STRUCT_HPP_
