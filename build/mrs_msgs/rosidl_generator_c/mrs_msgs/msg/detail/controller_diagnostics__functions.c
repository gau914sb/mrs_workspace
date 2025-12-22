// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/ControllerDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/controller_diagnostics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `controller`
#include "rosidl_runtime_c/string_functions.h"

bool
mrs_msgs__msg__ControllerDiagnostics__init(mrs_msgs__msg__ControllerDiagnostics * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mrs_msgs__msg__ControllerDiagnostics__fini(msg);
    return false;
  }
  // controller
  if (!rosidl_runtime_c__String__init(&msg->controller)) {
    mrs_msgs__msg__ControllerDiagnostics__fini(msg);
    return false;
  }
  // ramping_up
  // mass_estimator
  // mass_difference
  // total_mass
  // disturbance_estimator
  // disturbance_wx_w
  // disturbance_wy_w
  // disturbance_bx_w
  // disturbance_by_w
  // disturbance_bx_b
  // disturbance_by_b
  // controller_enforcing_constraints
  // horizontal_speed_constraint
  // horizontal_acc_constraint
  // vertical_asc_speed_constraint
  // vertical_asc_acc_constraint
  // vertical_desc_speed_constraint
  // vertical_desc_acc_constraint
  return true;
}

void
mrs_msgs__msg__ControllerDiagnostics__fini(mrs_msgs__msg__ControllerDiagnostics * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // controller
  rosidl_runtime_c__String__fini(&msg->controller);
  // ramping_up
  // mass_estimator
  // mass_difference
  // total_mass
  // disturbance_estimator
  // disturbance_wx_w
  // disturbance_wy_w
  // disturbance_bx_w
  // disturbance_by_w
  // disturbance_bx_b
  // disturbance_by_b
  // controller_enforcing_constraints
  // horizontal_speed_constraint
  // horizontal_acc_constraint
  // vertical_asc_speed_constraint
  // vertical_asc_acc_constraint
  // vertical_desc_speed_constraint
  // vertical_desc_acc_constraint
}

bool
mrs_msgs__msg__ControllerDiagnostics__are_equal(const mrs_msgs__msg__ControllerDiagnostics * lhs, const mrs_msgs__msg__ControllerDiagnostics * rhs)
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
  // controller
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->controller), &(rhs->controller)))
  {
    return false;
  }
  // ramping_up
  if (lhs->ramping_up != rhs->ramping_up) {
    return false;
  }
  // mass_estimator
  if (lhs->mass_estimator != rhs->mass_estimator) {
    return false;
  }
  // mass_difference
  if (lhs->mass_difference != rhs->mass_difference) {
    return false;
  }
  // total_mass
  if (lhs->total_mass != rhs->total_mass) {
    return false;
  }
  // disturbance_estimator
  if (lhs->disturbance_estimator != rhs->disturbance_estimator) {
    return false;
  }
  // disturbance_wx_w
  if (lhs->disturbance_wx_w != rhs->disturbance_wx_w) {
    return false;
  }
  // disturbance_wy_w
  if (lhs->disturbance_wy_w != rhs->disturbance_wy_w) {
    return false;
  }
  // disturbance_bx_w
  if (lhs->disturbance_bx_w != rhs->disturbance_bx_w) {
    return false;
  }
  // disturbance_by_w
  if (lhs->disturbance_by_w != rhs->disturbance_by_w) {
    return false;
  }
  // disturbance_bx_b
  if (lhs->disturbance_bx_b != rhs->disturbance_bx_b) {
    return false;
  }
  // disturbance_by_b
  if (lhs->disturbance_by_b != rhs->disturbance_by_b) {
    return false;
  }
  // controller_enforcing_constraints
  if (lhs->controller_enforcing_constraints != rhs->controller_enforcing_constraints) {
    return false;
  }
  // horizontal_speed_constraint
  if (lhs->horizontal_speed_constraint != rhs->horizontal_speed_constraint) {
    return false;
  }
  // horizontal_acc_constraint
  if (lhs->horizontal_acc_constraint != rhs->horizontal_acc_constraint) {
    return false;
  }
  // vertical_asc_speed_constraint
  if (lhs->vertical_asc_speed_constraint != rhs->vertical_asc_speed_constraint) {
    return false;
  }
  // vertical_asc_acc_constraint
  if (lhs->vertical_asc_acc_constraint != rhs->vertical_asc_acc_constraint) {
    return false;
  }
  // vertical_desc_speed_constraint
  if (lhs->vertical_desc_speed_constraint != rhs->vertical_desc_speed_constraint) {
    return false;
  }
  // vertical_desc_acc_constraint
  if (lhs->vertical_desc_acc_constraint != rhs->vertical_desc_acc_constraint) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__ControllerDiagnostics__copy(
  const mrs_msgs__msg__ControllerDiagnostics * input,
  mrs_msgs__msg__ControllerDiagnostics * output)
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
  // controller
  if (!rosidl_runtime_c__String__copy(
      &(input->controller), &(output->controller)))
  {
    return false;
  }
  // ramping_up
  output->ramping_up = input->ramping_up;
  // mass_estimator
  output->mass_estimator = input->mass_estimator;
  // mass_difference
  output->mass_difference = input->mass_difference;
  // total_mass
  output->total_mass = input->total_mass;
  // disturbance_estimator
  output->disturbance_estimator = input->disturbance_estimator;
  // disturbance_wx_w
  output->disturbance_wx_w = input->disturbance_wx_w;
  // disturbance_wy_w
  output->disturbance_wy_w = input->disturbance_wy_w;
  // disturbance_bx_w
  output->disturbance_bx_w = input->disturbance_bx_w;
  // disturbance_by_w
  output->disturbance_by_w = input->disturbance_by_w;
  // disturbance_bx_b
  output->disturbance_bx_b = input->disturbance_bx_b;
  // disturbance_by_b
  output->disturbance_by_b = input->disturbance_by_b;
  // controller_enforcing_constraints
  output->controller_enforcing_constraints = input->controller_enforcing_constraints;
  // horizontal_speed_constraint
  output->horizontal_speed_constraint = input->horizontal_speed_constraint;
  // horizontal_acc_constraint
  output->horizontal_acc_constraint = input->horizontal_acc_constraint;
  // vertical_asc_speed_constraint
  output->vertical_asc_speed_constraint = input->vertical_asc_speed_constraint;
  // vertical_asc_acc_constraint
  output->vertical_asc_acc_constraint = input->vertical_asc_acc_constraint;
  // vertical_desc_speed_constraint
  output->vertical_desc_speed_constraint = input->vertical_desc_speed_constraint;
  // vertical_desc_acc_constraint
  output->vertical_desc_acc_constraint = input->vertical_desc_acc_constraint;
  return true;
}

