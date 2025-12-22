// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/HwApiRcChannels.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_rc_channels.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_RC_CHANNELS__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_RC_CHANNELS__STRUCT_HPP_

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
# define DEPRECATED__mrs_msgs__msg__HwApiRcChannels __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__HwApiRcChannels __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HwApiRcChannels_
{
  using Type = HwApiRcChannels_<ContainerAllocator>;

  explicit HwApiRcChannels_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    (void)_init;
  }

  explicit HwApiRcChannels_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _channels_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _channels_type channels;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__channels(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->channels = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::HwApiRcChannels_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::HwApiRcChannels_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::HwApiRcChannels_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::HwApiRcChannels_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::HwApiRcChannels_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::HwApiRcChannels_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::HwApiRcChannels_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::HwApiRcChannels_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::HwApiRcChannels_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::HwApiRcChannels_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__HwApiRcChannels
    std::shared_ptr<mrs_msgs::msg::HwApiRcChannels_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__HwApiRcChannels
    std::shared_ptr<mrs_msgs::msg::HwApiRcChannels_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HwApiRcChannels_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->channels != other.channels) {
      return false;
    }
    return true;
  }
  bool operator!=(const HwApiRcChannels_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HwApiRcChannels_

// alias to use template instance with default allocator
using HwApiRcChannels =
  mrs_msgs::msg::HwApiRcChannels_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_RC_CHANNELS__STRUCT_HPP_
