// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrs_msgs:srv/TrajectoryReferenceSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/trajectory_reference_srv.hpp"


#ifndef MRS_MSGS__SRV__DETAIL__TRAJECTORY_REFERENCE_SRV__STRUCT_HPP_
#define MRS_MSGS__SRV__DETAIL__TRAJECTORY_REFERENCE_SRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trajectory'
#include "mrs_msgs/msg/detail/trajectory_reference__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__srv__TrajectoryReferenceSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__srv__TrajectoryReferenceSrv_Request __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrajectoryReferenceSrv_Request_
{
  using Type = TrajectoryReferenceSrv_Request_<ContainerAllocator>;

  explicit TrajectoryReferenceSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_init)
  {
    (void)_init;
  }

  explicit TrajectoryReferenceSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _trajectory_type =
    mrs_msgs::msg::TrajectoryReference_<ContainerAllocator>;
  _trajectory_type trajectory;

  // setters for named parameter idiom
  Type & set__trajectory(
    const mrs_msgs::msg::TrajectoryReference_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::srv::TrajectoryReferenceSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::srv::TrajectoryReferenceSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::srv::TrajectoryReferenceSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::srv::TrajectoryReferenceSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__srv__TrajectoryReferenceSrv_Request
    std::shared_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__srv__TrajectoryReferenceSrv_Request
    std::shared_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryReferenceSrv_Request_ & other) const
  {
    if (this->trajectory != other.trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryReferenceSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryReferenceSrv_Request_

// alias to use template instance with default allocator
using TrajectoryReferenceSrv_Request =
  mrs_msgs::srv::TrajectoryReferenceSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mrs_msgs


#ifndef _WIN32
# define DEPRECATED__mrs_msgs__srv__TrajectoryReferenceSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__srv__TrajectoryReferenceSrv_Response __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrajectoryReferenceSrv_Response_
{
  using Type = TrajectoryReferenceSrv_Response_<ContainerAllocator>;

  explicit TrajectoryReferenceSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->modified = false;
    }
  }

  explicit TrajectoryReferenceSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->modified = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _modified_type =
    bool;
  _modified_type modified;
  using _tracker_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _tracker_names_type tracker_names;
  using _tracker_successes_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _tracker_successes_type tracker_successes;
  using _tracker_messages_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _tracker_messages_type tracker_messages;

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
  Type & set__modified(
    const bool & _arg)
  {
    this->modified = _arg;
    return *this;
  }
  Type & set__tracker_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->tracker_names = _arg;
    return *this;
  }
  Type & set__tracker_successes(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->tracker_successes = _arg;
    return *this;
  }
  Type & set__tracker_messages(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->tracker_messages = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::srv::TrajectoryReferenceSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::srv::TrajectoryReferenceSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::srv::TrajectoryReferenceSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::srv::TrajectoryReferenceSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__srv__TrajectoryReferenceSrv_Response
    std::shared_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__srv__TrajectoryReferenceSrv_Response
    std::shared_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryReferenceSrv_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->modified != other.modified) {
      return false;
    }
    if (this->tracker_names != other.tracker_names) {
      return false;
    }
    if (this->tracker_successes != other.tracker_successes) {
      return false;
    }
    if (this->tracker_messages != other.tracker_messages) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryReferenceSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryReferenceSrv_Response_

// alias to use template instance with default allocator
using TrajectoryReferenceSrv_Response =
  mrs_msgs::srv::TrajectoryReferenceSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mrs_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrs_msgs__srv__TrajectoryReferenceSrv_Event __attribute__((deprecated))
#else
# define DEPRECATED__mrs_msgs__srv__TrajectoryReferenceSrv_Event __declspec(deprecated)
#endif

namespace mrs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrajectoryReferenceSrv_Event_
{
  using Type = TrajectoryReferenceSrv_Event_<ContainerAllocator>;

  explicit TrajectoryReferenceSrv_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit TrajectoryReferenceSrv_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<mrs_msgs::srv::TrajectoryReferenceSrv_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::srv::TrajectoryReferenceSrv_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<mrs_msgs::srv::TrajectoryReferenceSrv_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::srv::TrajectoryReferenceSrv_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<mrs_msgs::srv::TrajectoryReferenceSrv_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::srv::TrajectoryReferenceSrv_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<mrs_msgs::srv::TrajectoryReferenceSrv_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrs_msgs::srv::TrajectoryReferenceSrv_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrs_msgs::srv::TrajectoryReferenceSrv_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrs_msgs::srv::TrajectoryReferenceSrv_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::srv::TrajectoryReferenceSrv_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrs_msgs::srv::TrajectoryReferenceSrv_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrs_msgs__srv__TrajectoryReferenceSrv_Event
    std::shared_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrs_msgs__srv__TrajectoryReferenceSrv_Event
    std::shared_ptr<mrs_msgs::srv::TrajectoryReferenceSrv_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryReferenceSrv_Event_ & other) const
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
  bool operator!=(const TrajectoryReferenceSrv_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryReferenceSrv_Event_

// alias to use template instance with default allocator
using TrajectoryReferenceSrv_Event =
  mrs_msgs::srv::TrajectoryReferenceSrv_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mrs_msgs

namespace mrs_msgs
{

namespace srv
{

struct TrajectoryReferenceSrv
{
  using Request = mrs_msgs::srv::TrajectoryReferenceSrv_Request;
  using Response = mrs_msgs::srv::TrajectoryReferenceSrv_Response;
  using Event = mrs_msgs::srv::TrajectoryReferenceSrv_Event;
};

}  // namespace srv

}  // namespace mrs_msgs

#endif  // MRS_MSGS__SRV__DETAIL__TRAJECTORY_REFERENCE_SRV__STRUCT_HPP_
