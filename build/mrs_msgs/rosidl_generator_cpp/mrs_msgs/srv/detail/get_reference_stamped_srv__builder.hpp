// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:srv/GetReferenceStampedSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/get_reference_stamped_srv.hpp"


#ifndef MRS_MSGS__SRV__DETAIL__GET_REFERENCE_STAMPED_SRV__BUILDER_HPP_
#define MRS_MSGS__SRV__DETAIL__GET_REFERENCE_STAMPED_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/srv/detail/get_reference_stamped_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::GetReferenceStampedSrv_Request>()
{
  return ::mrs_msgs::srv::GetReferenceStampedSrv_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_GetReferenceStampedSrv_Response_message
{
public:
  explicit Init_GetReferenceStampedSrv_Response_message(::mrs_msgs::srv::GetReferenceStampedSrv_Response & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::GetReferenceStampedSrv_Response message(::mrs_msgs::srv::GetReferenceStampedSrv_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::GetReferenceStampedSrv_Response msg_;
};

class Init_GetReferenceStampedSrv_Response_success
{
public:
  explicit Init_GetReferenceStampedSrv_Response_success(::mrs_msgs::srv::GetReferenceStampedSrv_Response & msg)
  : msg_(msg)
  {}
  Init_GetReferenceStampedSrv_Response_message success(::mrs_msgs::srv::GetReferenceStampedSrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetReferenceStampedSrv_Response_message(msg_);
  }

private:
  ::mrs_msgs::srv::GetReferenceStampedSrv_Response msg_;
};

class Init_GetReferenceStampedSrv_Response_reference
{
public:
  Init_GetReferenceStampedSrv_Response_reference()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetReferenceStampedSrv_Response_success reference(::mrs_msgs::srv::GetReferenceStampedSrv_Response::_reference_type arg)
  {
    msg_.reference = std::move(arg);
    return Init_GetReferenceStampedSrv_Response_success(msg_);
  }

private:
  ::mrs_msgs::srv::GetReferenceStampedSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::GetReferenceStampedSrv_Response>()
{
  return mrs_msgs::srv::builder::Init_GetReferenceStampedSrv_Response_reference();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_GetReferenceStampedSrv_Event_response
{
public:
  explicit Init_GetReferenceStampedSrv_Event_response(::mrs_msgs::srv::GetReferenceStampedSrv_Event & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::GetReferenceStampedSrv_Event response(::mrs_msgs::srv::GetReferenceStampedSrv_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::GetReferenceStampedSrv_Event msg_;
};

class Init_GetReferenceStampedSrv_Event_request
{
public:
  explicit Init_GetReferenceStampedSrv_Event_request(::mrs_msgs::srv::GetReferenceStampedSrv_Event & msg)
  : msg_(msg)
  {}
  Init_GetReferenceStampedSrv_Event_response request(::mrs_msgs::srv::GetReferenceStampedSrv_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetReferenceStampedSrv_Event_response(msg_);
  }

private:
  ::mrs_msgs::srv::GetReferenceStampedSrv_Event msg_;
};

class Init_GetReferenceStampedSrv_Event_info
{
public:
  Init_GetReferenceStampedSrv_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetReferenceStampedSrv_Event_request info(::mrs_msgs::srv::GetReferenceStampedSrv_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetReferenceStampedSrv_Event_request(msg_);
  }

private:
  ::mrs_msgs::srv::GetReferenceStampedSrv_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::GetReferenceStampedSrv_Event>()
{
  return mrs_msgs::srv::builder::Init_GetReferenceStampedSrv_Event_info();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__SRV__DETAIL__GET_REFERENCE_STAMPED_SRV__BUILDER_HPP_
