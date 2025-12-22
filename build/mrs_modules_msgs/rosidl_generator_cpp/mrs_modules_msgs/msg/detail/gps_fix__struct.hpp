// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/GPSFix.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gps_fix.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPS_FIX__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPS_FIX__STRUCT_HPP_

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
// Member 'status'
#include "mrs_modules_msgs/msg/detail/gps_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_modules_msgs__msg__GPSFix __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__GPSFix __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GPSFix_
{
  using Type = GPSFix_<ContainerAllocator>;

  explicit GPSFix_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_satellites_used_in_solution = 0;
      this->num_satellites_tracked = 0;
      this->latitude = 0.0;
      this->longitude = 0.0f;
      this->altitude = 0.0;
      this->track = 0.0;
      this->speed = 0.0;
      this->time = 0.0;
      this->hdop = 0.0f;
      std::fill<typename std::array<double, 9>::iterator, double>(this->position_covariance.begin(), this->position_covariance.end(), 0.0);
      this->position_covariance_type = 0;
    }
  }

  explicit GPSFix_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init),
    position_covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_satellites_used_in_solution = 0;
      this->num_satellites_tracked = 0;
      this->latitude = 0.0;
      this->longitude = 0.0f;
      this->altitude = 0.0;
      this->track = 0.0;
      this->speed = 0.0;
      this->time = 0.0;
      this->hdop = 0.0f;
      std::fill<typename std::array<double, 9>::iterator, double>(this->position_covariance.begin(), this->position_covariance.end(), 0.0);
      this->position_covariance_type = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _num_satellites_used_in_solution_type =
    uint8_t;
  _num_satellites_used_in_solution_type num_satellites_used_in_solution;
  using _num_satellites_tracked_type =
    uint8_t;
  _num_satellites_tracked_type num_satellites_tracked;
  using _status_type =
    mrs_modules_msgs::msg::GpsStatus_<ContainerAllocator>;
  _status_type status;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    float;
  _longitude_type longitude;
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _track_type =
    double;
  _track_type track;
  using _speed_type =
    double;
  _speed_type speed;
  using _time_type =
    double;
  _time_type time;
  using _hdop_type =
    float;
  _hdop_type hdop;
  using _position_covariance_type =
    std::array<double, 9>;
  _position_covariance_type position_covariance;
  using _position_covariance_type_type =
    uint8_t;
  _position_covariance_type_type position_covariance_type;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__num_satellites_used_in_solution(
    const uint8_t & _arg)
  {
    this->num_satellites_used_in_solution = _arg;
    return *this;
  }
  Type & set__num_satellites_tracked(
    const uint8_t & _arg)
  {
    this->num_satellites_tracked = _arg;
    return *this;
  }
  Type & set__status(
    const mrs_modules_msgs::msg::GpsStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const float & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__track(
    const double & _arg)
  {
    this->track = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__hdop(
    const float & _arg)
  {
    this->hdop = _arg;
    return *this;
  }
  Type & set__position_covariance(
    const std::array<double, 9> & _arg)
  {
    this->position_covariance = _arg;
    return *this;
  }
  Type & set__position_covariance_type(
    const uint8_t & _arg)
  {
    this->position_covariance_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t COVARIANCE_TYPE_UNKNOWN =
    0u;
  static constexpr uint8_t COVARIANCE_TYPE_APPROXIMATED =
    1u;
  static constexpr uint8_t COVARIANCE_TYPE_DIAGONAL_KNOWN =
    2u;
  static constexpr uint8_t COVARIANCE_TYPE_KNOWN =
    3u;

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::GPSFix_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::GPSFix_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::GPSFix_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::GPSFix_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::GPSFix_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::GPSFix_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::GPSFix_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::GPSFix_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::GPSFix_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::GPSFix_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__GPSFix
    std::shared_ptr<mrs_modules_msgs::msg::GPSFix_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__GPSFix
    std::shared_ptr<mrs_modules_msgs::msg::GPSFix_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GPSFix_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->num_satellites_used_in_solution != other.num_satellites_used_in_solution) {
      return false;
    }
    if (this->num_satellites_tracked != other.num_satellites_tracked) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->track != other.track) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->hdop != other.hdop) {
      return false;
    }
    if (this->position_covariance != other.position_covariance) {
      return false;
    }
    if (this->position_covariance_type != other.position_covariance_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const GPSFix_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GPSFix_

// alias to use template instance with default allocator
using GPSFix =
  mrs_modules_msgs::msg::GPSFix_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GPSFix_<ContainerAllocator>::COVARIANCE_TYPE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GPSFix_<ContainerAllocator>::COVARIANCE_TYPE_APPROXIMATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GPSFix_<ContainerAllocator>::COVARIANCE_TYPE_DIAGONAL_KNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GPSFix_<ContainerAllocator>::COVARIANCE_TYPE_KNOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPS_FIX__STRUCT_HPP_
