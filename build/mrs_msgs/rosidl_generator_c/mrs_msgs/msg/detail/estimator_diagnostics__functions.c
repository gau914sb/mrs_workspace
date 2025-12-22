// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/EstimatorDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/estimator_diagnostics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `estimator_name`
// Member `estimator_type`
// Member `estimator_sm_state`
#include "rosidl_runtime_c/string_functions.h"

bool
mrs_msgs__msg__EstimatorDiagnostics__init(mrs_msgs__msg__EstimatorDiagnostics * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_msgs__msg__EstimatorDiagnostics__fini(msg);
    return false;
  }
  // estimator_name
  if (!rosidl_runtime_c__String__init(&msg->estimator_name)) {
    mrs_msgs__msg__EstimatorDiagnostics__fini(msg);
    return false;
  }
  // estimator_type
  if (!rosidl_runtime_c__String__init(&msg->estimator_type)) {
    mrs_msgs__msg__EstimatorDiagnostics__fini(msg);
    return false;
  }
  // estimator_sm_state
  if (!rosidl_runtime_c__String__init(&msg->estimator_sm_state)) {
    mrs_msgs__msg__EstimatorDiagnostics__fini(msg);
    return false;
  }
  return true;
}

void
mrs_msgs__msg__EstimatorDiagnostics__fini(mrs_msgs__msg__EstimatorDiagnostics * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // estimator_name
  rosidl_runtime_c__String__fini(&msg->estimator_name);
  // estimator_type
  rosidl_runtime_c__String__fini(&msg->estimator_type);
  // estimator_sm_state
  rosidl_runtime_c__String__fini(&msg->estimator_sm_state);
}

bool
mrs_msgs__msg__EstimatorDiagnostics__are_equal(const mrs_msgs__msg__EstimatorDiagnostics * lhs, const mrs_msgs__msg__EstimatorDiagnostics * rhs)
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
  // estimator_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->estimator_name), &(rhs->estimator_name)))
  {
    return false;
  }
  // estimator_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->estimator_type), &(rhs->estimator_type)))
  {
    return false;
  }
  // estimator_sm_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->estimator_sm_state), &(rhs->estimator_sm_state)))
  {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__EstimatorDiagnostics__copy(
  const mrs_msgs__msg__EstimatorDiagnostics * input,
  mrs_msgs__msg__EstimatorDiagnostics * output)
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
  // estimator_name
  if (!rosidl_runtime_c__String__copy(
      &(input->estimator_name), &(output->estimator_name)))
  {
    return false;
  }
  // estimator_type
  if (!rosidl_runtime_c__String__copy(
      &(input->estimator_type), &(output->estimator_type)))
  {
    return false;
  }
  // estimator_sm_state
  if (!rosidl_runtime_c__String__copy(
      &(input->estimator_sm_state), &(output->estimator_sm_state)))
  {
    return false;
  }
  return true;
}

mrs_msgs__msg__EstimatorDiagnostics *
mrs_msgs__msg__EstimatorDiagnostics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__EstimatorDiagnostics * msg = (mrs_msgs__msg__EstimatorDiagnostics *)allocator.allocate(sizeof(mrs_msgs__msg__EstimatorDiagnostics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__EstimatorDiagnostics));
  bool success = mrs_msgs__msg__EstimatorDiagnostics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__EstimatorDiagnostics__destroy(mrs_msgs__msg__EstimatorDiagnostics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__EstimatorDiagnostics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__EstimatorDiagnostics__Sequence__init(mrs_msgs__msg__EstimatorDiagnostics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__EstimatorDiagnostics * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__EstimatorDiagnostics *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__EstimatorDiagnostics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__EstimatorDiagnostics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__EstimatorDiagnostics__fini(&data[i - 1]);
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
mrs_msgs__msg__EstimatorDiagnostics__Sequence__fini(mrs_msgs__msg__EstimatorDiagnostics__Sequence * array)
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
      mrs_msgs__msg__EstimatorDiagnostics__fini(&array->data[i]);
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

mrs_msgs__msg__EstimatorDiagnostics__Sequence *
mrs_msgs__msg__EstimatorDiagnostics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__EstimatorDiagnostics__Sequence * array = (mrs_msgs__msg__EstimatorDiagnostics__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__EstimatorDiagnostics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__EstimatorDiagnostics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__EstimatorDiagnostics__Sequence__destroy(mrs_msgs__msg__EstimatorDiagnostics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__EstimatorDiagnostics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__EstimatorDiagnostics__Sequence__are_equal(const mrs_msgs__msg__EstimatorDiagnostics__Sequence * lhs, const mrs_msgs__msg__EstimatorDiagnostics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__EstimatorDiagnostics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__EstimatorDiagnostics__Sequence__copy(
  const mrs_msgs__msg__EstimatorDiagnostics__Sequence * input,
  mrs_msgs__msg__EstimatorDiagnostics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__EstimatorDiagnostics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__EstimatorDiagnostics * data =
      (mrs_msgs__msg__EstimatorDiagnostics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__EstimatorDiagnostics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__EstimatorDiagnostics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__EstimatorDiagnostics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
