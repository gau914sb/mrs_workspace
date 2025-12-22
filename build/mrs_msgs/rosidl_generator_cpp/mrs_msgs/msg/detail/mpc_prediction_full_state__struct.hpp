// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/MpcPredictionFullState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/mpc_prediction_full_state.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__MPC_PREDICTION_FULL_STATE__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__MPC_PREDICTION_FULL_STATE__STRUCT_HPP_

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
// Member 'stamps'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'attitude_rate'
// Member 'velocity'
// Member 'acceleration'
// Member 'jerk'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__MpcPredictionFullState __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__MpcPredictionFullState __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MpcPredictionFullState_
{
  using Type = MpcPredictionFullState_<ContainerAllocator>;

  explicit MpcPredictionFullState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_id = 0ll;
      this->use_orientation = 0;
      this->use_attitude_rate = 0;
    }
  }

  explicit MpcPredictionFullState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_id = 0ll;
      this->use_orientation = 0;
      this->use_attitude_rate = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _input_id_type =
    int64_t;
  _input_id_type input_id;
  using _stamps_type =
    std::vector<builtin_interfaces::msg::Time_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<builtin_interfaces::msg::Time_<ContainerAllocator>>>;
  _stamps_type stamps;
  using _position_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _position_type position;
  using _orientation_type =
    std::vector<geometry_msgs::msg::Quaternion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Quaternion_<ContainerAllocator>>>;
  _orientation_type orientation;
  using _attitude_rate_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _attitude_rate_type attitude_rate;
  using _velocity_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _velocity_type velocity;
  using _acceleration_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _acceleration_type acceleration;
  using _jerk_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _jerk_type jerk;
  using _heading_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _heading_type heading;
  using _heading_rate_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _heading_rate_type heading_rate;
  using _heading_acceleration_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _heading_acceleration_type heading_acceleration;
  using _heading_jerk_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _heading_jerk_type heading_jerk;
  using _use_orientation_type =
    uint8_t;
  _use_orientation_type use_orientation;
  using _use_attitude_rate_type =
    uint8_t;
  _use_attitude_rate_type use_attitude_rate;

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
  Type & set__stamps(
    const std::vector<builtin_interfaces::msg::Time_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<builtin_interfaces::msg::Time_<ContainerAllocator>>> & _arg)
  {
    this->stamps = _arg;
    return *this;
  }
  Type & set__position(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__orientation(
    const std::vector<geometry_msgs::msg::Quaternion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Quaternion_<ContainerAllocator>>> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__attitude_rate(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->attitude_rate = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__jerk(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->jerk = _arg;
    return *this;
  }
  Type & set__heading(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__heading_rate(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->heading_rate = _arg;
    return *this;
  }
  Type & set__heading_acceleration(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->heading_acceleration = _arg;
    return *this;
  }
  Type & set__heading_jerk(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->heading_jerk = _arg;
    return *this;
  }
  Type & set__use_orientation(
    const uint8_t & _arg)
  {
    this->use_orientation = _arg;
    return *this;
  }
  Type & set__use_attitude_rate(
    const uint8_t & _arg)
  {
    this->use_attitude_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::MpcPredictionFullState_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::MpcPredictionFullState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::MpcPredictionFullState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::MpcPredictionFullState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::MpcPredictionFullState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::MpcPredictionFullState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::MpcPredictionFullState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::MpcPredictionFullState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::MpcPredictionFullState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::MpcPredictionFullState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__MpcPredictionFullState
    std::shared_ptr<mrs_msgs::msg::MpcPredictionFullState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__MpcPredictionFullState
    std::shared_ptr<mrs_msgs::msg::MpcPredictionFullState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MpcPredictionFullState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->input_id != other.input_id) {
      return false;
    }
    if (this->stamps != other.stamps) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->attitude_rate != other.attitude_rate) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->jerk != other.jerk) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->heading_rate != other.heading_rate) {
      return false;
    }
    if (this->heading_acceleration != other.heading_acceleration) {
      return false;
    }
    if (this->heading_jerk != other.heading_jerk) {
      return false;
    }
    if (this->use_orientation != other.use_orientation) {
      return false;
    }
    if (this->use_attitude_rate != other.use_attitude_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const MpcPredictionFullState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MpcPredictionFullState_

// alias to use template instance with default allocator
using MpcPredictionFullState =
  mrs_msgs::msg::MpcPredictionFullState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__MPC_PREDICTION_FULL_STATE__STRUCT_HPP_
