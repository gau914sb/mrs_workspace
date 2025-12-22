// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/SafetyAreaManagerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/safety_area_manager_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__SAFETY_AREA_MANAGER_DIAGNOSTICS__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__SAFETY_AREA_MANAGER_DIAGNOSTICS__STRUCT_HPP_

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
// Member 'world_origin'
#include "mrs_msgs/msg/detail/world_origin__struct.hpp"
// Member 'border'
// Member 'obstacles'
#include "mrs_msgs/msg/detail/prism__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__SafetyAreaManagerDiagnostics __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__SafetyAreaManagerDiagnostics __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SafetyAreaManagerDiagnostics_
{
  using Type = SafetyAreaManagerDiagnostics_<ContainerAllocator>;

  explicit SafetyAreaManagerDiagnostics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    world_origin(_init),
    border(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uav_name = "";
      this->safety_area_enabled = false;
      this->position_valid_2d = false;
      this->position_valid_3d = false;
      this->obstacles_present = false;
    }
  }

  explicit SafetyAreaManagerDiagnostics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    uav_name(_alloc),
    world_origin(_alloc, _init),
    border(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uav_name = "";
      this->safety_area_enabled = false;
      this->position_valid_2d = false;
      this->position_valid_3d = false;
      this->obstacles_present = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _uav_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _uav_name_type uav_name;
  using _world_origin_type =
    mrs_msgs::msg::WorldOrigin_<ContainerAllocator>;
  _world_origin_type world_origin;
  using _safety_area_enabled_type =
    bool;
  _safety_area_enabled_type safety_area_enabled;
  using _position_valid_2d_type =
    bool;
  _position_valid_2d_type position_valid_2d;
  using _position_valid_3d_type =
    bool;
  _position_valid_3d_type position_valid_3d;
  using _border_type =
    mrs_msgs::msg::Prism_<ContainerAllocator>;
  _border_type border;
  using _obstacles_present_type =
    bool;
  _obstacles_present_type obstacles_present;
  using _obstacles_type =
    std::vector<mrs_msgs::msg::Prism_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::msg::Prism_<ContainerAllocator>>>;
  _obstacles_type obstacles;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__uav_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->uav_name = _arg;
    return *this;
  }
  Type & set__world_origin(
    const mrs_msgs::msg::WorldOrigin_<ContainerAllocator> & _arg)
  {
    this->world_origin = _arg;
    return *this;
  }
  Type & set__safety_area_enabled(
    const bool & _arg)
  {
    this->safety_area_enabled = _arg;
    return *this;
  }
  Type & set__position_valid_2d(
    const bool & _arg)
  {
    this->position_valid_2d = _arg;
    return *this;
  }
  Type & set__position_valid_3d(
    const bool & _arg)
  {
    this->position_valid_3d = _arg;
    return *this;
  }
  Type & set__border(
    const mrs_msgs::msg::Prism_<ContainerAllocator> & _arg)
  {
    this->border = _arg;
    return *this;
  }
  Type & set__obstacles_present(
    const bool & _arg)
  {
    this->obstacles_present = _arg;
    return *this;
  }
  Type & set__obstacles(
    const std::vector<mrs_msgs::msg::Prism_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::msg::Prism_<ContainerAllocator>>> & _arg)
  {
    this->obstacles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::SafetyAreaManagerDiagnostics_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::SafetyAreaManagerDiagnostics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::SafetyAreaManagerDiagnostics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::SafetyAreaManagerDiagnostics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::SafetyAreaManagerDiagnostics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::SafetyAreaManagerDiagnostics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::SafetyAreaManagerDiagnostics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::SafetyAreaManagerDiagnostics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::SafetyAreaManagerDiagnostics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::SafetyAreaManagerDiagnostics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__SafetyAreaManagerDiagnostics
    std::shared_ptr<mrs_msgs::msg::SafetyAreaManagerDiagnostics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__SafetyAreaManagerDiagnostics
    std::shared_ptr<mrs_msgs::msg::SafetyAreaManagerDiagnostics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafetyAreaManagerDiagnostics_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->uav_name != other.uav_name) {
      return false;
    }
    if (this->world_origin != other.world_origin) {
      return false;
    }
    if (this->safety_area_enabled != other.safety_area_enabled) {
      return false;
    }
    if (this->position_valid_2d != other.position_valid_2d) {
      return false;
    }
    if (this->position_valid_3d != other.position_valid_3d) {
      return false;
    }
    if (this->border != other.border) {
      return false;
    }
    if (this->obstacles_present != other.obstacles_present) {
      return false;
    }
    if (this->obstacles != other.obstacles) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafetyAreaManagerDiagnostics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafetyAreaManagerDiagnostics_

// alias to use template instance with default allocator
using SafetyAreaManagerDiagnostics =
  mrs_msgs::msg::SafetyAreaManagerDiagnostics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__SAFETY_AREA_MANAGER_DIAGNOSTICS__STRUCT_HPP_
