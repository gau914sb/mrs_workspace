// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/ReferenceWithVelocity.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/reference_with_velocity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
mrs_msgs__msg__ReferenceWithVelocity__init(mrs_msgs__msg__ReferenceWithVelocity * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    mrs_msgs__msg__ReferenceWithVelocity__fini(msg);
    return false;
  }
  // heading
  // enforce_velocity
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    mrs_msgs__msg__ReferenceWithVelocity__fini(msg);
    return false;
  }
  return true;
}

void
mrs_msgs__msg__ReferenceWithVelocity__fini(mrs_msgs__msg__ReferenceWithVelocity * msg)
{
  if (!msg) {
    return;
  }
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // heading
  // enforce_velocity
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
}

bool
mrs_msgs__msg__ReferenceWithVelocity__are_equal(const mrs_msgs__msg__ReferenceWithVelocity * lhs, const mrs_msgs__msg__ReferenceWithVelocity * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // enforce_velocity
  if (lhs->enforce_velocity != rhs->enforce_velocity) {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__ReferenceWithVelocity__copy(
  const mrs_msgs__msg__ReferenceWithVelocity * input,
  mrs_msgs__msg__ReferenceWithVelocity * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // heading
  output->heading = input->heading;
  // enforce_velocity
  output->enforce_velocity = input->enforce_velocity;
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  return true;
}

mrs_msgs__msg__ReferenceWithVelocity *
mrs_msgs__msg__ReferenceWithVelocity__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__ReferenceWithVelocity * msg = (mrs_msgs__msg__ReferenceWithVelocity *)allocator.allocate(sizeof(mrs_msgs__msg__ReferenceWithVelocity), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__ReferenceWithVelocity));
  bool success = mrs_msgs__msg__ReferenceWithVelocity__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__ReferenceWithVelocity__destroy(mrs_msgs__msg__ReferenceWithVelocity * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__ReferenceWithVelocity__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__ReferenceWithVelocity__Sequence__init(mrs_msgs__msg__ReferenceWithVelocity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__ReferenceWithVelocity * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__ReferenceWithVelocity *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__ReferenceWithVelocity), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__ReferenceWithVelocity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__ReferenceWithVelocity__fini(&data[i - 1]);
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
mrs_msgs__msg__ReferenceWithVelocity__Sequence__fini(mrs_msgs__msg__ReferenceWithVelocity__Sequence * array)
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
      mrs_msgs__msg__ReferenceWithVelocity__fini(&array->data[i]);
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

mrs_msgs__msg__ReferenceWithVelocity__Sequence *
mrs_msgs__msg__ReferenceWithVelocity__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__ReferenceWithVelocity__Sequence * array = (mrs_msgs__msg__ReferenceWithVelocity__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__ReferenceWithVelocity__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__ReferenceWithVelocity__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__ReferenceWithVelocity__Sequence__destroy(mrs_msgs__msg__ReferenceWithVelocity__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__ReferenceWithVelocity__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__ReferenceWithVelocity__Sequence__are_equal(const mrs_msgs__msg__ReferenceWithVelocity__Sequence * lhs, const mrs_msgs__msg__ReferenceWithVelocity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__ReferenceWithVelocity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__ReferenceWithVelocity__Sequence__copy(
  const mrs_msgs__msg__ReferenceWithVelocity__Sequence * input,
  mrs_msgs__msg__ReferenceWithVelocity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__ReferenceWithVelocity);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__ReferenceWithVelocity * data =
      (mrs_msgs__msg__ReferenceWithVelocity *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__ReferenceWithVelocity__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__ReferenceWithVelocity__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__ReferenceWithVelocity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
