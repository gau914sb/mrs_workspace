// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/GainManagerDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/gain_manager_diagnostics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `loaded`
// Member `available`
// Member `current_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `current_values`
#include "mrs_msgs/msg/detail/se3_gains__functions.h"

bool
mrs_msgs__msg__GainManagerDiagnostics__init(mrs_msgs__msg__GainManagerDiagnostics * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mrs_msgs__msg__GainManagerDiagnostics__fini(msg);
    return false;
  }
  // loaded
  if (!rosidl_runtime_c__String__Sequence__init(&msg->loaded, 0)) {
    mrs_msgs__msg__GainManagerDiagnostics__fini(msg);
    return false;
  }
  // available
  if (!rosidl_runtime_c__String__Sequence__init(&msg->available, 0)) {
    mrs_msgs__msg__GainManagerDiagnostics__fini(msg);
    return false;
  }
  // current_name
  if (!rosidl_runtime_c__String__init(&msg->current_name)) {
    mrs_msgs__msg__GainManagerDiagnostics__fini(msg);
    return false;
  }
  // current_values
  if (!mrs_msgs__msg__Se3Gains__init(&msg->current_values)) {
    mrs_msgs__msg__GainManagerDiagnostics__fini(msg);
    return false;
  }
  return true;
}

void
mrs_msgs__msg__GainManagerDiagnostics__fini(mrs_msgs__msg__GainManagerDiagnostics * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // loaded
  rosidl_runtime_c__String__Sequence__fini(&msg->loaded);
  // available
  rosidl_runtime_c__String__Sequence__fini(&msg->available);
  // current_name
  rosidl_runtime_c__String__fini(&msg->current_name);
  // current_values
  mrs_msgs__msg__Se3Gains__fini(&msg->current_values);
}

bool
mrs_msgs__msg__GainManagerDiagnostics__are_equal(const mrs_msgs__msg__GainManagerDiagnostics * lhs, const mrs_msgs__msg__GainManagerDiagnostics * rhs)
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
  // loaded
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->loaded), &(rhs->loaded)))
  {
    return false;
  }
  // available
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->available), &(rhs->available)))
  {
    return false;
  }
  // current_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_name), &(rhs->current_name)))
  {
    return false;
  }
  // current_values
  if (!mrs_msgs__msg__Se3Gains__are_equal(
      &(lhs->current_values), &(rhs->current_values)))
  {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__GainManagerDiagnostics__copy(
  const mrs_msgs__msg__GainManagerDiagnostics * input,
  mrs_msgs__msg__GainManagerDiagnostics * output)
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
  // loaded
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->loaded), &(output->loaded)))
  {
    return false;
  }
  // available
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->available), &(output->available)))
  {
    return false;
  }
  // current_name
  if (!rosidl_runtime_c__String__copy(
      &(input->current_name), &(output->current_name)))
  {
    return false;
  }
  // current_values
  if (!mrs_msgs__msg__Se3Gains__copy(
      &(input->current_values), &(output->current_values)))
  {
    return false;
  }
  return true;
}

mrs_msgs__msg__GainManagerDiagnostics *
mrs_msgs__msg__GainManagerDiagnostics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__GainManagerDiagnostics * msg = (mrs_msgs__msg__GainManagerDiagnostics *)allocator.allocate(sizeof(mrs_msgs__msg__GainManagerDiagnostics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__GainManagerDiagnostics));
  bool success = mrs_msgs__msg__GainManagerDiagnostics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__GainManagerDiagnostics__destroy(mrs_msgs__msg__GainManagerDiagnostics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__GainManagerDiagnostics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__GainManagerDiagnostics__Sequence__init(mrs_msgs__msg__GainManagerDiagnostics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__GainManagerDiagnostics * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__GainManagerDiagnostics *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__GainManagerDiagnostics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__GainManagerDiagnostics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__GainManagerDiagnostics__fini(&data[i - 1]);
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
mrs_msgs__msg__GainManagerDiagnostics__Sequence__fini(mrs_msgs__msg__GainManagerDiagnostics__Sequence * array)
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
      mrs_msgs__msg__GainManagerDiagnostics__fini(&array->data[i]);
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

mrs_msgs__msg__GainManagerDiagnostics__Sequence *
mrs_msgs__msg__GainManagerDiagnostics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__GainManagerDiagnostics__Sequence * array = (mrs_msgs__msg__GainManagerDiagnostics__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__GainManagerDiagnostics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__GainManagerDiagnostics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__GainManagerDiagnostics__Sequence__destroy(mrs_msgs__msg__GainManagerDiagnostics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__GainManagerDiagnostics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__GainManagerDiagnostics__Sequence__are_equal(const mrs_msgs__msg__GainManagerDiagnostics__Sequence * lhs, const mrs_msgs__msg__GainManagerDiagnostics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__GainManagerDiagnostics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__GainManagerDiagnostics__Sequence__copy(
  const mrs_msgs__msg__GainManagerDiagnostics__Sequence * input,
  mrs_msgs__msg__GainManagerDiagnostics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__GainManagerDiagnostics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__GainManagerDiagnostics * data =
      (mrs_msgs__msg__GainManagerDiagnostics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__GainManagerDiagnostics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__GainManagerDiagnostics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__GainManagerDiagnostics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
