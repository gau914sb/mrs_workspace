// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/Range.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/range.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__RANGE__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__RANGE__STRUCT_HPP_

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
// Member 'info'
#include "mrs_modules_msgs/msg/detail/range_information__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_modules_msgs__msg__Range __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__Range __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Range_
{
  using Type = Range_<ContainerAllocator>;

  explicit Range_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    tersus_msg_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->numb_of_observ = 0l;
    }
  }

  explicit Range_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    tersus_msg_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->numb_of_observ = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tersus_msg_header_type =
    mrs_modules_msgs::msg::TersusMessageHeader_<ContainerAllocator>;
  _tersus_msg_header_type tersus_msg_header;
  using _numb_of_observ_type =
    int32_t;
  _numb_of_observ_type numb_of_observ;
  using _info_type =
    std::vector<mrs_modules_msgs::msg::RangeInformation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_modules_msgs::msg::RangeInformation_<ContainerAllocator>>>;
  _info_type info;

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
  Type & set__numb_of_observ(
    const int32_t & _arg)
  {
    this->numb_of_observ = _arg;
    return *this;
  }
  Type & set__info(
    const std::vector<mrs_modules_msgs::msg::RangeInformation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_modules_msgs::msg::RangeInformation_<ContainerAllocator>>> & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::Range_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::Range_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::Range_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::Range_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::Range_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::Range_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::Range_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::Range_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::Range_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::Range_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__Range
    std::shared_ptr<mrs_modules_msgs::msg::Range_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__Range
    std::shared_ptr<mrs_modules_msgs::msg::Range_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Range_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tersus_msg_header != other.tersus_msg_header) {
      return false;
    }
    if (this->numb_of_observ != other.numb_of_observ) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const Range_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Range_

// alias to use template instance with default allocator
using Range =
  mrs_modules_msgs::msg::Range_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__RANGE__STRUCT_HPP_
