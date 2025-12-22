// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/SensorInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/sensor_info.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__SENSOR_INFO__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__SENSOR_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrs_modules_msgs__msg__SensorInfo __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__SensorInfo __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorInfo_
{
  using Type = SensorInfo_<ContainerAllocator>;

  explicit SensorInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->topic = "";
      this->type = 0;
      this->expected_rate = 0.0f;
    }
  }

  explicit SensorInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    topic(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->topic = "";
      this->type = 0;
      this->expected_rate = 0.0f;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_type topic;
  using _type_type =
    uint8_t;
  _type_type type;
  using _expected_rate_type =
    float;
  _expected_rate_type expected_rate;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__topic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->topic = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__expected_rate(
    const float & _arg)
  {
    this->expected_rate = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SENSOR_TYPE_UNKNOWN =
    0u;
  static constexpr uint8_t SENSOR_TYPE_CAMERA =
    1u;
  static constexpr uint8_t SENSOR_TYPE_LIDAR_1D =
    2u;
  static constexpr uint8_t SENSOR_TYPE_LIDAR_2D =
    3u;
  static constexpr uint8_t ENSOR_TYPE_LIDAR_3D =
    4u;

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::SensorInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::SensorInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::SensorInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::SensorInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::SensorInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::SensorInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::SensorInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::SensorInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::SensorInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::SensorInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__SensorInfo
    std::shared_ptr<mrs_modules_msgs::msg::SensorInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__SensorInfo
    std::shared_ptr<mrs_modules_msgs::msg::SensorInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorInfo_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->topic != other.topic) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->expected_rate != other.expected_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorInfo_

// alias to use template instance with default allocator
using SensorInfo =
  mrs_modules_msgs::msg::SensorInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorInfo_<ContainerAllocator>::SENSOR_TYPE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorInfo_<ContainerAllocator>::SENSOR_TYPE_CAMERA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorInfo_<ContainerAllocator>::SENSOR_TYPE_LIDAR_1D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorInfo_<ContainerAllocator>::SENSOR_TYPE_LIDAR_2D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorInfo_<ContainerAllocator>::ENSOR_TYPE_LIDAR_3D;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__SENSOR_INFO__STRUCT_HPP_
