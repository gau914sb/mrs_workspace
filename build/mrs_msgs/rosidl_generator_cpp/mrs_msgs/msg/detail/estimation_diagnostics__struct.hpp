// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/EstimationDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/estimation_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__ESTIMATION_DIAGNOSTICS__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__ESTIMATION_DIAGNOSTICS__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'acceleration'
#include "geometry_msgs/msg/detail/accel__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__EstimationDiagnostics __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__EstimationDiagnostics __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstimationDiagnostics_
{
  using Type = EstimationDiagnostics_<ContainerAllocator>;

  explicit EstimationDiagnostics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    velocity(_init),
    acceleration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->child_frame_id = "";
      this->agl_height = 0.0;
      this->max_flight_z = 0.0;
      this->sm_state = "";
      this->current_state_estimator = "";
      this->estimator_horizontal = "";
      this->estimator_vertical = "";
      this->estimator_heading = "";
      this->estimator_agl_height = "";
      this->estimation_rate = 0ul;
      this->estimator_iteration = 0ul;
      this->platform_config = "";
      this->custom_config = "";
    }
  }

  explicit EstimationDiagnostics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    child_frame_id(_alloc),
    pose(_alloc, _init),
    velocity(_alloc, _init),
    acceleration(_alloc, _init),
    sm_state(_alloc),
    current_state_estimator(_alloc),
    estimator_horizontal(_alloc),
    estimator_vertical(_alloc),
    estimator_heading(_alloc),
    estimator_agl_height(_alloc),
    platform_config(_alloc),
    custom_config(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->child_frame_id = "";
      this->agl_height = 0.0;
      this->max_flight_z = 0.0;
      this->sm_state = "";
      this->current_state_estimator = "";
      this->estimator_horizontal = "";
      this->estimator_vertical = "";
      this->estimator_heading = "";
      this->estimator_agl_height = "";
      this->estimation_rate = 0ul;
      this->estimator_iteration = 0ul;
      this->platform_config = "";
      this->custom_config = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _child_frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _child_frame_id_type child_frame_id;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_type velocity;
  using _acceleration_type =
    geometry_msgs::msg::Accel_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _agl_height_type =
    double;
  _agl_height_type agl_height;
  using _max_flight_z_type =
    double;
  _max_flight_z_type max_flight_z;
  using _sm_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sm_state_type sm_state;
  using _current_state_estimator_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_state_estimator_type current_state_estimator;
  using _estimator_horizontal_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _estimator_horizontal_type estimator_horizontal;
  using _estimator_vertical_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _estimator_vertical_type estimator_vertical;
  using _estimator_heading_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _estimator_heading_type estimator_heading;
  using _estimator_agl_height_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _estimator_agl_height_type estimator_agl_height;
  using _estimation_rate_type =
    uint32_t;
  _estimation_rate_type estimation_rate;
  using _estimator_iteration_type =
    uint32_t;
  _estimator_iteration_type estimator_iteration;
  using _running_state_estimators_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _running_state_estimators_type running_state_estimators;
  using _switchable_state_estimators_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _switchable_state_estimators_type switchable_state_estimators;
  using _platform_config_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _platform_config_type platform_config;
  using _custom_config_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _custom_config_type custom_config;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__child_frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->child_frame_id = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Accel_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__agl_height(
    const double & _arg)
  {
    this->agl_height = _arg;
    return *this;
  }
  Type & set__max_flight_z(
    const double & _arg)
  {
    this->max_flight_z = _arg;
    return *this;
  }
  Type & set__sm_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sm_state = _arg;
    return *this;
  }
  Type & set__current_state_estimator(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_state_estimator = _arg;
    return *this;
  }
  Type & set__estimator_horizontal(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->estimator_horizontal = _arg;
    return *this;
  }
  Type & set__estimator_vertical(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->estimator_vertical = _arg;
    return *this;
  }
  Type & set__estimator_heading(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->estimator_heading = _arg;
    return *this;
  }
  Type & set__estimator_agl_height(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->estimator_agl_height = _arg;
    return *this;
  }
  Type & set__estimation_rate(
    const uint32_t & _arg)
  {
    this->estimation_rate = _arg;
    return *this;
  }
  Type & set__estimator_iteration(
    const uint32_t & _arg)
  {
    this->estimator_iteration = _arg;
    return *this;
  }
  Type & set__running_state_estimators(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->running_state_estimators = _arg;
    return *this;
  }
  Type & set__switchable_state_estimators(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->switchable_state_estimators = _arg;
    return *this;
  }
  Type & set__platform_config(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->platform_config = _arg;
    return *this;
  }
  Type & set__custom_config(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->custom_config = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::EstimationDiagnostics_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::EstimationDiagnostics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::EstimationDiagnostics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::EstimationDiagnostics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::EstimationDiagnostics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::EstimationDiagnostics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::EstimationDiagnostics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::EstimationDiagnostics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::EstimationDiagnostics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::EstimationDiagnostics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__EstimationDiagnostics
    std::shared_ptr<mrs_msgs::msg::EstimationDiagnostics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__EstimationDiagnostics
    std::shared_ptr<mrs_msgs::msg::EstimationDiagnostics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstimationDiagnostics_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->child_frame_id != other.child_frame_id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->agl_height != other.agl_height) {
      return false;
    }
    if (this->max_flight_z != other.max_flight_z) {
      return false;
    }
    if (this->sm_state != other.sm_state) {
      return false;
    }
    if (this->current_state_estimator != other.current_state_estimator) {
      return false;
    }
    if (this->estimator_horizontal != other.estimator_horizontal) {
      return false;
    }
    if (this->estimator_vertical != other.estimator_vertical) {
      return false;
    }
    if (this->estimator_heading != other.estimator_heading) {
      return false;
    }
    if (this->estimator_agl_height != other.estimator_agl_height) {
      return false;
    }
    if (this->estimation_rate != other.estimation_rate) {
      return false;
    }
    if (this->estimator_iteration != other.estimator_iteration) {
      return false;
    }
    if (this->running_state_estimators != other.running_state_estimators) {
      return false;
    }
    if (this->switchable_state_estimators != other.switchable_state_estimators) {
      return false;
    }
    if (this->platform_config != other.platform_config) {
      return false;
    }
    if (this->custom_config != other.custom_config) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstimationDiagnostics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstimationDiagnostics_

// alias to use template instance with default allocator
using EstimationDiagnostics =
  mrs_msgs::msg::EstimationDiagnostics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__ESTIMATION_DIAGNOSTICS__STRUCT_HPP_
