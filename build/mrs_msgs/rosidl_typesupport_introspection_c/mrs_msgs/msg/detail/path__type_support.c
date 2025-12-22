// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrs_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrs_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"
#include "mrs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrs_msgs/msg/detail/path__functions.h"
#include "mrs_msgs/msg/detail/path__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "mrs_msgs/msg/reference.h"
// Member `points`
#include "mrs_msgs/msg/detail/reference__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_msgs__msg__Path__init(message_memory);
}

void mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_fini_function(void * message_memory)
{
  mrs_msgs__msg__Path__fini(message_memory);
}

size_t mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__size_function__Path__points(
  const void * untyped_member)
{
  const mrs_msgs__msg__Reference__Sequence * member =
    (const mrs_msgs__msg__Reference__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__get_const_function__Path__points(
  const void * untyped_member, size_t index)
{
  const mrs_msgs__msg__Reference__Sequence * member =
    (const mrs_msgs__msg__Reference__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__get_function__Path__points(
  void * untyped_member, size_t index)
{
  mrs_msgs__msg__Reference__Sequence * member =
    (mrs_msgs__msg__Reference__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__fetch_function__Path__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mrs_msgs__msg__Reference * item =
    ((const mrs_msgs__msg__Reference *)
    mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__get_const_function__Path__points(untyped_member, index));
  mrs_msgs__msg__Reference * value =
    (mrs_msgs__msg__Reference *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__assign_function__Path__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mrs_msgs__msg__Reference * item =
    ((mrs_msgs__msg__Reference *)
    mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__get_function__Path__points(untyped_member, index));
  const mrs_msgs__msg__Reference * value =
    (const mrs_msgs__msg__Reference *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__resize_function__Path__points(
  void * untyped_member, size_t size)
{
  mrs_msgs__msg__Reference__Sequence * member =
    (mrs_msgs__msg__Reference__Sequence *)(untyped_member);
  mrs_msgs__msg__Reference__Sequence__fini(member);
  return mrs_msgs__msg__Reference__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_member_array[19] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Path, header),  // bytes offset in struct
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
    offsetof(mrs_msgs__msg__Path, input_id),  // bytes offset in struct
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
    offsetof(mrs_msgs__msg__Path, use_heading),  // bytes offset in struct
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
    offsetof(mrs_msgs__msg__Path, fly_now),  // bytes offset in struct
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
    offsetof(mrs_msgs__msg__Path, stop_at_waypoints),  // bytes offset in struct
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
    offsetof(mrs_msgs__msg__Path, loop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_execution_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Path, max_execution_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_deviation_from_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Path, max_deviation_from_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dont_prepend_current_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Path, dont_prepend_current_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "override_heading_atan2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Path, override_heading_atan2),  // bytes offset in struct
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
    offsetof(mrs_msgs__msg__Path, override_constraints),  // bytes offset in struct
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
    offsetof(mrs_msgs__msg__Path, override_max_velocity_horizontal),  // bytes offset in struct
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
    offsetof(mrs_msgs__msg__Path, override_max_acceleration_horizontal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "override_max_jerk_horizontal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Path, override_max_jerk_horizontal),  // bytes offset in struct
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
    offsetof(mrs_msgs__msg__Path, override_max_velocity_vertical),  // bytes offset in struct
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
    offsetof(mrs_msgs__msg__Path, override_max_acceleration_vertical),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "override_max_jerk_vertical",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Path, override_max_jerk_vertical),  // bytes offset in struct
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
    offsetof(mrs_msgs__msg__Path, relax_heading),  // bytes offset in struct
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
    offsetof(mrs_msgs__msg__Path, points),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__size_function__Path__points,  // size() function pointer
    mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__get_const_function__Path__points,  // get_const(index) function pointer
    mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__get_function__Path__points,  // get(index) function pointer
    mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__fetch_function__Path__points,  // fetch(index, &value) function pointer
    mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__assign_function__Path__points,  // assign(index, value) function pointer
    mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__resize_function__Path__points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_members = {
  "mrs_msgs__msg",  // message namespace
  "Path",  // message name
  19,  // number of fields
  sizeof(mrs_msgs__msg__Path),
  false,  // has_any_key_member_
  mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_member_array,  // message members
  mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle = {
  0,
  &mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__Path__get_type_hash,
  &mrs_msgs__msg__Path__get_type_description,
  &mrs_msgs__msg__Path__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, Path)() {
  mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_member_array[18].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, Reference)();
  if (!mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle.typesupport_identifier) {
    mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
