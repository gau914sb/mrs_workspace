// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/MpcTrackerDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/mpc_tracker_diagnostics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `uav_name`
// Member `avoidance_active_uavs`
#include "rosidl_runtime_c/string_functions.h"
// Member `setpoint`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
mrs_msgs__msg__MpcTrackerDiagnostics__init(mrs_msgs__msg__MpcTrackerDiagnostics * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_msgs__msg__MpcTrackerDiagnostics__fini(msg);
    return false;
  }
  // uav_name
  if (!rosidl_runtime_c__String__init(&msg->uav_name)) {
    mrs_msgs__msg__MpcTrackerDiagnostics__fini(msg);
    return false;
  }
  // active
  // collision_avoidance_active
  // avoiding_collision
  // avoidance_active_uavs
  if (!rosidl_runtime_c__String__Sequence__init(&msg->avoidance_active_uavs, 0)) {
    mrs_msgs__msg__MpcTrackerDiagnostics__fini(msg);
    return false;
  }
  // setpoint
  if (!geometry_msgs__msg__Pose__init(&msg->setpoint)) {
    mrs_msgs__msg__MpcTrackerDiagnostics__fini(msg);
    return false;
  }
  return true;
}

void
mrs_msgs__msg__MpcTrackerDiagnostics__fini(mrs_msgs__msg__MpcTrackerDiagnostics * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // uav_name
  rosidl_runtime_c__String__fini(&msg->uav_name);
  // active
  // collision_avoidance_active
  // avoiding_collision
  // avoidance_active_uavs
  rosidl_runtime_c__String__Sequence__fini(&msg->avoidance_active_uavs);
  // setpoint
  geometry_msgs__msg__Pose__fini(&msg->setpoint);
}

bool
mrs_msgs__msg__MpcTrackerDiagnostics__are_equal(const mrs_msgs__msg__MpcTrackerDiagnostics * lhs, const mrs_msgs__msg__MpcTrackerDiagnostics * rhs)
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
  // uav_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->uav_name), &(rhs->uav_name)))
  {
    return false;
  }
  // active
  if (lhs->active != rhs->active) {
    return false;
  }
  // collision_avoidance_active
  if (lhs->collision_avoidance_active != rhs->collision_avoidance_active) {
    return false;
  }
  // avoiding_collision
  if (lhs->avoiding_collision != rhs->avoiding_collision) {
    return false;
  }
  // avoidance_active_uavs
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->avoidance_active_uavs), &(rhs->avoidance_active_uavs)))
  {
    return false;
  }
  // setpoint
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->setpoint), &(rhs->setpoint)))
  {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__MpcTrackerDiagnostics__copy(
  const mrs_msgs__msg__MpcTrackerDiagnostics * input,
  mrs_msgs__msg__MpcTrackerDiagnostics * output)
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
  // uav_name
  if (!rosidl_runtime_c__String__copy(
      &(input->uav_name), &(output->uav_name)))
  {
    return false;
  }
  // active
  output->active = input->active;
  // collision_avoidance_active
  output->collision_avoidance_active = input->collision_avoidance_active;
  // avoiding_collision
  output->avoiding_collision = input->avoiding_collision;
  // avoidance_active_uavs
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->avoidance_active_uavs), &(output->avoidance_active_uavs)))
  {
    return false;
  }
  // setpoint
  if (!geometry_msgs__msg__Pose__copy(
      &(input->setpoint), &(output->setpoint)))
  {
    return false;
  }
  return true;
}

mrs_msgs__msg__MpcTrackerDiagnostics *
mrs_msgs__msg__MpcTrackerDiagnostics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__MpcTrackerDiagnostics * msg = (mrs_msgs__msg__MpcTrackerDiagnostics *)allocator.allocate(sizeof(mrs_msgs__msg__MpcTrackerDiagnostics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__MpcTrackerDiagnostics));
  bool success = mrs_msgs__msg__MpcTrackerDiagnostics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__MpcTrackerDiagnostics__destroy(mrs_msgs__msg__MpcTrackerDiagnostics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__MpcTrackerDiagnostics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__MpcTrackerDiagnostics__Sequence__init(mrs_msgs__msg__MpcTrackerDiagnostics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__MpcTrackerDiagnostics * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__MpcTrackerDiagnostics *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__MpcTrackerDiagnostics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__MpcTrackerDiagnostics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__MpcTrackerDiagnostics__fini(&data[i - 1]);
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
mrs_msgs__msg__MpcTrackerDiagnostics__Sequence__fini(mrs_msgs__msg__MpcTrackerDiagnostics__Sequence * array)
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
      mrs_msgs__msg__MpcTrackerDiagnostics__fini(&array->data[i]);
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

mrs_msgs__msg__MpcTrackerDiagnostics__Sequence *
mrs_msgs__msg__MpcTrackerDiagnostics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__MpcTrackerDiagnostics__Sequence * array = (mrs_msgs__msg__MpcTrackerDiagnostics__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__MpcTrackerDiagnostics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__MpcTrackerDiagnostics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__MpcTrackerDiagnostics__Sequence__destroy(mrs_msgs__msg__MpcTrackerDiagnostics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__MpcTrackerDiagnostics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__MpcTrackerDiagnostics__Sequence__are_equal(const mrs_msgs__msg__MpcTrackerDiagnostics__Sequence * lhs, const mrs_msgs__msg__MpcTrackerDiagnostics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__MpcTrackerDiagnostics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__MpcTrackerDiagnostics__Sequence__copy(
  const mrs_msgs__msg__MpcTrackerDiagnostics__Sequence * input,
  mrs_msgs__msg__MpcTrackerDiagnostics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__MpcTrackerDiagnostics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__MpcTrackerDiagnostics * data =
      (mrs_msgs__msg__MpcTrackerDiagnostics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__MpcTrackerDiagnostics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__MpcTrackerDiagnostics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__MpcTrackerDiagnostics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
