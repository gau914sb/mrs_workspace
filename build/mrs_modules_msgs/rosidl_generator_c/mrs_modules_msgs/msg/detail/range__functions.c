// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_modules_msgs:msg/Range.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/range__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `tersus_msg_header`
#include "mrs_modules_msgs/msg/detail/tersus_message_header__functions.h"
// Member `info`
#include "mrs_modules_msgs/msg/detail/range_information__functions.h"

bool
mrs_modules_msgs__msg__Range__init(mrs_modules_msgs__msg__Range * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_modules_msgs__msg__Range__fini(msg);
    return false;
  }
  // tersus_msg_header
  if (!mrs_modules_msgs__msg__TersusMessageHeader__init(&msg->tersus_msg_header)) {
    mrs_modules_msgs__msg__Range__fini(msg);
    return false;
  }
  // numb_of_observ
  // info
  if (!mrs_modules_msgs__msg__RangeInformation__Sequence__init(&msg->info, 0)) {
    mrs_modules_msgs__msg__Range__fini(msg);
    return false;
  }
  return true;
}

void
mrs_modules_msgs__msg__Range__fini(mrs_modules_msgs__msg__Range * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tersus_msg_header
  mrs_modules_msgs__msg__TersusMessageHeader__fini(&msg->tersus_msg_header);
  // numb_of_observ
  // info
  mrs_modules_msgs__msg__RangeInformation__Sequence__fini(&msg->info);
}

bool
mrs_modules_msgs__msg__Range__are_equal(const mrs_modules_msgs__msg__Range * lhs, const mrs_modules_msgs__msg__Range * rhs)
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
  // tersus_msg_header
  if (!mrs_modules_msgs__msg__TersusMessageHeader__are_equal(
      &(lhs->tersus_msg_header), &(rhs->tersus_msg_header)))
  {
    return false;
  }
  // numb_of_observ
  if (lhs->numb_of_observ != rhs->numb_of_observ) {
    return false;
  }
  // info
  if (!mrs_modules_msgs__msg__RangeInformation__Sequence__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  return true;
}

bool
mrs_modules_msgs__msg__Range__copy(
  const mrs_modules_msgs__msg__Range * input,
  mrs_modules_msgs__msg__Range * output)
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
  // tersus_msg_header
  if (!mrs_modules_msgs__msg__TersusMessageHeader__copy(
      &(input->tersus_msg_header), &(output->tersus_msg_header)))
  {
    return false;
  }
  // numb_of_observ
  output->numb_of_observ = input->numb_of_observ;
  // info
  if (!mrs_modules_msgs__msg__RangeInformation__Sequence__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  return true;
}

mrs_modules_msgs__msg__Range *
mrs_modules_msgs__msg__Range__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Range * msg = (mrs_modules_msgs__msg__Range *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Range), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_modules_msgs__msg__Range));
  bool success = mrs_modules_msgs__msg__Range__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_modules_msgs__msg__Range__destroy(mrs_modules_msgs__msg__Range * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_modules_msgs__msg__Range__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_modules_msgs__msg__Range__Sequence__init(mrs_modules_msgs__msg__Range__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Range * data = NULL;

  if (size) {
    data = (mrs_modules_msgs__msg__Range *)allocator.zero_allocate(size, sizeof(mrs_modules_msgs__msg__Range), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_modules_msgs__msg__Range__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_modules_msgs__msg__Range__fini(&data[i - 1]);
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
mrs_modules_msgs__msg__Range__Sequence__fini(mrs_modules_msgs__msg__Range__Sequence * array)
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
      mrs_modules_msgs__msg__Range__fini(&array->data[i]);
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

mrs_modules_msgs__msg__Range__Sequence *
mrs_modules_msgs__msg__Range__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Range__Sequence * array = (mrs_modules_msgs__msg__Range__Sequence *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Range__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_modules_msgs__msg__Range__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_modules_msgs__msg__Range__Sequence__destroy(mrs_modules_msgs__msg__Range__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_modules_msgs__msg__Range__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_modules_msgs__msg__Range__Sequence__are_equal(const mrs_modules_msgs__msg__Range__Sequence * lhs, const mrs_modules_msgs__msg__Range__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_modules_msgs__msg__Range__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_modules_msgs__msg__Range__Sequence__copy(
  const mrs_modules_msgs__msg__Range__Sequence * input,
  mrs_modules_msgs__msg__Range__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_modules_msgs__msg__Range);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_modules_msgs__msg__Range * data =
      (mrs_modules_msgs__msg__Range *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_modules_msgs__msg__Range__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_modules_msgs__msg__Range__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_modules_msgs__msg__Range__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
