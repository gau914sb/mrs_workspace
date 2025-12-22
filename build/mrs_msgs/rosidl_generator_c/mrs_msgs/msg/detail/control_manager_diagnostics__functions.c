// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/ControlManagerDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/control_manager_diagnostics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `uav_name`
// Member `active_tracker`
// Member `active_controller`
// Member `available_controllers`
// Member `available_trackers`
#include "rosidl_runtime_c/string_functions.h"
// Member `tracker_status`
#include "mrs_msgs/msg/detail/tracker_status__functions.h"
// Member `controller_status`
#include "mrs_msgs/msg/detail/controller_status__functions.h"
// Member `human_switchable_controllers`
// Member `human_switchable_trackers`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mrs_msgs__msg__ControlManagerDiagnostics__init(mrs_msgs__msg__ControlManagerDiagnostics * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mrs_msgs__msg__ControlManagerDiagnostics__fini(msg);
    return false;
  }
  // uav_name
  if (!rosidl_runtime_c__String__init(&msg->uav_name)) {
    mrs_msgs__msg__ControlManagerDiagnostics__fini(msg);
    return false;
  }
  // output_enabled
  // flying_normally
  // joystick_active
  // bumper_active
  // desired_uav_state_rate
  // active_tracker
  if (!rosidl_runtime_c__String__init(&msg->active_tracker)) {
    mrs_msgs__msg__ControlManagerDiagnostics__fini(msg);
    return false;
  }
  // tracker_status
  if (!mrs_msgs__msg__TrackerStatus__init(&msg->tracker_status)) {
    mrs_msgs__msg__ControlManagerDiagnostics__fini(msg);
    return false;
  }
  // active_controller
  if (!rosidl_runtime_c__String__init(&msg->active_controller)) {
    mrs_msgs__msg__ControlManagerDiagnostics__fini(msg);
    return false;
  }
  // controller_status
  if (!mrs_msgs__msg__ControllerStatus__init(&msg->controller_status)) {
    mrs_msgs__msg__ControlManagerDiagnostics__fini(msg);
    return false;
  }
  // available_controllers
  if (!rosidl_runtime_c__String__Sequence__init(&msg->available_controllers, 0)) {
    mrs_msgs__msg__ControlManagerDiagnostics__fini(msg);
    return false;
  }
  // available_trackers
  if (!rosidl_runtime_c__String__Sequence__init(&msg->available_trackers, 0)) {
    mrs_msgs__msg__ControlManagerDiagnostics__fini(msg);
    return false;
  }
  // human_switchable_controllers
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->human_switchable_controllers, 0)) {
    mrs_msgs__msg__ControlManagerDiagnostics__fini(msg);
    return false;
  }
  // human_switchable_trackers
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->human_switchable_trackers, 0)) {
    mrs_msgs__msg__ControlManagerDiagnostics__fini(msg);
    return false;
  }
  return true;
}

void
mrs_msgs__msg__ControlManagerDiagnostics__fini(mrs_msgs__msg__ControlManagerDiagnostics * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // uav_name
  rosidl_runtime_c__String__fini(&msg->uav_name);
  // output_enabled
  // flying_normally
  // joystick_active
  // bumper_active
  // desired_uav_state_rate
  // active_tracker
  rosidl_runtime_c__String__fini(&msg->active_tracker);
  // tracker_status
  mrs_msgs__msg__TrackerStatus__fini(&msg->tracker_status);
  // active_controller
  rosidl_runtime_c__String__fini(&msg->active_controller);
  // controller_status
  mrs_msgs__msg__ControllerStatus__fini(&msg->controller_status);
  // available_controllers
  rosidl_runtime_c__String__Sequence__fini(&msg->available_controllers);
  // available_trackers
  rosidl_runtime_c__String__Sequence__fini(&msg->available_trackers);
  // human_switchable_controllers
  rosidl_runtime_c__boolean__Sequence__fini(&msg->human_switchable_controllers);
  // human_switchable_trackers
  rosidl_runtime_c__boolean__Sequence__fini(&msg->human_switchable_trackers);
}

