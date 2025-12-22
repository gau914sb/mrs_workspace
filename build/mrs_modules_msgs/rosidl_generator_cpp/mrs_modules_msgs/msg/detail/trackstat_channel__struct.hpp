// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/TrackstatChannel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/trackstat_channel.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT_CHANNEL__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT_CHANNEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrs_modules_msgs__msg__TrackstatChannel __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__TrackstatChannel __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackstatChannel_
{
  using Type = TrackstatChannel_<ContainerAllocator>;

  explicit TrackstatChannel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prn = 0;
      this->glofreq = 0;
      this->ch_tr_status = 0ul;
      this->psr = 0.0;
      this->doppler = 0.0f;
      this->c_no = 0.0f;
      this->locktime = 0.0f;
      this->psr_res = 0.0f;
      this->reject = "";
      this->psr_weight = 0.0f;
    }
  }

  explicit TrackstatChannel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reject(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prn = 0;
      this->glofreq = 0;
      this->ch_tr_status = 0ul;
      this->psr = 0.0;
      this->doppler = 0.0f;
      this->c_no = 0.0f;
      this->locktime = 0.0f;
      this->psr_res = 0.0f;
      this->reject = "";
      this->psr_weight = 0.0f;
    }
  }

  // field types and members
  using _prn_type =
    int16_t;
  _prn_type prn;
  using _glofreq_type =
    int16_t;
  _glofreq_type glofreq;
  using _ch_tr_status_type =
    uint32_t;
  _ch_tr_status_type ch_tr_status;
  using _psr_type =
    double;
  _psr_type psr;
  using _doppler_type =
    float;
  _doppler_type doppler;
  using _c_no_type =
    float;
  _c_no_type c_no;
  using _locktime_type =
    float;
  _locktime_type locktime;
  using _psr_res_type =
    float;
  _psr_res_type psr_res;
  using _reject_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reject_type reject;
  using _psr_weight_type =
    float;
  _psr_weight_type psr_weight;

  // setters for named parameter idiom
  Type & set__prn(
    const int16_t & _arg)
  {
    this->prn = _arg;
    return *this;
  }
  Type & set__glofreq(
    const int16_t & _arg)
  {
    this->glofreq = _arg;
    return *this;
  }
  Type & set__ch_tr_status(
    const uint32_t & _arg)
  {
    this->ch_tr_status = _arg;
    return *this;
  }
  Type & set__psr(
    const double & _arg)
  {
    this->psr = _arg;
    return *this;
  }
  Type & set__doppler(
    const float & _arg)
  {
    this->doppler = _arg;
    return *this;
  }
  Type & set__c_no(
    const float & _arg)
  {
    this->c_no = _arg;
    return *this;
  }
  Type & set__locktime(
    const float & _arg)
  {
    this->locktime = _arg;
    return *this;
  }
  Type & set__psr_res(
    const float & _arg)
  {
    this->psr_res = _arg;
    return *this;
  }
  Type & set__reject(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reject = _arg;
    return *this;
  }
  Type & set__psr_weight(
    const float & _arg)
  {
    this->psr_weight = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::TrackstatChannel_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::TrackstatChannel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::TrackstatChannel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::TrackstatChannel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::TrackstatChannel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::TrackstatChannel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::TrackstatChannel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::TrackstatChannel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::TrackstatChannel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::TrackstatChannel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__TrackstatChannel
    std::shared_ptr<mrs_modules_msgs::msg::TrackstatChannel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__TrackstatChannel
    std::shared_ptr<mrs_modules_msgs::msg::TrackstatChannel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackstatChannel_ & other) const
  {
    if (this->prn != other.prn) {
      return false;
    }
    if (this->glofreq != other.glofreq) {
      return false;
    }
    if (this->ch_tr_status != other.ch_tr_status) {
      return false;
    }
    if (this->psr != other.psr) {
      return false;
    }
    if (this->doppler != other.doppler) {
      return false;
    }
    if (this->c_no != other.c_no) {
      return false;
    }
    if (this->locktime != other.locktime) {
      return false;
    }
    if (this->psr_res != other.psr_res) {
      return false;
    }
    if (this->reject != other.reject) {
      return false;
    }
    if (this->psr_weight != other.psr_weight) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackstatChannel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackstatChannel_

// alias to use template instance with default allocator
using TrackstatChannel =
  mrs_modules_msgs::msg::TrackstatChannel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT_CHANNEL__STRUCT_HPP_
