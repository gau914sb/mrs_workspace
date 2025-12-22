// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/RangeWithCovarianceIdentified.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/range_with_covariance_identified__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `range`
#include "sensor_msgs/msg/detail/range__functions.h"

bool
mrs_msgs__msg__RangeWithCovarianceIdentified__init(mrs_msgs__msg__RangeWithCovarianceIdentified * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // range
  if (!sensor_msgs__msg__Range__init(&msg->range)) {
    mrs_msgs__msg__RangeWithCovarianceIdentified__fini(msg);
    return false;
  }
  // variance
  // power_a
  // power_b
  return true;
}

void
mrs_msgs__msg__RangeWithCovarianceIdentified__fini(mrs_msgs__msg__RangeWithCovarianceIdentified * msg)
{
  if (!msg) {
    return;
  }
  // id
  // range
  sensor_msgs__msg__Range__fini(&msg->range);
  // variance
  // power_a
  // power_b
}

bool
mrs_msgs__msg__RangeWithCovarianceIdentified__are_equal(const mrs_msgs__msg__RangeWithCovarianceIdentified * lhs, const mrs_msgs__msg__RangeWithCovarianceIdentified * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // range
  if (!sensor_msgs__msg__Range__are_equal(
      &(lhs->range), &(rhs->range)))
  {
    return false;
  }
  // variance
  if (lhs->variance != rhs->variance) {
    return false;
  }
  // power_a
  if (lhs->power_a != rhs->power_a) {
    return false;
  }
  // power_b
  if (lhs->power_b != rhs->power_b) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__RangeWithCovarianceIdentified__copy(
  const mrs_msgs__msg__RangeWithCovarianceIdentified * input,
  mrs_msgs__msg__RangeWithCovarianceIdentified * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // range
  if (!sensor_msgs__msg__Range__copy(
      &(input->range), &(output->range)))
  {
    return false;
  }
  // variance
  output->variance = input->variance;
  // power_a
  output->power_a = input->power_a;
  // power_b
  output->power_b = input->power_b;
  return true;
}

mrs_msgs__msg__RangeWithCovarianceIdentified *
mrs_msgs__msg__RangeWithCovarianceIdentified__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__RangeWithCovarianceIdentified * msg = (mrs_msgs__msg__RangeWithCovarianceIdentified *)allocator.allocate(sizeof(mrs_msgs__msg__RangeWithCovarianceIdentified), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__RangeWithCovarianceIdentified));
  bool success = mrs_msgs__msg__RangeWithCovarianceIdentified__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__RangeWithCovarianceIdentified__destroy(mrs_msgs__msg__RangeWithCovarianceIdentified * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__RangeWithCovarianceIdentified__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence__init(mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__RangeWithCovarianceIdentified * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__RangeWithCovarianceIdentified *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__RangeWithCovarianceIdentified), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__RangeWithCovarianceIdentified__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__RangeWithCovarianceIdentified__fini(&data[i - 1]);
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
mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence__fini(mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence * array)
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
      mrs_msgs__msg__RangeWithCovarianceIdentified__fini(&array->data[i]);
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

mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence *
mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence * array = (mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence__destroy(mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence__are_equal(const mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence * lhs, const mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__RangeWithCovarianceIdentified__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence__copy(
  const mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence * input,
  mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__RangeWithCovarianceIdentified);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__RangeWithCovarianceIdentified * data =
      (mrs_msgs__msg__RangeWithCovarianceIdentified *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__RangeWithCovarianceIdentified__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__RangeWithCovarianceIdentified__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__RangeWithCovarianceIdentified__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
