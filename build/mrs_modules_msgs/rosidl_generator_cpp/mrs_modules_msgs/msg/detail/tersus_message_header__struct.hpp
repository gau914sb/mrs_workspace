// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/TersusMessageHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/tersus_message_header.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__TERSUS_MESSAGE_HEADER__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__TERSUS_MESSAGE_HEADER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrs_modules_msgs__msg__TersusMessageHeader __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__TersusMessageHeader __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TersusMessageHeader_
{
  using Type = TersusMessageHeader_<ContainerAllocator>;

  explicit TersusMessageHeader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_name = "";
      this->port_address = "";
      this->sequence = 0;
      this->idle_time = 0.0f;
      this->time_status = "";
      this->gps_week = 0;
      this->gps_week_seconds = 0.0f;
      this->receiver_status = 0ul;
      this->software_version = 0;
    }
  }

  explicit TersusMessageHeader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message_name(_alloc),
    port_address(_alloc),
    time_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_name = "";
      this->port_address = "";
      this->sequence = 0;
      this->idle_time = 0.0f;
      this->time_status = "";
      this->gps_week = 0;
      this->gps_week_seconds = 0.0f;
      this->receiver_status = 0ul;
      this->software_version = 0;
    }
  }

  // field types and members
  using _message_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_name_type message_name;
  using _port_address_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _port_address_type port_address;
  using _sequence_type =
    uint16_t;
  _sequence_type sequence;
  using _idle_time_type =
    float;
  _idle_time_type idle_time;
  using _time_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _time_status_type time_status;
  using _gps_week_type =
    uint16_t;
  _gps_week_type gps_week;
  using _gps_week_seconds_type =
    float;
  _gps_week_seconds_type gps_week_seconds;
  using _receiver_status_type =
    uint32_t;
  _receiver_status_type receiver_status;
  using _software_version_type =
    uint16_t;
  _software_version_type software_version;

  // setters for named parameter idiom
  Type & set__message_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message_name = _arg;
    return *this;
  }
  Type & set__port_address(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->port_address = _arg;
    return *this;
  }
  Type & set__sequence(
    const uint16_t & _arg)
  {
    this->sequence = _arg;
    return *this;
  }
  Type & set__idle_time(
    const float & _arg)
  {
    this->idle_time = _arg;
    return *this;
  }
  Type & set__time_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->time_status = _arg;
    return *this;
  }
  Type & set__gps_week(
    const uint16_t & _arg)
  {
    this->gps_week = _arg;
    return *this;
  }
  Type & set__gps_week_seconds(
    const float & _arg)
  {
    this->gps_week_seconds = _arg;
    return *this;
  }
  Type & set__receiver_status(
    const uint32_t & _arg)
  {
    this->receiver_status = _arg;
    return *this;
  }
  Type & set__software_version(
    const uint16_t & _arg)
  {
    this->software_version = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::TersusMessageHeader_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::TersusMessageHeader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::TersusMessageHeader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::TersusMessageHeader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::TersusMessageHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::TersusMessageHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::TersusMessageHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::TersusMessageHeader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::TersusMessageHeader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::TersusMessageHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__TersusMessageHeader
    std::shared_ptr<mrs_modules_msgs::msg::TersusMessageHeader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__TersusMessageHeader
    std::shared_ptr<mrs_modules_msgs::msg::TersusMessageHeader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TersusMessageHeader_ & other) const
  {
    if (this->message_name != other.message_name) {
      return false;
    }
    if (this->port_address != other.port_address) {
      return false;
    }
    if (this->sequence != other.sequence) {
      return false;
    }
    if (this->idle_time != other.idle_time) {
      return false;
    }
    if (this->time_status != other.time_status) {
      return false;
    }
    if (this->gps_week != other.gps_week) {
      return false;
    }
    if (this->gps_week_seconds != other.gps_week_seconds) {
      return false;
    }
    if (this->receiver_status != other.receiver_status) {
      return false;
    }
    if (this->software_version != other.software_version) {
      return false;
    }
    return true;
  }
  bool operator!=(const TersusMessageHeader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TersusMessageHeader_

// alias to use template instance with default allocator
using TersusMessageHeader =
  mrs_modules_msgs::msg::TersusMessageHeader_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__TERSUS_MESSAGE_HEADER__STRUCT_HPP_
