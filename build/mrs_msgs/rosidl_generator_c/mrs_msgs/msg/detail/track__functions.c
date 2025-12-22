// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/Track.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/track__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
mrs_msgs__msg__Track__init(mrs_msgs__msg__Track * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    mrs_msgs__msg__Track__fini(msg);
    return false;
  }
  // position_covariance
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    mrs_msgs__msg__Track__fini(msg);
    return false;
  }
  // orientation_covariance
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    mrs_msgs__msg__Track__fini(msg);
    return false;
  }
  // velocity_covariance
  return true;
}

void
mrs_msgs__msg__Track__fini(mrs_msgs__msg__Track * msg)
{
  if (!msg) {
    return;
  }
  // id
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // position_covariance
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // orientation_covariance
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // velocity_covariance
}

bool
mrs_msgs__msg__Track__are_equal(const mrs_msgs__msg__Track * lhs, const mrs_msgs__msg__Track * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // position_covariance
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->position_covariance[i] != rhs->position_covariance[i]) {
      return false;
    }
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // orientation_covariance
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->orientation_covariance[i] != rhs->orientation_covariance[i]) {
      return false;
    }
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // velocity_covariance
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->velocity_covariance[i] != rhs->velocity_covariance[i]) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__Track__copy(
  const mrs_msgs__msg__Track * input,
  mrs_msgs__msg__Track * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // position_covariance
  for (size_t i = 0; i < 9; ++i) {
    output->position_covariance[i] = input->position_covariance[i];
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // orientation_covariance
  for (size_t i = 0; i < 9; ++i) {
    output->orientation_covariance[i] = input->orientation_covariance[i];
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // velocity_covariance
  for (size_t i = 0; i < 9; ++i) {
    output->velocity_covariance[i] = input->velocity_covariance[i];
  }
  return true;
}

mrs_msgs__msg__Track *
mrs_msgs__msg__Track__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__Track * msg = (mrs_msgs__msg__Track *)allocator.allocate(sizeof(mrs_msgs__msg__Track), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__Track));
  bool success = mrs_msgs__msg__Track__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__Track__destroy(mrs_msgs__msg__Track * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__Track__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__Track__Sequence__init(mrs_msgs__msg__Track__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__Track * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__Track *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__Track), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__Track__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__Track__fini(&data[i - 1]);
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
mrs_msgs__msg__Track__Sequence__fini(mrs_msgs__msg__Track__Sequence * array)
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
      mrs_msgs__msg__Track__fini(&array->data[i]);
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

mrs_msgs__msg__Track__Sequence *
mrs_msgs__msg__Track__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__Track__Sequence * array = (mrs_msgs__msg__Track__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__Track__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__Track__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__Track__Sequence__destroy(mrs_msgs__msg__Track__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__Track__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__Track__Sequence__are_equal(const mrs_msgs__msg__Track__Sequence * lhs, const mrs_msgs__msg__Track__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__Track__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__Track__Sequence__copy(
  const mrs_msgs__msg__Track__Sequence * input,
  mrs_msgs__msg__Track__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__Track);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__Track * data =
      (mrs_msgs__msg__Track *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__Track__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__Track__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__Track__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
