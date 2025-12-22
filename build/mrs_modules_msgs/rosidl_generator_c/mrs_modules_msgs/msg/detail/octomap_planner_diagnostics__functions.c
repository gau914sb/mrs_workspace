// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_modules_msgs:msg/OctomapPlannerDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/octomap_planner_diagnostics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `desired_reference`
// Member `best_goal`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
mrs_modules_msgs__msg__OctomapPlannerDiagnostics__init(mrs_modules_msgs__msg__OctomapPlannerDiagnostics * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_modules_msgs__msg__OctomapPlannerDiagnostics__fini(msg);
    return false;
  }
  // idle
  // desired_reference
  if (!geometry_msgs__msg__Point__init(&msg->desired_reference)) {
    mrs_modules_msgs__msg__OctomapPlannerDiagnostics__fini(msg);
    return false;
  }
  // best_goal
  if (!geometry_msgs__msg__Point__init(&msg->best_goal)) {
    mrs_modules_msgs__msg__OctomapPlannerDiagnostics__fini(msg);
    return false;
  }
  return true;
}

void
mrs_modules_msgs__msg__OctomapPlannerDiagnostics__fini(mrs_modules_msgs__msg__OctomapPlannerDiagnostics * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // idle
  // desired_reference
  geometry_msgs__msg__Point__fini(&msg->desired_reference);
  // best_goal
  geometry_msgs__msg__Point__fini(&msg->best_goal);
}

bool
mrs_modules_msgs__msg__OctomapPlannerDiagnostics__are_equal(const mrs_modules_msgs__msg__OctomapPlannerDiagnostics * lhs, const mrs_modules_msgs__msg__OctomapPlannerDiagnostics * rhs)
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
  // idle
  if (lhs->idle != rhs->idle) {
    return false;
  }
  // desired_reference
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->desired_reference), &(rhs->desired_reference)))
  {
    return false;
  }
  // best_goal
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->best_goal), &(rhs->best_goal)))
  {
    return false;
  }
  return true;
}

bool
mrs_modules_msgs__msg__OctomapPlannerDiagnostics__copy(
  const mrs_modules_msgs__msg__OctomapPlannerDiagnostics * input,
  mrs_modules_msgs__msg__OctomapPlannerDiagnostics * output)
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
  // idle
  output->idle = input->idle;
  // desired_reference
  if (!geometry_msgs__msg__Point__copy(
      &(input->desired_reference), &(output->desired_reference)))
  {
    return false;
  }
  // best_goal
  if (!geometry_msgs__msg__Point__copy(
      &(input->best_goal), &(output->best_goal)))
  {
    return false;
  }
  return true;
}

mrs_modules_msgs__msg__OctomapPlannerDiagnostics *
mrs_modules_msgs__msg__OctomapPlannerDiagnostics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__OctomapPlannerDiagnostics * msg = (mrs_modules_msgs__msg__OctomapPlannerDiagnostics *)allocator.allocate(sizeof(mrs_modules_msgs__msg__OctomapPlannerDiagnostics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_modules_msgs__msg__OctomapPlannerDiagnostics));
  bool success = mrs_modules_msgs__msg__OctomapPlannerDiagnostics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_modules_msgs__msg__OctomapPlannerDiagnostics__destroy(mrs_modules_msgs__msg__OctomapPlannerDiagnostics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_modules_msgs__msg__OctomapPlannerDiagnostics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence__init(mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__OctomapPlannerDiagnostics * data = NULL;

  if (size) {
    data = (mrs_modules_msgs__msg__OctomapPlannerDiagnostics *)allocator.zero_allocate(size, sizeof(mrs_modules_msgs__msg__OctomapPlannerDiagnostics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_modules_msgs__msg__OctomapPlannerDiagnostics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_modules_msgs__msg__OctomapPlannerDiagnostics__fini(&data[i - 1]);
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
mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence__fini(mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence * array)
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
      mrs_modules_msgs__msg__OctomapPlannerDiagnostics__fini(&array->data[i]);
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

mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence *
mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence * array = (mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence *)allocator.allocate(sizeof(mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence__destroy(mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence__are_equal(const mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence * lhs, const mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_modules_msgs__msg__OctomapPlannerDiagnostics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence__copy(
  const mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence * input,
  mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_modules_msgs__msg__OctomapPlannerDiagnostics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_modules_msgs__msg__OctomapPlannerDiagnostics * data =
      (mrs_modules_msgs__msg__OctomapPlannerDiagnostics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_modules_msgs__msg__OctomapPlannerDiagnostics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_modules_msgs__msg__OctomapPlannerDiagnostics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_modules_msgs__msg__OctomapPlannerDiagnostics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
