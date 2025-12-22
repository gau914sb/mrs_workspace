// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/Gprmc.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gprmc.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPRMC__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPRMC__STRUCT_HPP_

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
// Member 'position_status'
#include "mrs_modules_msgs/msg/detail/gps_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_modules_msgs__msg__Gprmc __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__Gprmc __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gprmc_
{
  using Type = Gprmc_<ContainerAllocator>;

  explicit Gprmc_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position_status(_init)
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
      this->speed = 0.0f;
      this->track = 0.0f;
      this->date = "";
      this->mag_var = 0.0f;
      this->mag_var_direction = "";
      this->mode_indicator = "";
    }
  }

  explicit Gprmc_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    message_id(_alloc),
    position_status(_alloc, _init),
    latitude_dir(_alloc),
    longitude_dir(_alloc),
    date(_alloc),
    mag_var_direction(_alloc),
    mode_indicator(_alloc)
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
      this->speed = 0.0f;
      this->track = 0.0f;
      this->date = "";
      this->mag_var = 0.0f;
      this->mag_var_direction = "";
      this->mode_indicator = "";
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
  using _position_status_type =
    mrs_modules_msgs::msg::GpsStatus_<ContainerAllocator>;
  _position_status_type position_status;
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
  using _speed_type =
    float;
  _speed_type speed;
  using _track_type =
    float;
  _track_type track;
  using _date_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _date_type date;
  using _mag_var_type =
    float;
  _mag_var_type mag_var;
  using _mag_var_direction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mag_var_direction_type mag_var_direction;
  using _mode_indicator_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_indicator_type mode_indicator;

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
  Type & set__position_status(
    const mrs_modules_msgs::msg::GpsStatus_<ContainerAllocator> & _arg)
  {
    this->position_status = _arg;
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
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__track(
    const float & _arg)
  {
    this->track = _arg;
    return *this;
  }
  Type & set__date(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->date = _arg;
    return *this;
  }
  Type & set__mag_var(
    const float & _arg)
  {
    this->mag_var = _arg;
    return *this;
  }
  Type & set__mag_var_direction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mag_var_direction = _arg;
    return *this;
  }
  Type & set__mode_indicator(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode_indicator = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> MODE_INDICATIOR_AUTONOMOUS;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> MODE_INDICATIOR_DIFFERENTIAL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> MODE_INDICATIOR_ESTIMATED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> MODE_INDICATIOR_MANUAL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> MODE_INDICATIOR_DATA_NOT_VALID;

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::Gprmc_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::Gprmc_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::Gprmc_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::Gprmc_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::Gprmc_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::Gprmc_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::Gprmc_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::Gprmc_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::Gprmc_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::Gprmc_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__Gprmc
    std::shared_ptr<mrs_modules_msgs::msg::Gprmc_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__Gprmc
    std::shared_ptr<mrs_modules_msgs::msg::Gprmc_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gprmc_ & other) const
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
    if (this->position_status != other.position_status) {
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
    if (this->speed != other.speed) {
      return false;
    }
    if (this->track != other.track) {
      return false;
    }
    if (this->date != other.date) {
      return false;
    }
    if (this->mag_var != other.mag_var) {
      return false;
    }
    if (this->mag_var_direction != other.mag_var_direction) {
      return false;
    }
    if (this->mode_indicator != other.mode_indicator) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gprmc_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gprmc_

// alias to use template instance with default allocator
using Gprmc =
  mrs_modules_msgs::msg::Gprmc_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Gprmc_<ContainerAllocator>::MODE_INDICATIOR_AUTONOMOUS = "a";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Gprmc_<ContainerAllocator>::MODE_INDICATIOR_DIFFERENTIAL = "d";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Gprmc_<ContainerAllocator>::MODE_INDICATIOR_ESTIMATED = "e";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Gprmc_<ContainerAllocator>::MODE_INDICATIOR_MANUAL = "m";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Gprmc_<ContainerAllocator>::MODE_INDICATIOR_DATA_NOT_VALID = "n";

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPRMC__STRUCT_HPP_
