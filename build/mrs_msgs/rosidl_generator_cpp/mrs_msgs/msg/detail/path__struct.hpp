// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/Path.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/path.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__PATH__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__PATH__STRUCT_HPP_

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
// Member 'points'
#include "mrs_msgs/msg/detail/reference__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__Path __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__Path __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Path_
{
  using Type = Path_<ContainerAllocator>;

  explicit Path_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_id = 0ll;
      this->use_heading = false;
      this->fly_now = false;
      this->stop_at_waypoints = false;
      this->loop = false;
      this->max_execution_time = 0.0;
      this->max_deviation_from_path = 0.0;
      this->dont_prepend_current_state = false;
      this->override_heading_atan2 = false;
      this->override_constraints = false;
      this->override_max_velocity_horizontal = 0.0;
      this->override_max_acceleration_horizontal = 0.0;
      this->override_max_jerk_horizontal = 0.0;
      this->override_max_velocity_vertical = 0.0;
      this->override_max_acceleration_vertical = 0.0;
      this->override_max_jerk_vertical = 0.0;
      this->relax_heading = false;
    }
  }

  explicit Path_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_id = 0ll;
      this->use_heading = false;
      this->fly_now = false;
      this->stop_at_waypoints = false;
      this->loop = false;
      this->max_execution_time = 0.0;
      this->max_deviation_from_path = 0.0;
      this->dont_prepend_current_state = false;
      this->override_heading_atan2 = false;
      this->override_constraints = false;
      this->override_max_velocity_horizontal = 0.0;
      this->override_max_acceleration_horizontal = 0.0;
      this->override_max_jerk_horizontal = 0.0;
      this->override_max_velocity_vertical = 0.0;
      this->override_max_acceleration_vertical = 0.0;
      this->override_max_jerk_vertical = 0.0;
      this->relax_heading = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _input_id_type =
    int64_t;
  _input_id_type input_id;
  using _use_heading_type =
    bool;
  _use_heading_type use_heading;
  using _fly_now_type =
    bool;
  _fly_now_type fly_now;
  using _stop_at_waypoints_type =
    bool;
  _stop_at_waypoints_type stop_at_waypoints;
  using _loop_type =
    bool;
  _loop_type loop;
  using _max_execution_time_type =
    double;
  _max_execution_time_type max_execution_time;
  using _max_deviation_from_path_type =
    double;
  _max_deviation_from_path_type max_deviation_from_path;
  using _dont_prepend_current_state_type =
    bool;
  _dont_prepend_current_state_type dont_prepend_current_state;
  using _override_heading_atan2_type =
    bool;
  _override_heading_atan2_type override_heading_atan2;
  using _override_constraints_type =
    bool;
  _override_constraints_type override_constraints;
  using _override_max_velocity_horizontal_type =
    double;
  _override_max_velocity_horizontal_type override_max_velocity_horizontal;
  using _override_max_acceleration_horizontal_type =
    double;
  _override_max_acceleration_horizontal_type override_max_acceleration_horizontal;
  using _override_max_jerk_horizontal_type =
    double;
  _override_max_jerk_horizontal_type override_max_jerk_horizontal;
  using _override_max_velocity_vertical_type =
    double;
  _override_max_velocity_vertical_type override_max_velocity_vertical;
  using _override_max_acceleration_vertical_type =
    double;
  _override_max_acceleration_vertical_type override_max_acceleration_vertical;
  using _override_max_jerk_vertical_type =
    double;
  _override_max_jerk_vertical_type override_max_jerk_vertical;
  using _relax_heading_type =
    bool;
  _relax_heading_type relax_heading;
  using _points_type =
    std::vector<mrs_msgs::msg::Reference_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::msg::Reference_<ContainerAllocator>>>;
  _points_type points;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__input_id(
    const int64_t & _arg)
  {
    this->input_id = _arg;
    return *this;
  }
  Type & set__use_heading(
    const bool & _arg)
  {
    this->use_heading = _arg;
    return *this;
  }
  Type & set__fly_now(
    const bool & _arg)
  {
    this->fly_now = _arg;
    return *this;
  }
  Type & set__stop_at_waypoints(
    const bool & _arg)
  {
    this->stop_at_waypoints = _arg;
    return *this;
  }
  Type & set__loop(
    const bool & _arg)
  {
    this->loop = _arg;
    return *this;
  }
  Type & set__max_execution_time(
    const double & _arg)
  {
    this->max_execution_time = _arg;
    return *this;
  }
  Type & set__max_deviation_from_path(
    const double & _arg)
  {
    this->max_deviation_from_path = _arg;
    return *this;
  }
  Type & set__dont_prepend_current_state(
    const bool & _arg)
  {
    this->dont_prepend_current_state = _arg;
    return *this;
  }
  Type & set__override_heading_atan2(
    const bool & _arg)
  {
    this->override_heading_atan2 = _arg;
    return *this;
  }
  Type & set__override_constraints(
    const bool & _arg)
  {
    this->override_constraints = _arg;
    return *this;
  }
  Type & set__override_max_velocity_horizontal(
    const double & _arg)
  {
    this->override_max_velocity_horizontal = _arg;
    return *this;
  }
  Type & set__override_max_acceleration_horizontal(
    const double & _arg)
  {
    this->override_max_acceleration_horizontal = _arg;
    return *this;
  }
  Type & set__override_max_jerk_horizontal(
    const double & _arg)
  {
    this->override_max_jerk_horizontal = _arg;
    return *this;
  }
  Type & set__override_max_velocity_vertical(
    const double & _arg)
  {
    this->override_max_velocity_vertical = _arg;
    return *this;
  }
  Type & set__override_max_acceleration_vertical(
    const double & _arg)
  {
    this->override_max_acceleration_vertical = _arg;
    return *this;
  }
  Type & set__override_max_jerk_vertical(
    const double & _arg)
  {
    this->override_max_jerk_vertical = _arg;
    return *this;
  }
  Type & set__relax_heading(
    const bool & _arg)
  {
    this->relax_heading = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<mrs_msgs::msg::Reference_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::msg::Reference_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::Path_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::Path_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::Path_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::Path_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::Path_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::Path_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::Path_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::Path_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::Path_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::Path_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__Path
    std::shared_ptr<mrs_msgs::msg::Path_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__Path
    std::shared_ptr<mrs_msgs::msg::Path_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Path_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->input_id != other.input_id) {
      return false;
    }
    if (this->use_heading != other.use_heading) {
      return false;
    }
    if (this->fly_now != other.fly_now) {
      return false;
    }
    if (this->stop_at_waypoints != other.stop_at_waypoints) {
      return false;
    }
    if (this->loop != other.loop) {
      return false;
    }
    if (this->max_execution_time != other.max_execution_time) {
      return false;
    }
    if (this->max_deviation_from_path != other.max_deviation_from_path) {
      return false;
    }
    if (this->dont_prepend_current_state != other.dont_prepend_current_state) {
      return false;
    }
    if (this->override_heading_atan2 != other.override_heading_atan2) {
      return false;
    }
    if (this->override_constraints != other.override_constraints) {
      return false;
    }
    if (this->override_max_velocity_horizontal != other.override_max_velocity_horizontal) {
      return false;
    }
    if (this->override_max_acceleration_horizontal != other.override_max_acceleration_horizontal) {
      return false;
    }
    if (this->override_max_jerk_horizontal != other.override_max_jerk_horizontal) {
      return false;
    }
    if (this->override_max_velocity_vertical != other.override_max_velocity_vertical) {
      return false;
    }
    if (this->override_max_acceleration_vertical != other.override_max_acceleration_vertical) {
      return false;
    }
    if (this->override_max_jerk_vertical != other.override_max_jerk_vertical) {
      return false;
    }
    if (this->relax_heading != other.relax_heading) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    return true;
  }
  bool operator!=(const Path_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Path_

// alias to use template instance with default allocator
using Path =
  mrs_msgs::msg::Path_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__PATH__STRUCT_HPP_
