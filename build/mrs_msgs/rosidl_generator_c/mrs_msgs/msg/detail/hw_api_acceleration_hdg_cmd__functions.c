// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/HwApiAccelerationHdgCmd.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/hw_api_acceleration_hdg_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `acceleration`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
mrs_msgs__msg__HwApiAccelerationHdgCmd__init(mrs_msgs__msg__HwApiAccelerationHdgCmd * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_msgs__msg__HwApiAccelerationHdgCmd__fini(msg);
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->acceleration)) {
    mrs_msgs__msg__HwApiAccelerationHdgCmd__fini(msg);
    return false;
  }
  // heading
  return true;
}

void
mrs_msgs__msg__HwApiAccelerationHdgCmd__fini(mrs_msgs__msg__HwApiAccelerationHdgCmd * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // acceleration
  geometry_msgs__msg__Vector3__fini(&msg->acceleration);
  // heading
}

bool
mrs_msgs__msg__HwApiAccelerationHdgCmd__are_equal(const mrs_msgs__msg__HwApiAccelerationHdgCmd * lhs, const mrs_msgs__msg__HwApiAccelerationHdgCmd * rhs)
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
  // acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__HwApiAccelerationHdgCmd__copy(
  const mrs_msgs__msg__HwApiAccelerationHdgCmd * input,
  mrs_msgs__msg__HwApiAccelerationHdgCmd * output)
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
  // acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // heading
  output->heading = input->heading;
  return true;
}

mrs_msgs__msg__HwApiAccelerationHdgCmd *
mrs_msgs__msg__HwApiAccelerationHdgCmd__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__HwApiAccelerationHdgCmd * msg = (mrs_msgs__msg__HwApiAccelerationHdgCmd *)allocator.allocate(sizeof(mrs_msgs__msg__HwApiAccelerationHdgCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__HwApiAccelerationHdgCmd));
  bool success = mrs_msgs__msg__HwApiAccelerationHdgCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__HwApiAccelerationHdgCmd__destroy(mrs_msgs__msg__HwApiAccelerationHdgCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__HwApiAccelerationHdgCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence__init(mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__HwApiAccelerationHdgCmd * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__HwApiAccelerationHdgCmd *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__HwApiAccelerationHdgCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__HwApiAccelerationHdgCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__HwApiAccelerationHdgCmd__fini(&data[i - 1]);
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
mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence__fini(mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence * array)
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
      mrs_msgs__msg__HwApiAccelerationHdgCmd__fini(&array->data[i]);
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

mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence *
mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence * array = (mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence__destroy(mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence__are_equal(const mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence * lhs, const mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__HwApiAccelerationHdgCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence__copy(
  const mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence * input,
  mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__HwApiAccelerationHdgCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__HwApiAccelerationHdgCmd * data =
      (mrs_msgs__msg__HwApiAccelerationHdgCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__HwApiAccelerationHdgCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__HwApiAccelerationHdgCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__HwApiAccelerationHdgCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
