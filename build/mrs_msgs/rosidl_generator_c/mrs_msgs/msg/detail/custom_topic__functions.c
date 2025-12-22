// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/CustomTopic.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/custom_topic__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `topic_name`
#include "rosidl_runtime_c/string_functions.h"

bool
mrs_msgs__msg__CustomTopic__init(mrs_msgs__msg__CustomTopic * msg)
{
  if (!msg) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__init(&msg->topic_name)) {
    mrs_msgs__msg__CustomTopic__fini(msg);
    return false;
  }
  // topic_hz
  // topic_color
  return true;
}

void
mrs_msgs__msg__CustomTopic__fini(mrs_msgs__msg__CustomTopic * msg)
{
  if (!msg) {
    return;
  }
  // topic_name
  rosidl_runtime_c__String__fini(&msg->topic_name);
  // topic_hz
  // topic_color
}

bool
mrs_msgs__msg__CustomTopic__are_equal(const mrs_msgs__msg__CustomTopic * lhs, const mrs_msgs__msg__CustomTopic * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->topic_name), &(rhs->topic_name)))
  {
    return false;
  }
  // topic_hz
  if (lhs->topic_hz != rhs->topic_hz) {
    return false;
  }
  // topic_color
  if (lhs->topic_color != rhs->topic_color) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__CustomTopic__copy(
  const mrs_msgs__msg__CustomTopic * input,
  mrs_msgs__msg__CustomTopic * output)
{
  if (!input || !output) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__copy(
      &(input->topic_name), &(output->topic_name)))
  {
    return false;
  }
  // topic_hz
  output->topic_hz = input->topic_hz;
  // topic_color
  output->topic_color = input->topic_color;
  return true;
}

mrs_msgs__msg__CustomTopic *
mrs_msgs__msg__CustomTopic__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__CustomTopic * msg = (mrs_msgs__msg__CustomTopic *)allocator.allocate(sizeof(mrs_msgs__msg__CustomTopic), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__CustomTopic));
  bool success = mrs_msgs__msg__CustomTopic__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__CustomTopic__destroy(mrs_msgs__msg__CustomTopic * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__CustomTopic__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__CustomTopic__Sequence__init(mrs_msgs__msg__CustomTopic__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__CustomTopic * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__CustomTopic *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__CustomTopic), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__CustomTopic__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__CustomTopic__fini(&data[i - 1]);
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
mrs_msgs__msg__CustomTopic__Sequence__fini(mrs_msgs__msg__CustomTopic__Sequence * array)
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
      mrs_msgs__msg__CustomTopic__fini(&array->data[i]);
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

mrs_msgs__msg__CustomTopic__Sequence *
mrs_msgs__msg__CustomTopic__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__CustomTopic__Sequence * array = (mrs_msgs__msg__CustomTopic__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__CustomTopic__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__CustomTopic__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__CustomTopic__Sequence__destroy(mrs_msgs__msg__CustomTopic__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__CustomTopic__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__CustomTopic__Sequence__are_equal(const mrs_msgs__msg__CustomTopic__Sequence * lhs, const mrs_msgs__msg__CustomTopic__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__CustomTopic__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__CustomTopic__Sequence__copy(
  const mrs_msgs__msg__CustomTopic__Sequence * input,
  mrs_msgs__msg__CustomTopic__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__CustomTopic);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__CustomTopic * data =
      (mrs_msgs__msg__CustomTopic *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__CustomTopic__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__CustomTopic__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__CustomTopic__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
