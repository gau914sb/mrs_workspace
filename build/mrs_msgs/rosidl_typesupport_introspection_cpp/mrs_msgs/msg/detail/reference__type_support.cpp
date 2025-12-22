// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrs_msgs:msg/Reference.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrs_msgs/msg/detail/reference__functions.h"
#include "mrs_msgs/msg/detail/reference__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mrs_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Reference_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrs_msgs::msg::Reference(_init);
}

void Reference_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrs_msgs::msg::Reference *>(message_memory);
  typed_message->~Reference();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Reference_message_member_array[2] = {
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::Reference, position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "heading",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::Reference, heading),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Reference_message_members = {
  "mrs_msgs::msg",  // message namespace
  "Reference",  // message name
  2,  // number of fields
  sizeof(mrs_msgs::msg::Reference),
  false,  // has_any_key_member_
  Reference_message_member_array,  // message members
  Reference_init_function,  // function to initialize message memory (memory has to be allocated)
  Reference_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Reference_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Reference_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__Reference__get_type_hash,
  &mrs_msgs__msg__Reference__get_type_description,
  &mrs_msgs__msg__Reference__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mrs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::msg::Reference>()
{
  return &::mrs_msgs::msg::rosidl_typesupport_introspection_cpp::Reference_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, msg, Reference)() {
  return &::mrs_msgs::msg::rosidl_typesupport_introspection_cpp::Reference_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
