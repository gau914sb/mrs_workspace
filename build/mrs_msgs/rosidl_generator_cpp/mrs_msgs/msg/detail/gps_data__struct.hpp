// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/GpsData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gps_data.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__GPS_DATA__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__GPS_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__GpsData __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__GpsData __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GpsData_
{
  using Type = GpsData_<ContainerAllocator>;

  explicit GpsData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->altitude = 0.0;
      std::fill<typename std::array<double, 9>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  explicit GpsData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->altitude = 0.0;
      std::fill<typename std::array<double, 9>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  // field types and members
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _covariance_type =
    std::array<double, 9>;
  _covariance_type covariance;

  // setters for named parameter idiom
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
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__covariance(
    const std::array<double, 9> & _arg)
  {
    this->covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::GpsData_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::GpsData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::GpsData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::GpsData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::GpsData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::GpsData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::GpsData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::GpsData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::GpsData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::GpsData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__GpsData
    std::shared_ptr<mrs_msgs::msg::GpsData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__GpsData
    std::shared_ptr<mrs_msgs::msg::GpsData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpsData_ & other) const
  {
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpsData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpsData_

// alias to use template instance with default allocator
using GpsData =
  mrs_msgs::msg::GpsData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__GPS_DATA__STRUCT_HPP_
