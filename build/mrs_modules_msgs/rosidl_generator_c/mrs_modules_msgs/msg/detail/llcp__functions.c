// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_modules_msgs:msg/Llcp.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/llcp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `payload`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mrs_modules_msgs__msg__Llcp__init(mrs_modules_msgs__msg__Llcp * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mrs_modules_msgs__msg__Llcp__fini(msg);
    return false;
  }
  // checksum_matched
  // id
  // payload
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->payload, 0)) {
    mrs_modules_msgs__msg__Llcp__fini(msg);
    return false;
  }
  return true;
}

void
mrs_modules_msgs__msg__Llcp__fini(mrs_modules_msgs__msg__Llcp * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // checksum_matched
  // id
  // payload
  rosidl_runtime_c__uint8__Sequence__fini(&msg->payload);
}

bool
mrs_modules_msgs__msg__Llcp__are_equal(const mrs_modules_msgs__msg__Llcp * lhs, const mrs_modules_msgs__msg__Llcp * rhs)
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
  // checksum_matched
  if (lhs->checksum_matched != rhs->checksum_matched) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // payload
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->payload), &(rhs->payload)))
  {
    return false;
  }
  return true;
}

bool
mrs_modules_msgs__msg__Llcp__copy(
  const mrs_modules_msgs__msg__Llcp * input,
  mrs_modules_msgs__msg__Llcp * output)
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
  // checksum_matched
  output->checksum_matched = input->checksum_matched;
  // id
  output->id = input->id;
  // payload
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->payload), &(output->payload)))
  {
    return false;
  }
  return true;
}

mrs_modules_msgs__msg__Llcp *
mrs_modules_msgs__msg__Llcp__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Llcp * msg = (mrs_modules_msgs__msg__Llcp *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Llcp), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_modules_msgs__msg__Llcp));
  bool success = mrs_modules_msgs__msg__Llcp__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_modules_msgs__msg__Llcp__destroy(mrs_modules_msgs__msg__Llcp * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_modules_msgs__msg__Llcp__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_modules_msgs__msg__Llcp__Sequence__init(mrs_modules_msgs__msg__Llcp__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Llcp * data = NULL;

  if (size) {
    data = (mrs_modules_msgs__msg__Llcp *)allocator.zero_allocate(size, sizeof(mrs_modules_msgs__msg__Llcp), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_modules_msgs__msg__Llcp__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_modules_msgs__msg__Llcp__fini(&data[i - 1]);
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
mrs_modules_msgs__msg__Llcp__Sequence__fini(mrs_modules_msgs__msg__Llcp__Sequence * array)
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
      mrs_modules_msgs__msg__Llcp__fini(&array->data[i]);
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

mrs_modules_msgs__msg__Llcp__Sequence *
mrs_modules_msgs__msg__Llcp__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Llcp__Sequence * array = (mrs_modules_msgs__msg__Llcp__Sequence *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Llcp__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_modules_msgs__msg__Llcp__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_modules_msgs__msg__Llcp__Sequence__destroy(mrs_modules_msgs__msg__Llcp__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_modules_msgs__msg__Llcp__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_modules_msgs__msg__Llcp__Sequence__are_equal(const mrs_modules_msgs__msg__Llcp__Sequence * lhs, const mrs_modules_msgs__msg__Llcp__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_modules_msgs__msg__Llcp__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_modules_msgs__msg__Llcp__Sequence__copy(
  const mrs_modules_msgs__msg__Llcp__Sequence * input,
  mrs_modules_msgs__msg__Llcp__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_modules_msgs__msg__Llcp);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_modules_msgs__msg__Llcp * data =
      (mrs_modules_msgs__msg__Llcp *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_modules_msgs__msg__Llcp__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_modules_msgs__msg__Llcp__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_modules_msgs__msg__Llcp__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
