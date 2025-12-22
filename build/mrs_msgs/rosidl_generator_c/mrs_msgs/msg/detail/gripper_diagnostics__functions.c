// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/GripperDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/gripper_diagnostics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
mrs_msgs__msg__GripperDiagnostics__init(mrs_msgs__msg__GripperDiagnostics * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mrs_msgs__msg__GripperDiagnostics__fini(msg);
    return false;
  }
  // gripper_on
  // gripping_object
  // has_hall
  // hall1_debug
  // hall2_debug
  // has_ultrasonic
  // ultrasonic1_debug
  // ultrasonic2_debug
  // has_proximity
  // proximity1_debug
  // proximity2_debug
  return true;
}

void
mrs_msgs__msg__GripperDiagnostics__fini(mrs_msgs__msg__GripperDiagnostics * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // gripper_on
  // gripping_object
  // has_hall
  // hall1_debug
  // hall2_debug
  // has_ultrasonic
  // ultrasonic1_debug
  // ultrasonic2_debug
  // has_proximity
  // proximity1_debug
  // proximity2_debug
}

bool
mrs_msgs__msg__GripperDiagnostics__are_equal(const mrs_msgs__msg__GripperDiagnostics * lhs, const mrs_msgs__msg__GripperDiagnostics * rhs)
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
  // gripper_on
  if (lhs->gripper_on != rhs->gripper_on) {
    return false;
  }
  // gripping_object
  if (lhs->gripping_object != rhs->gripping_object) {
    return false;
  }
  // has_hall
  if (lhs->has_hall != rhs->has_hall) {
    return false;
  }
  // hall1_debug
  if (lhs->hall1_debug != rhs->hall1_debug) {
    return false;
  }
  // hall2_debug
  if (lhs->hall2_debug != rhs->hall2_debug) {
    return false;
  }
  // has_ultrasonic
  if (lhs->has_ultrasonic != rhs->has_ultrasonic) {
    return false;
  }
  // ultrasonic1_debug
  if (lhs->ultrasonic1_debug != rhs->ultrasonic1_debug) {
    return false;
  }
  // ultrasonic2_debug
  if (lhs->ultrasonic2_debug != rhs->ultrasonic2_debug) {
    return false;
  }
  // has_proximity
  if (lhs->has_proximity != rhs->has_proximity) {
    return false;
  }
  // proximity1_debug
  if (lhs->proximity1_debug != rhs->proximity1_debug) {
    return false;
  }
  // proximity2_debug
  if (lhs->proximity2_debug != rhs->proximity2_debug) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__GripperDiagnostics__copy(
  const mrs_msgs__msg__GripperDiagnostics * input,
  mrs_msgs__msg__GripperDiagnostics * output)
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
  // gripper_on
  output->gripper_on = input->gripper_on;
  // gripping_object
  output->gripping_object = input->gripping_object;
  // has_hall
  output->has_hall = input->has_hall;
  // hall1_debug
  output->hall1_debug = input->hall1_debug;
  // hall2_debug
  output->hall2_debug = input->hall2_debug;
  // has_ultrasonic
  output->has_ultrasonic = input->has_ultrasonic;
  // ultrasonic1_debug
  output->ultrasonic1_debug = input->ultrasonic1_debug;
  // ultrasonic2_debug
  output->ultrasonic2_debug = input->ultrasonic2_debug;
  // has_proximity
  output->has_proximity = input->has_proximity;
  // proximity1_debug
  output->proximity1_debug = input->proximity1_debug;
  // proximity2_debug
  output->proximity2_debug = input->proximity2_debug;
  return true;
}

mrs_msgs__msg__GripperDiagnostics *
mrs_msgs__msg__GripperDiagnostics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__GripperDiagnostics * msg = (mrs_msgs__msg__GripperDiagnostics *)allocator.allocate(sizeof(mrs_msgs__msg__GripperDiagnostics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__GripperDiagnostics));
  bool success = mrs_msgs__msg__GripperDiagnostics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__GripperDiagnostics__destroy(mrs_msgs__msg__GripperDiagnostics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__GripperDiagnostics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__GripperDiagnostics__Sequence__init(mrs_msgs__msg__GripperDiagnostics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__GripperDiagnostics * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__GripperDiagnostics *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__GripperDiagnostics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__GripperDiagnostics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__GripperDiagnostics__fini(&data[i - 1]);
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
mrs_msgs__msg__GripperDiagnostics__Sequence__fini(mrs_msgs__msg__GripperDiagnostics__Sequence * array)
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
      mrs_msgs__msg__GripperDiagnostics__fini(&array->data[i]);
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

mrs_msgs__msg__GripperDiagnostics__Sequence *
mrs_msgs__msg__GripperDiagnostics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__GripperDiagnostics__Sequence * array = (mrs_msgs__msg__GripperDiagnostics__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__GripperDiagnostics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__GripperDiagnostics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__GripperDiagnostics__Sequence__destroy(mrs_msgs__msg__GripperDiagnostics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__GripperDiagnostics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__GripperDiagnostics__Sequence__are_equal(const mrs_msgs__msg__GripperDiagnostics__Sequence * lhs, const mrs_msgs__msg__GripperDiagnostics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__GripperDiagnostics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__GripperDiagnostics__Sequence__copy(
  const mrs_msgs__msg__GripperDiagnostics__Sequence * input,
  mrs_msgs__msg__GripperDiagnostics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__GripperDiagnostics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__GripperDiagnostics * data =
      (mrs_msgs__msg__GripperDiagnostics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__GripperDiagnostics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__GripperDiagnostics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__GripperDiagnostics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
