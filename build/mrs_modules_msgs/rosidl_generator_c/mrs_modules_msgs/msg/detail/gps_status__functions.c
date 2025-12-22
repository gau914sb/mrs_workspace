// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_modules_msgs:msg/GpsStatus.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/gps_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mrs_modules_msgs__msg__GpsStatus__init(mrs_modules_msgs__msg__GpsStatus * msg)
{
  if (!msg) {
    return false;
  }
  // quality
  return true;
}

void
mrs_modules_msgs__msg__GpsStatus__fini(mrs_modules_msgs__msg__GpsStatus * msg)
{
  if (!msg) {
    return;
  }
  // quality
}

bool
mrs_modules_msgs__msg__GpsStatus__are_equal(const mrs_modules_msgs__msg__GpsStatus * lhs, const mrs_modules_msgs__msg__GpsStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // quality
  if (lhs->quality != rhs->quality) {
    return false;
  }
  return true;
}

bool
mrs_modules_msgs__msg__GpsStatus__copy(
  const mrs_modules_msgs__msg__GpsStatus * input,
  mrs_modules_msgs__msg__GpsStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // quality
  output->quality = input->quality;
  return true;
}

mrs_modules_msgs__msg__GpsStatus *
mrs_modules_msgs__msg__GpsStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__GpsStatus * msg = (mrs_modules_msgs__msg__GpsStatus *)allocator.allocate(sizeof(mrs_modules_msgs__msg__GpsStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_modules_msgs__msg__GpsStatus));
  bool success = mrs_modules_msgs__msg__GpsStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_modules_msgs__msg__GpsStatus__destroy(mrs_modules_msgs__msg__GpsStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_modules_msgs__msg__GpsStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_modules_msgs__msg__GpsStatus__Sequence__init(mrs_modules_msgs__msg__GpsStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__GpsStatus * data = NULL;

  if (size) {
    data = (mrs_modules_msgs__msg__GpsStatus *)allocator.zero_allocate(size, sizeof(mrs_modules_msgs__msg__GpsStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_modules_msgs__msg__GpsStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_modules_msgs__msg__GpsStatus__fini(&data[i - 1]);
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
mrs_modules_msgs__msg__GpsStatus__Sequence__fini(mrs_modules_msgs__msg__GpsStatus__Sequence * array)
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
      mrs_modules_msgs__msg__GpsStatus__fini(&array->data[i]);
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

mrs_modules_msgs__msg__GpsStatus__Sequence *
mrs_modules_msgs__msg__GpsStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__GpsStatus__Sequence * array = (mrs_modules_msgs__msg__GpsStatus__Sequence *)allocator.allocate(sizeof(mrs_modules_msgs__msg__GpsStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_modules_msgs__msg__GpsStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_modules_msgs__msg__GpsStatus__Sequence__destroy(mrs_modules_msgs__msg__GpsStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_modules_msgs__msg__GpsStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_modules_msgs__msg__GpsStatus__Sequence__are_equal(const mrs_modules_msgs__msg__GpsStatus__Sequence * lhs, const mrs_modules_msgs__msg__GpsStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_modules_msgs__msg__GpsStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_modules_msgs__msg__GpsStatus__Sequence__copy(
  const mrs_modules_msgs__msg__GpsStatus__Sequence * input,
  mrs_modules_msgs__msg__GpsStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_modules_msgs__msg__GpsStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_modules_msgs__msg__GpsStatus * data =
      (mrs_modules_msgs__msg__GpsStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_modules_msgs__msg__GpsStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_modules_msgs__msg__GpsStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_modules_msgs__msg__GpsStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
