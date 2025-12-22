// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/ControllerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/controller_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__CONTROLLER_DIAGNOSTICS__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__CONTROLLER_DIAGNOSTICS__STRUCT_HPP_

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
# define DEPRECATED__mrs_msgs__msg__ControllerDiagnostics __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__ControllerDiagnostics __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControllerDiagnostics_
{
  using Type = ControllerDiagnostics_<ContainerAllocator>;

  explicit ControllerDiagnostics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->controller = "";
      this->ramping_up = false;
      this->mass_estimator = false;
      this->mass_difference = 0.0;
      this->total_mass = 0.0;
      this->disturbance_estimator = false;
      this->disturbance_wx_w = 0.0;
      this->disturbance_wy_w = 0.0;
      this->disturbance_bx_w = 0.0;
      this->disturbance_by_w = 0.0;
      this->disturbance_bx_b = 0.0;
      this->disturbance_by_b = 0.0;
      this->controller_enforcing_constraints = false;
      this->horizontal_speed_constraint = 0.0;
      this->horizontal_acc_constraint = 0.0;
      this->vertical_asc_speed_constraint = 0.0;
      this->vertical_asc_acc_constraint = 0.0;
      this->vertical_desc_speed_constraint = 0.0;
      this->vertical_desc_acc_constraint = 0.0;
    }
  }

  explicit ControllerDiagnostics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    controller(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->controller = "";
      this->ramping_up = false;
      this->mass_estimator = false;
      this->mass_difference = 0.0;
      this->total_mass = 0.0;
      this->disturbance_estimator = false;
      this->disturbance_wx_w = 0.0;
      this->disturbance_wy_w = 0.0;
      this->disturbance_bx_w = 0.0;
      this->disturbance_by_w = 0.0;
      this->disturbance_bx_b = 0.0;
      this->disturbance_by_b = 0.0;
      this->controller_enforcing_constraints = false;
      this->horizontal_speed_constraint = 0.0;
      this->horizontal_acc_constraint = 0.0;
      this->vertical_asc_speed_constraint = 0.0;
      this->vertical_asc_acc_constraint = 0.0;
      this->vertical_desc_speed_constraint = 0.0;
      this->vertical_desc_acc_constraint = 0.0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _controller_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _controller_type controller;
  using _ramping_up_type =
    bool;
  _ramping_up_type ramping_up;
  using _mass_estimator_type =
    bool;
  _mass_estimator_type mass_estimator;
  using _mass_difference_type =
    double;
  _mass_difference_type mass_difference;
  using _total_mass_type =
    double;
  _total_mass_type total_mass;
  using _disturbance_estimator_type =
    bool;
  _disturbance_estimator_type disturbance_estimator;
  using _disturbance_wx_w_type =
    double;
  _disturbance_wx_w_type disturbance_wx_w;
  using _disturbance_wy_w_type =
    double;
  _disturbance_wy_w_type disturbance_wy_w;
  using _disturbance_bx_w_type =
    double;
  _disturbance_bx_w_type disturbance_bx_w;
  using _disturbance_by_w_type =
    double;
  _disturbance_by_w_type disturbance_by_w;
  using _disturbance_bx_b_type =
    double;
  _disturbance_bx_b_type disturbance_bx_b;
  using _disturbance_by_b_type =
    double;
  _disturbance_by_b_type disturbance_by_b;
  using _controller_enforcing_constraints_type =
    bool;
  _controller_enforcing_constraints_type controller_enforcing_constraints;
  using _horizontal_speed_constraint_type =
    double;
  _horizontal_speed_constraint_type horizontal_speed_constraint;
  using _horizontal_acc_constraint_type =
    double;
  _horizontal_acc_constraint_type horizontal_acc_constraint;
  using _vertical_asc_speed_constraint_type =
    double;
  _vertical_asc_speed_constraint_type vertical_asc_speed_constraint;
  using _vertical_asc_acc_constraint_type =
    double;
  _vertical_asc_acc_constraint_type vertical_asc_acc_constraint;
  using _vertical_desc_speed_constraint_type =
    double;
  _vertical_desc_speed_constraint_type vertical_desc_speed_constraint;
  using _vertical_desc_acc_constraint_type =
    double;
  _vertical_desc_acc_constraint_type vertical_desc_acc_constraint;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__controller(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->controller = _arg;
    return *this;
  }
  Type & set__ramping_up(
    const bool & _arg)
  {
    this->ramping_up = _arg;
    return *this;
  }
  Type & set__mass_estimator(
    const bool & _arg)
  {
    this->mass_estimator = _arg;
    return *this;
  }
  Type & set__mass_difference(
    const double & _arg)
  {
    this->mass_difference = _arg;
    return *this;
  }
  Type & set__total_mass(
    const double & _arg)
  {
    this->total_mass = _arg;
    return *this;
  }
  Type & set__disturbance_estimator(
    const bool & _arg)
  {
    this->disturbance_estimator = _arg;
    return *this;
  }
  Type & set__disturbance_wx_w(
    const double & _arg)
  {
    this->disturbance_wx_w = _arg;
    return *this;
  }
  Type & set__disturbance_wy_w(
    const double & _arg)
  {
    this->disturbance_wy_w = _arg;
    return *this;
  }
  Type & set__disturbance_bx_w(
    const double & _arg)
  {
    this->disturbance_bx_w = _arg;
    return *this;
  }
  Type & set__disturbance_by_w(
    const double & _arg)
  {
    this->disturbance_by_w = _arg;
    return *this;
  }
  Type & set__disturbance_bx_b(
    const double & _arg)
  {
    this->disturbance_bx_b = _arg;
    return *this;
  }
  Type & set__disturbance_by_b(
    const double & _arg)
  {
    this->disturbance_by_b = _arg;
    return *this;
  }
  Type & set__controller_enforcing_constraints(
    const bool & _arg)
  {
    this->controller_enforcing_constraints = _arg;
    return *this;
  }
  Type & set__horizontal_speed_constraint(
    const double & _arg)
  {
    this->horizontal_speed_constraint = _arg;
    return *this;
  }
  Type & set__horizontal_acc_constraint(
    const double & _arg)
  {
    this->horizontal_acc_constraint = _arg;
    return *this;
  }
  Type & set__vertical_asc_speed_constraint(
    const double & _arg)
  {
    this->vertical_asc_speed_constraint = _arg;
    return *this;
  }
  Type & set__vertical_asc_acc_constraint(
    const double & _arg)
  {
    this->vertical_asc_acc_constraint = _arg;
    return *this;
  }
  Type & set__vertical_desc_speed_constraint(
    const double & _arg)
  {
    this->vertical_desc_speed_constraint = _arg;
    return *this;
  }
  Type & set__vertical_desc_acc_constraint(
    const double & _arg)
  {
    this->vertical_desc_acc_constraint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::ControllerDiagnostics_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::ControllerDiagnostics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::ControllerDiagnostics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::ControllerDiagnostics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::ControllerDiagnostics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::ControllerDiagnostics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::ControllerDiagnostics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::ControllerDiagnostics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::ControllerDiagnostics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::ControllerDiagnostics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__ControllerDiagnostics
    std::shared_ptr<mrs_msgs::msg::ControllerDiagnostics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__ControllerDiagnostics
    std::shared_ptr<mrs_msgs::msg::ControllerDiagnostics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerDiagnostics_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->controller != other.controller) {
      return false;
    }
    if (this->ramping_up != other.ramping_up) {
      return false;
    }
    if (this->mass_estimator != other.mass_estimator) {
      return false;
    }
    if (this->mass_difference != other.mass_difference) {
      return false;
    }
    if (this->total_mass != other.total_mass) {
      return false;
    }
    if (this->disturbance_estimator != other.disturbance_estimator) {
      return false;
    }
    if (this->disturbance_wx_w != other.disturbance_wx_w) {
      return false;
    }
    if (this->disturbance_wy_w != other.disturbance_wy_w) {
      return false;
    }
    if (this->disturbance_bx_w != other.disturbance_bx_w) {
      return false;
    }
    if (this->disturbance_by_w != other.disturbance_by_w) {
      return false;
    }
    if (this->disturbance_bx_b != other.disturbance_bx_b) {
      return false;
    }
    if (this->disturbance_by_b != other.disturbance_by_b) {
      return false;
    }
    if (this->controller_enforcing_constraints != other.controller_enforcing_constraints) {
      return false;
    }
    if (this->horizontal_speed_constraint != other.horizontal_speed_constraint) {
      return false;
    }
    if (this->horizontal_acc_constraint != other.horizontal_acc_constraint) {
      return false;
    }
    if (this->vertical_asc_speed_constraint != other.vertical_asc_speed_constraint) {
      return false;
    }
    if (this->vertical_asc_acc_constraint != other.vertical_asc_acc_constraint) {
      return false;
    }
    if (this->vertical_desc_speed_constraint != other.vertical_desc_speed_constraint) {
      return false;
    }
    if (this->vertical_desc_acc_constraint != other.vertical_desc_acc_constraint) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerDiagnostics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerDiagnostics_

// alias to use template instance with default allocator
using ControllerDiagnostics =
  mrs_msgs::msg::ControllerDiagnostics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__CONTROLLER_DIAGNOSTICS__STRUCT_HPP_
