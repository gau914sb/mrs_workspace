// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrs_msgs:msg/PathWithVelocity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrs_msgs/msg/detail/path_with_velocity__rosidl_typesupport_introspection_c.h"
#include "mrs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrs_msgs/msg/detail/path_with_velocity__functions.h"
#include "mrs_msgs/msg/detail/path_with_velocity__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "mrs_msgs/msg/reference_with_velocity.h"
// Member `points`
#include "mrs_msgs/msg/detail/reference_with_velocity__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__PathWithVelocity_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_msgs__msg__PathWithVelocity__init(message_memory);
}

void mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__PathWithVelocity_fini_function(void * message_memory)
{
  mrs_msgs__msg__PathWithVelocity__fini(message_memory);
}

size_t mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__size_function__PathWithVelocity__points(
  const void * untyped_member)
{
  const mrs_msgs__msg__ReferenceWithVelocity__Sequence * member =
    (const mrs_msgs__msg__ReferenceWithVelocity__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__get_const_function__PathWithVelocity__points(
  const void * untyped_member, size_t index)
{
  const mrs_msgs__msg__ReferenceWithVelocity__Sequence * member =
    (const mrs_msgs__msg__ReferenceWithVelocity__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__get_function__PathWithVelocity__points(
  void * untyped_member, size_t index)
{
  mrs_msgs__msg__ReferenceWithVelocity__Sequence * member =
    (mrs_msgs__msg__ReferenceWithVelocity__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__fetch_function__PathWithVelocity__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mrs_msgs__msg__ReferenceWithVelocity * item =
    ((const mrs_msgs__msg__ReferenceWithVelocity *)
    mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__get_const_function__PathWithVelocity__points(untyped_member, index));
  mrs_msgs__msg__ReferenceWithVelocity * value =
    (mrs_msgs__msg__ReferenceWithVelocity *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__assign_function__PathWithVelocity__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mrs_msgs__msg__ReferenceWithVelocity * item =
    ((mrs_msgs__msg__ReferenceWithVelocity *)
    mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__get_function__PathWithVelocity__points(untyped_member, index));
  const mrs_msgs__msg__ReferenceWithVelocity * value =
    (const mrs_msgs__msg__ReferenceWithVelocity *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__resize_function__PathWithVelocity__points(
  void * untyped_member, size_t size)
{
  mrs_msgs__msg__ReferenceWithVelocity__Sequence * member =
    (mrs_msgs__msg__ReferenceWithVelocity__Sequence *)(untyped_member);
  mrs_msgs__msg__ReferenceWithVelocity__Sequence__fini(member);
  return mrs_msgs__msg__ReferenceWithVelocity__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__PathWithVelocity_message_member_array[13] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__PathWithVelocity, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__PathWithVelocity, input_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__PathWithVelocity, use_heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fly_now",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__PathWithVelocity, fly_now),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_at_waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__PathWithVelocity, stop_at_waypoints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__PathWithVelocity, loop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "override_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__PathWithVelocity, override_constraints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "override_max_velocity_horizontal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__PathWithVelocity, override_max_velocity_horizontal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "override_max_acceleration_horizontal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__PathWithVelocity, override_max_acceleration_horizontal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "override_max_velocity_vertical",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__PathWithVelocity, override_max_velocity_vertical),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "override_max_acceleration_vertical",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__PathWithVelocity, override_max_acceleration_vertical),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relax_heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__PathWithVelocity, relax_heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__PathWithVelocity, points),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__size_function__PathWithVelocity__points,  // size() function pointer
    mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__get_const_function__PathWithVelocity__points,  // get_const(index) function pointer
    mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__get_function__PathWithVelocity__points,  // get(index) function pointer
    mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__fetch_function__PathWithVelocity__points,  // fetch(index, &value) function pointer
    mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__assign_function__PathWithVelocity__points,  // assign(index, value) function pointer
    mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__resize_function__PathWithVelocity__points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__PathWithVelocity_message_members = {
  "mrs_msgs__msg",  // message namespace
  "PathWithVelocity",  // message name
  13,  // number of fields
  sizeof(mrs_msgs__msg__PathWithVelocity),
  false,  // has_any_key_member_
  mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__PathWithVelocity_message_member_array,  // message members
  mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__PathWithVelocity_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__PathWithVelocity_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__PathWithVelocity_message_type_support_handle = {
  0,
  &mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__PathWithVelocity_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__PathWithVelocity__get_type_hash,
  &mrs_msgs__msg__PathWithVelocity__get_type_description,
  &mrs_msgs__msg__PathWithVelocity__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, PathWithVelocity)() {
  mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__PathWithVelocity_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__PathWithVelocity_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, ReferenceWithVelocity)();
  if (!mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__PathWithVelocity_message_type_support_handle.typesupport_identifier) {
    mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__PathWithVelocity_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_msgs__msg__PathWithVelocity__rosidl_typesupport_introspection_c__PathWithVelocity_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
