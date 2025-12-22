// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/GazeboSpawnerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gazebo_spawner_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__GAZEBO_SPAWNER_DIAGNOSTICS__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__GAZEBO_SPAWNER_DIAGNOSTICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__GazeboSpawnerDiagnostics __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__GazeboSpawnerDiagnostics __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GazeboSpawnerDiagnostics_
{
  using Type = GazeboSpawnerDiagnostics_<ContainerAllocator>;

  explicit GazeboSpawnerDiagnostics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->spawn_called = false;
      this->processing = false;
      this->queued_processes = 0;
    }
  }

  explicit GazeboSpawnerDiagnostics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->spawn_called = false;
      this->processing = false;
      this->queued_processes = 0;
    }
  }

  // field types and members
  using _spawn_called_type =
    bool;
  _spawn_called_type spawn_called;
  using _processing_type =
    bool;
  _processing_type processing;
  using _active_vehicles_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _active_vehicles_type active_vehicles;
  using _queued_vehicles_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _queued_vehicles_type queued_vehicles;
  using _queued_processes_type =
    uint8_t;
  _queued_processes_type queued_processes;

  // setters for named parameter idiom
  Type & set__spawn_called(
    const bool & _arg)
  {
    this->spawn_called = _arg;
    return *this;
  }
  Type & set__processing(
    const bool & _arg)
  {
    this->processing = _arg;
    return *this;
  }
  Type & set__active_vehicles(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->active_vehicles = _arg;
    return *this;
  }
  Type & set__queued_vehicles(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->queued_vehicles = _arg;
    return *this;
  }
  Type & set__queued_processes(
    const uint8_t & _arg)
  {
    this->queued_processes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::GazeboSpawnerDiagnostics_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::GazeboSpawnerDiagnostics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::GazeboSpawnerDiagnostics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::GazeboSpawnerDiagnostics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::GazeboSpawnerDiagnostics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::GazeboSpawnerDiagnostics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::GazeboSpawnerDiagnostics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::GazeboSpawnerDiagnostics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::GazeboSpawnerDiagnostics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::GazeboSpawnerDiagnostics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__GazeboSpawnerDiagnostics
    std::shared_ptr<mrs_msgs::msg::GazeboSpawnerDiagnostics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__GazeboSpawnerDiagnostics
    std::shared_ptr<mrs_msgs::msg::GazeboSpawnerDiagnostics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GazeboSpawnerDiagnostics_ & other) const
  {
    if (this->spawn_called != other.spawn_called) {
      return false;
    }
    if (this->processing != other.processing) {
      return false;
    }
    if (this->active_vehicles != other.active_vehicles) {
      return false;
    }
    if (this->queued_vehicles != other.queued_vehicles) {
      return false;
    }
    if (this->queued_processes != other.queued_processes) {
      return false;
    }
    return true;
  }
  bool operator!=(const GazeboSpawnerDiagnostics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GazeboSpawnerDiagnostics_

// alias to use template instance with default allocator
using GazeboSpawnerDiagnostics =
  mrs_msgs::msg::GazeboSpawnerDiagnostics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__GAZEBO_SPAWNER_DIAGNOSTICS__STRUCT_HPP_
