// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/DynamicsConstraints.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/dynamics_constraints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mrs_msgs__msg__DynamicsConstraints__init(mrs_msgs__msg__DynamicsConstraints * msg)
{
  if (!msg) {
    return false;
  }
  // horizontal_speed
  // horizontal_acceleration
  // horizontal_jerk
  // horizontal_snap
  // vertical_ascending_speed
  // vertical_ascending_acceleration
  // vertical_ascending_jerk
  // vertical_ascending_snap
  // vertical_descending_speed
  // vertical_descending_acceleration
  // vertical_descending_jerk
  // vertical_descending_snap
  // heading_speed
  // heading_acceleration
  // heading_jerk
  // heading_snap
  // roll_rate
  // pitch_rate
  // yaw_rate
  // tilt
  return true;
}

void
mrs_msgs__msg__DynamicsConstraints__fini(mrs_msgs__msg__DynamicsConstraints * msg)
{
  if (!msg) {
    return;
  }
  // horizontal_speed
  // horizontal_acceleration
  // horizontal_jerk
  // horizontal_snap
  // vertical_ascending_speed
  // vertical_ascending_acceleration
  // vertical_ascending_jerk
  // vertical_ascending_snap
  // vertical_descending_speed
  // vertical_descending_acceleration
  // vertical_descending_jerk
  // vertical_descending_snap
  // heading_speed
  // heading_acceleration
  // heading_jerk
  // heading_snap
  // roll_rate
  // pitch_rate
  // yaw_rate
  // tilt
}

