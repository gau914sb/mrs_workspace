// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/MpcPredictionFullState.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/mpc_prediction_full_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `stamps`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `attitude_rate`
// Member `velocity`
// Member `acceleration`
// Member `jerk`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `heading`
// Member `heading_rate`
// Member `heading_acceleration`
// Member `heading_jerk`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mrs_msgs__msg__MpcPredictionFullState__init(mrs_msgs__msg__MpcPredictionFullState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_msgs__msg__MpcPredictionFullState__fini(msg);
    return false;
  }
  // input_id
  // stamps
  if (!builtin_interfaces__msg__Time__Sequence__init(&msg->stamps, 0)) {
    mrs_msgs__msg__MpcPredictionFullState__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->position, 0)) {
    mrs_msgs__msg__MpcPredictionFullState__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__Sequence__init(&msg->orientation, 0)) {
    mrs_msgs__msg__MpcPredictionFullState__fini(msg);
    return false;
  }
  // attitude_rate
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->attitude_rate, 0)) {
    mrs_msgs__msg__MpcPredictionFullState__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->velocity, 0)) {
    mrs_msgs__msg__MpcPredictionFullState__fini(msg);
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->acceleration, 0)) {
    mrs_msgs__msg__MpcPredictionFullState__fini(msg);
    return false;
  }
  // jerk
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->jerk, 0)) {
    mrs_msgs__msg__MpcPredictionFullState__fini(msg);
    return false;
  }
  // heading
  if (!rosidl_runtime_c__double__Sequence__init(&msg->heading, 0)) {
    mrs_msgs__msg__MpcPredictionFullState__fini(msg);
    return false;
  }
  // heading_rate
  if (!rosidl_runtime_c__double__Sequence__init(&msg->heading_rate, 0)) {
    mrs_msgs__msg__MpcPredictionFullState__fini(msg);
    return false;
  }
  // heading_acceleration
  if (!rosidl_runtime_c__double__Sequence__init(&msg->heading_acceleration, 0)) {
    mrs_msgs__msg__MpcPredictionFullState__fini(msg);
    return false;
  }
  // heading_jerk
  if (!rosidl_runtime_c__double__Sequence__init(&msg->heading_jerk, 0)) {
    mrs_msgs__msg__MpcPredictionFullState__fini(msg);
    return false;
  }
  // use_orientation
  // use_attitude_rate
  return true;
}

void
mrs_msgs__msg__MpcPredictionFullState__fini(mrs_msgs__msg__MpcPredictionFullState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // input_id
  // stamps
  builtin_interfaces__msg__Time__Sequence__fini(&msg->stamps);
  // position
  geometry_msgs__msg__Point__Sequence__fini(&msg->position);
  // orientation
  geometry_msgs__msg__Quaternion__Sequence__fini(&msg->orientation);
  // attitude_rate
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->attitude_rate);
  // velocity
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->velocity);
  // acceleration
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->acceleration);
  // jerk
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->jerk);
  // heading
  rosidl_runtime_c__double__Sequence__fini(&msg->heading);
  // heading_rate
  rosidl_runtime_c__double__Sequence__fini(&msg->heading_rate);
  // heading_acceleration
  rosidl_runtime_c__double__Sequence__fini(&msg->heading_acceleration);
  // heading_jerk
  rosidl_runtime_c__double__Sequence__fini(&msg->heading_jerk);
  // use_orientation
  // use_attitude_rate
}

