// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrs_msgs:srv/TransformPoseSrv.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrs_msgs/srv/detail/transform_pose_srv__functions.h"
#include "mrs_msgs/srv/detail/transform_pose_srv__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mrs_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TransformPoseSrv_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrs_msgs::srv::TransformPoseSrv_Request(_init);
}

void TransformPoseSrv_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrs_msgs::srv::TransformPoseSrv_Request *>(message_memory);
  typed_message->~TransformPoseSrv_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TransformPoseSrv_Request_message_member_array[2] = {
  {
    "frame_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::srv::TransformPoseSrv_Request, frame_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseStamped>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::srv::TransformPoseSrv_Request, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TransformPoseSrv_Request_message_members = {
  "mrs_msgs::srv",  // message namespace
  "TransformPoseSrv_Request",  // message name
  2,  // number of fields
  sizeof(mrs_msgs::srv::TransformPoseSrv_Request),
  false,  // has_any_key_member_
  TransformPoseSrv_Request_message_member_array,  // message members
  TransformPoseSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TransformPoseSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TransformPoseSrv_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TransformPoseSrv_Request_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__srv__TransformPoseSrv_Request__get_type_hash,
  &mrs_msgs__srv__TransformPoseSrv_Request__get_type_description,
  &mrs_msgs__srv__TransformPoseSrv_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mrs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::srv::TransformPoseSrv_Request>()
{
  return &::mrs_msgs::srv::rosidl_typesupport_introspection_cpp::TransformPoseSrv_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, srv, TransformPoseSrv_Request)() {
  return &::mrs_msgs::srv::rosidl_typesupport_introspection_cpp::TransformPoseSrv_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "mrs_msgs/srv/detail/transform_pose_srv__functions.h"
// already included above
// #include "mrs_msgs/srv/detail/transform_pose_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mrs_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TransformPoseSrv_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrs_msgs::srv::TransformPoseSrv_Response(_init);
}

void TransformPoseSrv_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrs_msgs::srv::TransformPoseSrv_Response *>(message_memory);
  typed_message->~TransformPoseSrv_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TransformPoseSrv_Response_message_member_array[3] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::srv::TransformPoseSrv_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::srv::TransformPoseSrv_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseStamped>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::srv::TransformPoseSrv_Response, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TransformPoseSrv_Response_message_members = {
  "mrs_msgs::srv",  // message namespace
  "TransformPoseSrv_Response",  // message name
  3,  // number of fields
  sizeof(mrs_msgs::srv::TransformPoseSrv_Response),
  false,  // has_any_key_member_
  TransformPoseSrv_Response_message_member_array,  // message members
  TransformPoseSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TransformPoseSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TransformPoseSrv_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TransformPoseSrv_Response_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__srv__TransformPoseSrv_Response__get_type_hash,
  &mrs_msgs__srv__TransformPoseSrv_Response__get_type_description,
  &mrs_msgs__srv__TransformPoseSrv_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mrs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::srv::TransformPoseSrv_Response>()
{
  return &::mrs_msgs::srv::rosidl_typesupport_introspection_cpp::TransformPoseSrv_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, srv, TransformPoseSrv_Response)() {
  return &::mrs_msgs::srv::rosidl_typesupport_introspection_cpp::TransformPoseSrv_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "mrs_msgs/srv/detail/transform_pose_srv__functions.h"
// already included above
// #include "mrs_msgs/srv/detail/transform_pose_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mrs_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TransformPoseSrv_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrs_msgs::srv::TransformPoseSrv_Event(_init);
}

void TransformPoseSrv_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrs_msgs::srv::TransformPoseSrv_Event *>(message_memory);
  typed_message->~TransformPoseSrv_Event();
}

size_t size_function__TransformPoseSrv_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mrs_msgs::srv::TransformPoseSrv_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TransformPoseSrv_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mrs_msgs::srv::TransformPoseSrv_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__TransformPoseSrv_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mrs_msgs::srv::TransformPoseSrv_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__TransformPoseSrv_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mrs_msgs::srv::TransformPoseSrv_Request *>(
    get_const_function__TransformPoseSrv_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<mrs_msgs::srv::TransformPoseSrv_Request *>(untyped_value);
  value = item;
}

void assign_function__TransformPoseSrv_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mrs_msgs::srv::TransformPoseSrv_Request *>(
    get_function__TransformPoseSrv_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const mrs_msgs::srv::TransformPoseSrv_Request *>(untyped_value);
  item = value;
}

void resize_function__TransformPoseSrv_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mrs_msgs::srv::TransformPoseSrv_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TransformPoseSrv_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mrs_msgs::srv::TransformPoseSrv_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TransformPoseSrv_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mrs_msgs::srv::TransformPoseSrv_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__TransformPoseSrv_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mrs_msgs::srv::TransformPoseSrv_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__TransformPoseSrv_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mrs_msgs::srv::TransformPoseSrv_Response *>(
    get_const_function__TransformPoseSrv_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<mrs_msgs::srv::TransformPoseSrv_Response *>(untyped_value);
  value = item;
}

void assign_function__TransformPoseSrv_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mrs_msgs::srv::TransformPoseSrv_Response *>(
    get_function__TransformPoseSrv_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const mrs_msgs::srv::TransformPoseSrv_Response *>(untyped_value);
  item = value;
}

void resize_function__TransformPoseSrv_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mrs_msgs::srv::TransformPoseSrv_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TransformPoseSrv_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::srv::TransformPoseSrv_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrs_msgs::srv::TransformPoseSrv_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mrs_msgs::srv::TransformPoseSrv_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__TransformPoseSrv_Event__request,  // size() function pointer
    get_const_function__TransformPoseSrv_Event__request,  // get_const(index) function pointer
    get_function__TransformPoseSrv_Event__request,  // get(index) function pointer
    fetch_function__TransformPoseSrv_Event__request,  // fetch(index, &value) function pointer
    assign_function__TransformPoseSrv_Event__request,  // assign(index, value) function pointer
    resize_function__TransformPoseSrv_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrs_msgs::srv::TransformPoseSrv_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mrs_msgs::srv::TransformPoseSrv_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__TransformPoseSrv_Event__response,  // size() function pointer
    get_const_function__TransformPoseSrv_Event__response,  // get_const(index) function pointer
    get_function__TransformPoseSrv_Event__response,  // get(index) function pointer
    fetch_function__TransformPoseSrv_Event__response,  // fetch(index, &value) function pointer
    assign_function__TransformPoseSrv_Event__response,  // assign(index, value) function pointer
    resize_function__TransformPoseSrv_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TransformPoseSrv_Event_message_members = {
  "mrs_msgs::srv",  // message namespace
  "TransformPoseSrv_Event",  // message name
  3,  // number of fields
  sizeof(mrs_msgs::srv::TransformPoseSrv_Event),
  false,  // has_any_key_member_
  TransformPoseSrv_Event_message_member_array,  // message members
  TransformPoseSrv_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  TransformPoseSrv_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TransformPoseSrv_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TransformPoseSrv_Event_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__srv__TransformPoseSrv_Event__get_type_hash,
  &mrs_msgs__srv__TransformPoseSrv_Event__get_type_description,
  &mrs_msgs__srv__TransformPoseSrv_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mrs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::srv::TransformPoseSrv_Event>()
{
  return &::mrs_msgs::srv::rosidl_typesupport_introspection_cpp::TransformPoseSrv_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, srv, TransformPoseSrv_Event)() {
  return &::mrs_msgs::srv::rosidl_typesupport_introspection_cpp::TransformPoseSrv_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "mrs_msgs/srv/detail/transform_pose_srv__functions.h"
// already included above
// #include "mrs_msgs/srv/detail/transform_pose_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace mrs_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TransformPoseSrv_service_members = {
  "mrs_msgs::srv",  // service namespace
  "TransformPoseSrv",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<mrs_msgs::srv::TransformPoseSrv>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t TransformPoseSrv_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TransformPoseSrv_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrs_msgs::srv::TransformPoseSrv_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrs_msgs::srv::TransformPoseSrv_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrs_msgs::srv::TransformPoseSrv_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mrs_msgs::srv::TransformPoseSrv>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mrs_msgs::srv::TransformPoseSrv>,
  &mrs_msgs__srv__TransformPoseSrv__get_type_hash,
  &mrs_msgs__srv__TransformPoseSrv__get_type_description,
  &mrs_msgs__srv__TransformPoseSrv__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mrs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mrs_msgs::srv::TransformPoseSrv>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::mrs_msgs::srv::rosidl_typesupport_introspection_cpp::TransformPoseSrv_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::mrs_msgs::srv::TransformPoseSrv_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::mrs_msgs::srv::TransformPoseSrv_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::mrs_msgs::srv::TransformPoseSrv_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, srv, TransformPoseSrv)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<mrs_msgs::srv::TransformPoseSrv>();
}

#ifdef __cplusplus
}
#endif