bool
mrs_msgs__msg__DynamicsConstraints__are_equal(const mrs_msgs__msg__DynamicsConstraints * lhs, const mrs_msgs__msg__DynamicsConstraints * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // horizontal_speed
  if (lhs->horizontal_speed != rhs->horizontal_speed) {
    return false;
  }
  // horizontal_acceleration
  if (lhs->horizontal_acceleration != rhs->horizontal_acceleration) {
    return false;
  }
  // horizontal_jerk
  if (lhs->horizontal_jerk != rhs->horizontal_jerk) {
    return false;
  }
  // horizontal_snap
  if (lhs->horizontal_snap != rhs->horizontal_snap) {
    return false;
  }
  // vertical_ascending_speed
  if (lhs->vertical_ascending_speed != rhs->vertical_ascending_speed) {
    return false;
  }
  // vertical_ascending_acceleration
  if (lhs->vertical_ascending_acceleration != rhs->vertical_ascending_acceleration) {
    return false;
  }
  // vertical_ascending_jerk
  if (lhs->vertical_ascending_jerk != rhs->vertical_ascending_jerk) {
    return false;
  }
  // vertical_ascending_snap
  if (lhs->vertical_ascending_snap != rhs->vertical_ascending_snap) {
    return false;
  }
  // vertical_descending_speed
  if (lhs->vertical_descending_speed != rhs->vertical_descending_speed) {
    return false;
  }
  // vertical_descending_acceleration
  if (lhs->vertical_descending_acceleration != rhs->vertical_descending_acceleration) {
    return false;
  }
  // vertical_descending_jerk
  if (lhs->vertical_descending_jerk != rhs->vertical_descending_jerk) {
    return false;
  }
  // vertical_descending_snap
  if (lhs->vertical_descending_snap != rhs->vertical_descending_snap) {
    return false;
  }
  // heading_speed
  if (lhs->heading_speed != rhs->heading_speed) {
    return false;
  }
  // heading_acceleration
  if (lhs->heading_acceleration != rhs->heading_acceleration) {
    return false;
  }
  // heading_jerk
  if (lhs->heading_jerk != rhs->heading_jerk) {
    return false;
  }
  // heading_snap
  if (lhs->heading_snap != rhs->heading_snap) {
    return false;
  }
  // roll_rate
  if (lhs->roll_rate != rhs->roll_rate) {
    return false;
  }
  // pitch_rate
  if (lhs->pitch_rate != rhs->pitch_rate) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // tilt
  if (lhs->tilt != rhs->tilt) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__DynamicsConstraints__copy(
  const mrs_msgs__msg__DynamicsConstraints * input,
  mrs_msgs__msg__DynamicsConstraints * output)
{
  if (!input || !output) {
    return false;
  }
  // horizontal_speed
  output->horizontal_speed = input->horizontal_speed;
  // horizontal_acceleration
  output->horizontal_acceleration = input->horizontal_acceleration;
  // horizontal_jerk
  output->horizontal_jerk = input->horizontal_jerk;
  // horizontal_snap
  output->horizontal_snap = input->horizontal_snap;
  // vertical_ascending_speed
  output->vertical_ascending_speed = input->vertical_ascending_speed;
  // vertical_ascending_acceleration
  output->vertical_ascending_acceleration = input->vertical_ascending_acceleration;
  // vertical_ascending_jerk
  output->vertical_ascending_jerk = input->vertical_ascending_jerk;
  // vertical_ascending_snap
  output->vertical_ascending_snap = input->vertical_ascending_snap;
  // vertical_descending_speed
  output->vertical_descending_speed = input->vertical_descending_speed;
  // vertical_descending_acceleration
  output->vertical_descending_acceleration = input->vertical_descending_acceleration;
  // vertical_descending_jerk
  output->vertical_descending_jerk = input->vertical_descending_jerk;
  // vertical_descending_snap
  output->vertical_descending_snap = input->vertical_descending_snap;
  // heading_speed
  output->heading_speed = input->heading_speed;
  // heading_acceleration
  output->heading_acceleration = input->heading_acceleration;
  // heading_jerk
  output->heading_jerk = input->heading_jerk;
  // heading_snap
  output->heading_snap = input->heading_snap;
  // roll_rate
  output->roll_rate = input->roll_rate;
  // pitch_rate
  output->pitch_rate = input->pitch_rate;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // tilt
  output->tilt = input->tilt;
  return true;
}

mrs_msgs__msg__DynamicsConstraints *
mrs_msgs__msg__DynamicsConstraints__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__DynamicsConstraints * msg = (mrs_msgs__msg__DynamicsConstraints *)allocator.allocate(sizeof(mrs_msgs__msg__DynamicsConstraints), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__DynamicsConstraints));
  bool success = mrs_msgs__msg__DynamicsConstraints__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__DynamicsConstraints__destroy(mrs_msgs__msg__DynamicsConstraints * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__DynamicsConstraints__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__DynamicsConstraints__Sequence__init(mrs_msgs__msg__DynamicsConstraints__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__DynamicsConstraints * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__DynamicsConstraints *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__DynamicsConstraints), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__DynamicsConstraints__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__DynamicsConstraints__fini(&data[i - 1]);
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
mrs_msgs__msg__DynamicsConstraints__Sequence__fini(mrs_msgs__msg__DynamicsConstraints__Sequence * array)
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
      mrs_msgs__msg__DynamicsConstraints__fini(&array->data[i]);
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

mrs_msgs__msg__DynamicsConstraints__Sequence *
mrs_msgs__msg__DynamicsConstraints__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__DynamicsConstraints__Sequence * array = (mrs_msgs__msg__DynamicsConstraints__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__DynamicsConstraints__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__DynamicsConstraints__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__DynamicsConstraints__Sequence__destroy(mrs_msgs__msg__DynamicsConstraints__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__DynamicsConstraints__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__DynamicsConstraints__Sequence__are_equal(const mrs_msgs__msg__DynamicsConstraints__Sequence * lhs, const mrs_msgs__msg__DynamicsConstraints__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__DynamicsConstraints__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__DynamicsConstraints__Sequence__copy(
  const mrs_msgs__msg__DynamicsConstraints__Sequence * input,
  mrs_msgs__msg__DynamicsConstraints__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__DynamicsConstraints);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__DynamicsConstraints * data =
      (mrs_msgs__msg__DynamicsConstraints *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__DynamicsConstraints__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__DynamicsConstraints__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__DynamicsConstraints__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
