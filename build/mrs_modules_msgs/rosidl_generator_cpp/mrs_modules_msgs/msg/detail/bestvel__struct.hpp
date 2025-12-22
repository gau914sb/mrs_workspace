// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/Bestvel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/bestvel.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__BESTVEL__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__BESTVEL__STRUCT_HPP_

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
// Member 'tersus_msg_header'
#include "mrs_modules_msgs/msg/detail/tersus_message_header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_modules_msgs__msg__Bestvel __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__Bestvel __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Bestvel_
{
  using Type = Bestvel_<ContainerAllocator>;

  explicit Bestvel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    tersus_msg_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->solution_status = "";
      this->velocity_type = "";
      this->latency = 0.0f;
      this->age = 0.0f;
      this->horizontal_speed = 0.0;
      this->track_ground = 0.0;
      this->vertical_speed = 0.0;
    }
  }

  explicit Bestvel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    tersus_msg_header(_alloc, _init),
    solution_status(_alloc),
    velocity_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->solution_status = "";
      this->velocity_type = "";
      this->latency = 0.0f;
      this->age = 0.0f;
      this->horizontal_speed = 0.0;
      this->track_ground = 0.0;
      this->vertical_speed = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tersus_msg_header_type =
    mrs_modules_msgs::msg::TersusMessageHeader_<ContainerAllocator>;
  _tersus_msg_header_type tersus_msg_header;
  using _solution_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _solution_status_type solution_status;
  using _velocity_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _velocity_type_type velocity_type;
  using _latency_type =
    float;
  _latency_type latency;
  using _age_type =
    float;
  _age_type age;
  using _horizontal_speed_type =
    double;
  _horizontal_speed_type horizontal_speed;
  using _track_ground_type =
    double;
  _track_ground_type track_ground;
  using _vertical_speed_type =
    double;
  _vertical_speed_type vertical_speed;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tersus_msg_header(
    const mrs_modules_msgs::msg::TersusMessageHeader_<ContainerAllocator> & _arg)
  {
    this->tersus_msg_header = _arg;
    return *this;
  }
  Type & set__solution_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->solution_status = _arg;
    return *this;
  }
  Type & set__velocity_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->velocity_type = _arg;
    return *this;
  }
  Type & set__latency(
    const float & _arg)
  {
    this->latency = _arg;
    return *this;
  }
  Type & set__age(
    const float & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__horizontal_speed(
    const double & _arg)
  {
    this->horizontal_speed = _arg;
    return *this;
  }
  Type & set__track_ground(
    const double & _arg)
  {
    this->track_ground = _arg;
    return *this;
  }
  Type & set__vertical_speed(
    const double & _arg)
  {
    this->vertical_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::Bestvel_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::Bestvel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::Bestvel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::Bestvel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::Bestvel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::Bestvel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::Bestvel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::Bestvel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::Bestvel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::Bestvel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__Bestvel
    std::shared_ptr<mrs_modules_msgs::msg::Bestvel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__Bestvel
    std::shared_ptr<mrs_modules_msgs::msg::Bestvel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Bestvel_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tersus_msg_header != other.tersus_msg_header) {
      return false;
    }
    if (this->solution_status != other.solution_status) {
      return false;
    }
    if (this->velocity_type != other.velocity_type) {
      return false;
    }
    if (this->latency != other.latency) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->horizontal_speed != other.horizontal_speed) {
      return false;
    }
    if (this->track_ground != other.track_ground) {
      return false;
    }
    if (this->vertical_speed != other.vertical_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const Bestvel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Bestvel_

// alias to use template instance with default allocator
using Bestvel =
  mrs_modules_msgs::msg::Bestvel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__BESTVEL__STRUCT_HPP_
