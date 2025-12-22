// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/GazeboSpawnerDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/gazebo_spawner_diagnostics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `active_vehicles`
// Member `queued_vehicles`
#include "rosidl_runtime_c/string_functions.h"

bool
mrs_msgs__msg__GazeboSpawnerDiagnostics__init(mrs_msgs__msg__GazeboSpawnerDiagnostics * msg)
{
  if (!msg) {
    return false;
  }
  // spawn_called
  // processing
  // active_vehicles
  if (!rosidl_runtime_c__String__Sequence__init(&msg->active_vehicles, 0)) {
    mrs_msgs__msg__GazeboSpawnerDiagnostics__fini(msg);
    return false;
  }
  // queued_vehicles
  if (!rosidl_runtime_c__String__Sequence__init(&msg->queued_vehicles, 0)) {
    mrs_msgs__msg__GazeboSpawnerDiagnostics__fini(msg);
    return false;
  }
  // queued_processes
  return true;
}

void
mrs_msgs__msg__GazeboSpawnerDiagnostics__fini(mrs_msgs__msg__GazeboSpawnerDiagnostics * msg)
{
  if (!msg) {
    return;
  }
  // spawn_called
  // processing
  // active_vehicles
  rosidl_runtime_c__String__Sequence__fini(&msg->active_vehicles);
  // queued_vehicles
  rosidl_runtime_c__String__Sequence__fini(&msg->queued_vehicles);
  // queued_processes
}

bool
mrs_msgs__msg__GazeboSpawnerDiagnostics__are_equal(const mrs_msgs__msg__GazeboSpawnerDiagnostics * lhs, const mrs_msgs__msg__GazeboSpawnerDiagnostics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // spawn_called
  if (lhs->spawn_called != rhs->spawn_called) {
    return false;
  }
  // processing
  if (lhs->processing != rhs->processing) {
    return false;
  }
  // active_vehicles
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->active_vehicles), &(rhs->active_vehicles)))
  {
    return false;
  }
  // queued_vehicles
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->queued_vehicles), &(rhs->queued_vehicles)))
  {
    return false;
  }
  // queued_processes
  if (lhs->queued_processes != rhs->queued_processes) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__GazeboSpawnerDiagnostics__copy(
  const mrs_msgs__msg__GazeboSpawnerDiagnostics * input,
  mrs_msgs__msg__GazeboSpawnerDiagnostics * output)
{
  if (!input || !output) {
    return false;
  }
  // spawn_called
  output->spawn_called = input->spawn_called;
  // processing
  output->processing = input->processing;
  // active_vehicles
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->active_vehicles), &(output->active_vehicles)))
  {
    return false;
  }
  // queued_vehicles
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->queued_vehicles), &(output->queued_vehicles)))
  {
    return false;
  }
  // queued_processes
  output->queued_processes = input->queued_processes;
  return true;
}

mrs_msgs__msg__GazeboSpawnerDiagnostics *
mrs_msgs__msg__GazeboSpawnerDiagnostics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__GazeboSpawnerDiagnostics * msg = (mrs_msgs__msg__GazeboSpawnerDiagnostics *)allocator.allocate(sizeof(mrs_msgs__msg__GazeboSpawnerDiagnostics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__GazeboSpawnerDiagnostics));
  bool success = mrs_msgs__msg__GazeboSpawnerDiagnostics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__GazeboSpawnerDiagnostics__destroy(mrs_msgs__msg__GazeboSpawnerDiagnostics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__GazeboSpawnerDiagnostics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence__init(mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__GazeboSpawnerDiagnostics * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__GazeboSpawnerDiagnostics *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__GazeboSpawnerDiagnostics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__GazeboSpawnerDiagnostics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__GazeboSpawnerDiagnostics__fini(&data[i - 1]);
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
mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence__fini(mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence * array)
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
      mrs_msgs__msg__GazeboSpawnerDiagnostics__fini(&array->data[i]);
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

mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence *
mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence * array = (mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence__destroy(mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence__are_equal(const mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence * lhs, const mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__GazeboSpawnerDiagnostics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence__copy(
  const mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence * input,
  mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__GazeboSpawnerDiagnostics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__GazeboSpawnerDiagnostics * data =
      (mrs_msgs__msg__GazeboSpawnerDiagnostics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__GazeboSpawnerDiagnostics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__GazeboSpawnerDiagnostics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__GazeboSpawnerDiagnostics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
