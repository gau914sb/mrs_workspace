// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/FutureTrajectory.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/future_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `uav_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `points`
#include "mrs_msgs/msg/detail/future_point__functions.h"

bool
mrs_msgs__msg__FutureTrajectory__init(mrs_msgs__msg__FutureTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mrs_msgs__msg__FutureTrajectory__fini(msg);
    return false;
  }
  // uav_name
  if (!rosidl_runtime_c__String__init(&msg->uav_name)) {
    mrs_msgs__msg__FutureTrajectory__fini(msg);
    return false;
  }
  // priority
  // collision_avoidance
  // points
  if (!mrs_msgs__msg__FuturePoint__Sequence__init(&msg->points, 0)) {
    mrs_msgs__msg__FutureTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
mrs_msgs__msg__FutureTrajectory__fini(mrs_msgs__msg__FutureTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // uav_name
  rosidl_runtime_c__String__fini(&msg->uav_name);
  // priority
  // collision_avoidance
  // points
  mrs_msgs__msg__FuturePoint__Sequence__fini(&msg->points);
}

bool
mrs_msgs__msg__FutureTrajectory__are_equal(const mrs_msgs__msg__FutureTrajectory * lhs, const mrs_msgs__msg__FutureTrajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // uav_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->uav_name), &(rhs->uav_name)))
  {
    return false;
  }
  // priority
  if (lhs->priority != rhs->priority) {
    return false;
  }
  // collision_avoidance
  if (lhs->collision_avoidance != rhs->collision_avoidance) {
    return false;
  }
  // points
  if (!mrs_msgs__msg__FuturePoint__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__FutureTrajectory__copy(
  const mrs_msgs__msg__FutureTrajectory * input,
  mrs_msgs__msg__FutureTrajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // uav_name
  if (!rosidl_runtime_c__String__copy(
      &(input->uav_name), &(output->uav_name)))
  {
    return false;
  }
  // priority
  output->priority = input->priority;
  // collision_avoidance
  output->collision_avoidance = input->collision_avoidance;
  // points
  if (!mrs_msgs__msg__FuturePoint__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  return true;
}

mrs_msgs__msg__FutureTrajectory *
mrs_msgs__msg__FutureTrajectory__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__FutureTrajectory * msg = (mrs_msgs__msg__FutureTrajectory *)allocator.allocate(sizeof(mrs_msgs__msg__FutureTrajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__FutureTrajectory));
  bool success = mrs_msgs__msg__FutureTrajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__FutureTrajectory__destroy(mrs_msgs__msg__FutureTrajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__FutureTrajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__FutureTrajectory__Sequence__init(mrs_msgs__msg__FutureTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__FutureTrajectory * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__FutureTrajectory *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__FutureTrajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__FutureTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__FutureTrajectory__fini(&data[i - 1]);
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
mrs_msgs__msg__FutureTrajectory__Sequence__fini(mrs_msgs__msg__FutureTrajectory__Sequence * array)
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
      mrs_msgs__msg__FutureTrajectory__fini(&array->data[i]);
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

mrs_msgs__msg__FutureTrajectory__Sequence *
mrs_msgs__msg__FutureTrajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__FutureTrajectory__Sequence * array = (mrs_msgs__msg__FutureTrajectory__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__FutureTrajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__FutureTrajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__FutureTrajectory__Sequence__destroy(mrs_msgs__msg__FutureTrajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__FutureTrajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__FutureTrajectory__Sequence__are_equal(const mrs_msgs__msg__FutureTrajectory__Sequence * lhs, const mrs_msgs__msg__FutureTrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__FutureTrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__FutureTrajectory__Sequence__copy(
  const mrs_msgs__msg__FutureTrajectory__Sequence * input,
  mrs_msgs__msg__FutureTrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__FutureTrajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__FutureTrajectory * data =
      (mrs_msgs__msg__FutureTrajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__FutureTrajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__FutureTrajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__FutureTrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
