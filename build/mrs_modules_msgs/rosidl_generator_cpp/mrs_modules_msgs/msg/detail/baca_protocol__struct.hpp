// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/BacaProtocol.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/baca_protocol.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__BACA_PROTOCOL__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__BACA_PROTOCOL__STRUCT_HPP_

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
# define DEPRECATED__mrs_modules_msgs__msg__BacaProtocol __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__BacaProtocol __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BacaProtocol_
{
  using Type = BacaProtocol_<ContainerAllocator>;

  explicit BacaProtocol_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->checksum_calculated = 0;
      this->checksum_received = 0;
      this->checksum_correct = false;
    }
  }

  explicit BacaProtocol_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->checksum_calculated = 0;
      this->checksum_received = 0;
      this->checksum_correct = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _payload_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _payload_type payload;
  using _checksum_calculated_type =
    uint8_t;
  _checksum_calculated_type checksum_calculated;
  using _checksum_received_type =
    uint8_t;
  _checksum_received_type checksum_received;
  using _checksum_correct_type =
    bool;
  _checksum_correct_type checksum_correct;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__payload(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->payload = _arg;
    return *this;
  }
  Type & set__checksum_calculated(
    const uint8_t & _arg)
  {
    this->checksum_calculated = _arg;
    return *this;
  }
  Type & set__checksum_received(
    const uint8_t & _arg)
  {
    this->checksum_received = _arg;
    return *this;
  }
  Type & set__checksum_correct(
    const bool & _arg)
  {
    this->checksum_correct = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::BacaProtocol_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::BacaProtocol_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::BacaProtocol_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::BacaProtocol_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::BacaProtocol_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::BacaProtocol_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::BacaProtocol_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::BacaProtocol_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::BacaProtocol_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::BacaProtocol_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__BacaProtocol
    std::shared_ptr<mrs_modules_msgs::msg::BacaProtocol_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__BacaProtocol
    std::shared_ptr<mrs_modules_msgs::msg::BacaProtocol_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BacaProtocol_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->payload != other.payload) {
      return false;
    }
    if (this->checksum_calculated != other.checksum_calculated) {
      return false;
    }
    if (this->checksum_received != other.checksum_received) {
      return false;
    }
    if (this->checksum_correct != other.checksum_correct) {
      return false;
    }
    return true;
  }
  bool operator!=(const BacaProtocol_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BacaProtocol_

// alias to use template instance with default allocator
using BacaProtocol =
  mrs_modules_msgs::msg::BacaProtocol_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__BACA_PROTOCOL__STRUCT_HPP_
