// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/Bestpos.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/bestpos.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__BESTPOS__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__BESTPOS__STRUCT_HPP_

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
# define DEPRECATED__mrs_modules_msgs__msg__Bestpos __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__Bestpos __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Bestpos_
{
  using Type = Bestpos_<ContainerAllocator>;

  explicit Bestpos_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    tersus_msg_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->solution_status = "";
      this->position_type = "";
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->height = 0.0;
      this->undulation = 0.0f;
      this->datum_id = "";
      this->latitude_std = 0.0f;
      this->longitude_std = 0.0f;
      this->height_std = 0.0f;
      this->base_station_id = "";
      this->diff_age = 0.0f;
      this->solution_age = 0.0f;
      this->num_satellites_tracked = 0;
      this->num_satellites_used_in_solution = 0;
      this->num_gps_and_glonass_l1_used_in_solution = 0;
      this->num_gps_and_glonass_l1_and_l2_used_in_solution = 0;
    }
  }

  explicit Bestpos_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    tersus_msg_header(_alloc, _init),
    solution_status(_alloc),
    position_type(_alloc),
    datum_id(_alloc),
    base_station_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->solution_status = "";
      this->position_type = "";
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->height = 0.0;
      this->undulation = 0.0f;
      this->datum_id = "";
      this->latitude_std = 0.0f;
      this->longitude_std = 0.0f;
      this->height_std = 0.0f;
      this->base_station_id = "";
      this->diff_age = 0.0f;
      this->solution_age = 0.0f;
      this->num_satellites_tracked = 0;
      this->num_satellites_used_in_solution = 0;
      this->num_gps_and_glonass_l1_used_in_solution = 0;
      this->num_gps_and_glonass_l1_and_l2_used_in_solution = 0;
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
  using _position_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _position_type_type position_type;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _height_type =
    double;
  _height_type height;
  using _undulation_type =
    float;
  _undulation_type undulation;
  using _datum_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _datum_id_type datum_id;
  using _latitude_std_type =
    float;
  _latitude_std_type latitude_std;
  using _longitude_std_type =
    float;
  _longitude_std_type longitude_std;
  using _height_std_type =
    float;
  _height_std_type height_std;
  using _base_station_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _base_station_id_type base_station_id;
  using _diff_age_type =
    float;
  _diff_age_type diff_age;
  using _solution_age_type =
    float;
  _solution_age_type solution_age;
  using _num_satellites_tracked_type =
    uint8_t;
  _num_satellites_tracked_type num_satellites_tracked;
  using _num_satellites_used_in_solution_type =
    uint8_t;
  _num_satellites_used_in_solution_type num_satellites_used_in_solution;
  using _num_gps_and_glonass_l1_used_in_solution_type =
    uint8_t;
  _num_gps_and_glonass_l1_used_in_solution_type num_gps_and_glonass_l1_used_in_solution;
  using _num_gps_and_glonass_l1_and_l2_used_in_solution_type =
    uint8_t;
  _num_gps_and_glonass_l1_and_l2_used_in_solution_type num_gps_and_glonass_l1_and_l2_used_in_solution;

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
  Type & set__position_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->position_type = _arg;
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
  Type & set__height(
    const double & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__undulation(
    const float & _arg)
  {
    this->undulation = _arg;
    return *this;
  }
  Type & set__datum_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->datum_id = _arg;
    return *this;
  }
  Type & set__latitude_std(
    const float & _arg)
  {
    this->latitude_std = _arg;
    return *this;
  }
  Type & set__longitude_std(
    const float & _arg)
  {
    this->longitude_std = _arg;
    return *this;
  }
  Type & set__height_std(
    const float & _arg)
  {
    this->height_std = _arg;
    return *this;
  }
  Type & set__base_station_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->base_station_id = _arg;
    return *this;
  }
  Type & set__diff_age(
    const float & _arg)
  {
    this->diff_age = _arg;
    return *this;
  }
  Type & set__solution_age(
    const float & _arg)
  {
    this->solution_age = _arg;
    return *this;
  }
  Type & set__num_satellites_tracked(
    const uint8_t & _arg)
  {
    this->num_satellites_tracked = _arg;
    return *this;
  }
  Type & set__num_satellites_used_in_solution(
    const uint8_t & _arg)
  {
    this->num_satellites_used_in_solution = _arg;
    return *this;
  }
  Type & set__num_gps_and_glonass_l1_used_in_solution(
    const uint8_t & _arg)
  {
    this->num_gps_and_glonass_l1_used_in_solution = _arg;
    return *this;
  }
  Type & set__num_gps_and_glonass_l1_and_l2_used_in_solution(
    const uint8_t & _arg)
  {
    this->num_gps_and_glonass_l1_and_l2_used_in_solution = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::Bestpos_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::Bestpos_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::Bestpos_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::Bestpos_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::Bestpos_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::Bestpos_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::Bestpos_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::Bestpos_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::Bestpos_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::Bestpos_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__Bestpos
    std::shared_ptr<mrs_modules_msgs::msg::Bestpos_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__Bestpos
    std::shared_ptr<mrs_modules_msgs::msg::Bestpos_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Bestpos_ & other) const
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
    if (this->position_type != other.position_type) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->undulation != other.undulation) {
      return false;
    }
    if (this->datum_id != other.datum_id) {
      return false;
    }
    if (this->latitude_std != other.latitude_std) {
      return false;
    }
    if (this->longitude_std != other.longitude_std) {
      return false;
    }
    if (this->height_std != other.height_std) {
      return false;
    }
    if (this->base_station_id != other.base_station_id) {
      return false;
    }
    if (this->diff_age != other.diff_age) {
      return false;
    }
    if (this->solution_age != other.solution_age) {
      return false;
    }
    if (this->num_satellites_tracked != other.num_satellites_tracked) {
      return false;
    }
    if (this->num_satellites_used_in_solution != other.num_satellites_used_in_solution) {
      return false;
    }
    if (this->num_gps_and_glonass_l1_used_in_solution != other.num_gps_and_glonass_l1_used_in_solution) {
      return false;
    }
    if (this->num_gps_and_glonass_l1_and_l2_used_in_solution != other.num_gps_and_glonass_l1_and_l2_used_in_solution) {
      return false;
    }
    return true;
  }
  bool operator!=(const Bestpos_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Bestpos_

// alias to use template instance with default allocator
using Bestpos =
  mrs_modules_msgs::msg::Bestpos_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__BESTPOS__STRUCT_HPP_
