// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:msg/NodeCpuLoad.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/node_cpu_load.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__NODE_CPU_LOAD__STRUCT_HPP_
#define MRS_MSGS__MSG__DETAIL__NODE_CPU_LOAD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrs_msgs__msg__NodeCpuLoad __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__msg__NodeCpuLoad __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeCpuLoad_
{
  using Type = NodeCpuLoad_<ContainerAllocator>;

  explicit NodeCpuLoad_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit NodeCpuLoad_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _node_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _node_names_type node_names;
  using _cpu_loads_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _cpu_loads_type cpu_loads;

  // setters for named parameter idiom
  Type & set__node_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->node_names = _arg;
    return *this;
  }
  Type & set__cpu_loads(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->cpu_loads = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::msg::NodeCpuLoad_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::msg::NodeCpuLoad_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::msg::NodeCpuLoad_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::msg::NodeCpuLoad_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::NodeCpuLoad_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::NodeCpuLoad_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::msg::NodeCpuLoad_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::msg::NodeCpuLoad_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::msg::NodeCpuLoad_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::msg::NodeCpuLoad_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__msg__NodeCpuLoad
    std::shared_ptr<mrs_msgs::msg::NodeCpuLoad_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__msg__NodeCpuLoad
    std::shared_ptr<mrs_msgs::msg::NodeCpuLoad_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeCpuLoad_ & other) const
  {
    if (this->node_names != other.node_names) {
      return false;
    }
    if (this->cpu_loads != other.cpu_loads) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeCpuLoad_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeCpuLoad_

// alias to use template instance with default allocator
using NodeCpuLoad =
  mrs_msgs::msg::NodeCpuLoad_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__NODE_CPU_LOAD__STRUCT_HPP_
