// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/HwApiCapabilities.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "mrs_msgs/msg/detail/hw_api_capabilities__struct.h"
#include "mrs_msgs/msg/detail/hw_api_capabilities__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_msgs__msg__hw_api_capabilities__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("mrs_msgs.msg._hw_api_capabilities.HwApiCapabilities", full_classname_dest, 51) == 0);
  }
  mrs_msgs__msg__HwApiCapabilities * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // api_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "api_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->api_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // accepts_actuator_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "accepts_actuator_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accepts_actuator_cmd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // accepts_attitude_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "accepts_attitude_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accepts_attitude_cmd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // accepts_attitude_rate_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "accepts_attitude_rate_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accepts_attitude_rate_cmd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // accepts_control_group_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "accepts_control_group_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accepts_control_group_cmd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // accepts_acceleration_hdg_rate_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "accepts_acceleration_hdg_rate_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accepts_acceleration_hdg_rate_cmd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // accepts_acceleration_hdg_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "accepts_acceleration_hdg_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accepts_acceleration_hdg_cmd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // accepts_velocity_hdg_rate_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "accepts_velocity_hdg_rate_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accepts_velocity_hdg_rate_cmd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // accepts_velocity_hdg_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "accepts_velocity_hdg_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accepts_velocity_hdg_cmd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // accepts_position_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "accepts_position_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accepts_position_cmd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // produces_ground_truth
    PyObject * field = PyObject_GetAttrString(_pymsg, "produces_ground_truth");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->produces_ground_truth = (Py_True == field);
    Py_DECREF(field);
  }
  {  // produces_gnss
    PyObject * field = PyObject_GetAttrString(_pymsg, "produces_gnss");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->produces_gnss = (Py_True == field);
    Py_DECREF(field);
  }
  {  // produces_gnss_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "produces_gnss_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->produces_gnss_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // produces_rtk
    PyObject * field = PyObject_GetAttrString(_pymsg, "produces_rtk");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->produces_rtk = (Py_True == field);
    Py_DECREF(field);
  }
  {  // produces_imu
    PyObject * field = PyObject_GetAttrString(_pymsg, "produces_imu");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->produces_imu = (Py_True == field);
    Py_DECREF(field);
  }
  {  // produces_distance_sensor
    PyObject * field = PyObject_GetAttrString(_pymsg, "produces_distance_sensor");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->produces_distance_sensor = (Py_True == field);
    Py_DECREF(field);
  }
  {  // produces_altitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "produces_altitude");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->produces_altitude = (Py_True == field);
    Py_DECREF(field);
  }
  {  // produces_magnetometer_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "produces_magnetometer_heading");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->produces_magnetometer_heading = (Py_True == field);
    Py_DECREF(field);
  }
  {  // produces_rc_channels
    PyObject * field = PyObject_GetAttrString(_pymsg, "produces_rc_channels");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->produces_rc_channels = (Py_True == field);
    Py_DECREF(field);
  }
  {  // produces_battery_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "produces_battery_state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->produces_battery_state = (Py_True == field);
    Py_DECREF(field);
  }
  {  // produces_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "produces_position");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->produces_position = (Py_True == field);
    Py_DECREF(field);
  }
  {  // produces_orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "produces_orientation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->produces_orientation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // produces_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "produces_velocity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->produces_velocity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // produces_angular_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "produces_angular_velocity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->produces_angular_velocity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // produces_odometry
    PyObject * field = PyObject_GetAttrString(_pymsg, "produces_odometry");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->produces_odometry = (Py_True == field);
    Py_DECREF(field);
  }
  {  // produces_magnetic_field
    PyObject * field = PyObject_GetAttrString(_pymsg, "produces_magnetic_field");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->produces_magnetic_field = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_msgs__msg__hw_api_capabilities__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HwApiCapabilities */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._hw_api_capabilities");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HwApiCapabilities");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__HwApiCapabilities * ros_message = (mrs_msgs__msg__HwApiCapabilities *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // api_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->api_name.data,
      strlen(ros_message->api_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "api_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accepts_actuator_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accepts_actuator_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accepts_actuator_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accepts_attitude_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accepts_attitude_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accepts_attitude_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accepts_attitude_rate_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accepts_attitude_rate_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accepts_attitude_rate_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accepts_control_group_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accepts_control_group_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accepts_control_group_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accepts_acceleration_hdg_rate_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accepts_acceleration_hdg_rate_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accepts_acceleration_hdg_rate_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accepts_acceleration_hdg_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accepts_acceleration_hdg_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accepts_acceleration_hdg_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accepts_velocity_hdg_rate_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accepts_velocity_hdg_rate_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accepts_velocity_hdg_rate_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accepts_velocity_hdg_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accepts_velocity_hdg_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accepts_velocity_hdg_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accepts_position_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accepts_position_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accepts_position_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // produces_ground_truth
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->produces_ground_truth ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "produces_ground_truth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // produces_gnss
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->produces_gnss ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "produces_gnss", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // produces_gnss_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->produces_gnss_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "produces_gnss_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // produces_rtk
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->produces_rtk ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "produces_rtk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // produces_imu
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->produces_imu ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "produces_imu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // produces_distance_sensor
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->produces_distance_sensor ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "produces_distance_sensor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // produces_altitude
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->produces_altitude ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "produces_altitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // produces_magnetometer_heading
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->produces_magnetometer_heading ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "produces_magnetometer_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // produces_rc_channels
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->produces_rc_channels ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "produces_rc_channels", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // produces_battery_state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->produces_battery_state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "produces_battery_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // produces_position
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->produces_position ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "produces_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // produces_orientation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->produces_orientation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "produces_orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // produces_velocity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->produces_velocity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "produces_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // produces_angular_velocity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->produces_angular_velocity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "produces_angular_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // produces_odometry
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->produces_odometry ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "produces_odometry", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // produces_magnetic_field
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->produces_magnetic_field ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "produces_magnetic_field", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
