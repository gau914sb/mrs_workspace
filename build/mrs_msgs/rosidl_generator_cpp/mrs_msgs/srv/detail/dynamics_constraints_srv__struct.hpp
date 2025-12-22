// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:srv/DynamicsConstraintsSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/dynamics_constraints_srv.hpp"


#ifndef MRS_MSGS__SRV__DETAIL__DYNAMICS_CONSTRAINTS_SRV__STRUCT_HPP_
#define MRS_MSGS__SRV__DETAIL__DYNAMICS_CONSTRAINTS_SRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'constraints'
#include "mrs_msgs/msg/detail/dynamics_constraints__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__srv__DynamicsConstraintsSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__srv__DynamicsConstraintsSrv_Request __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DynamicsConstraintsSrv_Request_
{
  using Type = DynamicsConstraintsSrv_Request_<ContainerAllocator>;

  explicit DynamicsConstraintsSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : constraints(_init)
  {
    (void)_init;
  }

  explicit DynamicsConstraintsSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : constraints(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _constraints_type =
    mrs_msgs::msg::DynamicsConstraints_<ContainerAllocator>;
  _constraints_type constraints;

  // setters for named parameter idiom
  Type & set__constraints(
    const mrs_msgs::msg::DynamicsConstraints_<ContainerAllocator> & _arg)
  {
    this->constraints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::srv::DynamicsConstraintsSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::srv::DynamicsConstraintsSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::srv::DynamicsConstraintsSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::srv::DynamicsConstraintsSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__srv__DynamicsConstraintsSrv_Request
    std::shared_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__srv__DynamicsConstraintsSrv_Request
    std::shared_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamicsConstraintsSrv_Request_ & other) const
  {
    if (this->constraints != other.constraints) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamicsConstraintsSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamicsConstraintsSrv_Request_

// alias to use template instance with default allocator
using DynamicsConstraintsSrv_Request =
  mrs_msgs::srv::DynamicsConstraintsSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mrs_msgs


#ifndef _WIN32
# define DEPRECATED__mrs_msgs__srv__DynamicsConstraintsSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__srv__DynamicsConstraintsSrv_Response __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DynamicsConstraintsSrv_Response_
{
  using Type = DynamicsConstraintsSrv_Response_<ContainerAllocator>;

  explicit DynamicsConstraintsSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit DynamicsConstraintsSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::srv::DynamicsConstraintsSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::srv::DynamicsConstraintsSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::srv::DynamicsConstraintsSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::srv::DynamicsConstraintsSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__srv__DynamicsConstraintsSrv_Response
    std::shared_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__srv__DynamicsConstraintsSrv_Response
    std::shared_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamicsConstraintsSrv_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamicsConstraintsSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamicsConstraintsSrv_Response_

// alias to use template instance with default allocator
using DynamicsConstraintsSrv_Response =
  mrs_msgs::srv::DynamicsConstraintsSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mrs_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__srv__DynamicsConstraintsSrv_Event __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__srv__DynamicsConstraintsSrv_Event __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DynamicsConstraintsSrv_Event_
{
  using Type = DynamicsConstraintsSrv_Event_<ContainerAllocator>;

  explicit DynamicsConstraintsSrv_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit DynamicsConstraintsSrv_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<mrs_msgs::srv::DynamicsConstraintsSrv_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::srv::DynamicsConstraintsSrv_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<mrs_msgs::srv::DynamicsConstraintsSrv_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::srv::DynamicsConstraintsSrv_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<mrs_msgs::srv::DynamicsConstraintsSrv_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::srv::DynamicsConstraintsSrv_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<mrs_msgs::srv::DynamicsConstraintsSrv_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::srv::DynamicsConstraintsSrv_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::srv::DynamicsConstraintsSrv_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::srv::DynamicsConstraintsSrv_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::srv::DynamicsConstraintsSrv_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::srv::DynamicsConstraintsSrv_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__srv__DynamicsConstraintsSrv_Event
    std::shared_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__srv__DynamicsConstraintsSrv_Event
    std::shared_ptr<mrs_msgs::srv::DynamicsConstraintsSrv_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamicsConstraintsSrv_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamicsConstraintsSrv_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamicsConstraintsSrv_Event_

// alias to use template instance with default allocator
using DynamicsConstraintsSrv_Event =
  mrs_msgs::srv::DynamicsConstraintsSrv_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mrs_msgs

namespace mrs_msgs
{

namespace srv
{

struct DynamicsConstraintsSrv
{
  using Request = mrs_msgs::srv::DynamicsConstraintsSrv_Request;
  using Response = mrs_msgs::srv::DynamicsConstraintsSrv_Response;
  using Event = mrs_msgs::srv::DynamicsConstraintsSrv_Event;
};

}  // namespace srv

}  // namespace mrs_msgs

#endif  // MRS_MSGS__SRV__DETAIL__DYNAMICS_CONSTRAINTS_SRV__STRUCT_HPP_
