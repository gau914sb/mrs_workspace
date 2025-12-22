// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/GainManagerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gain_manager_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__GAIN_MANAGER_DIAGNOSTICS__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__GAIN_MANAGER_DIAGNOSTICS__STRUCT_HPP_

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
// Member 'current_values'
#include "mrs_msgs/msg/detail/se3_gains__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__GainManagerDiagnostics __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__GainManagerDiagnostics __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GainManagerDiagnostics_
{
  using Type = GainManagerDiagnostics_<ContainerAllocator>;

  explicit GainManagerDiagnostics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    current_values(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_name = "";
    }
  }

  explicit GainManagerDiagnostics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    current_name(_alloc),
    current_values(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_name = "";
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _loaded_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _loaded_type loaded;
  using _available_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _available_type available;
  using _current_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_name_type current_name;
  using _current_values_type =
    mrs_msgs::msg::Se3Gains_<ContainerAllocator>;
  _current_values_type current_values;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__loaded(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->loaded = _arg;
    return *this;
  }
  Type & set__available(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->available = _arg;
    return *this;
  }
  Type & set__current_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_name = _arg;
    return *this;
  }
  Type & set__current_values(
    const mrs_msgs::msg::Se3Gains_<ContainerAllocator> & _arg)
  {
    this->current_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::GainManagerDiagnostics_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::GainManagerDiagnostics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::GainManagerDiagnostics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::GainManagerDiagnostics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::GainManagerDiagnostics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::GainManagerDiagnostics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::GainManagerDiagnostics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::GainManagerDiagnostics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::GainManagerDiagnostics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::GainManagerDiagnostics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__GainManagerDiagnostics
    std::shared_ptr<mrs_msgs::msg::GainManagerDiagnostics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__GainManagerDiagnostics
    std::shared_ptr<mrs_msgs::msg::GainManagerDiagnostics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GainManagerDiagnostics_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->loaded != other.loaded) {
      return false;
    }
    if (this->available != other.available) {
      return false;
    }
    if (this->current_name != other.current_name) {
      return false;
    }
    if (this->current_values != other.current_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const GainManagerDiagnostics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GainManagerDiagnostics_

// alias to use template instance with default allocator
using GainManagerDiagnostics =
  mrs_msgs::msg::GainManagerDiagnostics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__GAIN_MANAGER_DIAGNOSTICS__STRUCT_HPP_
