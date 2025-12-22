// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_modules_msgs:msg/PclToolsDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/pcl_tools_diagnostics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `sensor_name`
#include "rosidl_runtime_c/string_functions.h"

bool
mrs_modules_msgs__msg__PclToolsDiagnostics__init(mrs_modules_msgs__msg__PclToolsDiagnostics * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mrs_modules_msgs__msg__PclToolsDiagnostics__fini(msg);
    return false;
  }
  // sensor_name
  if (!rosidl_runtime_c__String__init(&msg->sensor_name)) {
    mrs_modules_msgs__msg__PclToolsDiagnostics__fini(msg);
    return false;
  }
  // sensor_type
  // frequency
  // vfov
  // rows_before
  // cols_before
  // rows_after
  // cols_after
  return true;
}

void
mrs_modules_msgs__msg__PclToolsDiagnostics__fini(mrs_modules_msgs__msg__PclToolsDiagnostics * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // sensor_name
  rosidl_runtime_c__String__fini(&msg->sensor_name);
  // sensor_type
  // frequency
  // vfov
  // rows_before
  // cols_before
  // rows_after
  // cols_after
}

bool
mrs_modules_msgs__msg__PclToolsDiagnostics__are_equal(const mrs_modules_msgs__msg__PclToolsDiagnostics * lhs, const mrs_modules_msgs__msg__PclToolsDiagnostics * rhs)
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
  // sensor_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sensor_name), &(rhs->sensor_name)))
  {
    return false;
  }
  // sensor_type
  if (lhs->sensor_type != rhs->sensor_type) {
    return false;
  }
  // frequency
  if (lhs->frequency != rhs->frequency) {
    return false;
  }
  // vfov
  if (lhs->vfov != rhs->vfov) {
    return false;
  }
  // rows_before
  if (lhs->rows_before != rhs->rows_before) {
    return false;
  }
  // cols_before
  if (lhs->cols_before != rhs->cols_before) {
    return false;
  }
  // rows_after
  if (lhs->rows_after != rhs->rows_after) {
    return false;
  }
  // cols_after
  if (lhs->cols_after != rhs->cols_after) {
    return false;
  }
  return true;
}

bool
mrs_modules_msgs__msg__PclToolsDiagnostics__copy(
  const mrs_modules_msgs__msg__PclToolsDiagnostics * input,
  mrs_modules_msgs__msg__PclToolsDiagnostics * output)
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
  // sensor_name
  if (!rosidl_runtime_c__String__copy(
      &(input->sensor_name), &(output->sensor_name)))
  {
    return false;
  }
  // sensor_type
  output->sensor_type = input->sensor_type;
  // frequency
  output->frequency = input->frequency;
  // vfov
  output->vfov = input->vfov;
  // rows_before
  output->rows_before = input->rows_before;
  // cols_before
  output->cols_before = input->cols_before;
  // rows_after
  output->rows_after = input->rows_after;
  // cols_after
  output->cols_after = input->cols_after;
  return true;
}

mrs_modules_msgs__msg__PclToolsDiagnostics *
mrs_modules_msgs__msg__PclToolsDiagnostics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__PclToolsDiagnostics * msg = (mrs_modules_msgs__msg__PclToolsDiagnostics *)allocator.allocate(sizeof(mrs_modules_msgs__msg__PclToolsDiagnostics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_modules_msgs__msg__PclToolsDiagnostics));
  bool success = mrs_modules_msgs__msg__PclToolsDiagnostics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_modules_msgs__msg__PclToolsDiagnostics__destroy(mrs_modules_msgs__msg__PclToolsDiagnostics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_modules_msgs__msg__PclToolsDiagnostics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence__init(mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__PclToolsDiagnostics * data = NULL;

  if (size) {
    data = (mrs_modules_msgs__msg__PclToolsDiagnostics *)allocator.zero_allocate(size, sizeof(mrs_modules_msgs__msg__PclToolsDiagnostics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_modules_msgs__msg__PclToolsDiagnostics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_modules_msgs__msg__PclToolsDiagnostics__fini(&data[i - 1]);
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
mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence__fini(mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence * array)
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
      mrs_modules_msgs__msg__PclToolsDiagnostics__fini(&array->data[i]);
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

mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence *
mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence * array = (mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence *)allocator.allocate(sizeof(mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence__destroy(mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence__are_equal(const mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence * lhs, const mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_modules_msgs__msg__PclToolsDiagnostics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence__copy(
  const mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence * input,
  mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_modules_msgs__msg__PclToolsDiagnostics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_modules_msgs__msg__PclToolsDiagnostics * data =
      (mrs_modules_msgs__msg__PclToolsDiagnostics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_modules_msgs__msg__PclToolsDiagnostics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_modules_msgs__msg__PclToolsDiagnostics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_modules_msgs__msg__PclToolsDiagnostics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
