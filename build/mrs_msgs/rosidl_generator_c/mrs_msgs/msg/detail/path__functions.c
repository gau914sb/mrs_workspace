// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/Path.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `points`
#include "mrs_msgs/msg/detail/reference__functions.h"

bool
mrs_msgs__msg__Path__init(mrs_msgs__msg__Path * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_msgs__msg__Path__fini(msg);
    return false;
  }
  // input_id
  // use_heading
  // fly_now
  // stop_at_waypoints
  // loop
  // max_execution_time
  // max_deviation_from_path
  // dont_prepend_current_state
  // override_heading_atan2
  // override_constraints
  // override_max_velocity_horizontal
  // override_max_acceleration_horizontal
  // override_max_jerk_horizontal
  // override_max_velocity_vertical
  // override_max_acceleration_vertical
  // override_max_jerk_vertical
  // relax_heading
  // points
  if (!mrs_msgs__msg__Reference__Sequence__init(&msg->points, 0)) {
    mrs_msgs__msg__Path__fini(msg);
    return false;
  }
  return true;
}

void
mrs_msgs__msg__Path__fini(mrs_msgs__msg__Path * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // input_id
  // use_heading
  // fly_now
  // stop_at_waypoints
  // loop
  // max_execution_time
  // max_deviation_from_path
  // dont_prepend_current_state
  // override_heading_atan2
  // override_constraints
  // override_max_velocity_horizontal
  // override_max_acceleration_horizontal
  // override_max_jerk_horizontal
  // override_max_velocity_vertical
  // override_max_acceleration_vertical
  // override_max_jerk_vertical
  // relax_heading
  // points
  mrs_msgs__msg__Reference__Sequence__fini(&msg->points);
}

bool
mrs_msgs__msg__Path__are_equal(const mrs_msgs__msg__Path * lhs, const mrs_msgs__msg__Path * rhs)
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
  // input_id
  if (lhs->input_id != rhs->input_id) {
    return false;
  }
  // use_heading
  if (lhs->use_heading != rhs->use_heading) {
    return false;
  }
  // fly_now
  if (lhs->fly_now != rhs->fly_now) {
    return false;
  }
  // stop_at_waypoints
  if (lhs->stop_at_waypoints != rhs->stop_at_waypoints) {
    return false;
  }
  // loop
  if (lhs->loop != rhs->loop) {
    return false;
  }
  // max_execution_time
  if (lhs->max_execution_time != rhs->max_execution_time) {
    return false;
  }
  // max_deviation_from_path
  if (lhs->max_deviation_from_path != rhs->max_deviation_from_path) {
    return false;
  }
  // dont_prepend_current_state
  if (lhs->dont_prepend_current_state != rhs->dont_prepend_current_state) {
    return false;
  }
  // override_heading_atan2
  if (lhs->override_heading_atan2 != rhs->override_heading_atan2) {
    return false;
  }
  // override_constraints
  if (lhs->override_constraints != rhs->override_constraints) {
    return false;
  }
  // override_max_velocity_horizontal
  if (lhs->override_max_velocity_horizontal != rhs->override_max_velocity_horizontal) {
    return false;
  }
  // override_max_acceleration_horizontal
  if (lhs->override_max_acceleration_horizontal != rhs->override_max_acceleration_horizontal) {
    return false;
  }
  // override_max_jerk_horizontal
  if (lhs->override_max_jerk_horizontal != rhs->override_max_jerk_horizontal) {
    return false;
  }
  // override_max_velocity_vertical
  if (lhs->override_max_velocity_vertical != rhs->override_max_velocity_vertical) {
    return false;
  }
  // override_max_acceleration_vertical
  if (lhs->override_max_acceleration_vertical != rhs->override_max_acceleration_vertical) {
    return false;
  }
  // override_max_jerk_vertical
  if (lhs->override_max_jerk_vertical != rhs->override_max_jerk_vertical) {
    return false;
  }
  // relax_heading
  if (lhs->relax_heading != rhs->relax_heading) {
    return false;
  }
  // points
  if (!mrs_msgs__msg__Reference__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__Path__copy(
  const mrs_msgs__msg__Path * input,
  mrs_msgs__msg__Path * output)
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
  // input_id
  output->input_id = input->input_id;
  // use_heading
  output->use_heading = input->use_heading;
  // fly_now
  output->fly_now = input->fly_now;
  // stop_at_waypoints
  output->stop_at_waypoints = input->stop_at_waypoints;
  // loop
  output->loop = input->loop;
  // max_execution_time
  output->max_execution_time = input->max_execution_time;
  // max_deviation_from_path
  output->max_deviation_from_path = input->max_deviation_from_path;
  // dont_prepend_current_state
  output->dont_prepend_current_state = input->dont_prepend_current_state;
  // override_heading_atan2
  output->override_heading_atan2 = input->override_heading_atan2;
  // override_constraints
  output->override_constraints = input->override_constraints;
  // override_max_velocity_horizontal
  output->override_max_velocity_horizontal = input->override_max_velocity_horizontal;
  // override_max_acceleration_horizontal
  output->override_max_acceleration_horizontal = input->override_max_acceleration_horizontal;
  // override_max_jerk_horizontal
  output->override_max_jerk_horizontal = input->override_max_jerk_horizontal;
  // override_max_velocity_vertical
  output->override_max_velocity_vertical = input->override_max_velocity_vertical;
  // override_max_acceleration_vertical
  output->override_max_acceleration_vertical = input->override_max_acceleration_vertical;
  // override_max_jerk_vertical
  output->override_max_jerk_vertical = input->override_max_jerk_vertical;
  // relax_heading
  output->relax_heading = input->relax_heading;
  // points
  if (!mrs_msgs__msg__Reference__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  return true;
}

mrs_msgs__msg__Path *
mrs_msgs__msg__Path__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__Path * msg = (mrs_msgs__msg__Path *)allocator.allocate(sizeof(mrs_msgs__msg__Path), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__Path));
  bool success = mrs_msgs__msg__Path__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__Path__destroy(mrs_msgs__msg__Path * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__Path__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__Path__Sequence__init(mrs_msgs__msg__Path__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__Path * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__Path *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__Path), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__Path__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__Path__fini(&data[i - 1]);
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
mrs_msgs__msg__Path__Sequence__fini(mrs_msgs__msg__Path__Sequence * array)
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
      mrs_msgs__msg__Path__fini(&array->data[i]);
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

mrs_msgs__msg__Path__Sequence *
mrs_msgs__msg__Path__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__Path__Sequence * array = (mrs_msgs__msg__Path__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__Path__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__Path__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__Path__Sequence__destroy(mrs_msgs__msg__Path__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__Path__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__Path__Sequence__are_equal(const mrs_msgs__msg__Path__Sequence * lhs, const mrs_msgs__msg__Path__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__Path__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__Path__Sequence__copy(
  const mrs_msgs__msg__Path__Sequence * input,
  mrs_msgs__msg__Path__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__Path);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__Path * data =
      (mrs_msgs__msg__Path *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__Path__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__Path__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__Path__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