mrs_msgs__msg__ControllerDiagnostics *
mrs_msgs__msg__ControllerDiagnostics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__ControllerDiagnostics * msg = (mrs_msgs__msg__ControllerDiagnostics *)allocator.allocate(sizeof(mrs_msgs__msg__ControllerDiagnostics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__ControllerDiagnostics));
  bool success = mrs_msgs__msg__ControllerDiagnostics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__ControllerDiagnostics__destroy(mrs_msgs__msg__ControllerDiagnostics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__ControllerDiagnostics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__ControllerDiagnostics__Sequence__init(mrs_msgs__msg__ControllerDiagnostics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__ControllerDiagnostics * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__ControllerDiagnostics *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__ControllerDiagnostics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__ControllerDiagnostics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__ControllerDiagnostics__fini(&data[i - 1]);
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
mrs_msgs__msg__ControllerDiagnostics__Sequence__fini(mrs_msgs__msg__ControllerDiagnostics__Sequence * array)
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
      mrs_msgs__msg__ControllerDiagnostics__fini(&array->data[i]);
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

mrs_msgs__msg__ControllerDiagnostics__Sequence *
mrs_msgs__msg__ControllerDiagnostics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__ControllerDiagnostics__Sequence * array = (mrs_msgs__msg__ControllerDiagnostics__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__ControllerDiagnostics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__ControllerDiagnostics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__ControllerDiagnostics__Sequence__destroy(mrs_msgs__msg__ControllerDiagnostics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__ControllerDiagnostics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__ControllerDiagnostics__Sequence__are_equal(const mrs_msgs__msg__ControllerDiagnostics__Sequence * lhs, const mrs_msgs__msg__ControllerDiagnostics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__ControllerDiagnostics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__ControllerDiagnostics__Sequence__copy(
  const mrs_msgs__msg__ControllerDiagnostics__Sequence * input,
  mrs_msgs__msg__ControllerDiagnostics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__ControllerDiagnostics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__ControllerDiagnostics * data =
      (mrs_msgs__msg__ControllerDiagnostics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__ControllerDiagnostics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__ControllerDiagnostics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__ControllerDiagnostics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
