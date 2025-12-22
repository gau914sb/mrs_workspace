// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/RtkFixType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/rtk_fix_type.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__RTK_FIX_TYPE__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__RTK_FIX_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__RtkFixType __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__RtkFixType __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RtkFixType_
{
  using Type = RtkFixType_<ContainerAllocator>;

  explicit RtkFixType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fix_type = 0;
    }
  }

  explicit RtkFixType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fix_type = 0;
    }
  }

  // field types and members
  using _fix_type_type =
    uint8_t;
  _fix_type_type fix_type;

  // setters for named parameter idiom
  Type & set__fix_type(
    const uint8_t & _arg)
  {
    this->fix_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RTK_FIX =
    5u;
  static constexpr uint8_t RTK_FLOAT =
    4u;
  static constexpr uint8_t UNKNOWN =
    3u;
  static constexpr uint8_t DGPS =
    2u;
  static constexpr uint8_t SPS =
    1u;
  static constexpr uint8_t NO_FIX =
    0u;

  // pointer types
  using RawPtr =
    mrs_msgs::msg::RtkFixType_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::RtkFixType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::RtkFixType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::RtkFixType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::RtkFixType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::RtkFixType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::RtkFixType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::RtkFixType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::RtkFixType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::RtkFixType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__RtkFixType
    std::shared_ptr<mrs_msgs::msg::RtkFixType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__RtkFixType
    std::shared_ptr<mrs_msgs::msg::RtkFixType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RtkFixType_ & other) const
  {
    if (this->fix_type != other.fix_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const RtkFixType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RtkFixType_

// alias to use template instance with default allocator
using RtkFixType =
  mrs_msgs::msg::RtkFixType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RtkFixType_<ContainerAllocator>::RTK_FIX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RtkFixType_<ContainerAllocator>::RTK_FLOAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RtkFixType_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RtkFixType_<ContainerAllocator>::DGPS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RtkFixType_<ContainerAllocator>::SPS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RtkFixType_<ContainerAllocator>::NO_FIX;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__RTK_FIX_TYPE__STRUCT_HPP_
