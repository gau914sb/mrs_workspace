// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_modules_msgs:msg/SensorInfo.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/sensor_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `topic`
#include "rosidl_runtime_c/string_functions.h"

bool
mrs_modules_msgs__msg__SensorInfo__init(mrs_modules_msgs__msg__SensorInfo * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    mrs_modules_msgs__msg__SensorInfo__fini(msg);
    return false;
  }
  // topic
  if (!rosidl_runtime_c__String__init(&msg->topic)) {
    mrs_modules_msgs__msg__SensorInfo__fini(msg);
    return false;
  }
  // type
  // expected_rate
  return true;
}

void
mrs_modules_msgs__msg__SensorInfo__fini(mrs_modules_msgs__msg__SensorInfo * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // topic
  rosidl_runtime_c__String__fini(&msg->topic);
  // type
  // expected_rate
}

bool
mrs_modules_msgs__msg__SensorInfo__are_equal(const mrs_modules_msgs__msg__SensorInfo * lhs, const mrs_modules_msgs__msg__SensorInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->topic), &(rhs->topic)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // expected_rate
  if (lhs->expected_rate != rhs->expected_rate) {
    return false;
  }
  return true;
}

bool
mrs_modules_msgs__msg__SensorInfo__copy(
  const mrs_modules_msgs__msg__SensorInfo * input,
  mrs_modules_msgs__msg__SensorInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // topic
  if (!rosidl_runtime_c__String__copy(
      &(input->topic), &(output->topic)))
  {
    return false;
  }
  // type
  output->type = input->type;
  // expected_rate
  output->expected_rate = input->expected_rate;
  return true;
}

mrs_modules_msgs__msg__SensorInfo *
mrs_modules_msgs__msg__SensorInfo__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__SensorInfo * msg = (mrs_modules_msgs__msg__SensorInfo *)allocator.allocate(sizeof(mrs_modules_msgs__msg__SensorInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_modules_msgs__msg__SensorInfo));
  bool success = mrs_modules_msgs__msg__SensorInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_modules_msgs__msg__SensorInfo__destroy(mrs_modules_msgs__msg__SensorInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_modules_msgs__msg__SensorInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_modules_msgs__msg__SensorInfo__Sequence__init(mrs_modules_msgs__msg__SensorInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__SensorInfo * data = NULL;

  if (size) {
    data = (mrs_modules_msgs__msg__SensorInfo *)allocator.zero_allocate(size, sizeof(mrs_modules_msgs__msg__SensorInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_modules_msgs__msg__SensorInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_modules_msgs__msg__SensorInfo__fini(&data[i - 1]);
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
mrs_modules_msgs__msg__SensorInfo__Sequence__fini(mrs_modules_msgs__msg__SensorInfo__Sequence * array)
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
      mrs_modules_msgs__msg__SensorInfo__fini(&array->data[i]);
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

mrs_modules_msgs__msg__SensorInfo__Sequence *
mrs_modules_msgs__msg__SensorInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__SensorInfo__Sequence * array = (mrs_modules_msgs__msg__SensorInfo__Sequence *)allocator.allocate(sizeof(mrs_modules_msgs__msg__SensorInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_modules_msgs__msg__SensorInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_modules_msgs__msg__SensorInfo__Sequence__destroy(mrs_modules_msgs__msg__SensorInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_modules_msgs__msg__SensorInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_modules_msgs__msg__SensorInfo__Sequence__are_equal(const mrs_modules_msgs__msg__SensorInfo__Sequence * lhs, const mrs_modules_msgs__msg__SensorInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_modules_msgs__msg__SensorInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_modules_msgs__msg__SensorInfo__Sequence__copy(
  const mrs_modules_msgs__msg__SensorInfo__Sequence * input,
  mrs_modules_msgs__msg__SensorInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_modules_msgs__msg__SensorInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_modules_msgs__msg__SensorInfo * data =
      (mrs_modules_msgs__msg__SensorInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_modules_msgs__msg__SensorInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_modules_msgs__msg__SensorInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_modules_msgs__msg__SensorInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
