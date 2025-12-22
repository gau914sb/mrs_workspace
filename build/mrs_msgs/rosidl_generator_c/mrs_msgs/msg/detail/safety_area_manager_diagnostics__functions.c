// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/SafetyAreaManagerDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/safety_area_manager_diagnostics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `uav_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `world_origin`
#include "mrs_msgs/msg/detail/world_origin__functions.h"
// Member `border`
// Member `obstacles`
#include "mrs_msgs/msg/detail/prism__functions.h"

bool
mrs_msgs__msg__SafetyAreaManagerDiagnostics__init(mrs_msgs__msg__SafetyAreaManagerDiagnostics * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mrs_msgs__msg__SafetyAreaManagerDiagnostics__fini(msg);
    return false;
  }
  // uav_name
  if (!rosidl_runtime_c__String__init(&msg->uav_name)) {
    mrs_msgs__msg__SafetyAreaManagerDiagnostics__fini(msg);
    return false;
  }
  // world_origin
  if (!mrs_msgs__msg__WorldOrigin__init(&msg->world_origin)) {
    mrs_msgs__msg__SafetyAreaManagerDiagnostics__fini(msg);
    return false;
  }
  // safety_area_enabled
  // position_valid_2d
  // position_valid_3d
  // border
  if (!mrs_msgs__msg__Prism__init(&msg->border)) {
    mrs_msgs__msg__SafetyAreaManagerDiagnostics__fini(msg);
    return false;
  }
  // obstacles_present
  // obstacles
  if (!mrs_msgs__msg__Prism__Sequence__init(&msg->obstacles, 0)) {
    mrs_msgs__msg__SafetyAreaManagerDiagnostics__fini(msg);
    return false;
  }
  return true;
}

void
mrs_msgs__msg__SafetyAreaManagerDiagnostics__fini(mrs_msgs__msg__SafetyAreaManagerDiagnostics * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // uav_name
  rosidl_runtime_c__String__fini(&msg->uav_name);
  // world_origin
  mrs_msgs__msg__WorldOrigin__fini(&msg->world_origin);
  // safety_area_enabled
  // position_valid_2d
  // position_valid_3d
  // border
  mrs_msgs__msg__Prism__fini(&msg->border);
  // obstacles_present
  // obstacles
  mrs_msgs__msg__Prism__Sequence__fini(&msg->obstacles);
}

bool
mrs_msgs__msg__SafetyAreaManagerDiagnostics__are_equal(const mrs_msgs__msg__SafetyAreaManagerDiagnostics * lhs, const mrs_msgs__msg__SafetyAreaManagerDiagnostics * rhs)
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
  // uav_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->uav_name), &(rhs->uav_name)))
  {
    return false;
  }
  // world_origin
  if (!mrs_msgs__msg__WorldOrigin__are_equal(
      &(lhs->world_origin), &(rhs->world_origin)))
  {
    return false;
  }
  // safety_area_enabled
  if (lhs->safety_area_enabled != rhs->safety_area_enabled) {
    return false;
  }
  // position_valid_2d
  if (lhs->position_valid_2d != rhs->position_valid_2d) {
    return false;
  }
  // position_valid_3d
  if (lhs->position_valid_3d != rhs->position_valid_3d) {
    return false;
  }
  // border
  if (!mrs_msgs__msg__Prism__are_equal(
      &(lhs->border), &(rhs->border)))
  {
    return false;
  }
  // obstacles_present
  if (lhs->obstacles_present != rhs->obstacles_present) {
    return false;
  }
  // obstacles
  if (!mrs_msgs__msg__Prism__Sequence__are_equal(
      &(lhs->obstacles), &(rhs->obstacles)))
  {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__SafetyAreaManagerDiagnostics__copy(
  const mrs_msgs__msg__SafetyAreaManagerDiagnostics * input,
  mrs_msgs__msg__SafetyAreaManagerDiagnostics * output)
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
  // uav_name
  if (!rosidl_runtime_c__String__copy(
      &(input->uav_name), &(output->uav_name)))
  {
    return false;
  }
  // world_origin
  if (!mrs_msgs__msg__WorldOrigin__copy(
      &(input->world_origin), &(output->world_origin)))
  {
    return false;
  }
  // safety_area_enabled
  output->safety_area_enabled = input->safety_area_enabled;
  // position_valid_2d
  output->position_valid_2d = input->position_valid_2d;
  // position_valid_3d
  output->position_valid_3d = input->position_valid_3d;
  // border
  if (!mrs_msgs__msg__Prism__copy(
      &(input->border), &(output->border)))
  {
    return false;
  }
  // obstacles_present
  output->obstacles_present = input->obstacles_present;
  // obstacles
  if (!mrs_msgs__msg__Prism__Sequence__copy(
      &(input->obstacles), &(output->obstacles)))
  {
    return false;
  }
  return true;
}

mrs_msgs__msg__SafetyAreaManagerDiagnostics *
mrs_msgs__msg__SafetyAreaManagerDiagnostics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__SafetyAreaManagerDiagnostics * msg = (mrs_msgs__msg__SafetyAreaManagerDiagnostics *)allocator.allocate(sizeof(mrs_msgs__msg__SafetyAreaManagerDiagnostics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__SafetyAreaManagerDiagnostics));
  bool success = mrs_msgs__msg__SafetyAreaManagerDiagnostics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__SafetyAreaManagerDiagnostics__destroy(mrs_msgs__msg__SafetyAreaManagerDiagnostics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__SafetyAreaManagerDiagnostics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence__init(mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__SafetyAreaManagerDiagnostics * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__SafetyAreaManagerDiagnostics *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__SafetyAreaManagerDiagnostics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__SafetyAreaManagerDiagnostics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__SafetyAreaManagerDiagnostics__fini(&data[i - 1]);
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
mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence__fini(mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence * array)
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
      mrs_msgs__msg__SafetyAreaManagerDiagnostics__fini(&array->data[i]);
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

mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence *
mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence * array = (mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence__destroy(mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence__are_equal(const mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence * lhs, const mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__SafetyAreaManagerDiagnostics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence__copy(
  const mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence * input,
  mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__SafetyAreaManagerDiagnostics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__SafetyAreaManagerDiagnostics * data =
      (mrs_msgs__msg__SafetyAreaManagerDiagnostics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__SafetyAreaManagerDiagnostics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__SafetyAreaManagerDiagnostics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__SafetyAreaManagerDiagnostics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
