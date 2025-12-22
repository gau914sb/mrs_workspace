// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:srv/ReferenceStampedSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/reference_stamped_srv.hpp"


#ifndef MRS_MSGS__SRV__DETAIL__REFERENCE_STAMPED_SRV__BUILDER_HPP_
#define MRS_MSGS__SRV__DETAIL__REFERENCE_STAMPED_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/srv/detail/reference_stamped_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_ReferenceStampedSrv_Request_reference
{
public:
  explicit Init_ReferenceStampedSrv_Request_reference(::mrs_msgs::srv::ReferenceStampedSrv_Request & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::ReferenceStampedSrv_Request reference(::mrs_msgs::srv::ReferenceStampedSrv_Request::_reference_type arg)
  {
    msg_.reference = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::ReferenceStampedSrv_Request msg_;
};

class Init_ReferenceStampedSrv_Request_header
{
public:
  Init_ReferenceStampedSrv_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReferenceStampedSrv_Request_reference header(::mrs_msgs::srv::ReferenceStampedSrv_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ReferenceStampedSrv_Request_reference(msg_);
  }

private:
  ::mrs_msgs::srv::ReferenceStampedSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::ReferenceStampedSrv_Request>()
{
  return mrs_msgs::srv::builder::Init_ReferenceStampedSrv_Request_header();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_ReferenceStampedSrv_Response_message
{
public:
  explicit Init_ReferenceStampedSrv_Response_message(::mrs_msgs::srv::ReferenceStampedSrv_Response & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::ReferenceStampedSrv_Response message(::mrs_msgs::srv::ReferenceStampedSrv_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::ReferenceStampedSrv_Response msg_;
};

class Init_ReferenceStampedSrv_Response_success
{
public:
  Init_ReferenceStampedSrv_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReferenceStampedSrv_Response_message success(::mrs_msgs::srv::ReferenceStampedSrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ReferenceStampedSrv_Response_message(msg_);
  }

private:
  ::mrs_msgs::srv::ReferenceStampedSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::ReferenceStampedSrv_Response>()
{
  return mrs_msgs::srv::builder::Init_ReferenceStampedSrv_Response_success();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_ReferenceStampedSrv_Event_response
{
public:
  explicit Init_ReferenceStampedSrv_Event_response(::mrs_msgs::srv::ReferenceStampedSrv_Event & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::ReferenceStampedSrv_Event response(::mrs_msgs::srv::ReferenceStampedSrv_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::ReferenceStampedSrv_Event msg_;
};

class Init_ReferenceStampedSrv_Event_request
{
public:
  explicit Init_ReferenceStampedSrv_Event_request(::mrs_msgs::srv::ReferenceStampedSrv_Event & msg)
  : msg_(msg)
  {}
  Init_ReferenceStampedSrv_Event_response request(::mrs_msgs::srv::ReferenceStampedSrv_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ReferenceStampedSrv_Event_response(msg_);
  }

private:
  ::mrs_msgs::srv::ReferenceStampedSrv_Event msg_;
};

class Init_ReferenceStampedSrv_Event_info
{
public:
  Init_ReferenceStampedSrv_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReferenceStampedSrv_Event_request info(::mrs_msgs::srv::ReferenceStampedSrv_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ReferenceStampedSrv_Event_request(msg_);
  }

private:
  ::mrs_msgs::srv::ReferenceStampedSrv_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::ReferenceStampedSrv_Event>()
{
  return mrs_msgs::srv::builder::Init_ReferenceStampedSrv_Event_info();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__SRV__DETAIL__REFERENCE_STAMPED_SRV__BUILDER_HPP_
