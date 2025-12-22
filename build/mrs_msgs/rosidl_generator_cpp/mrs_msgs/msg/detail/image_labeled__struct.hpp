// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/ImageLabeled.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/image_labeled.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__IMAGE_LABELED__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__IMAGE_LABELED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__ImageLabeled __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__ImageLabeled __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageLabeled_
{
  using Type = ImageLabeled_<ContainerAllocator>;

  explicit ImageLabeled_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : img(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
    }
  }

  explicit ImageLabeled_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc),
    img(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
    }
  }

  // field types and members
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;
  using _img_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _img_type img;

  // setters for named parameter idiom
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__img(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->img = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::ImageLabeled_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::ImageLabeled_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::ImageLabeled_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::ImageLabeled_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::ImageLabeled_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::ImageLabeled_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::ImageLabeled_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::ImageLabeled_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::ImageLabeled_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::ImageLabeled_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__ImageLabeled
    std::shared_ptr<mrs_msgs::msg::ImageLabeled_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__ImageLabeled
    std::shared_ptr<mrs_msgs::msg::ImageLabeled_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageLabeled_ & other) const
  {
    if (this->label != other.label) {
      return false;
    }
    if (this->img != other.img) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageLabeled_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageLabeled_

// alias to use template instance with default allocator
using ImageLabeled =
  mrs_msgs::msg::ImageLabeled_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__IMAGE_LABELED__STRUCT_HPP_
