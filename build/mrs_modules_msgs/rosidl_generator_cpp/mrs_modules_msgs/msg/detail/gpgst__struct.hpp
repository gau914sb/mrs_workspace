// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/Gpgst.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gpgst.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPGST__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPGST__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__mrs_modules_msgs__msg__Gpgst __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__Gpgst __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gpgst_
{
  using Type = Gpgst_<ContainerAllocator>;

  explicit Gpgst_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->utc = 0.0;
      this->rms = 0.0;
      this->smjr_std = 0.0;
      this->smnr_std = 0.0;
      this->orient = 0.0;
      this->lat_std = 0.0;
      this->lon_std = 0.0;
      this->alt_std = 0.0;
    }
  }

  explicit Gpgst_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    message_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->utc = 0.0;
      this->rms = 0.0;
      this->smjr_std = 0.0;
      this->smnr_std = 0.0;
      this->orient = 0.0;
      this->lat_std = 0.0;
      this->lon_std = 0.0;
      this->alt_std = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _message_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_id_type message_id;
  using _utc_type =
    double;
  _utc_type utc;
  using _rms_type =
    double;
  _rms_type rms;
  using _smjr_std_type =
    double;
  _smjr_std_type smjr_std;
  using _smnr_std_type =
    double;
  _smnr_std_type smnr_std;
  using _orient_type =
    double;
  _orient_type orient;
  using _lat_std_type =
    double;
  _lat_std_type lat_std;
  using _lon_std_type =
    double;
  _lon_std_type lon_std;
  using _alt_std_type =
    double;
  _alt_std_type alt_std;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__message_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message_id = _arg;
    return *this;
  }
  Type & set__utc(
    const double & _arg)
  {
    this->utc = _arg;
    return *this;
  }
  Type & set__rms(
    const double & _arg)
  {
    this->rms = _arg;
    return *this;
  }
  Type & set__smjr_std(
    const double & _arg)
  {
    this->smjr_std = _arg;
    return *this;
  }
  Type & set__smnr_std(
    const double & _arg)
  {
    this->smnr_std = _arg;
    return *this;
  }
  Type & set__orient(
    const double & _arg)
  {
    this->orient = _arg;
    return *this;
  }
  Type & set__lat_std(
    const double & _arg)
  {
    this->lat_std = _arg;
    return *this;
  }
  Type & set__lon_std(
    const double & _arg)
  {
    this->lon_std = _arg;
    return *this;
  }
  Type & set__alt_std(
    const double & _arg)
  {
    this->alt_std = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::Gpgst_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::Gpgst_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::Gpgst_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::Gpgst_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::Gpgst_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::Gpgst_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::Gpgst_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::Gpgst_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::Gpgst_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::Gpgst_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__Gpgst
    std::shared_ptr<mrs_modules_msgs::msg::Gpgst_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__Gpgst
    std::shared_ptr<mrs_modules_msgs::msg::Gpgst_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gpgst_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->message_id != other.message_id) {
      return false;
    }
    if (this->utc != other.utc) {
      return false;
    }
    if (this->rms != other.rms) {
      return false;
    }
    if (this->smjr_std != other.smjr_std) {
      return false;
    }
    if (this->smnr_std != other.smnr_std) {
      return false;
    }
    if (this->orient != other.orient) {
      return false;
    }
    if (this->lat_std != other.lat_std) {
      return false;
    }
    if (this->lon_std != other.lon_std) {
      return false;
    }
    if (this->alt_std != other.alt_std) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gpgst_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gpgst_

// alias to use template instance with default allocator
using Gpgst =
  mrs_modules_msgs::msg::Gpgst_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPGST__STRUCT_HPP_
