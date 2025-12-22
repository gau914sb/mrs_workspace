// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/PoseWithCovarianceArrayStamped.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/pose_with_covariance_array_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `poses`
#include "mrs_msgs/msg/detail/pose_with_covariance_identified__functions.h"

bool
mrs_msgs__msg__PoseWithCovarianceArrayStamped__init(mrs_msgs__msg__PoseWithCovarianceArrayStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_msgs__msg__PoseWithCovarianceArrayStamped__fini(msg);
    return false;
  }
  // poses
  if (!mrs_msgs__msg__PoseWithCovarianceIdentified__Sequence__init(&msg->poses, 0)) {
    mrs_msgs__msg__PoseWithCovarianceArrayStamped__fini(msg);
    return false;
  }
  return true;
}

void
mrs_msgs__msg__PoseWithCovarianceArrayStamped__fini(mrs_msgs__msg__PoseWithCovarianceArrayStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // poses
  mrs_msgs__msg__PoseWithCovarianceIdentified__Sequence__fini(&msg->poses);
}

bool
mrs_msgs__msg__PoseWithCovarianceArrayStamped__are_equal(const mrs_msgs__msg__PoseWithCovarianceArrayStamped * lhs, const mrs_msgs__msg__PoseWithCovarianceArrayStamped * rhs)
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
  // poses
  if (!mrs_msgs__msg__PoseWithCovarianceIdentified__Sequence__are_equal(
      &(lhs->poses), &(rhs->poses)))
  {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__PoseWithCovarianceArrayStamped__copy(
  const mrs_msgs__msg__PoseWithCovarianceArrayStamped * input,
  mrs_msgs__msg__PoseWithCovarianceArrayStamped * output)
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
  // poses
  if (!mrs_msgs__msg__PoseWithCovarianceIdentified__Sequence__copy(
      &(input->poses), &(output->poses)))
  {
    return false;
  }
  return true;
}

mrs_msgs__msg__PoseWithCovarianceArrayStamped *
mrs_msgs__msg__PoseWithCovarianceArrayStamped__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__PoseWithCovarianceArrayStamped * msg = (mrs_msgs__msg__PoseWithCovarianceArrayStamped *)allocator.allocate(sizeof(mrs_msgs__msg__PoseWithCovarianceArrayStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__PoseWithCovarianceArrayStamped));
  bool success = mrs_msgs__msg__PoseWithCovarianceArrayStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__PoseWithCovarianceArrayStamped__destroy(mrs_msgs__msg__PoseWithCovarianceArrayStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__PoseWithCovarianceArrayStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence__init(mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__PoseWithCovarianceArrayStamped * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__PoseWithCovarianceArrayStamped *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__PoseWithCovarianceArrayStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__PoseWithCovarianceArrayStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__PoseWithCovarianceArrayStamped__fini(&data[i - 1]);
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
mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence__fini(mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence * array)
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
      mrs_msgs__msg__PoseWithCovarianceArrayStamped__fini(&array->data[i]);
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

mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence *
mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence * array = (mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence__destroy(mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence__are_equal(const mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence * lhs, const mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__PoseWithCovarianceArrayStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence__copy(
  const mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence * input,
  mrs_msgs__msg__PoseWithCovarianceArrayStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__PoseWithCovarianceArrayStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__PoseWithCovarianceArrayStamped * data =
      (mrs_msgs__msg__PoseWithCovarianceArrayStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__PoseWithCovarianceArrayStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__PoseWithCovarianceArrayStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__PoseWithCovarianceArrayStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
