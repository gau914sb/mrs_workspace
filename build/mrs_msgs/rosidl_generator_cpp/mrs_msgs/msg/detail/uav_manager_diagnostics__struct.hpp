// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/UavManagerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/uav_manager_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__UAV_MANAGER_DIAGNOSTICS__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__UAV_MANAGER_DIAGNOSTICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__UavManagerDiagnostics __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__UavManagerDiagnostics __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UavManagerDiagnostics_
{
  using Type = UavManagerDiagnostics_<ContainerAllocator>;

  explicit UavManagerDiagnostics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uav_name = "";
      this->home_latitude = 0.0;
      this->home_longitude = 0.0;
      this->cur_latitude = 0.0;
      this->cur_longitude = 0.0;
      this->flight_time = 0.0;
      this->state = 0;
    }
  }

  explicit UavManagerDiagnostics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    uav_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uav_name = "";
      this->home_latitude = 0.0;
      this->home_longitude = 0.0;
      this->cur_latitude = 0.0;
      this->cur_longitude = 0.0;
      this->flight_time = 0.0;
      this->state = 0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _uav_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _uav_name_type uav_name;
  using _home_latitude_type =
    double;
  _home_latitude_type home_latitude;
  using _home_longitude_type =
    double;
  _home_longitude_type home_longitude;
  using _cur_latitude_type =
    double;
  _cur_latitude_type cur_latitude;
  using _cur_longitude_type =
    double;
  _cur_longitude_type cur_longitude;
  using _flight_time_type =
    double;
  _flight_time_type flight_time;
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__uav_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->uav_name = _arg;
    return *this;
  }
  Type & set__home_latitude(
    const double & _arg)
  {
    this->home_latitude = _arg;
    return *this;
  }
  Type & set__home_longitude(
    const double & _arg)
  {
    this->home_longitude = _arg;
    return *this;
  }
  Type & set__cur_latitude(
    const double & _arg)
  {
    this->cur_latitude = _arg;
    return *this;
  }
  Type & set__cur_longitude(
    const double & _arg)
  {
    this->cur_longitude = _arg;
    return *this;
  }
  Type & set__flight_time(
    const double & _arg)
  {
    this->flight_time = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATE_INVALID =
    0u;
  static constexpr uint8_t STATE_IDLING =
    1u;
  static constexpr uint8_t STATE_TAKING_OFF =
    2u;
  static constexpr uint8_t STATE_FLYING =
    3u;
  static constexpr uint8_t STATE_LANDING =
    4u;
  static constexpr uint8_t STATE_EMERGENCY =
    5u;

  // pointer types
  using RawPtr =
    mrs_msgs::msg::UavManagerDiagnostics_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::UavManagerDiagnostics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::UavManagerDiagnostics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::UavManagerDiagnostics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::UavManagerDiagnostics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::UavManagerDiagnostics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::UavManagerDiagnostics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::UavManagerDiagnostics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::UavManagerDiagnostics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::UavManagerDiagnostics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__UavManagerDiagnostics
    std::shared_ptr<mrs_msgs::msg::UavManagerDiagnostics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__UavManagerDiagnostics
    std::shared_ptr<mrs_msgs::msg::UavManagerDiagnostics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UavManagerDiagnostics_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->uav_name != other.uav_name) {
      return false;
    }
    if (this->home_latitude != other.home_latitude) {
      return false;
    }
    if (this->home_longitude != other.home_longitude) {
      return false;
    }
    if (this->cur_latitude != other.cur_latitude) {
      return false;
    }
    if (this->cur_longitude != other.cur_longitude) {
      return false;
    }
    if (this->flight_time != other.flight_time) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const UavManagerDiagnostics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UavManagerDiagnostics_

// alias to use template instance with default allocator
using UavManagerDiagnostics =
  mrs_msgs::msg::UavManagerDiagnostics_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UavManagerDiagnostics_<ContainerAllocator>::STATE_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UavManagerDiagnostics_<ContainerAllocator>::STATE_IDLING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UavManagerDiagnostics_<ContainerAllocator>::STATE_TAKING_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UavManagerDiagnostics_<ContainerAllocator>::STATE_FLYING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UavManagerDiagnostics_<ContainerAllocator>::STATE_LANDING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UavManagerDiagnostics_<ContainerAllocator>::STATE_EMERGENCY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__UAV_MANAGER_DIAGNOSTICS__STRUCT_HPP_
