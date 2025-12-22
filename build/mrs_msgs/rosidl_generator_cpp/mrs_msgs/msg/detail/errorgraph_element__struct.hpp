// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/ErrorgraphElement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/errorgraph_element.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT__STRUCT_HPP_

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
// Member 'source_node'
#include "mrs_msgs/msg/detail/errorgraph_node_id__struct.hpp"
// Member 'errors'
#include "mrs_msgs/msg/detail/errorgraph_error__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__ErrorgraphElement __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__ErrorgraphElement __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ErrorgraphElement_
{
  using Type = ErrorgraphElement_<ContainerAllocator>;

  explicit ErrorgraphElement_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    source_node(_init)
  {
    (void)_init;
  }

  explicit ErrorgraphElement_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    source_node(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _source_node_type =
    mrs_msgs::msg::ErrorgraphNodeID_<ContainerAllocator>;
  _source_node_type source_node;
  using _errors_type =
    std::vector<mrs_msgs::msg::ErrorgraphError_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::msg::ErrorgraphError_<ContainerAllocator>>>;
  _errors_type errors;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__source_node(
    const mrs_msgs::msg::ErrorgraphNodeID_<ContainerAllocator> & _arg)
  {
    this->source_node = _arg;
    return *this;
  }
  Type & set__errors(
    const std::vector<mrs_msgs::msg::ErrorgraphError_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::msg::ErrorgraphError_<ContainerAllocator>>> & _arg)
  {
    this->errors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::ErrorgraphElement_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::ErrorgraphElement_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::ErrorgraphElement_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::ErrorgraphElement_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::ErrorgraphElement_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::ErrorgraphElement_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::ErrorgraphElement_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::ErrorgraphElement_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::ErrorgraphElement_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::ErrorgraphElement_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__ErrorgraphElement
    std::shared_ptr<mrs_msgs::msg::ErrorgraphElement_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__ErrorgraphElement
    std::shared_ptr<mrs_msgs::msg::ErrorgraphElement_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ErrorgraphElement_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->source_node != other.source_node) {
      return false;
    }
    if (this->errors != other.errors) {
      return false;
    }
    return true;
  }
  bool operator!=(const ErrorgraphElement_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ErrorgraphElement_

// alias to use template instance with default allocator
using ErrorgraphElement =
  mrs_msgs::msg::ErrorgraphElement_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT__STRUCT_HPP_
