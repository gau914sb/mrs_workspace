// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/HwApiCapabilities.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/hw_api_capabilities__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `api_name`
#include "rosidl_runtime_c/string_functions.h"

bool
mrs_msgs__msg__HwApiCapabilities__init(mrs_msgs__msg__HwApiCapabilities * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mrs_msgs__msg__HwApiCapabilities__fini(msg);
    return false;
  }
  // api_name
  if (!rosidl_runtime_c__String__init(&msg->api_name)) {
    mrs_msgs__msg__HwApiCapabilities__fini(msg);
    return false;
  }
  // accepts_actuator_cmd
  // accepts_attitude_cmd
  // accepts_attitude_rate_cmd
  // accepts_control_group_cmd
  // accepts_acceleration_hdg_rate_cmd
  // accepts_acceleration_hdg_cmd
  // accepts_velocity_hdg_rate_cmd
  // accepts_velocity_hdg_cmd
  // accepts_position_cmd
  // produces_ground_truth
  // produces_gnss
  // produces_gnss_status
  // produces_rtk
  // produces_imu
  // produces_distance_sensor
  // produces_altitude
  // produces_magnetometer_heading
  // produces_rc_channels
  // produces_battery_state
  // produces_position
  // produces_orientation
  // produces_velocity
  // produces_angular_velocity
  // produces_odometry
  // produces_magnetic_field
  return true;
}

void
mrs_msgs__msg__HwApiCapabilities__fini(mrs_msgs__msg__HwApiCapabilities * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // api_name
  rosidl_runtime_c__String__fini(&msg->api_name);
  // accepts_actuator_cmd
  // accepts_attitude_cmd
  // accepts_attitude_rate_cmd
  // accepts_control_group_cmd
  // accepts_acceleration_hdg_rate_cmd
  // accepts_acceleration_hdg_cmd
  // accepts_velocity_hdg_rate_cmd
  // accepts_velocity_hdg_cmd
  // accepts_position_cmd
  // produces_ground_truth
  // produces_gnss
  // produces_gnss_status
  // produces_rtk
  // produces_imu
  // produces_distance_sensor
  // produces_altitude
  // produces_magnetometer_heading
  // produces_rc_channels
  // produces_battery_state
  // produces_position
  // produces_orientation
  // produces_velocity
  // produces_angular_velocity
  // produces_odometry
  // produces_magnetic_field
}

