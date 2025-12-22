// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/Gpvtg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gpvtg.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPVTG__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPVTG__STRUCT_HPP_

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
# define DEPRECATED__mrs_modules_msgs__msg__Gpvtg __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__Gpvtg __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gpvtg_
{
  using Type = Gpvtg_<ContainerAllocator>;

  explicit Gpvtg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->track_true = 0.0;
      this->track_true_indicator = "";
      this->track_mag = 0.0;
      this->track_mag_indicator = "";
      this->speed_knots = 0.0;
      this->speed_knots_indicator = "";
      this->speed_kmh = 0.0;
      this->speed_kmh_indicator = "";
      this->mode_indicator = "";
    }
  }

  explicit Gpvtg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    message_id(_alloc),
    track_true_indicator(_alloc),
    track_mag_indicator(_alloc),
    speed_knots_indicator(_alloc),
    speed_kmh_indicator(_alloc),
    mode_indicator(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->track_true = 0.0;
      this->track_true_indicator = "";
      this->track_mag = 0.0;
      this->track_mag_indicator = "";
      this->speed_knots = 0.0;
      this->speed_knots_indicator = "";
      this->speed_kmh = 0.0;
      this->speed_kmh_indicator = "";
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
  using _track_true_type =
    double;
  _track_true_type track_true;
  using _track_true_indicator_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _track_true_indicator_type track_true_indicator;
  using _track_mag_type =
    double;
  _track_mag_type track_mag;
  using _track_mag_indicator_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _track_mag_indicator_type track_mag_indicator;
  using _speed_knots_type =
    double;
  _speed_knots_type speed_knots;
  using _speed_knots_indicator_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _speed_knots_indicator_type speed_knots_indicator;
  using _speed_kmh_type =
    double;
  _speed_kmh_type speed_kmh;
  using _speed_kmh_indicator_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _speed_kmh_indicator_type speed_kmh_indicator;
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
  Type & set__track_true(
    const double & _arg)
  {
    this->track_true = _arg;
    return *this;
  }
  Type & set__track_true_indicator(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->track_true_indicator = _arg;
    return *this;
  }
  Type & set__track_mag(
    const double & _arg)
  {
    this->track_mag = _arg;
    return *this;
  }
  Type & set__track_mag_indicator(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->track_mag_indicator = _arg;
    return *this;
  }
  Type & set__speed_knots(
    const double & _arg)
  {
    this->speed_knots = _arg;
    return *this;
  }
  Type & set__speed_knots_indicator(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->speed_knots_indicator = _arg;
    return *this;
  }
  Type & set__speed_kmh(
    const double & _arg)
  {
    this->speed_kmh = _arg;
    return *this;
  }
  Type & set__speed_kmh_indicator(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->speed_kmh_indicator = _arg;
    return *this;
  }
  Type & set__mode_indicator(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode_indicator = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::Gpvtg_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::Gpvtg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::Gpvtg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::Gpvtg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::Gpvtg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::Gpvtg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::Gpvtg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::Gpvtg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::Gpvtg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::Gpvtg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__Gpvtg
    std::shared_ptr<mrs_modules_msgs::msg::Gpvtg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__Gpvtg
    std::shared_ptr<mrs_modules_msgs::msg::Gpvtg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gpvtg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->message_id != other.message_id) {
      return false;
    }
    if (this->track_true != other.track_true) {
      return false;
    }
    if (this->track_true_indicator != other.track_true_indicator) {
      return false;
    }
    if (this->track_mag != other.track_mag) {
      return false;
    }
    if (this->track_mag_indicator != other.track_mag_indicator) {
      return false;
    }
    if (this->speed_knots != other.speed_knots) {
      return false;
    }
    if (this->speed_knots_indicator != other.speed_knots_indicator) {
      return false;
    }
    if (this->speed_kmh != other.speed_kmh) {
      return false;
    }
    if (this->speed_kmh_indicator != other.speed_kmh_indicator) {
      return false;
    }
    if (this->mode_indicator != other.mode_indicator) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gpvtg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gpvtg_

// alias to use template instance with default allocator
using Gpvtg =
  mrs_modules_msgs::msg::Gpvtg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPVTG__STRUCT_HPP_
