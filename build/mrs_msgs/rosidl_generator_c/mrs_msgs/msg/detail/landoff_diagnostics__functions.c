// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/LandoffDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/landoff_diagnostics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
mrs_msgs__msg__LandoffDiagnostics__init(mrs_msgs__msg__LandoffDiagnostics * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mrs_msgs__msg__LandoffDiagnostics__fini(msg);
    return false;
  }
  // active
  // landing
  // taking_off
  // elanding
  return true;
}

void
mrs_msgs__msg__LandoffDiagnostics__fini(mrs_msgs__msg__LandoffDiagnostics * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // active
  // landing
  // taking_off
  // elanding
}

bool
mrs_msgs__msg__LandoffDiagnostics__are_equal(const mrs_msgs__msg__LandoffDiagnostics * lhs, const mrs_msgs__msg__LandoffDiagnostics * rhs)
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
  // active
  if (lhs->active != rhs->active) {
    return false;
  }
  // landing
  if (lhs->landing != rhs->landing) {
    return false;
  }
  // taking_off
  if (lhs->taking_off != rhs->taking_off) {
    return false;
  }
  // elanding
  if (lhs->elanding != rhs->elanding) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__LandoffDiagnostics__copy(
  const mrs_msgs__msg__LandoffDiagnostics * input,
  mrs_msgs__msg__LandoffDiagnostics * output)
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
  // active
  output->active = input->active;
  // landing
  output->landing = input->landing;
  // taking_off
  output->taking_off = input->taking_off;
  // elanding
  output->elanding = input->elanding;
  return true;
}

mrs_msgs__msg__LandoffDiagnostics *
mrs_msgs__msg__LandoffDiagnostics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__LandoffDiagnostics * msg = (mrs_msgs__msg__LandoffDiagnostics *)allocator.allocate(sizeof(mrs_msgs__msg__LandoffDiagnostics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__LandoffDiagnostics));
  bool success = mrs_msgs__msg__LandoffDiagnostics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__LandoffDiagnostics__destroy(mrs_msgs__msg__LandoffDiagnostics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__LandoffDiagnostics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__LandoffDiagnostics__Sequence__init(mrs_msgs__msg__LandoffDiagnostics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__LandoffDiagnostics * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__LandoffDiagnostics *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__LandoffDiagnostics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__LandoffDiagnostics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__LandoffDiagnostics__fini(&data[i - 1]);
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
mrs_msgs__msg__LandoffDiagnostics__Sequence__fini(mrs_msgs__msg__LandoffDiagnostics__Sequence * array)
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
      mrs_msgs__msg__LandoffDiagnostics__fini(&array->data[i]);
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

mrs_msgs__msg__LandoffDiagnostics__Sequence *
mrs_msgs__msg__LandoffDiagnostics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__LandoffDiagnostics__Sequence * array = (mrs_msgs__msg__LandoffDiagnostics__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__LandoffDiagnostics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__LandoffDiagnostics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__LandoffDiagnostics__Sequence__destroy(mrs_msgs__msg__LandoffDiagnostics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__LandoffDiagnostics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__LandoffDiagnostics__Sequence__are_equal(const mrs_msgs__msg__LandoffDiagnostics__Sequence * lhs, const mrs_msgs__msg__LandoffDiagnostics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__LandoffDiagnostics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__LandoffDiagnostics__Sequence__copy(
  const mrs_msgs__msg__LandoffDiagnostics__Sequence * input,
  mrs_msgs__msg__LandoffDiagnostics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__LandoffDiagnostics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__LandoffDiagnostics * data =
      (mrs_msgs__msg__LandoffDiagnostics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__LandoffDiagnostics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__LandoffDiagnostics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__LandoffDiagnostics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
