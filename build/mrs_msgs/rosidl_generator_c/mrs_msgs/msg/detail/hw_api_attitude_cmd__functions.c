// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/HwApiAttitudeCmd.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/hw_api_attitude_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
mrs_msgs__msg__HwApiAttitudeCmd__init(mrs_msgs__msg__HwApiAttitudeCmd * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mrs_msgs__msg__HwApiAttitudeCmd__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    mrs_msgs__msg__HwApiAttitudeCmd__fini(msg);
    return false;
  }
  // throttle
  return true;
}

void
mrs_msgs__msg__HwApiAttitudeCmd__fini(mrs_msgs__msg__HwApiAttitudeCmd * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // throttle
}

bool
mrs_msgs__msg__HwApiAttitudeCmd__are_equal(const mrs_msgs__msg__HwApiAttitudeCmd * lhs, const mrs_msgs__msg__HwApiAttitudeCmd * rhs)
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
  // orientation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // throttle
  if (lhs->throttle != rhs->throttle) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__HwApiAttitudeCmd__copy(
  const mrs_msgs__msg__HwApiAttitudeCmd * input,
  mrs_msgs__msg__HwApiAttitudeCmd * output)
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
  // orientation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // throttle
  output->throttle = input->throttle;
  return true;
}

mrs_msgs__msg__HwApiAttitudeCmd *
mrs_msgs__msg__HwApiAttitudeCmd__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__HwApiAttitudeCmd * msg = (mrs_msgs__msg__HwApiAttitudeCmd *)allocator.allocate(sizeof(mrs_msgs__msg__HwApiAttitudeCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__HwApiAttitudeCmd));
  bool success = mrs_msgs__msg__HwApiAttitudeCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__HwApiAttitudeCmd__destroy(mrs_msgs__msg__HwApiAttitudeCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__HwApiAttitudeCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__HwApiAttitudeCmd__Sequence__init(mrs_msgs__msg__HwApiAttitudeCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__HwApiAttitudeCmd * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__HwApiAttitudeCmd *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__HwApiAttitudeCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__HwApiAttitudeCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__HwApiAttitudeCmd__fini(&data[i - 1]);
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
mrs_msgs__msg__HwApiAttitudeCmd__Sequence__fini(mrs_msgs__msg__HwApiAttitudeCmd__Sequence * array)
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
      mrs_msgs__msg__HwApiAttitudeCmd__fini(&array->data[i]);
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

mrs_msgs__msg__HwApiAttitudeCmd__Sequence *
mrs_msgs__msg__HwApiAttitudeCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__HwApiAttitudeCmd__Sequence * array = (mrs_msgs__msg__HwApiAttitudeCmd__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__HwApiAttitudeCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__HwApiAttitudeCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__HwApiAttitudeCmd__Sequence__destroy(mrs_msgs__msg__HwApiAttitudeCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__HwApiAttitudeCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__HwApiAttitudeCmd__Sequence__are_equal(const mrs_msgs__msg__HwApiAttitudeCmd__Sequence * lhs, const mrs_msgs__msg__HwApiAttitudeCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__HwApiAttitudeCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__HwApiAttitudeCmd__Sequence__copy(
  const mrs_msgs__msg__HwApiAttitudeCmd__Sequence * input,
  mrs_msgs__msg__HwApiAttitudeCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__HwApiAttitudeCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__HwApiAttitudeCmd * data =
      (mrs_msgs__msg__HwApiAttitudeCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__HwApiAttitudeCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__HwApiAttitudeCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__HwApiAttitudeCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