bool
mrs_msgs__msg__HwApiCapabilities__are_equal(const mrs_msgs__msg__HwApiCapabilities * lhs, const mrs_msgs__msg__HwApiCapabilities * rhs)
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
  // api_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->api_name), &(rhs->api_name)))
  {
    return false;
  }
  // accepts_actuator_cmd
  if (lhs->accepts_actuator_cmd != rhs->accepts_actuator_cmd) {
    return false;
  }
  // accepts_attitude_cmd
  if (lhs->accepts_attitude_cmd != rhs->accepts_attitude_cmd) {
    return false;
  }
  // accepts_attitude_rate_cmd
  if (lhs->accepts_attitude_rate_cmd != rhs->accepts_attitude_rate_cmd) {
    return false;
  }
  // accepts_control_group_cmd
  if (lhs->accepts_control_group_cmd != rhs->accepts_control_group_cmd) {
    return false;
  }
  // accepts_acceleration_hdg_rate_cmd
  if (lhs->accepts_acceleration_hdg_rate_cmd != rhs->accepts_acceleration_hdg_rate_cmd) {
    return false;
  }
  // accepts_acceleration_hdg_cmd
  if (lhs->accepts_acceleration_hdg_cmd != rhs->accepts_acceleration_hdg_cmd) {
    return false;
  }
  // accepts_velocity_hdg_rate_cmd
  if (lhs->accepts_velocity_hdg_rate_cmd != rhs->accepts_velocity_hdg_rate_cmd) {
    return false;
  }
  // accepts_velocity_hdg_cmd
  if (lhs->accepts_velocity_hdg_cmd != rhs->accepts_velocity_hdg_cmd) {
    return false;
  }
  // accepts_position_cmd
  if (lhs->accepts_position_cmd != rhs->accepts_position_cmd) {
    return false;
  }
  // produces_ground_truth
  if (lhs->produces_ground_truth != rhs->produces_ground_truth) {
    return false;
  }
  // produces_gnss
  if (lhs->produces_gnss != rhs->produces_gnss) {
    return false;
  }
  // produces_gnss_status
  if (lhs->produces_gnss_status != rhs->produces_gnss_status) {
    return false;
  }
  // produces_rtk
  if (lhs->produces_rtk != rhs->produces_rtk) {
    return false;
  }
  // produces_imu
  if (lhs->produces_imu != rhs->produces_imu) {
    return false;
  }
  // produces_distance_sensor
  if (lhs->produces_distance_sensor != rhs->produces_distance_sensor) {
    return false;
  }
  // produces_altitude
  if (lhs->produces_altitude != rhs->produces_altitude) {
    return false;
  }
  // produces_magnetometer_heading
  if (lhs->produces_magnetometer_heading != rhs->produces_magnetometer_heading) {
    return false;
  }
  // produces_rc_channels
  if (lhs->produces_rc_channels != rhs->produces_rc_channels) {
    return false;
  }
  // produces_battery_state
  if (lhs->produces_battery_state != rhs->produces_battery_state) {
    return false;
  }
  // produces_position
  if (lhs->produces_position != rhs->produces_position) {
    return false;
  }
  // produces_orientation
  if (lhs->produces_orientation != rhs->produces_orientation) {
    return false;
  }
  // produces_velocity
  if (lhs->produces_velocity != rhs->produces_velocity) {
    return false;
  }
  // produces_angular_velocity
  if (lhs->produces_angular_velocity != rhs->produces_angular_velocity) {
    return false;
  }
  // produces_odometry
  if (lhs->produces_odometry != rhs->produces_odometry) {
    return false;
  }
  // produces_magnetic_field
  if (lhs->produces_magnetic_field != rhs->produces_magnetic_field) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__HwApiCapabilities__copy(
  const mrs_msgs__msg__HwApiCapabilities * input,
  mrs_msgs__msg__HwApiCapabilities * output)
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
  // api_name
  if (!rosidl_runtime_c__String__copy(
      &(input->api_name), &(output->api_name)))
  {
    return false;
  }
  // accepts_actuator_cmd
  output->accepts_actuator_cmd = input->accepts_actuator_cmd;
  // accepts_attitude_cmd
  output->accepts_attitude_cmd = input->accepts_attitude_cmd;
  // accepts_attitude_rate_cmd
  output->accepts_attitude_rate_cmd = input->accepts_attitude_rate_cmd;
  // accepts_control_group_cmd
  output->accepts_control_group_cmd = input->accepts_control_group_cmd;
  // accepts_acceleration_hdg_rate_cmd
  output->accepts_acceleration_hdg_rate_cmd = input->accepts_acceleration_hdg_rate_cmd;
  // accepts_acceleration_hdg_cmd
  output->accepts_acceleration_hdg_cmd = input->accepts_acceleration_hdg_cmd;
  // accepts_velocity_hdg_rate_cmd
  output->accepts_velocity_hdg_rate_cmd = input->accepts_velocity_hdg_rate_cmd;
  // accepts_velocity_hdg_cmd
  output->accepts_velocity_hdg_cmd = input->accepts_velocity_hdg_cmd;
  // accepts_position_cmd
  output->accepts_position_cmd = input->accepts_position_cmd;
  // produces_ground_truth
  output->produces_ground_truth = input->produces_ground_truth;
  // produces_gnss
  output->produces_gnss = input->produces_gnss;
  // produces_gnss_status
  output->produces_gnss_status = input->produces_gnss_status;
  // produces_rtk
  output->produces_rtk = input->produces_rtk;
  // produces_imu
  output->produces_imu = input->produces_imu;
  // produces_distance_sensor
  output->produces_distance_sensor = input->produces_distance_sensor;
  // produces_altitude
  output->produces_altitude = input->produces_altitude;
  // produces_magnetometer_heading
  output->produces_magnetometer_heading = input->produces_magnetometer_heading;
  // produces_rc_channels
  output->produces_rc_channels = input->produces_rc_channels;
  // produces_battery_state
  output->produces_battery_state = input->produces_battery_state;
  // produces_position
  output->produces_position = input->produces_position;
  // produces_orientation
  output->produces_orientation = input->produces_orientation;
  // produces_velocity
  output->produces_velocity = input->produces_velocity;
  // produces_angular_velocity
  output->produces_angular_velocity = input->produces_angular_velocity;
  // produces_odometry
  output->produces_odometry = input->produces_odometry;
  // produces_magnetic_field
  output->produces_magnetic_field = input->produces_magnetic_field;
  return true;
}

mrs_msgs__msg__HwApiCapabilities *
mrs_msgs__msg__HwApiCapabilities__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__HwApiCapabilities * msg = (mrs_msgs__msg__HwApiCapabilities *)allocator.allocate(sizeof(mrs_msgs__msg__HwApiCapabilities), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__HwApiCapabilities));
  bool success = mrs_msgs__msg__HwApiCapabilities__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__HwApiCapabilities__destroy(mrs_msgs__msg__HwApiCapabilities * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__HwApiCapabilities__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__HwApiCapabilities__Sequence__init(mrs_msgs__msg__HwApiCapabilities__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__HwApiCapabilities * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__HwApiCapabilities *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__HwApiCapabilities), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__HwApiCapabilities__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__HwApiCapabilities__fini(&data[i - 1]);
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
mrs_msgs__msg__HwApiCapabilities__Sequence__fini(mrs_msgs__msg__HwApiCapabilities__Sequence * array)
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
      mrs_msgs__msg__HwApiCapabilities__fini(&array->data[i]);
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

mrs_msgs__msg__HwApiCapabilities__Sequence *
mrs_msgs__msg__HwApiCapabilities__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__HwApiCapabilities__Sequence * array = (mrs_msgs__msg__HwApiCapabilities__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__HwApiCapabilities__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__HwApiCapabilities__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__HwApiCapabilities__Sequence__destroy(mrs_msgs__msg__HwApiCapabilities__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__HwApiCapabilities__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__HwApiCapabilities__Sequence__are_equal(const mrs_msgs__msg__HwApiCapabilities__Sequence * lhs, const mrs_msgs__msg__HwApiCapabilities__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__HwApiCapabilities__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__HwApiCapabilities__Sequence__copy(
  const mrs_msgs__msg__HwApiCapabilities__Sequence * input,
  mrs_msgs__msg__HwApiCapabilities__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__HwApiCapabilities);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__HwApiCapabilities * data =
      (mrs_msgs__msg__HwApiCapabilities *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__HwApiCapabilities__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__HwApiCapabilities__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__HwApiCapabilities__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
