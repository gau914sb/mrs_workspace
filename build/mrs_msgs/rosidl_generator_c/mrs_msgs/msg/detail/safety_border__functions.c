// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/SafetyBorder.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/safety_border__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `prism`
#include "mrs_msgs/msg/detail/prism__functions.h"

bool
mrs_msgs__msg__SafetyBorder__init(mrs_msgs__msg__SafetyBorder * msg)
{
  if (!msg) {
    return false;
  }
  // prism
  if (!mrs_msgs__msg__Prism__init(&msg->prism)) {
    mrs_msgs__msg__SafetyBorder__fini(msg);
    return false;
  }
  // keep_obstacles
  // update_world_origin
  return true;
}

void
mrs_msgs__msg__SafetyBorder__fini(mrs_msgs__msg__SafetyBorder * msg)
{
  if (!msg) {
    return;
  }
  // prism
  mrs_msgs__msg__Prism__fini(&msg->prism);
  // keep_obstacles
  // update_world_origin
}

bool
mrs_msgs__msg__SafetyBorder__are_equal(const mrs_msgs__msg__SafetyBorder * lhs, const mrs_msgs__msg__SafetyBorder * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // prism
  if (!mrs_msgs__msg__Prism__are_equal(
      &(lhs->prism), &(rhs->prism)))
  {
    return false;
  }
  // keep_obstacles
  if (lhs->keep_obstacles != rhs->keep_obstacles) {
    return false;
  }
  // update_world_origin
  if (lhs->update_world_origin != rhs->update_world_origin) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__SafetyBorder__copy(
  const mrs_msgs__msg__SafetyBorder * input,
  mrs_msgs__msg__SafetyBorder * output)
{
  if (!input || !output) {
    return false;
  }
  // prism
  if (!mrs_msgs__msg__Prism__copy(
      &(input->prism), &(output->prism)))
  {
    return false;
  }
  // keep_obstacles
  output->keep_obstacles = input->keep_obstacles;
  // update_world_origin
  output->update_world_origin = input->update_world_origin;
  return true;
}

mrs_msgs__msg__SafetyBorder *
mrs_msgs__msg__SafetyBorder__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__SafetyBorder * msg = (mrs_msgs__msg__SafetyBorder *)allocator.allocate(sizeof(mrs_msgs__msg__SafetyBorder), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__SafetyBorder));
  bool success = mrs_msgs__msg__SafetyBorder__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__SafetyBorder__destroy(mrs_msgs__msg__SafetyBorder * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__SafetyBorder__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__SafetyBorder__Sequence__init(mrs_msgs__msg__SafetyBorder__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__SafetyBorder * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__SafetyBorder *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__SafetyBorder), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__SafetyBorder__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__SafetyBorder__fini(&data[i - 1]);
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
mrs_msgs__msg__SafetyBorder__Sequence__fini(mrs_msgs__msg__SafetyBorder__Sequence * array)
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
      mrs_msgs__msg__SafetyBorder__fini(&array->data[i]);
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

mrs_msgs__msg__SafetyBorder__Sequence *
mrs_msgs__msg__SafetyBorder__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__SafetyBorder__Sequence * array = (mrs_msgs__msg__SafetyBorder__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__SafetyBorder__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__SafetyBorder__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__SafetyBorder__Sequence__destroy(mrs_msgs__msg__SafetyBorder__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__SafetyBorder__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__SafetyBorder__Sequence__are_equal(const mrs_msgs__msg__SafetyBorder__Sequence * lhs, const mrs_msgs__msg__SafetyBorder__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__SafetyBorder__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__SafetyBorder__Sequence__copy(
  const mrs_msgs__msg__SafetyBorder__Sequence * input,
  mrs_msgs__msg__SafetyBorder__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__SafetyBorder);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__SafetyBorder * data =
      (mrs_msgs__msg__SafetyBorder *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__SafetyBorder__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__SafetyBorder__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__SafetyBorder__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
