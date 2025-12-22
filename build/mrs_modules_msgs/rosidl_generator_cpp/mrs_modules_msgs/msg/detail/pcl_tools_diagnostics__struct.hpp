// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/PclToolsDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/pcl_tools_diagnostics.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__PCL_TOOLS_DIAGNOSTICS__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__PCL_TOOLS_DIAGNOSTICS__STRUCT_HPP_

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
# define DEPRECATED__mrs_modules_msgs__msg__PclToolsDiagnostics __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__PclToolsDiagnostics __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PclToolsDiagnostics_
{
  using Type = PclToolsDiagnostics_<ContainerAllocator>;

  explicit PclToolsDiagnostics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_name = "";
      this->sensor_type = 0;
      this->frequency = 0.0f;
      this->vfov = 0.0f;
      this->rows_before = 0;
      this->cols_before = 0;
      this->rows_after = 0;
      this->cols_after = 0;
    }
  }

  explicit PclToolsDiagnostics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    sensor_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_name = "";
      this->sensor_type = 0;
      this->frequency = 0.0f;
      this->vfov = 0.0f;
      this->rows_before = 0;
      this->cols_before = 0;
      this->rows_after = 0;
      this->cols_after = 0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _sensor_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensor_name_type sensor_name;
  using _sensor_type_type =
    uint8_t;
  _sensor_type_type sensor_type;
  using _frequency_type =
    float;
  _frequency_type frequency;
  using _vfov_type =
    float;
  _vfov_type vfov;
  using _rows_before_type =
    uint16_t;
  _rows_before_type rows_before;
  using _cols_before_type =
    uint16_t;
  _cols_before_type cols_before;
  using _rows_after_type =
    uint16_t;
  _rows_after_type rows_after;
  using _cols_after_type =
    uint16_t;
  _cols_after_type cols_after;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__sensor_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensor_name = _arg;
    return *this;
  }
  Type & set__sensor_type(
    const uint8_t & _arg)
  {
    this->sensor_type = _arg;
    return *this;
  }
  Type & set__frequency(
    const float & _arg)
  {
    this->frequency = _arg;
    return *this;
  }
  Type & set__vfov(
    const float & _arg)
  {
    this->vfov = _arg;
    return *this;
  }
  Type & set__rows_before(
    const uint16_t & _arg)
  {
    this->rows_before = _arg;
    return *this;
  }
  Type & set__cols_before(
    const uint16_t & _arg)
  {
    this->cols_before = _arg;
    return *this;
  }
  Type & set__rows_after(
    const uint16_t & _arg)
  {
    this->rows_after = _arg;
    return *this;
  }
  Type & set__cols_after(
    const uint16_t & _arg)
  {
    this->cols_after = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t SENSOR_TYPE_NONE =
    -1;
  static constexpr int8_t SENSOR_TYPE_LIDAR_3D =
    0;
  static constexpr int8_t SENSOR_TYPE_DEPTH_CAMERA =
    1;

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::PclToolsDiagnostics_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::PclToolsDiagnostics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::PclToolsDiagnostics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::PclToolsDiagnostics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::PclToolsDiagnostics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::PclToolsDiagnostics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::PclToolsDiagnostics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::PclToolsDiagnostics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::PclToolsDiagnostics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::PclToolsDiagnostics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__PclToolsDiagnostics
    std::shared_ptr<mrs_modules_msgs::msg::PclToolsDiagnostics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__PclToolsDiagnostics
    std::shared_ptr<mrs_modules_msgs::msg::PclToolsDiagnostics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PclToolsDiagnostics_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->sensor_name != other.sensor_name) {
      return false;
    }
    if (this->sensor_type != other.sensor_type) {
      return false;
    }
    if (this->frequency != other.frequency) {
      return false;
    }
    if (this->vfov != other.vfov) {
      return false;
    }
    if (this->rows_before != other.rows_before) {
      return false;
    }
    if (this->cols_before != other.cols_before) {
      return false;
    }
    if (this->rows_after != other.rows_after) {
      return false;
    }
    if (this->cols_after != other.cols_after) {
      return false;
    }
    return true;
  }
  bool operator!=(const PclToolsDiagnostics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PclToolsDiagnostics_

// alias to use template instance with default allocator
using PclToolsDiagnostics =
  mrs_modules_msgs::msg::PclToolsDiagnostics_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PclToolsDiagnostics_<ContainerAllocator>::SENSOR_TYPE_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PclToolsDiagnostics_<ContainerAllocator>::SENSOR_TYPE_LIDAR_3D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PclToolsDiagnostics_<ContainerAllocator>::SENSOR_TYPE_DEPTH_CAMERA;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__PCL_TOOLS_DIAGNOSTICS__STRUCT_HPP_
