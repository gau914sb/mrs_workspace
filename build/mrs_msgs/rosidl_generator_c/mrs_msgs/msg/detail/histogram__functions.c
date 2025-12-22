// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/Histogram.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/histogram__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `unit`
#include "rosidl_runtime_c/string_functions.h"
// Member `bins`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mrs_msgs__msg__Histogram__init(mrs_msgs__msg__Histogram * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_msgs__msg__Histogram__fini(msg);
    return false;
  }
  // unit
  if (!rosidl_runtime_c__String__init(&msg->unit)) {
    mrs_msgs__msg__Histogram__fini(msg);
    return false;
  }
  // bin_size
  // bin_min
  // bin_max
  // bin_mark
  // bins
  if (!rosidl_runtime_c__float__Sequence__init(&msg->bins, 0)) {
    mrs_msgs__msg__Histogram__fini(msg);
    return false;
  }
  return true;
}

void
mrs_msgs__msg__Histogram__fini(mrs_msgs__msg__Histogram * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // unit
  rosidl_runtime_c__String__fini(&msg->unit);
  // bin_size
  // bin_min
  // bin_max
  // bin_mark
  // bins
  rosidl_runtime_c__float__Sequence__fini(&msg->bins);
}

bool
mrs_msgs__msg__Histogram__are_equal(const mrs_msgs__msg__Histogram * lhs, const mrs_msgs__msg__Histogram * rhs)
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
  // unit
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->unit), &(rhs->unit)))
  {
    return false;
  }
  // bin_size
  if (lhs->bin_size != rhs->bin_size) {
    return false;
  }
  // bin_min
  if (lhs->bin_min != rhs->bin_min) {
    return false;
  }
  // bin_max
  if (lhs->bin_max != rhs->bin_max) {
    return false;
  }
  // bin_mark
  if (lhs->bin_mark != rhs->bin_mark) {
    return false;
  }
  // bins
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->bins), &(rhs->bins)))
  {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__Histogram__copy(
  const mrs_msgs__msg__Histogram * input,
  mrs_msgs__msg__Histogram * output)
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
  // unit
  if (!rosidl_runtime_c__String__copy(
      &(input->unit), &(output->unit)))
  {
    return false;
  }
  // bin_size
  output->bin_size = input->bin_size;
  // bin_min
  output->bin_min = input->bin_min;
  // bin_max
  output->bin_max = input->bin_max;
  // bin_mark
  output->bin_mark = input->bin_mark;
  // bins
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->bins), &(output->bins)))
  {
    return false;
  }
  return true;
}

mrs_msgs__msg__Histogram *
mrs_msgs__msg__Histogram__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__Histogram * msg = (mrs_msgs__msg__Histogram *)allocator.allocate(sizeof(mrs_msgs__msg__Histogram), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__Histogram));
  bool success = mrs_msgs__msg__Histogram__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__Histogram__destroy(mrs_msgs__msg__Histogram * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__Histogram__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__Histogram__Sequence__init(mrs_msgs__msg__Histogram__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__Histogram * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__Histogram *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__Histogram), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__Histogram__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__Histogram__fini(&data[i - 1]);
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
mrs_msgs__msg__Histogram__Sequence__fini(mrs_msgs__msg__Histogram__Sequence * array)
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
      mrs_msgs__msg__Histogram__fini(&array->data[i]);
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

mrs_msgs__msg__Histogram__Sequence *
mrs_msgs__msg__Histogram__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__Histogram__Sequence * array = (mrs_msgs__msg__Histogram__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__Histogram__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__Histogram__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__Histogram__Sequence__destroy(mrs_msgs__msg__Histogram__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__Histogram__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__Histogram__Sequence__are_equal(const mrs_msgs__msg__Histogram__Sequence * lhs, const mrs_msgs__msg__Histogram__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__Histogram__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__Histogram__Sequence__copy(
  const mrs_msgs__msg__Histogram__Sequence * input,
  mrs_msgs__msg__Histogram__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__Histogram);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__Histogram * data =
      (mrs_msgs__msg__Histogram *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__Histogram__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__Histogram__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__Histogram__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
