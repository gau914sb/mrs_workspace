// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:msg/Trackstat.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/trackstat.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT__STRUCT_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT__STRUCT_HPP_

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
// Member 'channels'
#include "mrs_modules_msgs/msg/detail/trackstat_channel__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_modules_msgs__msg__Trackstat __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__msg__Trackstat __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Trackstat_
{
  using Type = Trackstat_<ContainerAllocator>;

  explicit Trackstat_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->solution_status = "";
      this->position_type = "";
      this->cutoff = 0.0f;
    }
  }

  explicit Trackstat_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    solution_status(_alloc),
    position_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->solution_status = "";
      this->position_type = "";
      this->cutoff = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _solution_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _solution_status_type solution_status;
  using _position_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _position_type_type position_type;
  using _cutoff_type =
    float;
  _cutoff_type cutoff;
  using _channels_type =
    std::vector<mrs_modules_msgs::msg::TrackstatChannel_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_modules_msgs::msg::TrackstatChannel_<ContainerAllocator>>>;
  _channels_type channels;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
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
  Type & set__cutoff(
    const float & _arg)
  {
    this->cutoff = _arg;
    return *this;
  }
  Type & set__channels(
    const std::vector<mrs_modules_msgs::msg::TrackstatChannel_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_modules_msgs::msg::TrackstatChannel_<ContainerAllocator>>> & _arg)
  {
    this->channels = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_modules_msgs::msg::Trackstat_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::msg::Trackstat_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::Trackstat_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::msg::Trackstat_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::Trackstat_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::Trackstat_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::msg::Trackstat_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::msg::Trackstat_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::Trackstat_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::msg::Trackstat_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__msg__Trackstat
    std::shared_ptr<mrs_modules_msgs::msg::Trackstat_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__msg__Trackstat
    std::shared_ptr<mrs_modules_msgs::msg::Trackstat_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trackstat_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->solution_status != other.solution_status) {
      return false;
    }
    if (this->position_type != other.position_type) {
      return false;
    }
    if (this->cutoff != other.cutoff) {
      return false;
    }
    if (this->channels != other.channels) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trackstat_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trackstat_

// alias to use template instance with default allocator
using Trackstat =
  mrs_modules_msgs::msg::Trackstat_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT__STRUCT_HPP_
