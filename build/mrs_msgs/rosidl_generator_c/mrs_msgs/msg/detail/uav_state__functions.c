// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/UavState.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/uav_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `child_frame_id`
// Member `estimator_horizontal`
// Member `estimator_vertical`
// Member `estimator_heading`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `acceleration`
// Member `acceleration_disturbance`
#include "geometry_msgs/msg/detail/accel__functions.h"

bool
mrs_msgs__msg__UavState__init(mrs_msgs__msg__UavState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_msgs__msg__UavState__fini(msg);
    return false;
  }
  // child_frame_id
  if (!rosidl_runtime_c__String__init(&msg->child_frame_id)) {
    mrs_msgs__msg__UavState__fini(msg);
    return false;
  }
  // estimator_horizontal
  if (!rosidl_runtime_c__String__init(&msg->estimator_horizontal)) {
    mrs_msgs__msg__UavState__fini(msg);
    return false;
  }
  // estimator_vertical
  if (!rosidl_runtime_c__String__init(&msg->estimator_vertical)) {
    mrs_msgs__msg__UavState__fini(msg);
    return false;
  }
  // estimator_heading
  if (!rosidl_runtime_c__String__init(&msg->estimator_heading)) {
    mrs_msgs__msg__UavState__fini(msg);
    return false;
  }
  // estimator_iteration
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    mrs_msgs__msg__UavState__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__init(&msg->velocity)) {
    mrs_msgs__msg__UavState__fini(msg);
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Accel__init(&msg->acceleration)) {
    mrs_msgs__msg__UavState__fini(msg);
    return false;
  }
  // acceleration_disturbance
  if (!geometry_msgs__msg__Accel__init(&msg->acceleration_disturbance)) {
    mrs_msgs__msg__UavState__fini(msg);
    return false;
  }
  return true;
}

void
mrs_msgs__msg__UavState__fini(mrs_msgs__msg__UavState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // child_frame_id
  rosidl_runtime_c__String__fini(&msg->child_frame_id);
  // estimator_horizontal
  rosidl_runtime_c__String__fini(&msg->estimator_horizontal);
  // estimator_vertical
  rosidl_runtime_c__String__fini(&msg->estimator_vertical);
  // estimator_heading
  rosidl_runtime_c__String__fini(&msg->estimator_heading);
  // estimator_iteration
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // velocity
  geometry_msgs__msg__Twist__fini(&msg->velocity);
  // acceleration
  geometry_msgs__msg__Accel__fini(&msg->acceleration);
  // acceleration_disturbance
  geometry_msgs__msg__Accel__fini(&msg->acceleration_disturbance);
}

bool
mrs_msgs__msg__UavState__are_equal(const mrs_msgs__msg__UavState * lhs, const mrs_msgs__msg__UavState * rhs)
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
  // child_frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->child_frame_id), &(rhs->child_frame_id)))
  {
    return false;
  }
  // estimator_horizontal
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->estimator_horizontal), &(rhs->estimator_horizontal)))
  {
    return false;
  }
  // estimator_vertical
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->estimator_vertical), &(rhs->estimator_vertical)))
  {
    return false;
  }
  // estimator_heading
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->estimator_heading), &(rhs->estimator_heading)))
  {
    return false;
  }
  // estimator_iteration
  if (lhs->estimator_iteration != rhs->estimator_iteration) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Accel__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // acceleration_disturbance
  if (!geometry_msgs__msg__Accel__are_equal(
      &(lhs->acceleration_disturbance), &(rhs->acceleration_disturbance)))
  {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__UavState__copy(
  const mrs_msgs__msg__UavState * input,
  mrs_msgs__msg__UavState * output)
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
  // child_frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->child_frame_id), &(output->child_frame_id)))
  {
    return false;
  }
  // estimator_horizontal
  if (!rosidl_runtime_c__String__copy(
      &(input->estimator_horizontal), &(output->estimator_horizontal)))
  {
    return false;
  }
  // estimator_vertical
  if (!rosidl_runtime_c__String__copy(
      &(input->estimator_vertical), &(output->estimator_vertical)))
  {
    return false;
  }
  // estimator_heading
  if (!rosidl_runtime_c__String__copy(
      &(input->estimator_heading), &(output->estimator_heading)))
  {
    return false;
  }
  // estimator_iteration
  output->estimator_iteration = input->estimator_iteration;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Accel__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // acceleration_disturbance
  if (!geometry_msgs__msg__Accel__copy(
      &(input->acceleration_disturbance), &(output->acceleration_disturbance)))
  {
    return false;
  }
  return true;
}

mrs_msgs__msg__UavState *
mrs_msgs__msg__UavState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__UavState * msg = (mrs_msgs__msg__UavState *)allocator.allocate(sizeof(mrs_msgs__msg__UavState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__UavState));
  bool success = mrs_msgs__msg__UavState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__UavState__destroy(mrs_msgs__msg__UavState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__UavState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__UavState__Sequence__init(mrs_msgs__msg__UavState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__UavState * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__UavState *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__UavState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__UavState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__UavState__fini(&data[i - 1]);
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
mrs_msgs__msg__UavState__Sequence__fini(mrs_msgs__msg__UavState__Sequence * array)
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
      mrs_msgs__msg__UavState__fini(&array->data[i]);
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

mrs_msgs__msg__UavState__Sequence *
mrs_msgs__msg__UavState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__UavState__Sequence * array = (mrs_msgs__msg__UavState__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__UavState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__UavState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__UavState__Sequence__destroy(mrs_msgs__msg__UavState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__UavState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__UavState__Sequence__are_equal(const mrs_msgs__msg__UavState__Sequence * lhs, const mrs_msgs__msg__UavState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__UavState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__UavState__Sequence__copy(
  const mrs_msgs__msg__UavState__Sequence * input,
  mrs_msgs__msg__UavState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__UavState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__UavState * data =
      (mrs_msgs__msg__UavState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__UavState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__UavState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__UavState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
