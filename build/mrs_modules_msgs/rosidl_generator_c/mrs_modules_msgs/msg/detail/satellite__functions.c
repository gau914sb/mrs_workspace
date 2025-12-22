// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_modules_msgs:msg/Satellite.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/satellite__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mrs_modules_msgs__msg__Satellite__init(mrs_modules_msgs__msg__Satellite * msg)
{
  if (!msg) {
    return false;
  }
  // prn
  // elevation
  // azimuth
  // snr
  return true;
}

void
mrs_modules_msgs__msg__Satellite__fini(mrs_modules_msgs__msg__Satellite * msg)
{
  if (!msg) {
    return;
  }
  // prn
  // elevation
  // azimuth
  // snr
}

bool
mrs_modules_msgs__msg__Satellite__are_equal(const mrs_modules_msgs__msg__Satellite * lhs, const mrs_modules_msgs__msg__Satellite * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // prn
  if (lhs->prn != rhs->prn) {
    return false;
  }
  // elevation
  if (lhs->elevation != rhs->elevation) {
    return false;
  }
  // azimuth
  if (lhs->azimuth != rhs->azimuth) {
    return false;
  }
  // snr
  if (lhs->snr != rhs->snr) {
    return false;
  }
  return true;
}

bool
mrs_modules_msgs__msg__Satellite__copy(
  const mrs_modules_msgs__msg__Satellite * input,
  mrs_modules_msgs__msg__Satellite * output)
{
  if (!input || !output) {
    return false;
  }
  // prn
  output->prn = input->prn;
  // elevation
  output->elevation = input->elevation;
  // azimuth
  output->azimuth = input->azimuth;
  // snr
  output->snr = input->snr;
  return true;
}

mrs_modules_msgs__msg__Satellite *
mrs_modules_msgs__msg__Satellite__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Satellite * msg = (mrs_modules_msgs__msg__Satellite *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Satellite), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_modules_msgs__msg__Satellite));
  bool success = mrs_modules_msgs__msg__Satellite__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_modules_msgs__msg__Satellite__destroy(mrs_modules_msgs__msg__Satellite * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_modules_msgs__msg__Satellite__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_modules_msgs__msg__Satellite__Sequence__init(mrs_modules_msgs__msg__Satellite__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Satellite * data = NULL;

  if (size) {
    data = (mrs_modules_msgs__msg__Satellite *)allocator.zero_allocate(size, sizeof(mrs_modules_msgs__msg__Satellite), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_modules_msgs__msg__Satellite__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_modules_msgs__msg__Satellite__fini(&data[i - 1]);
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
mrs_modules_msgs__msg__Satellite__Sequence__fini(mrs_modules_msgs__msg__Satellite__Sequence * array)
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
      mrs_modules_msgs__msg__Satellite__fini(&array->data[i]);
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

mrs_modules_msgs__msg__Satellite__Sequence *
mrs_modules_msgs__msg__Satellite__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Satellite__Sequence * array = (mrs_modules_msgs__msg__Satellite__Sequence *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Satellite__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_modules_msgs__msg__Satellite__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_modules_msgs__msg__Satellite__Sequence__destroy(mrs_modules_msgs__msg__Satellite__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_modules_msgs__msg__Satellite__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_modules_msgs__msg__Satellite__Sequence__are_equal(const mrs_modules_msgs__msg__Satellite__Sequence * lhs, const mrs_modules_msgs__msg__Satellite__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_modules_msgs__msg__Satellite__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_modules_msgs__msg__Satellite__Sequence__copy(
  const mrs_modules_msgs__msg__Satellite__Sequence * input,
  mrs_modules_msgs__msg__Satellite__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_modules_msgs__msg__Satellite);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_modules_msgs__msg__Satellite * data =
      (mrs_modules_msgs__msg__Satellite *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_modules_msgs__msg__Satellite__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_modules_msgs__msg__Satellite__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_modules_msgs__msg__Satellite__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
