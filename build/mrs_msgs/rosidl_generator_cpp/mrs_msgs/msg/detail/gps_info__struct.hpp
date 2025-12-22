// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/GpsInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gps_info.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__GPS_INFO__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__GPS_INFO__STRUCT_HPP_

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
# define DEPRECATED__mrs_msgs__msg__GpsInfo __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__GpsInfo __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GpsInfo_
{
  using Type = GpsInfo_<ContainerAllocator>;

  explicit GpsInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fix_type = 0;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->eph = 0;
      this->epv = 0;
      this->vel = 0.0f;
      this->cog = 0.0f;
      this->satellites_visible = 0;
      this->alt_ellipsoid = 0.0f;
      this->h_acc = 0.0f;
      this->v_acc = 0.0f;
      this->vel_acc = 0.0f;
      this->hdg_acc = 0.0f;
      this->yaw = 0.0f;
      this->dgps_num_sats = 0;
      this->dgps_age = 0.0f;
      this->baseline_dist = 0.0f;
    }
  }

  explicit GpsInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fix_type = 0;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->eph = 0;
      this->epv = 0;
      this->vel = 0.0f;
      this->cog = 0.0f;
      this->satellites_visible = 0;
      this->alt_ellipsoid = 0.0f;
      this->h_acc = 0.0f;
      this->v_acc = 0.0f;
      this->vel_acc = 0.0f;
      this->hdg_acc = 0.0f;
      this->yaw = 0.0f;
      this->dgps_num_sats = 0;
      this->dgps_age = 0.0f;
      this->baseline_dist = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _fix_type_type =
    uint8_t;
  _fix_type_type fix_type;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _alt_type =
    float;
  _alt_type alt;
  using _eph_type =
    uint16_t;
  _eph_type eph;
  using _epv_type =
    uint16_t;
  _epv_type epv;
  using _vel_type =
    float;
  _vel_type vel;
  using _cog_type =
    float;
  _cog_type cog;
  using _satellites_visible_type =
    uint8_t;
  _satellites_visible_type satellites_visible;
  using _alt_ellipsoid_type =
    float;
  _alt_ellipsoid_type alt_ellipsoid;
  using _h_acc_type =
    float;
  _h_acc_type h_acc;
  using _v_acc_type =
    float;
  _v_acc_type v_acc;
  using _vel_acc_type =
    float;
  _vel_acc_type vel_acc;
  using _hdg_acc_type =
    float;
  _hdg_acc_type hdg_acc;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _dgps_num_sats_type =
    uint8_t;
  _dgps_num_sats_type dgps_num_sats;
  using _dgps_age_type =
    float;
  _dgps_age_type dgps_age;
  using _baseline_dist_type =
    float;
  _baseline_dist_type baseline_dist;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__fix_type(
    const uint8_t & _arg)
  {
    this->fix_type = _arg;
    return *this;
  }
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__alt(
    const float & _arg)
  {
    this->alt = _arg;
    return *this;
  }
  Type & set__eph(
    const uint16_t & _arg)
  {
    this->eph = _arg;
    return *this;
  }
  Type & set__epv(
    const uint16_t & _arg)
  {
    this->epv = _arg;
    return *this;
  }
  Type & set__vel(
    const float & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__cog(
    const float & _arg)
  {
    this->cog = _arg;
    return *this;
  }
  Type & set__satellites_visible(
    const uint8_t & _arg)
  {
    this->satellites_visible = _arg;
    return *this;
  }
  Type & set__alt_ellipsoid(
    const float & _arg)
  {
    this->alt_ellipsoid = _arg;
    return *this;
  }
  Type & set__h_acc(
    const float & _arg)
  {
    this->h_acc = _arg;
    return *this;
  }
  Type & set__v_acc(
    const float & _arg)
  {
    this->v_acc = _arg;
    return *this;
  }
  Type & set__vel_acc(
    const float & _arg)
  {
    this->vel_acc = _arg;
    return *this;
  }
  Type & set__hdg_acc(
    const float & _arg)
  {
    this->hdg_acc = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__dgps_num_sats(
    const uint8_t & _arg)
  {
    this->dgps_num_sats = _arg;
    return *this;
  }
  Type & set__dgps_age(
    const float & _arg)
  {
    this->dgps_age = _arg;
    return *this;
  }
  Type & set__baseline_dist(
    const float & _arg)
  {
    this->baseline_dist = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t GPS_FIX_TYPE_NO_GPS =
    0u;
  static constexpr uint8_t GPS_FIX_TYPE_NO_FIX =
    1u;
  static constexpr uint8_t GPS_FIX_TYPE_2D_FIX =
    2u;
  static constexpr uint8_t GPS_FIX_TYPE_3D_FIX =
    3u;
  static constexpr uint8_t GPS_FIX_TYPE_DGPS =
    4u;
  static constexpr uint8_t GPS_FIX_TYPE_RTK_FLOATR =
    5u;
  static constexpr uint8_t GPS_FIX_TYPE_RTK_FIXEDR =
    6u;
  static constexpr uint8_t GPS_FIX_TYPE_STATIC =
    7u;
  static constexpr uint8_t GPS_FIX_TYPE_PPP =
    8u;

  // pointer types
  using RawPtr =
    mrs_msgs::msg::GpsInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::GpsInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::GpsInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::GpsInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::GpsInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::GpsInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::GpsInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::GpsInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::GpsInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::GpsInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__GpsInfo
    std::shared_ptr<mrs_msgs::msg::GpsInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__GpsInfo
    std::shared_ptr<mrs_msgs::msg::GpsInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpsInfo_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->fix_type != other.fix_type) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->alt != other.alt) {
      return false;
    }
    if (this->eph != other.eph) {
      return false;
    }
    if (this->epv != other.epv) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->cog != other.cog) {
      return false;
    }
    if (this->satellites_visible != other.satellites_visible) {
      return false;
    }
    if (this->alt_ellipsoid != other.alt_ellipsoid) {
      return false;
    }
    if (this->h_acc != other.h_acc) {
      return false;
    }
    if (this->v_acc != other.v_acc) {
      return false;
    }
    if (this->vel_acc != other.vel_acc) {
      return false;
    }
    if (this->hdg_acc != other.hdg_acc) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->dgps_num_sats != other.dgps_num_sats) {
      return false;
    }
    if (this->dgps_age != other.dgps_age) {
      return false;
    }
    if (this->baseline_dist != other.baseline_dist) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpsInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpsInfo_

// alias to use template instance with default allocator
using GpsInfo =
  mrs_msgs::msg::GpsInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GpsInfo_<ContainerAllocator>::GPS_FIX_TYPE_NO_GPS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GpsInfo_<ContainerAllocator>::GPS_FIX_TYPE_NO_FIX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GpsInfo_<ContainerAllocator>::GPS_FIX_TYPE_2D_FIX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GpsInfo_<ContainerAllocator>::GPS_FIX_TYPE_3D_FIX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GpsInfo_<ContainerAllocator>::GPS_FIX_TYPE_DGPS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GpsInfo_<ContainerAllocator>::GPS_FIX_TYPE_RTK_FLOATR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GpsInfo_<ContainerAllocator>::GPS_FIX_TYPE_RTK_FIXEDR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GpsInfo_<ContainerAllocator>::GPS_FIX_TYPE_STATIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GpsInfo_<ContainerAllocator>::GPS_FIX_TYPE_PPP;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__GPS_INFO__STRUCT_HPP_
