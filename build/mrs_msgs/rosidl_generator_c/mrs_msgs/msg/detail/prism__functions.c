// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/Prism.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/prism__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `horizontal_frame`
// Member `vertical_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `points`
#include "mrs_msgs/msg/detail/point2_d__functions.h"

bool
mrs_msgs__msg__Prism__init(mrs_msgs__msg__Prism * msg)
{
  if (!msg) {
    return false;
  }
  // horizontal_frame
  if (!rosidl_runtime_c__String__init(&msg->horizontal_frame)) {
    mrs_msgs__msg__Prism__fini(msg);
    return false;
  }
  // vertical_frame
  if (!rosidl_runtime_c__String__init(&msg->vertical_frame)) {
    mrs_msgs__msg__Prism__fini(msg);
    return false;
  }
  // points
  if (!mrs_msgs__msg__Point2D__Sequence__init(&msg->points, 0)) {
    mrs_msgs__msg__Prism__fini(msg);
    return false;
  }
  // max_z
  // min_z
  return true;
}

void
mrs_msgs__msg__Prism__fini(mrs_msgs__msg__Prism * msg)
{
  if (!msg) {
    return;
  }
  // horizontal_frame
  rosidl_runtime_c__String__fini(&msg->horizontal_frame);
  // vertical_frame
  rosidl_runtime_c__String__fini(&msg->vertical_frame);
  // points
  mrs_msgs__msg__Point2D__Sequence__fini(&msg->points);
  // max_z
  // min_z
}

bool
mrs_msgs__msg__Prism__are_equal(const mrs_msgs__msg__Prism * lhs, const mrs_msgs__msg__Prism * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // horizontal_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->horizontal_frame), &(rhs->horizontal_frame)))
  {
    return false;
  }
  // vertical_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->vertical_frame), &(rhs->vertical_frame)))
  {
    return false;
  }
  // points
  if (!mrs_msgs__msg__Point2D__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // max_z
  if (lhs->max_z != rhs->max_z) {
    return false;
  }
  // min_z
  if (lhs->min_z != rhs->min_z) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__Prism__copy(
  const mrs_msgs__msg__Prism * input,
  mrs_msgs__msg__Prism * output)
{
  if (!input || !output) {
    return false;
  }
  // horizontal_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->horizontal_frame), &(output->horizontal_frame)))
  {
    return false;
  }
  // vertical_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->vertical_frame), &(output->vertical_frame)))
  {
    return false;
  }
  // points
  if (!mrs_msgs__msg__Point2D__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // max_z
  output->max_z = input->max_z;
  // min_z
  output->min_z = input->min_z;
  return true;
}

mrs_msgs__msg__Prism *
mrs_msgs__msg__Prism__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__Prism * msg = (mrs_msgs__msg__Prism *)allocator.allocate(sizeof(mrs_msgs__msg__Prism), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__Prism));
  bool success = mrs_msgs__msg__Prism__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__Prism__destroy(mrs_msgs__msg__Prism * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__Prism__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__Prism__Sequence__init(mrs_msgs__msg__Prism__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__Prism * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__Prism *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__Prism), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__Prism__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__Prism__fini(&data[i - 1]);
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
mrs_msgs__msg__Prism__Sequence__fini(mrs_msgs__msg__Prism__Sequence * array)
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
      mrs_msgs__msg__Prism__fini(&array->data[i]);
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

mrs_msgs__msg__Prism__Sequence *
mrs_msgs__msg__Prism__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__Prism__Sequence * array = (mrs_msgs__msg__Prism__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__Prism__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__Prism__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__Prism__Sequence__destroy(mrs_msgs__msg__Prism__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__Prism__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__Prism__Sequence__are_equal(const mrs_msgs__msg__Prism__Sequence * lhs, const mrs_msgs__msg__Prism__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__Prism__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__Prism__Sequence__copy(
  const mrs_msgs__msg__Prism__Sequence * input,
  mrs_msgs__msg__Prism__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__Prism);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__Prism * data =
      (mrs_msgs__msg__Prism *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__Prism__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__Prism__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__Prism__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
