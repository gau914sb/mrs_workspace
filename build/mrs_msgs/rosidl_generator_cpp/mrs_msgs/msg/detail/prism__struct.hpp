// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/Prism.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/prism.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__PRISM__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__PRISM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'points'
#include "mrs_msgs/msg/detail/point2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__Prism __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__Prism __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Prism_
{
  using Type = Prism_<ContainerAllocator>;

  explicit Prism_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->horizontal_frame = "";
      this->vertical_frame = "";
      this->max_z = 0.0;
      this->min_z = 0.0;
    }
  }

  explicit Prism_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : horizontal_frame(_alloc),
    vertical_frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->horizontal_frame = "";
      this->vertical_frame = "";
      this->max_z = 0.0;
      this->min_z = 0.0;
    }
  }

  // field types and members
  using _horizontal_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _horizontal_frame_type horizontal_frame;
  using _vertical_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _vertical_frame_type vertical_frame;
  using _points_type =
    std::vector<mrs_msgs::msg::Point2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::msg::Point2D_<ContainerAllocator>>>;
  _points_type points;
  using _max_z_type =
    double;
  _max_z_type max_z;
  using _min_z_type =
    double;
  _min_z_type min_z;

  // setters for named parameter idiom
  Type & set__horizontal_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->horizontal_frame = _arg;
    return *this;
  }
  Type & set__vertical_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->vertical_frame = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<mrs_msgs::msg::Point2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::msg::Point2D_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__max_z(
    const double & _arg)
  {
    this->max_z = _arg;
    return *this;
  }
  Type & set__min_z(
    const double & _arg)
  {
    this->min_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::Prism_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::Prism_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::Prism_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::Prism_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::Prism_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::Prism_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::Prism_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::Prism_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::Prism_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::Prism_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__Prism
    std::shared_ptr<mrs_msgs::msg::Prism_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__Prism
    std::shared_ptr<mrs_msgs::msg::Prism_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Prism_ & other) const
  {
    if (this->horizontal_frame != other.horizontal_frame) {
      return false;
    }
    if (this->vertical_frame != other.vertical_frame) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->max_z != other.max_z) {
      return false;
    }
    if (this->min_z != other.min_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Prism_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Prism_

// alias to use template instance with default allocator
using Prism =
  mrs_msgs::msg::Prism_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__PRISM__STRUCT_HPP_
