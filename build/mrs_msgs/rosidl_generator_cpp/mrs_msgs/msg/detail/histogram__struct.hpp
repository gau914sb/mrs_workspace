// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/Histogram.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/histogram.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HISTOGRAM__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__HISTOGRAM__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__Histogram __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__Histogram __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Histogram_
{
  using Type = Histogram_<ContainerAllocator>;

  explicit Histogram_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unit = "";
      this->bin_size = 0.0;
      this->bin_min = 0.0;
      this->bin_max = 0.0;
      this->bin_mark = 0ul;
    }
  }

  explicit Histogram_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    unit(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unit = "";
      this->bin_size = 0.0;
      this->bin_min = 0.0;
      this->bin_max = 0.0;
      this->bin_mark = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _unit_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _unit_type unit;
  using _bin_size_type =
    double;
  _bin_size_type bin_size;
  using _bin_min_type =
    double;
  _bin_min_type bin_min;
  using _bin_max_type =
    double;
  _bin_max_type bin_max;
  using _bin_mark_type =
    uint32_t;
  _bin_mark_type bin_mark;
  using _bins_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _bins_type bins;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__unit(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->unit = _arg;
    return *this;
  }
  Type & set__bin_size(
    const double & _arg)
  {
    this->bin_size = _arg;
    return *this;
  }
  Type & set__bin_min(
    const double & _arg)
  {
    this->bin_min = _arg;
    return *this;
  }
  Type & set__bin_max(
    const double & _arg)
  {
    this->bin_max = _arg;
    return *this;
  }
  Type & set__bin_mark(
    const uint32_t & _arg)
  {
    this->bin_mark = _arg;
    return *this;
  }
  Type & set__bins(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->bins = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::Histogram_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::Histogram_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::Histogram_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::Histogram_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::Histogram_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::Histogram_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::Histogram_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::Histogram_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::Histogram_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::Histogram_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__Histogram
    std::shared_ptr<mrs_msgs::msg::Histogram_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__Histogram
    std::shared_ptr<mrs_msgs::msg::Histogram_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Histogram_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->unit != other.unit) {
      return false;
    }
    if (this->bin_size != other.bin_size) {
      return false;
    }
    if (this->bin_min != other.bin_min) {
      return false;
    }
    if (this->bin_max != other.bin_max) {
      return false;
    }
    if (this->bin_mark != other.bin_mark) {
      return false;
    }
    if (this->bins != other.bins) {
      return false;
    }
    return true;
  }
  bool operator!=(const Histogram_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Histogram_

// alias to use template instance with default allocator
using Histogram =
  mrs_msgs::msg::Histogram_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HISTOGRAM__STRUCT_HPP_
