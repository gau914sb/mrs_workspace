// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/TrackerStatus.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/tracker_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `trajectory_reference`
#include "mrs_msgs/msg/detail/reference_stamped__functions.h"

bool
mrs_msgs__msg__TrackerStatus__init(mrs_msgs__msg__TrackerStatus * msg)
{
  if (!msg) {
    return false;
  }
  // active
  // callbacks_enabled
  // state
  // have_goal
  // tracking_trajectory
  // trajectory_length
  // trajectory_idx
  // trajectory_reference
  if (!mrs_msgs__msg__ReferenceStamped__init(&msg->trajectory_reference)) {
    mrs_msgs__msg__TrackerStatus__fini(msg);
    return false;
  }
  return true;
}

void
mrs_msgs__msg__TrackerStatus__fini(mrs_msgs__msg__TrackerStatus * msg)
{
  if (!msg) {
    return;
  }
  // active
  // callbacks_enabled
  // state
  // have_goal
  // tracking_trajectory
  // trajectory_length
  // trajectory_idx
  // trajectory_reference
  mrs_msgs__msg__ReferenceStamped__fini(&msg->trajectory_reference);
}

bool
mrs_msgs__msg__TrackerStatus__are_equal(const mrs_msgs__msg__TrackerStatus * lhs, const mrs_msgs__msg__TrackerStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // active
  if (lhs->active != rhs->active) {
    return false;
  }
  // callbacks_enabled
  if (lhs->callbacks_enabled != rhs->callbacks_enabled) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // have_goal
  if (lhs->have_goal != rhs->have_goal) {
    return false;
  }
  // tracking_trajectory
  if (lhs->tracking_trajectory != rhs->tracking_trajectory) {
    return false;
  }
  // trajectory_length
  if (lhs->trajectory_length != rhs->trajectory_length) {
    return false;
  }
  // trajectory_idx
  if (lhs->trajectory_idx != rhs->trajectory_idx) {
    return false;
  }
  // trajectory_reference
  if (!mrs_msgs__msg__ReferenceStamped__are_equal(
      &(lhs->trajectory_reference), &(rhs->trajectory_reference)))
  {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__TrackerStatus__copy(
  const mrs_msgs__msg__TrackerStatus * input,
  mrs_msgs__msg__TrackerStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // active
  output->active = input->active;
  // callbacks_enabled
  output->callbacks_enabled = input->callbacks_enabled;
  // state
  output->state = input->state;
  // have_goal
  output->have_goal = input->have_goal;
  // tracking_trajectory
  output->tracking_trajectory = input->tracking_trajectory;
  // trajectory_length
  output->trajectory_length = input->trajectory_length;
  // trajectory_idx
  output->trajectory_idx = input->trajectory_idx;
  // trajectory_reference
  if (!mrs_msgs__msg__ReferenceStamped__copy(
      &(input->trajectory_reference), &(output->trajectory_reference)))
  {
    return false;
  }
  return true;
}

mrs_msgs__msg__TrackerStatus *
mrs_msgs__msg__TrackerStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__TrackerStatus * msg = (mrs_msgs__msg__TrackerStatus *)allocator.allocate(sizeof(mrs_msgs__msg__TrackerStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__TrackerStatus));
  bool success = mrs_msgs__msg__TrackerStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__TrackerStatus__destroy(mrs_msgs__msg__TrackerStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__TrackerStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__TrackerStatus__Sequence__init(mrs_msgs__msg__TrackerStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__TrackerStatus * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__TrackerStatus *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__TrackerStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__TrackerStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__TrackerStatus__fini(&data[i - 1]);
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
mrs_msgs__msg__TrackerStatus__Sequence__fini(mrs_msgs__msg__TrackerStatus__Sequence * array)
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
      mrs_msgs__msg__TrackerStatus__fini(&array->data[i]);
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

mrs_msgs__msg__TrackerStatus__Sequence *
mrs_msgs__msg__TrackerStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__TrackerStatus__Sequence * array = (mrs_msgs__msg__TrackerStatus__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__TrackerStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__TrackerStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__TrackerStatus__Sequence__destroy(mrs_msgs__msg__TrackerStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__TrackerStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__TrackerStatus__Sequence__are_equal(const mrs_msgs__msg__TrackerStatus__Sequence * lhs, const mrs_msgs__msg__TrackerStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__TrackerStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__TrackerStatus__Sequence__copy(
  const mrs_msgs__msg__TrackerStatus__Sequence * input,
  mrs_msgs__msg__TrackerStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__TrackerStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__TrackerStatus * data =
      (mrs_msgs__msg__TrackerStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__TrackerStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__TrackerStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__TrackerStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
