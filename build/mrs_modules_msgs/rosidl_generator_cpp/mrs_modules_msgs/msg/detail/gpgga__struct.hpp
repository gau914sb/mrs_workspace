// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/Gpgga.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gpgga.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPGGA__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPGGA__STRUCT_HPP_

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
// Member 'gps_quality'
#include "mrs_modules_msgs/msg/detail/gps_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_modules_msgs__msg__Gpgga __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__Gpgga __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gpgga_
{
  using Type = Gpgga_<ContainerAllocator>;

  explicit Gpgga_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    gps_quality(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->utc_seconds = 0.0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->latitude_dir = "";
      this->longitude_dir = "";
      this->num_sats = 0ul;
      this->hdop = 0.0f;
      this->altitude = 0.0f;
      this->altitude_units = "";
      this->undulation = 0.0f;
      this->undulation_units = "";
      this->diff_age = 0ul;
      this->station_id = "";
    }
  }

  explicit Gpgga_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    message_id(_alloc),
    latitude_dir(_alloc),
    longitude_dir(_alloc),
    gps_quality(_alloc, _init),
    altitude_units(_alloc),
    undulation_units(_alloc),
    station_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->utc_seconds = 0.0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->latitude_dir = "";
      this->longitude_dir = "";
      this->num_sats = 0ul;
      this->hdop = 0.0f;
      this->altitude = 0.0f;
      this->altitude_units = "";
      this->undulation = 0.0f;
      this->undulation_units = "";
      this->diff_age = 0ul;
      this->station_id = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _message_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_id_type message_id;
  using _utc_seconds_type =
    double;
  _utc_seconds_type utc_seconds;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _latitude_dir_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _latitude_dir_type latitude_dir;
  using _longitude_dir_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _longitude_dir_type longitude_dir;
  using _gps_quality_type =
    mrs_modules_msgs::msg::GpsStatus_<ContainerAllocator>;
  _gps_quality_type gps_quality;
  using _num_sats_type =
    uint32_t;
  _num_sats_type num_sats;
  using _hdop_type =
    float;
  _hdop_type hdop;
  using _altitude_type =
    float;
  _altitude_type altitude;
  using _altitude_units_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _altitude_units_type altitude_units;
  using _undulation_type =
    float;
  _undulation_type undulation;
  using _undulation_units_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _undulation_units_type undulation_units;
  using _diff_age_type =
    uint32_t;
  _diff_age_type diff_age;
  using _station_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _station_id_type station_id;

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
  Type & set__utc_seconds(
    const double & _arg)
  {
    this->utc_seconds = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__latitude_dir(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->latitude_dir = _arg;
    return *this;
  }
  Type & set__longitude_dir(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->longitude_dir = _arg;
    return *this;
  }
  Type & set__gps_quality(
    const mrs_modules_msgs::msg::GpsStatus_<ContainerAllocator> & _arg)
  {
    this->gps_quality = _arg;
    return *this;
  }
  Type & set__num_sats(
    const uint32_t & _arg)
  {
    this->num_sats = _arg;
    return *this;
  }
  Type & set__hdop(
    const float & _arg)
  {
    this->hdop = _arg;
    return *this;
  }
  Type & set__altitude(
    const float & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__altitude_units(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->altitude_units = _arg;
    return *this;
  }
  Type & set__undulation(
    const float & _arg)
  {
    this->undulation = _arg;
    return *this;
  }
  Type & set__undulation_units(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->undulation_units = _arg;
    return *this;
  }
  Type & set__diff_age(
    const uint32_t & _arg)
  {
    this->diff_age = _arg;
    return *this;
  }
  Type & set__station_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->station_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::Gpgga_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::Gpgga_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::Gpgga_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::Gpgga_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::Gpgga_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::Gpgga_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::Gpgga_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::Gpgga_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::Gpgga_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::Gpgga_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__Gpgga
    std::shared_ptr<mrs_modules_msgs::msg::Gpgga_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__Gpgga
    std::shared_ptr<mrs_modules_msgs::msg::Gpgga_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gpgga_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->message_id != other.message_id) {
      return false;
    }
    if (this->utc_seconds != other.utc_seconds) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->latitude_dir != other.latitude_dir) {
      return false;
    }
    if (this->longitude_dir != other.longitude_dir) {
      return false;
    }
    if (this->gps_quality != other.gps_quality) {
      return false;
    }
    if (this->num_sats != other.num_sats) {
      return false;
    }
    if (this->hdop != other.hdop) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->altitude_units != other.altitude_units) {
      return false;
    }
    if (this->undulation != other.undulation) {
      return false;
    }
    if (this->undulation_units != other.undulation_units) {
      return false;
    }
    if (this->diff_age != other.diff_age) {
      return false;
    }
    if (this->station_id != other.station_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gpgga_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gpgga_

// alias to use template instance with default allocator
using Gpgga =
  mrs_modules_msgs::msg::Gpgga_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPGGA__STRUCT_HPP_