bool
mrs_msgs__msg__MpcPredictionFullState__are_equal(const mrs_msgs__msg__MpcPredictionFullState * lhs, const mrs_msgs__msg__MpcPredictionFullState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // input_id
  if (lhs->input_id != rhs->input_id) {
    return false;
  }
  // stamps
  if (!builtin_interfaces__msg__Time__Sequence__are_equal(
      &(lhs->stamps), &(rhs->stamps)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__Sequence__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // attitude_rate
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->attitude_rate), &(rhs->attitude_rate)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // jerk
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->jerk), &(rhs->jerk)))
  {
    return false;
  }
  // heading
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->heading), &(rhs->heading)))
  {
    return false;
  }
  // heading_rate
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->heading_rate), &(rhs->heading_rate)))
  {
    return false;
  }
  // heading_acceleration
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->heading_acceleration), &(rhs->heading_acceleration)))
  {
    return false;
  }
  // heading_jerk
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->heading_jerk), &(rhs->heading_jerk)))
  {
    return false;
  }
  // use_orientation
  if (lhs->use_orientation != rhs->use_orientation) {
    return false;
  }
  // use_attitude_rate
  if (lhs->use_attitude_rate != rhs->use_attitude_rate) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__MpcPredictionFullState__copy(
  const mrs_msgs__msg__MpcPredictionFullState * input,
  mrs_msgs__msg__MpcPredictionFullState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // input_id
  output->input_id = input->input_id;
  // stamps
  if (!builtin_interfaces__msg__Time__Sequence__copy(
      &(input->stamps), &(output->stamps)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__Sequence__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // attitude_rate
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->attitude_rate), &(output->attitude_rate)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // jerk
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->jerk), &(output->jerk)))
  {
    return false;
  }
  // heading
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->heading), &(output->heading)))
  {
    return false;
  }
  // heading_rate
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->heading_rate), &(output->heading_rate)))
  {
    return false;
  }
  // heading_acceleration
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->heading_acceleration), &(output->heading_acceleration)))
  {
    return false;
  }
  // heading_jerk
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->heading_jerk), &(output->heading_jerk)))
  {
    return false;
  }
  // use_orientation
  output->use_orientation = input->use_orientation;
  // use_attitude_rate
  output->use_attitude_rate = input->use_attitude_rate;
  return true;
}

mrs_msgs__msg__MpcPredictionFullState *
mrs_msgs__msg__MpcPredictionFullState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__MpcPredictionFullState * msg = (mrs_msgs__msg__MpcPredictionFullState *)allocator.allocate(sizeof(mrs_msgs__msg__MpcPredictionFullState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__MpcPredictionFullState));
  bool success = mrs_msgs__msg__MpcPredictionFullState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__MpcPredictionFullState__destroy(mrs_msgs__msg__MpcPredictionFullState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__MpcPredictionFullState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__MpcPredictionFullState__Sequence__init(mrs_msgs__msg__MpcPredictionFullState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__MpcPredictionFullState * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__MpcPredictionFullState *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__MpcPredictionFullState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__MpcPredictionFullState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__MpcPredictionFullState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mrs_msgs__msg__MpcPredictionFullState__Sequence__fini(mrs_msgs__msg__MpcPredictionFullState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mrs_msgs__msg__MpcPredictionFullState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mrs_msgs__msg__MpcPredictionFullState__Sequence *
mrs_msgs__msg__MpcPredictionFullState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__MpcPredictionFullState__Sequence * array = (mrs_msgs__msg__MpcPredictionFullState__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__MpcPredictionFullState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__MpcPredictionFullState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__MpcPredictionFullState__Sequence__destroy(mrs_msgs__msg__MpcPredictionFullState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__MpcPredictionFullState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__MpcPredictionFullState__Sequence__are_equal(const mrs_msgs__msg__MpcPredictionFullState__Sequence * lhs, const mrs_msgs__msg__MpcPredictionFullState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__MpcPredictionFullState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__MpcPredictionFullState__Sequence__copy(
  const mrs_msgs__msg__MpcPredictionFullState__Sequence * input,
  mrs_msgs__msg__MpcPredictionFullState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__MpcPredictionFullState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__MpcPredictionFullState * data =
      (mrs_msgs__msg__MpcPredictionFullState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__MpcPredictionFullState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__MpcPredictionFullState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__MpcPredictionFullState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
