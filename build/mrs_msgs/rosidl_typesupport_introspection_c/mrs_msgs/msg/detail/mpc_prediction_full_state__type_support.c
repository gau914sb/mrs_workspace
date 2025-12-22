// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrs_msgs:msg/MpcPredictionFullState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrs_msgs/msg/detail/mpc_prediction_full_state__rosidl_typesupport_introspection_c.h"
#include "mrs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrs_msgs/msg/detail/mpc_prediction_full_state__functions.h"
#include "mrs_msgs/msg/detail/mpc_prediction_full_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `stamps`
#include "builtin_interfaces/msg/time.h"
// Member `stamps`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `attitude_rate`
// Member `velocity`
// Member `acceleration`
// Member `jerk`
#include "geometry_msgs/msg/vector3.h"
// Member `attitude_rate`
// Member `velocity`
// Member `acceleration`
// Member `jerk`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `heading`
// Member `heading_rate`
// Member `heading_acceleration`
// Member `heading_jerk`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_msgs__msg__MpcPredictionFullState__init(message_memory);
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_fini_function(void * message_memory)
{
  mrs_msgs__msg__MpcPredictionFullState__fini(message_memory);
}

size_t mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__stamps(
  const void * untyped_member)
{
  const builtin_interfaces__msg__Time__Sequence * member =
    (const builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__stamps(
  const void * untyped_member, size_t index)
{
  const builtin_interfaces__msg__Time__Sequence * member =
    (const builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__stamps(
  void * untyped_member, size_t index)
{
  builtin_interfaces__msg__Time__Sequence * member =
    (builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__stamps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const builtin_interfaces__msg__Time * item =
    ((const builtin_interfaces__msg__Time *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__stamps(untyped_member, index));
  builtin_interfaces__msg__Time * value =
    (builtin_interfaces__msg__Time *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__stamps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  builtin_interfaces__msg__Time * item =
    ((builtin_interfaces__msg__Time *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__stamps(untyped_member, index));
  const builtin_interfaces__msg__Time * value =
    (const builtin_interfaces__msg__Time *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__stamps(
  void * untyped_member, size_t size)
{
  builtin_interfaces__msg__Time__Sequence * member =
    (builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  builtin_interfaces__msg__Time__Sequence__fini(member);
  return builtin_interfaces__msg__Time__Sequence__init(member, size);
}

size_t mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__position(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__position(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__position(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__position(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__position(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__position(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__orientation(
  const void * untyped_member)
{
  const geometry_msgs__msg__Quaternion__Sequence * member =
    (const geometry_msgs__msg__Quaternion__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__orientation(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Quaternion__Sequence * member =
    (const geometry_msgs__msg__Quaternion__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__orientation(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Quaternion__Sequence * member =
    (geometry_msgs__msg__Quaternion__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__orientation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Quaternion * item =
    ((const geometry_msgs__msg__Quaternion *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__orientation(untyped_member, index));
  geometry_msgs__msg__Quaternion * value =
    (geometry_msgs__msg__Quaternion *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__orientation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Quaternion * item =
    ((geometry_msgs__msg__Quaternion *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__orientation(untyped_member, index));
  const geometry_msgs__msg__Quaternion * value =
    (const geometry_msgs__msg__Quaternion *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__orientation(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Quaternion__Sequence * member =
    (geometry_msgs__msg__Quaternion__Sequence *)(untyped_member);
  geometry_msgs__msg__Quaternion__Sequence__fini(member);
  return geometry_msgs__msg__Quaternion__Sequence__init(member, size);
}

size_t mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__attitude_rate(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__attitude_rate(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__attitude_rate(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__attitude_rate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__attitude_rate(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__attitude_rate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__attitude_rate(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__attitude_rate(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

size_t mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__velocity(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__velocity(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__velocity(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__velocity(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__velocity(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__velocity(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

size_t mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__acceleration(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__acceleration(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__acceleration(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__acceleration(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__acceleration(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__acceleration(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

size_t mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__jerk(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__jerk(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__jerk(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__jerk(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__jerk(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__jerk(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__jerk(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__jerk(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

size_t mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__heading(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__heading(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__heading(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__heading(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__heading(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__heading(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__heading(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__heading(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__heading_rate(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__heading_rate(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__heading_rate(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__heading_rate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__heading_rate(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__heading_rate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__heading_rate(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__heading_rate(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__heading_acceleration(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__heading_acceleration(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__heading_acceleration(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__heading_acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__heading_acceleration(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__heading_acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__heading_acceleration(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__heading_acceleration(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__heading_jerk(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__heading_jerk(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__heading_jerk(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__heading_jerk(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__heading_jerk(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__heading_jerk(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__heading_jerk(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__heading_jerk(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_message_member_array[15] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__MpcPredictionFullState, header),  // bytes offset in struct
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
    offsetof(mrs_msgs__msg__MpcPredictionFullState, input_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__MpcPredictionFullState, stamps),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__stamps,  // size() function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__stamps,  // get_const(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__stamps,  // get(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__stamps,  // fetch(index, &value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__stamps,  // assign(index, value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__stamps  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__MpcPredictionFullState, position),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__position,  // size() function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__position,  // get_const(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__position,  // get(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__position,  // fetch(index, &value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__position,  // assign(index, value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__position  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__MpcPredictionFullState, orientation),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__orientation,  // size() function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__orientation,  // get_const(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__orientation,  // get(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__orientation,  // fetch(index, &value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__orientation,  // assign(index, value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__orientation  // resize(index) function pointer
  },
  {
    "attitude_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__MpcPredictionFullState, attitude_rate),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__attitude_rate,  // size() function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__attitude_rate,  // get_const(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__attitude_rate,  // get(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__attitude_rate,  // fetch(index, &value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__attitude_rate,  // assign(index, value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__attitude_rate  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__MpcPredictionFullState, velocity),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__velocity,  // size() function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__velocity,  // get_const(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__velocity,  // get(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__velocity,  // fetch(index, &value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__velocity,  // assign(index, value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__velocity  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__MpcPredictionFullState, acceleration),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__acceleration,  // size() function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__acceleration,  // get_const(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__acceleration,  // get(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__acceleration,  // fetch(index, &value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__acceleration,  // assign(index, value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__acceleration  // resize(index) function pointer
  },
  {
    "jerk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__MpcPredictionFullState, jerk),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__jerk,  // size() function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__jerk,  // get_const(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__jerk,  // get(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__jerk,  // fetch(index, &value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__jerk,  // assign(index, value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__jerk  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__MpcPredictionFullState, heading),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__heading,  // size() function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__heading,  // get_const(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__heading,  // get(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__heading,  // fetch(index, &value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__heading,  // assign(index, value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__heading  // resize(index) function pointer
  },
  {
    "heading_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__MpcPredictionFullState, heading_rate),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__heading_rate,  // size() function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__heading_rate,  // get_const(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__heading_rate,  // get(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__heading_rate,  // fetch(index, &value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__heading_rate,  // assign(index, value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__heading_rate  // resize(index) function pointer
  },
  {
    "heading_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__MpcPredictionFullState, heading_acceleration),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__heading_acceleration,  // size() function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__heading_acceleration,  // get_const(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__heading_acceleration,  // get(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__heading_acceleration,  // fetch(index, &value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__heading_acceleration,  // assign(index, value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__heading_acceleration  // resize(index) function pointer
  },
  {
    "heading_jerk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__MpcPredictionFullState, heading_jerk),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__size_function__MpcPredictionFullState__heading_jerk,  // size() function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_const_function__MpcPredictionFullState__heading_jerk,  // get_const(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__get_function__MpcPredictionFullState__heading_jerk,  // get(index) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__fetch_function__MpcPredictionFullState__heading_jerk,  // fetch(index, &value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__assign_function__MpcPredictionFullState__heading_jerk,  // assign(index, value) function pointer
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__resize_function__MpcPredictionFullState__heading_jerk  // resize(index) function pointer
  },
  {
    "use_orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__MpcPredictionFullState, use_orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_attitude_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__MpcPredictionFullState, use_attitude_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_message_members = {
  "mrs_msgs__msg",  // message namespace
  "MpcPredictionFullState",  // message name
  15,  // number of fields
  sizeof(mrs_msgs__msg__MpcPredictionFullState),
  false,  // has_any_key_member_
  mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_message_member_array,  // message members
  mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_message_type_support_handle = {
  0,
  &mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__MpcPredictionFullState__get_type_hash,
  &mrs_msgs__msg__MpcPredictionFullState__get_type_description,
  &mrs_msgs__msg__MpcPredictionFullState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, MpcPredictionFullState)() {
  mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_message_type_support_handle.typesupport_identifier) {
    mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_msgs__msg__MpcPredictionFullState__rosidl_typesupport_introspection_c__MpcPredictionFullState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