bool
mrs_msgs__msg__ControlManagerDiagnostics__are_equal(const mrs_msgs__msg__ControlManagerDiagnostics * lhs, const mrs_msgs__msg__ControlManagerDiagnostics * rhs)
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
  // output_enabled
  if (lhs->output_enabled != rhs->output_enabled) {
    return false;
  }
  // flying_normally
  if (lhs->flying_normally != rhs->flying_normally) {
    return false;
  }
  // joystick_active
  if (lhs->joystick_active != rhs->joystick_active) {
    return false;
  }
  // bumper_active
  if (lhs->bumper_active != rhs->bumper_active) {
    return false;
  }
  // desired_uav_state_rate
  if (lhs->desired_uav_state_rate != rhs->desired_uav_state_rate) {
    return false;
  }
  // active_tracker
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->active_tracker), &(rhs->active_tracker)))
  {
    return false;
  }
  // tracker_status
  if (!mrs_msgs__msg__TrackerStatus__are_equal(
      &(lhs->tracker_status), &(rhs->tracker_status)))
  {
    return false;
  }
  // active_controller
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->active_controller), &(rhs->active_controller)))
  {
    return false;
  }
  // controller_status
  if (!mrs_msgs__msg__ControllerStatus__are_equal(
      &(lhs->controller_status), &(rhs->controller_status)))
  {
    return false;
  }
  // available_controllers
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->available_controllers), &(rhs->available_controllers)))
  {
    return false;
  }
  // available_trackers
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->available_trackers), &(rhs->available_trackers)))
  {
    return false;
  }
  // human_switchable_controllers
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->human_switchable_controllers), &(rhs->human_switchable_controllers)))
  {
    return false;
  }
  // human_switchable_trackers
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->human_switchable_trackers), &(rhs->human_switchable_trackers)))
  {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__ControlManagerDiagnostics__copy(
  const mrs_msgs__msg__ControlManagerDiagnostics * input,
  mrs_msgs__msg__ControlManagerDiagnostics * output)
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
  // output_enabled
  output->output_enabled = input->output_enabled;
  // flying_normally
  output->flying_normally = input->flying_normally;
  // joystick_active
  output->joystick_active = input->joystick_active;
  // bumper_active
  output->bumper_active = input->bumper_active;
  // desired_uav_state_rate
  output->desired_uav_state_rate = input->desired_uav_state_rate;
  // active_tracker
  if (!rosidl_runtime_c__String__copy(
      &(input->active_tracker), &(output->active_tracker)))
  {
    return false;
  }
  // tracker_status
  if (!mrs_msgs__msg__TrackerStatus__copy(
      &(input->tracker_status), &(output->tracker_status)))
  {
    return false;
  }
  // active_controller
  if (!rosidl_runtime_c__String__copy(
      &(input->active_controller), &(output->active_controller)))
  {
    return false;
  }
  // controller_status
  if (!mrs_msgs__msg__ControllerStatus__copy(
      &(input->controller_status), &(output->controller_status)))
  {
    return false;
  }
  // available_controllers
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->available_controllers), &(output->available_controllers)))
  {
    return false;
  }
  // available_trackers
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->available_trackers), &(output->available_trackers)))
  {
    return false;
  }
  // human_switchable_controllers
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->human_switchable_controllers), &(output->human_switchable_controllers)))
  {
    return false;
  }
  // human_switchable_trackers
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->human_switchable_trackers), &(output->human_switchable_trackers)))
  {
    return false;
  }
  return true;
}

mrs_msgs__msg__ControlManagerDiagnostics *
mrs_msgs__msg__ControlManagerDiagnostics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__ControlManagerDiagnostics * msg = (mrs_msgs__msg__ControlManagerDiagnostics *)allocator.allocate(sizeof(mrs_msgs__msg__ControlManagerDiagnostics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__ControlManagerDiagnostics));
  bool success = mrs_msgs__msg__ControlManagerDiagnostics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__ControlManagerDiagnostics__destroy(mrs_msgs__msg__ControlManagerDiagnostics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__ControlManagerDiagnostics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__ControlManagerDiagnostics__Sequence__init(mrs_msgs__msg__ControlManagerDiagnostics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__ControlManagerDiagnostics * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__ControlManagerDiagnostics *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__ControlManagerDiagnostics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__ControlManagerDiagnostics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__ControlManagerDiagnostics__fini(&data[i - 1]);
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
mrs_msgs__msg__ControlManagerDiagnostics__Sequence__fini(mrs_msgs__msg__ControlManagerDiagnostics__Sequence * array)
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
      mrs_msgs__msg__ControlManagerDiagnostics__fini(&array->data[i]);
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

mrs_msgs__msg__ControlManagerDiagnostics__Sequence *
mrs_msgs__msg__ControlManagerDiagnostics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__ControlManagerDiagnostics__Sequence * array = (mrs_msgs__msg__ControlManagerDiagnostics__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__ControlManagerDiagnostics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__ControlManagerDiagnostics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__ControlManagerDiagnostics__Sequence__destroy(mrs_msgs__msg__ControlManagerDiagnostics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__ControlManagerDiagnostics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__ControlManagerDiagnostics__Sequence__are_equal(const mrs_msgs__msg__ControlManagerDiagnostics__Sequence * lhs, const mrs_msgs__msg__ControlManagerDiagnostics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__ControlManagerDiagnostics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__ControlManagerDiagnostics__Sequence__copy(
  const mrs_msgs__msg__ControlManagerDiagnostics__Sequence * input,
  mrs_msgs__msg__ControlManagerDiagnostics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__ControlManagerDiagnostics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__ControlManagerDiagnostics * data =
      (mrs_msgs__msg__ControlManagerDiagnostics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__ControlManagerDiagnostics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__ControlManagerDiagnostics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__ControlManagerDiagnostics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
