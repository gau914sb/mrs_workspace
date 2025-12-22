// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/RtkGps.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/rtk_gps.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__RTK_GPS__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__RTK_GPS__STRUCT_HPP_

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
// Member 'gps'
#include "mrs_msgs/msg/detail/gps_data__struct.hpp"
// Member 'status'
#include "sensor_msgs/msg/detail/nav_sat_status__struct.hpp"
// Member 'fix_type'
#include "mrs_msgs/msg/detail/rtk_fix_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__RtkGps __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__RtkGps __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RtkGps_
{
  using Type = RtkGps_<ContainerAllocator>;

  explicit RtkGps_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    gps(_init),
    status(_init),
    fix_type(_init)
  {
    (void)_init;
  }

  explicit RtkGps_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    gps(_alloc, _init),
    status(_alloc, _init),
    fix_type(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _gps_type =
    mrs_msgs::msg::GpsData_<ContainerAllocator>;
  _gps_type gps;
  using _status_type =
    sensor_msgs::msg::NavSatStatus_<ContainerAllocator>;
  _status_type status;
  using _fix_type_type =
    mrs_msgs::msg::RtkFixType_<ContainerAllocator>;
  _fix_type_type fix_type;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__gps(
    const mrs_msgs::msg::GpsData_<ContainerAllocator> & _arg)
  {
    this->gps = _arg;
    return *this;
  }
  Type & set__status(
    const sensor_msgs::msg::NavSatStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__fix_type(
    const mrs_msgs::msg::RtkFixType_<ContainerAllocator> & _arg)
  {
    this->fix_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::RtkGps_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::RtkGps_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::RtkGps_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::RtkGps_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::RtkGps_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::RtkGps_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::RtkGps_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::RtkGps_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::RtkGps_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::RtkGps_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__RtkGps
    std::shared_ptr<mrs_msgs::msg::RtkGps_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__RtkGps
    std::shared_ptr<mrs_msgs::msg::RtkGps_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RtkGps_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->gps != other.gps) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->fix_type != other.fix_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const RtkGps_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RtkGps_

// alias to use template instance with default allocator
using RtkGps =
  mrs_msgs::msg::RtkGps_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__RTK_GPS__STRUCT_HPP_
