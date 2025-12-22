// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/ProfilerUpdate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/profiler_update.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__PROFILER_UPDATE__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__PROFILER_UPDATE__STRUCT_HPP_

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
# define DEPRECATED__mrs_msgs__msg__ProfilerUpdate __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__ProfilerUpdate __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProfilerUpdate_
{
  using Type = ProfilerUpdate_<ContainerAllocator>;

  explicit ProfilerUpdate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_name = "";
      this->routine_name = "";
      this->iteration = 0ll;
      this->duration = 0.0;
      this->event = "";
    }
  }

  explicit ProfilerUpdate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    node_name(_alloc),
    routine_name(_alloc),
    event(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_name = "";
      this->routine_name = "";
      this->iteration = 0ll;
      this->duration = 0.0;
      this->event = "";
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _node_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_name_type node_name;
  using _routine_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _routine_name_type routine_name;
  using _iteration_type =
    int64_t;
  _iteration_type iteration;
  using _duration_type =
    double;
  _duration_type duration;
  using _event_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _event_type event;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__node_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_name = _arg;
    return *this;
  }
  Type & set__routine_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->routine_name = _arg;
    return *this;
  }
  Type & set__iteration(
    const int64_t & _arg)
  {
    this->iteration = _arg;
    return *this;
  }
  Type & set__duration(
    const double & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__event(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->event = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> START;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> END;

  // pointer types
  using RawPtr =
    mrs_msgs::msg::ProfilerUpdate_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::ProfilerUpdate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::ProfilerUpdate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::ProfilerUpdate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::ProfilerUpdate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::ProfilerUpdate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::ProfilerUpdate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::ProfilerUpdate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::ProfilerUpdate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::ProfilerUpdate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__ProfilerUpdate
    std::shared_ptr<mrs_msgs::msg::ProfilerUpdate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__ProfilerUpdate
    std::shared_ptr<mrs_msgs::msg::ProfilerUpdate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProfilerUpdate_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->node_name != other.node_name) {
      return false;
    }
    if (this->routine_name != other.routine_name) {
      return false;
    }
    if (this->iteration != other.iteration) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->event != other.event) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProfilerUpdate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProfilerUpdate_

// alias to use template instance with default allocator
using ProfilerUpdate =
  mrs_msgs::msg::ProfilerUpdate_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ProfilerUpdate_<ContainerAllocator>::START = "start";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ProfilerUpdate_<ContainerAllocator>::END = "end";

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__PROFILER_UPDATE__STRUCT_HPP_
