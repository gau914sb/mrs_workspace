// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrs_msgs:srv/TrajectoryReferenceSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrs_msgs/srv/detail/trajectory_reference_srv__rosidl_typesupport_introspection_c.h"
#include "mrs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrs_msgs/srv/detail/trajectory_reference_srv__functions.h"
#include "mrs_msgs/srv/detail/trajectory_reference_srv__struct.h"


// Include directives for member types
// Member `trajectory`
#include "mrs_msgs/msg/trajectory_reference.h"
// Member `trajectory`
#include "mrs_msgs/msg/detail/trajectory_reference__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_msgs__srv__TrajectoryReferenceSrv_Request__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_msgs__srv__TrajectoryReferenceSrv_Request__init(message_memory);
}

void mrs_msgs__srv__TrajectoryReferenceSrv_Request__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Request_fini_function(void * message_memory)
{
  mrs_msgs__srv__TrajectoryReferenceSrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mrs_msgs__srv__TrajectoryReferenceSrv_Request__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Request_message_member_array[1] = {
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__srv__TrajectoryReferenceSrv_Request, trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_msgs__srv__TrajectoryReferenceSrv_Request__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Request_message_members = {
  "mrs_msgs__srv",  // message namespace
  "TrajectoryReferenceSrv_Request",  // message name
  1,  // number of fields
  sizeof(mrs_msgs__srv__TrajectoryReferenceSrv_Request),
  false,  // has_any_key_member_
  mrs_msgs__srv__TrajectoryReferenceSrv_Request__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Request_message_member_array,  // message members
  mrs_msgs__srv__TrajectoryReferenceSrv_Request__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_msgs__srv__TrajectoryReferenceSrv_Request__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_msgs__srv__TrajectoryReferenceSrv_Request__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Request_message_type_support_handle = {
  0,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Request__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Request_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Request__get_type_hash,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Request__get_type_description,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, srv, TrajectoryReferenceSrv_Request)() {
  mrs_msgs__srv__TrajectoryReferenceSrv_Request__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, TrajectoryReference)();
  if (!mrs_msgs__srv__TrajectoryReferenceSrv_Request__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Request_message_type_support_handle.typesupport_identifier) {
    mrs_msgs__srv__TrajectoryReferenceSrv_Request__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_msgs__srv__TrajectoryReferenceSrv_Request__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mrs_msgs/srv/detail/trajectory_reference_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mrs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mrs_msgs/srv/detail/trajectory_reference_srv__functions.h"
// already included above
// #include "mrs_msgs/srv/detail/trajectory_reference_srv__struct.h"


// Include directives for member types
// Member `message`
// Member `tracker_names`
// Member `tracker_messages`
#include "rosidl_runtime_c/string_functions.h"
// Member `tracker_successes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_msgs__srv__TrajectoryReferenceSrv_Response__init(message_memory);
}

void mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Response_fini_function(void * message_memory)
{
  mrs_msgs__srv__TrajectoryReferenceSrv_Response__fini(message_memory);
}

size_t mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__size_function__TrajectoryReferenceSrv_Response__tracker_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__get_const_function__TrajectoryReferenceSrv_Response__tracker_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__get_function__TrajectoryReferenceSrv_Response__tracker_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__fetch_function__TrajectoryReferenceSrv_Response__tracker_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__get_const_function__TrajectoryReferenceSrv_Response__tracker_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__assign_function__TrajectoryReferenceSrv_Response__tracker_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__get_function__TrajectoryReferenceSrv_Response__tracker_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__resize_function__TrajectoryReferenceSrv_Response__tracker_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__size_function__TrajectoryReferenceSrv_Response__tracker_successes(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__get_const_function__TrajectoryReferenceSrv_Response__tracker_successes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__get_function__TrajectoryReferenceSrv_Response__tracker_successes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__fetch_function__TrajectoryReferenceSrv_Response__tracker_successes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__get_const_function__TrajectoryReferenceSrv_Response__tracker_successes(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__assign_function__TrajectoryReferenceSrv_Response__tracker_successes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__get_function__TrajectoryReferenceSrv_Response__tracker_successes(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__resize_function__TrajectoryReferenceSrv_Response__tracker_successes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__size_function__TrajectoryReferenceSrv_Response__tracker_messages(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__get_const_function__TrajectoryReferenceSrv_Response__tracker_messages(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__get_function__TrajectoryReferenceSrv_Response__tracker_messages(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__fetch_function__TrajectoryReferenceSrv_Response__tracker_messages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__get_const_function__TrajectoryReferenceSrv_Response__tracker_messages(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__assign_function__TrajectoryReferenceSrv_Response__tracker_messages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__get_function__TrajectoryReferenceSrv_Response__tracker_messages(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__resize_function__TrajectoryReferenceSrv_Response__tracker_messages(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Response_message_member_array[6] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__srv__TrajectoryReferenceSrv_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__srv__TrajectoryReferenceSrv_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "modified",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__srv__TrajectoryReferenceSrv_Response, modified),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracker_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__srv__TrajectoryReferenceSrv_Response, tracker_names),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__size_function__TrajectoryReferenceSrv_Response__tracker_names,  // size() function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__get_const_function__TrajectoryReferenceSrv_Response__tracker_names,  // get_const(index) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__get_function__TrajectoryReferenceSrv_Response__tracker_names,  // get(index) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__fetch_function__TrajectoryReferenceSrv_Response__tracker_names,  // fetch(index, &value) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__assign_function__TrajectoryReferenceSrv_Response__tracker_names,  // assign(index, value) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__resize_function__TrajectoryReferenceSrv_Response__tracker_names  // resize(index) function pointer
  },
  {
    "tracker_successes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__srv__TrajectoryReferenceSrv_Response, tracker_successes),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__size_function__TrajectoryReferenceSrv_Response__tracker_successes,  // size() function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__get_const_function__TrajectoryReferenceSrv_Response__tracker_successes,  // get_const(index) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__get_function__TrajectoryReferenceSrv_Response__tracker_successes,  // get(index) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__fetch_function__TrajectoryReferenceSrv_Response__tracker_successes,  // fetch(index, &value) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__assign_function__TrajectoryReferenceSrv_Response__tracker_successes,  // assign(index, value) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__resize_function__TrajectoryReferenceSrv_Response__tracker_successes  // resize(index) function pointer
  },
  {
    "tracker_messages",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__srv__TrajectoryReferenceSrv_Response, tracker_messages),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__size_function__TrajectoryReferenceSrv_Response__tracker_messages,  // size() function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__get_const_function__TrajectoryReferenceSrv_Response__tracker_messages,  // get_const(index) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__get_function__TrajectoryReferenceSrv_Response__tracker_messages,  // get(index) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__fetch_function__TrajectoryReferenceSrv_Response__tracker_messages,  // fetch(index, &value) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__assign_function__TrajectoryReferenceSrv_Response__tracker_messages,  // assign(index, value) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__resize_function__TrajectoryReferenceSrv_Response__tracker_messages  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Response_message_members = {
  "mrs_msgs__srv",  // message namespace
  "TrajectoryReferenceSrv_Response",  // message name
  6,  // number of fields
  sizeof(mrs_msgs__srv__TrajectoryReferenceSrv_Response),
  false,  // has_any_key_member_
  mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Response_message_member_array,  // message members
  mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Response_message_type_support_handle = {
  0,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Response_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Response__get_type_hash,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Response__get_type_description,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, srv, TrajectoryReferenceSrv_Response)() {
  if (!mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Response_message_type_support_handle.typesupport_identifier) {
    mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mrs_msgs/srv/detail/trajectory_reference_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mrs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mrs_msgs/srv/detail/trajectory_reference_srv__functions.h"
// already included above
// #include "mrs_msgs/srv/detail/trajectory_reference_srv__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "mrs_msgs/srv/trajectory_reference_srv.h"
// Member `request`
// Member `response`
// already included above
// #include "mrs_msgs/srv/detail/trajectory_reference_srv__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_msgs__srv__TrajectoryReferenceSrv_Event__init(message_memory);
}

void mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Event_fini_function(void * message_memory)
{
  mrs_msgs__srv__TrajectoryReferenceSrv_Event__fini(message_memory);
}

size_t mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__size_function__TrajectoryReferenceSrv_Event__request(
  const void * untyped_member)
{
  const mrs_msgs__srv__TrajectoryReferenceSrv_Request__Sequence * member =
    (const mrs_msgs__srv__TrajectoryReferenceSrv_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__get_const_function__TrajectoryReferenceSrv_Event__request(
  const void * untyped_member, size_t index)
{
  const mrs_msgs__srv__TrajectoryReferenceSrv_Request__Sequence * member =
    (const mrs_msgs__srv__TrajectoryReferenceSrv_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__get_function__TrajectoryReferenceSrv_Event__request(
  void * untyped_member, size_t index)
{
  mrs_msgs__srv__TrajectoryReferenceSrv_Request__Sequence * member =
    (mrs_msgs__srv__TrajectoryReferenceSrv_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__fetch_function__TrajectoryReferenceSrv_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mrs_msgs__srv__TrajectoryReferenceSrv_Request * item =
    ((const mrs_msgs__srv__TrajectoryReferenceSrv_Request *)
    mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__get_const_function__TrajectoryReferenceSrv_Event__request(untyped_member, index));
  mrs_msgs__srv__TrajectoryReferenceSrv_Request * value =
    (mrs_msgs__srv__TrajectoryReferenceSrv_Request *)(untyped_value);
  *value = *item;
}

void mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__assign_function__TrajectoryReferenceSrv_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mrs_msgs__srv__TrajectoryReferenceSrv_Request * item =
    ((mrs_msgs__srv__TrajectoryReferenceSrv_Request *)
    mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__get_function__TrajectoryReferenceSrv_Event__request(untyped_member, index));
  const mrs_msgs__srv__TrajectoryReferenceSrv_Request * value =
    (const mrs_msgs__srv__TrajectoryReferenceSrv_Request *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__resize_function__TrajectoryReferenceSrv_Event__request(
  void * untyped_member, size_t size)
{
  mrs_msgs__srv__TrajectoryReferenceSrv_Request__Sequence * member =
    (mrs_msgs__srv__TrajectoryReferenceSrv_Request__Sequence *)(untyped_member);
  mrs_msgs__srv__TrajectoryReferenceSrv_Request__Sequence__fini(member);
  return mrs_msgs__srv__TrajectoryReferenceSrv_Request__Sequence__init(member, size);
}

size_t mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__size_function__TrajectoryReferenceSrv_Event__response(
  const void * untyped_member)
{
  const mrs_msgs__srv__TrajectoryReferenceSrv_Response__Sequence * member =
    (const mrs_msgs__srv__TrajectoryReferenceSrv_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__get_const_function__TrajectoryReferenceSrv_Event__response(
  const void * untyped_member, size_t index)
{
  const mrs_msgs__srv__TrajectoryReferenceSrv_Response__Sequence * member =
    (const mrs_msgs__srv__TrajectoryReferenceSrv_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__get_function__TrajectoryReferenceSrv_Event__response(
  void * untyped_member, size_t index)
{
  mrs_msgs__srv__TrajectoryReferenceSrv_Response__Sequence * member =
    (mrs_msgs__srv__TrajectoryReferenceSrv_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__fetch_function__TrajectoryReferenceSrv_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mrs_msgs__srv__TrajectoryReferenceSrv_Response * item =
    ((const mrs_msgs__srv__TrajectoryReferenceSrv_Response *)
    mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__get_const_function__TrajectoryReferenceSrv_Event__response(untyped_member, index));
  mrs_msgs__srv__TrajectoryReferenceSrv_Response * value =
    (mrs_msgs__srv__TrajectoryReferenceSrv_Response *)(untyped_value);
  *value = *item;
}

void mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__assign_function__TrajectoryReferenceSrv_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mrs_msgs__srv__TrajectoryReferenceSrv_Response * item =
    ((mrs_msgs__srv__TrajectoryReferenceSrv_Response *)
    mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__get_function__TrajectoryReferenceSrv_Event__response(untyped_member, index));
  const mrs_msgs__srv__TrajectoryReferenceSrv_Response * value =
    (const mrs_msgs__srv__TrajectoryReferenceSrv_Response *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__resize_function__TrajectoryReferenceSrv_Event__response(
  void * untyped_member, size_t size)
{
  mrs_msgs__srv__TrajectoryReferenceSrv_Response__Sequence * member =
    (mrs_msgs__srv__TrajectoryReferenceSrv_Response__Sequence *)(untyped_member);
  mrs_msgs__srv__TrajectoryReferenceSrv_Response__Sequence__fini(member);
  return mrs_msgs__srv__TrajectoryReferenceSrv_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__srv__TrajectoryReferenceSrv_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mrs_msgs__srv__TrajectoryReferenceSrv_Event, request),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__size_function__TrajectoryReferenceSrv_Event__request,  // size() function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__get_const_function__TrajectoryReferenceSrv_Event__request,  // get_const(index) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__get_function__TrajectoryReferenceSrv_Event__request,  // get(index) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__fetch_function__TrajectoryReferenceSrv_Event__request,  // fetch(index, &value) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__assign_function__TrajectoryReferenceSrv_Event__request,  // assign(index, value) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__resize_function__TrajectoryReferenceSrv_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mrs_msgs__srv__TrajectoryReferenceSrv_Event, response),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__size_function__TrajectoryReferenceSrv_Event__response,  // size() function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__get_const_function__TrajectoryReferenceSrv_Event__response,  // get_const(index) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__get_function__TrajectoryReferenceSrv_Event__response,  // get(index) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__fetch_function__TrajectoryReferenceSrv_Event__response,  // fetch(index, &value) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__assign_function__TrajectoryReferenceSrv_Event__response,  // assign(index, value) function pointer
    mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__resize_function__TrajectoryReferenceSrv_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Event_message_members = {
  "mrs_msgs__srv",  // message namespace
  "TrajectoryReferenceSrv_Event",  // message name
  3,  // number of fields
  sizeof(mrs_msgs__srv__TrajectoryReferenceSrv_Event),
  false,  // has_any_key_member_
  mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Event_message_member_array,  // message members
  mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Event_message_type_support_handle = {
  0,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Event_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Event__get_type_hash,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Event__get_type_description,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, srv, TrajectoryReferenceSrv_Event)() {
  mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, srv, TrajectoryReferenceSrv_Request)();
  mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, srv, TrajectoryReferenceSrv_Response)();
  if (!mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Event_message_type_support_handle.typesupport_identifier) {
    mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mrs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mrs_msgs/srv/detail/trajectory_reference_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mrs_msgs__srv__detail__trajectory_reference_srv__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_service_members = {
  "mrs_msgs__srv",  // service namespace
  "TrajectoryReferenceSrv",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // mrs_msgs__srv__detail__trajectory_reference_srv__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Request_message_type_support_handle,
  NULL,  // response message
  // mrs_msgs__srv__detail__trajectory_reference_srv__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Response_message_type_support_handle
  NULL  // event_message
  // mrs_msgs__srv__detail__trajectory_reference_srv__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Response_message_type_support_handle
};


static rosidl_service_type_support_t mrs_msgs__srv__detail__trajectory_reference_srv__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_service_type_support_handle = {
  0,
  &mrs_msgs__srv__detail__trajectory_reference_srv__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_service_members,
  get_service_typesupport_handle_function,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Request__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Request_message_type_support_handle,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Response__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Response_message_type_support_handle,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Event__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mrs_msgs,
    srv,
    TrajectoryReferenceSrv
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mrs_msgs,
    srv,
    TrajectoryReferenceSrv
  ),
  &mrs_msgs__srv__TrajectoryReferenceSrv__get_type_hash,
  &mrs_msgs__srv__TrajectoryReferenceSrv__get_type_description,
  &mrs_msgs__srv__TrajectoryReferenceSrv__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, srv, TrajectoryReferenceSrv_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, srv, TrajectoryReferenceSrv_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, srv, TrajectoryReferenceSrv_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, srv, TrajectoryReferenceSrv)(void) {
  if (!mrs_msgs__srv__detail__trajectory_reference_srv__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_service_type_support_handle.typesupport_identifier) {
    mrs_msgs__srv__detail__trajectory_reference_srv__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mrs_msgs__srv__detail__trajectory_reference_srv__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, srv, TrajectoryReferenceSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, srv, TrajectoryReferenceSrv_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, srv, TrajectoryReferenceSrv_Event)()->data;
  }

  return &mrs_msgs__srv__detail__trajectory_reference_srv__rosidl_typesupport_introspection_c__TrajectoryReferenceSrv_service_type_support_handle;
}
