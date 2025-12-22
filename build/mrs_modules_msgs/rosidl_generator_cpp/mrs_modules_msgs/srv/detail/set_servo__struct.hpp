// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_modules_msgs:srv/SetServo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/srv/set_servo.hpp"


#ifndef MRS_MODULES_MSGS__SRV__DETAIL__SET_SERVO__STRUCT_HPP_
#define MRS_MODULES_MSGS__SRV__DETAIL__SET_SERVO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrs_modules_msgs__srv__SetServo_Request __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__srv__SetServo_Request __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetServo_Request_
{
  using Type = SetServo_Request_<ContainerAllocator>;

  explicit SetServo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo1_val = 0;
      this->servo2_val = 0;
    }
  }

  explicit SetServo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo1_val = 0;
      this->servo2_val = 0;
    }
  }

  // field types and members
  using _servo1_val_type =
    uint16_t;
  _servo1_val_type servo1_val;
  using _servo2_val_type =
    uint16_t;
  _servo2_val_type servo2_val;

  // setters for named parameter idiom
  Type & set__servo1_val(
    const uint16_t & _arg)
  {
    this->servo1_val = _arg;
    return *this;
  }
  Type & set__servo2_val(
    const uint16_t & _arg)
  {
    this->servo2_val = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_modules_msgs::srv::SetServo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::srv::SetServo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::srv::SetServo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::srv::SetServo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::srv::SetServo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::srv::SetServo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::srv::SetServo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::srv::SetServo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::srv::SetServo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::srv::SetServo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__srv__SetServo_Request
    std::shared_ptr<mrs_modules_msgs::srv::SetServo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__srv__SetServo_Request
    std::shared_ptr<mrs_modules_msgs::srv::SetServo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetServo_Request_ & other) const
  {
    if (this->servo1_val != other.servo1_val) {
      return false;
    }
    if (this->servo2_val != other.servo2_val) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetServo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetServo_Request_

// alias to use template instance with default allocator
using SetServo_Request =
  mrs_modules_msgs::srv::SetServo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mrs_modules_msgs


#ifndef _WIN32
# define DEPRECATED__mrs_modules_msgs__srv__SetServo_Response __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__srv__SetServo_Response __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetServo_Response_
{
  using Type = SetServo_Response_<ContainerAllocator>;

  explicit SetServo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetServo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mrs_modules_msgs::srv::SetServo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::srv::SetServo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::srv::SetServo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::srv::SetServo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::srv::SetServo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::srv::SetServo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::srv::SetServo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::srv::SetServo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::srv::SetServo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::srv::SetServo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__srv__SetServo_Response
    std::shared_ptr<mrs_modules_msgs::srv::SetServo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__srv__SetServo_Response
    std::shared_ptr<mrs_modules_msgs::srv::SetServo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetServo_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetServo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetServo_Response_

// alias to use template instance with default allocator
using SetServo_Response =
  mrs_modules_msgs::srv::SetServo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mrs_modules_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_modules_msgs__srv__SetServo_Event __attribute__((deprecated))
#else
# define DEPRECATED__mrs_modules_msgs__srv__SetServo_Event __declspec(deprecated)
#endif

namespace mrs_modules_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetServo_Event_
{
  using Type = SetServo_Event_<ContainerAllocator>;

  explicit SetServo_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetServo_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<mrs_modules_msgs::srv::SetServo_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_modules_msgs::srv::SetServo_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<mrs_modules_msgs::srv::SetServo_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_modules_msgs::srv::SetServo_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<mrs_modules_msgs::srv::SetServo_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_modules_msgs::srv::SetServo_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<mrs_modules_msgs::srv::SetServo_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_modules_msgs::srv::SetServo_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_modules_msgs::srv::SetServo_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_modules_msgs::srv::SetServo_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_modules_msgs::srv::SetServo_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_modules_msgs::srv::SetServo_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::srv::SetServo_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::srv::SetServo_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_modules_msgs::srv::SetServo_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_modules_msgs::srv::SetServo_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_modules_msgs::srv::SetServo_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_modules_msgs::srv::SetServo_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_modules_msgs__srv__SetServo_Event
    std::shared_ptr<mrs_modules_msgs::srv::SetServo_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_modules_msgs__srv__SetServo_Event
    std::shared_ptr<mrs_modules_msgs::srv::SetServo_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetServo_Event_ & other) const
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
  bool operator!=(const SetServo_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetServo_Event_

// alias to use template instance with default allocator
using SetServo_Event =
  mrs_modules_msgs::srv::SetServo_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mrs_modules_msgs

namespace mrs_modules_msgs
{

namespace srv
{

struct SetServo
{
  using Request = mrs_modules_msgs::srv::SetServo_Request;
  using Response = mrs_modules_msgs::srv::SetServo_Response;
  using Event = mrs_modules_msgs::srv::SetServo_Event;
};

}  // namespace srv

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__SRV__DETAIL__SET_SERVO__STRUCT_HPP_
