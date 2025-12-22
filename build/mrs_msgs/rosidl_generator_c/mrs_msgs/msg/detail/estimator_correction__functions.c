// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/EstimatorCorrection.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/estimator_correction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `estimator_name`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `state`
// Member `covariance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mrs_msgs__msg__EstimatorCorrection__init(mrs_msgs__msg__EstimatorCorrection * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_msgs__msg__EstimatorCorrection__fini(msg);
    return false;
  }
  // estimator_name
  if (!rosidl_runtime_c__String__init(&msg->estimator_name)) {
    mrs_msgs__msg__EstimatorCorrection__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    mrs_msgs__msg__EstimatorCorrection__fini(msg);
    return false;
  }
  // state_id
  // state
  if (!rosidl_runtime_c__double__Sequence__init(&msg->state, 0)) {
    mrs_msgs__msg__EstimatorCorrection__fini(msg);
    return false;
  }
  // covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->covariance, 0)) {
    mrs_msgs__msg__EstimatorCorrection__fini(msg);
    return false;
  }
  return true;
}

void
mrs_msgs__msg__EstimatorCorrection__fini(mrs_msgs__msg__EstimatorCorrection * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // estimator_name
  rosidl_runtime_c__String__fini(&msg->estimator_name);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // state_id
  // state
  rosidl_runtime_c__double__Sequence__fini(&msg->state);
  // covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->covariance);
}

bool
mrs_msgs__msg__EstimatorCorrection__are_equal(const mrs_msgs__msg__EstimatorCorrection * lhs, const mrs_msgs__msg__EstimatorCorrection * rhs)
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
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // state_id
  if (lhs->state_id != rhs->state_id) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->covariance), &(rhs->covariance)))
  {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__EstimatorCorrection__copy(
  const mrs_msgs__msg__EstimatorCorrection * input,
  mrs_msgs__msg__EstimatorCorrection * output)
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
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // state_id
  output->state_id = input->state_id;
  // state
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // covariance
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->covariance), &(output->covariance)))
  {
    return false;
  }
  return true;
}

mrs_msgs__msg__EstimatorCorrection *
mrs_msgs__msg__EstimatorCorrection__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__EstimatorCorrection * msg = (mrs_msgs__msg__EstimatorCorrection *)allocator.allocate(sizeof(mrs_msgs__msg__EstimatorCorrection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__EstimatorCorrection));
  bool success = mrs_msgs__msg__EstimatorCorrection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__EstimatorCorrection__destroy(mrs_msgs__msg__EstimatorCorrection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__EstimatorCorrection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__EstimatorCorrection__Sequence__init(mrs_msgs__msg__EstimatorCorrection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__EstimatorCorrection * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__EstimatorCorrection *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__EstimatorCorrection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__EstimatorCorrection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__EstimatorCorrection__fini(&data[i - 1]);
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
mrs_msgs__msg__EstimatorCorrection__Sequence__fini(mrs_msgs__msg__EstimatorCorrection__Sequence * array)
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
      mrs_msgs__msg__EstimatorCorrection__fini(&array->data[i]);
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

mrs_msgs__msg__EstimatorCorrection__Sequence *
mrs_msgs__msg__EstimatorCorrection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__EstimatorCorrection__Sequence * array = (mrs_msgs__msg__EstimatorCorrection__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__EstimatorCorrection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__EstimatorCorrection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__EstimatorCorrection__Sequence__destroy(mrs_msgs__msg__EstimatorCorrection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__EstimatorCorrection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__EstimatorCorrection__Sequence__are_equal(const mrs_msgs__msg__EstimatorCorrection__Sequence * lhs, const mrs_msgs__msg__EstimatorCorrection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__EstimatorCorrection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__EstimatorCorrection__Sequence__copy(
  const mrs_msgs__msg__EstimatorCorrection__Sequence * input,
  mrs_msgs__msg__EstimatorCorrection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__EstimatorCorrection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__EstimatorCorrection * data =
      (mrs_msgs__msg__EstimatorCorrection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__EstimatorCorrection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__EstimatorCorrection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__EstimatorCorrection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
