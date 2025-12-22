// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/HwApiAttitudeRateCmd.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/hw_api_attitude_rate_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `body_rate`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
mrs_msgs__msg__HwApiAttitudeRateCmd__init(mrs_msgs__msg__HwApiAttitudeRateCmd * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mrs_msgs__msg__HwApiAttitudeRateCmd__fini(msg);
    return false;
  }
  // body_rate
  if (!geometry_msgs__msg__Vector3__init(&msg->body_rate)) {
    mrs_msgs__msg__HwApiAttitudeRateCmd__fini(msg);
    return false;
  }
  // throttle
  return true;
}

void
mrs_msgs__msg__HwApiAttitudeRateCmd__fini(mrs_msgs__msg__HwApiAttitudeRateCmd * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // body_rate
  geometry_msgs__msg__Vector3__fini(&msg->body_rate);
  // throttle
}

bool
mrs_msgs__msg__HwApiAttitudeRateCmd__are_equal(const mrs_msgs__msg__HwApiAttitudeRateCmd * lhs, const mrs_msgs__msg__HwApiAttitudeRateCmd * rhs)
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
  // body_rate
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->body_rate), &(rhs->body_rate)))
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
mrs_msgs__msg__HwApiAttitudeRateCmd__copy(
  const mrs_msgs__msg__HwApiAttitudeRateCmd * input,
  mrs_msgs__msg__HwApiAttitudeRateCmd * output)
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
  // body_rate
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->body_rate), &(output->body_rate)))
  {
    return false;
  }
  // throttle
  output->throttle = input->throttle;
  return true;
}

mrs_msgs__msg__HwApiAttitudeRateCmd *
mrs_msgs__msg__HwApiAttitudeRateCmd__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__HwApiAttitudeRateCmd * msg = (mrs_msgs__msg__HwApiAttitudeRateCmd *)allocator.allocate(sizeof(mrs_msgs__msg__HwApiAttitudeRateCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__HwApiAttitudeRateCmd));
  bool success = mrs_msgs__msg__HwApiAttitudeRateCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__HwApiAttitudeRateCmd__destroy(mrs_msgs__msg__HwApiAttitudeRateCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__HwApiAttitudeRateCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence__init(mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__HwApiAttitudeRateCmd * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__HwApiAttitudeRateCmd *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__HwApiAttitudeRateCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__HwApiAttitudeRateCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__HwApiAttitudeRateCmd__fini(&data[i - 1]);
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
mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence__fini(mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence * array)
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
      mrs_msgs__msg__HwApiAttitudeRateCmd__fini(&array->data[i]);
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

mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence *
mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence * array = (mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence__destroy(mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence__are_equal(const mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence * lhs, const mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__HwApiAttitudeRateCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence__copy(
  const mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence * input,
  mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__HwApiAttitudeRateCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__HwApiAttitudeRateCmd * data =
      (mrs_msgs__msg__HwApiAttitudeRateCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__HwApiAttitudeRateCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__HwApiAttitudeRateCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__HwApiAttitudeRateCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
