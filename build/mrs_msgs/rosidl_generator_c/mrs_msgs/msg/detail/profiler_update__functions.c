// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/ProfilerUpdate.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/profiler_update__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `node_name`
// Member `routine_name`
// Member `event`
#include "rosidl_runtime_c/string_functions.h"

bool
mrs_msgs__msg__ProfilerUpdate__init(mrs_msgs__msg__ProfilerUpdate * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mrs_msgs__msg__ProfilerUpdate__fini(msg);
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__init(&msg->node_name)) {
    mrs_msgs__msg__ProfilerUpdate__fini(msg);
    return false;
  }
  // routine_name
  if (!rosidl_runtime_c__String__init(&msg->routine_name)) {
    mrs_msgs__msg__ProfilerUpdate__fini(msg);
    return false;
  }
  // iteration
  // duration
  // event
  if (!rosidl_runtime_c__String__init(&msg->event)) {
    mrs_msgs__msg__ProfilerUpdate__fini(msg);
    return false;
  }
  return true;
}

void
mrs_msgs__msg__ProfilerUpdate__fini(mrs_msgs__msg__ProfilerUpdate * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // node_name
  rosidl_runtime_c__String__fini(&msg->node_name);
  // routine_name
  rosidl_runtime_c__String__fini(&msg->routine_name);
  // iteration
  // duration
  // event
  rosidl_runtime_c__String__fini(&msg->event);
}

bool
mrs_msgs__msg__ProfilerUpdate__are_equal(const mrs_msgs__msg__ProfilerUpdate * lhs, const mrs_msgs__msg__ProfilerUpdate * rhs)
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
  // node_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_name), &(rhs->node_name)))
  {
    return false;
  }
  // routine_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->routine_name), &(rhs->routine_name)))
  {
    return false;
  }
  // iteration
  if (lhs->iteration != rhs->iteration) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  // event
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->event), &(rhs->event)))
  {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__ProfilerUpdate__copy(
  const mrs_msgs__msg__ProfilerUpdate * input,
  mrs_msgs__msg__ProfilerUpdate * output)
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
  // node_name
  if (!rosidl_runtime_c__String__copy(
      &(input->node_name), &(output->node_name)))
  {
    return false;
  }
  // routine_name
  if (!rosidl_runtime_c__String__copy(
      &(input->routine_name), &(output->routine_name)))
  {
    return false;
  }
  // iteration
  output->iteration = input->iteration;
  // duration
  output->duration = input->duration;
  // event
  if (!rosidl_runtime_c__String__copy(
      &(input->event), &(output->event)))
  {
    return false;
  }
  return true;
}

mrs_msgs__msg__ProfilerUpdate *
mrs_msgs__msg__ProfilerUpdate__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__ProfilerUpdate * msg = (mrs_msgs__msg__ProfilerUpdate *)allocator.allocate(sizeof(mrs_msgs__msg__ProfilerUpdate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__ProfilerUpdate));
  bool success = mrs_msgs__msg__ProfilerUpdate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__ProfilerUpdate__destroy(mrs_msgs__msg__ProfilerUpdate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__ProfilerUpdate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__ProfilerUpdate__Sequence__init(mrs_msgs__msg__ProfilerUpdate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__ProfilerUpdate * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__ProfilerUpdate *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__ProfilerUpdate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__ProfilerUpdate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__ProfilerUpdate__fini(&data[i - 1]);
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
mrs_msgs__msg__ProfilerUpdate__Sequence__fini(mrs_msgs__msg__ProfilerUpdate__Sequence * array)
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
      mrs_msgs__msg__ProfilerUpdate__fini(&array->data[i]);
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

mrs_msgs__msg__ProfilerUpdate__Sequence *
mrs_msgs__msg__ProfilerUpdate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__ProfilerUpdate__Sequence * array = (mrs_msgs__msg__ProfilerUpdate__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__ProfilerUpdate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__ProfilerUpdate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__ProfilerUpdate__Sequence__destroy(mrs_msgs__msg__ProfilerUpdate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__ProfilerUpdate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__ProfilerUpdate__Sequence__are_equal(const mrs_msgs__msg__ProfilerUpdate__Sequence * lhs, const mrs_msgs__msg__ProfilerUpdate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__ProfilerUpdate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__ProfilerUpdate__Sequence__copy(
  const mrs_msgs__msg__ProfilerUpdate__Sequence * input,
  mrs_msgs__msg__ProfilerUpdate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__ProfilerUpdate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__ProfilerUpdate * data =
      (mrs_msgs__msg__ProfilerUpdate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__ProfilerUpdate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__ProfilerUpdate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__ProfilerUpdate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
