// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/ObstacleSectors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/obstacle_sectors.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__OBSTACLE_SECTORS__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__OBSTACLE_SECTORS__STRUCT_HPP_

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
# define DEPRECATED__mrs_msgs__msg__ObstacleSectors __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__ObstacleSectors __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleSectors_
{
  using Type = ObstacleSectors_<ContainerAllocator>;

  explicit ObstacleSectors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n_horizontal_sectors = 0ul;
      this->sectors_vertical_fov = 0.0;
    }
  }

  explicit ObstacleSectors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n_horizontal_sectors = 0ul;
      this->sectors_vertical_fov = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _n_horizontal_sectors_type =
    uint32_t;
  _n_horizontal_sectors_type n_horizontal_sectors;
  using _sectors_vertical_fov_type =
    double;
  _sectors_vertical_fov_type sectors_vertical_fov;
  using _sectors_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _sectors_type sectors;
  using _sector_sensors_type =
    std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>>;
  _sector_sensors_type sector_sensors;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__n_horizontal_sectors(
    const uint32_t & _arg)
  {
    this->n_horizontal_sectors = _arg;
    return *this;
  }
  Type & set__sectors_vertical_fov(
    const double & _arg)
  {
    this->sectors_vertical_fov = _arg;
    return *this;
  }
  Type & set__sectors(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->sectors = _arg;
    return *this;
  }
  Type & set__sector_sensors(
    const std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> & _arg)
  {
    this->sector_sensors = _arg;
    return *this;
  }

  // constant declarations
  static constexpr double OBSTACLE_NOT_DETECTED =
    -1.0;
  static constexpr double OBSTACLE_NO_DATA =
    -2.0;
  static constexpr int8_t SENSOR_NONE =
    -1;
  static constexpr int8_t SENSOR_DEPTH =
    0;
  static constexpr int8_t SENSOR_LIDAR1D =
    1;
  static constexpr int8_t SENSOR_LIDAR2D =
    2;
  static constexpr int8_t SENSOR_LIDAR3D =
    3;

  // pointer types
  using RawPtr =
    mrs_msgs::msg::ObstacleSectors_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::ObstacleSectors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::ObstacleSectors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::ObstacleSectors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::ObstacleSectors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::ObstacleSectors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::ObstacleSectors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::ObstacleSectors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::ObstacleSectors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::ObstacleSectors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__ObstacleSectors
    std::shared_ptr<mrs_msgs::msg::ObstacleSectors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__ObstacleSectors
    std::shared_ptr<mrs_msgs::msg::ObstacleSectors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleSectors_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->n_horizontal_sectors != other.n_horizontal_sectors) {
      return false;
    }
    if (this->sectors_vertical_fov != other.sectors_vertical_fov) {
      return false;
    }
    if (this->sectors != other.sectors) {
      return false;
    }
    if (this->sector_sensors != other.sector_sensors) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleSectors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleSectors_

// alias to use template instance with default allocator
using ObstacleSectors =
  mrs_msgs::msg::ObstacleSectors_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr double ObstacleSectors_<ContainerAllocator>::OBSTACLE_NOT_DETECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr double ObstacleSectors_<ContainerAllocator>::OBSTACLE_NO_DATA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ObstacleSectors_<ContainerAllocator>::SENSOR_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ObstacleSectors_<ContainerAllocator>::SENSOR_DEPTH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ObstacleSectors_<ContainerAllocator>::SENSOR_LIDAR1D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ObstacleSectors_<ContainerAllocator>::SENSOR_LIDAR2D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ObstacleSectors_<ContainerAllocator>::SENSOR_LIDAR3D;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__OBSTACLE_SECTORS__STRUCT_HPP_
