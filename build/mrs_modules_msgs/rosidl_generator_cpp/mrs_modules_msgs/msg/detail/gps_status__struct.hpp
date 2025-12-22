// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/GpsStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gps_status.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPS_STATUS__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPS_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrs_modules_msgs__msg__GpsStatus __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__GpsStatus __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GpsStatus_
{
  using Type = GpsStatus_<ContainerAllocator>;

  explicit GpsStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->quality = 0ul;
    }
  }

  explicit GpsStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->quality = 0ul;
    }
  }

  // field types and members
  using _quality_type =
    uint32_t;
  _quality_type quality;

  // setters for named parameter idiom
  Type & set__quality(
    const uint32_t & _arg)
  {
    this->quality = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t GPS_QUALITY_NO_FIX =
    0u;
  static constexpr uint32_t GPS_QUALITY_SIGLE_POINT =
    1u;
  static constexpr uint32_t GPS_QUALITY_PSEUDORANGE_DIFFERENTIAL =
    2u;
  static constexpr uint32_t GPS_QUALITY_RTK_FIX =
    4u;
  static constexpr uint32_t GPS_QUALITY_RTK_FLOAT =
    5u;

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::GpsStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::GpsStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::GpsStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::GpsStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::GpsStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::GpsStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::GpsStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::GpsStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::GpsStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::GpsStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__GpsStatus
    std::shared_ptr<mrs_modules_msgs::msg::GpsStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__GpsStatus
    std::shared_ptr<mrs_modules_msgs::msg::GpsStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpsStatus_ & other) const
  {
    if (this->quality != other.quality) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpsStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpsStatus_

// alias to use template instance with default allocator
using GpsStatus =
  mrs_modules_msgs::msg::GpsStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GpsStatus_<ContainerAllocator>::GPS_QUALITY_NO_FIX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GpsStatus_<ContainerAllocator>::GPS_QUALITY_SIGLE_POINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GpsStatus_<ContainerAllocator>::GPS_QUALITY_PSEUDORANGE_DIFFERENTIAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GpsStatus_<ContainerAllocator>::GPS_QUALITY_RTK_FIX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GpsStatus_<ContainerAllocator>::GPS_QUALITY_RTK_FLOAT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPS_STATUS__STRUCT_HPP_
