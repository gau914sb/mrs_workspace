// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/TrackerCommand.idl
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
#include "mrs_msgs/msg/detail/tracker_command__struct.h"
#include "mrs_msgs/msg/detail/tracker_command__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
bool mrs_msgs__msg__mpc_prediction_full_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mrs_msgs__msg__mpc_prediction_full_state__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__quaternion__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__quaternion__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_msgs__msg__tracker_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("mrs_msgs.msg._tracker_command.TrackerCommand", full_classname_dest, 44) == 0);
  }
  mrs_msgs__msg__TrackerCommand * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->acceleration)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "jerk");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->jerk)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // snap
    PyObject * field = PyObject_GetAttrString(_pymsg, "snap");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->snap)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // full_state_prediction
    PyObject * field = PyObject_GetAttrString(_pymsg, "full_state_prediction");
    if (!field) {
      return false;
    }
    if (!mrs_msgs__msg__mpc_prediction_full_state__convert_from_py(field, &ros_message->full_state_prediction)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__quaternion__convert_from_py(field, &ros_message->orientation)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // attitude_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "attitude_rate");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->attitude_rate)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_jerk");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_jerk = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // disable_position_gains
    PyObject * field = PyObject_GetAttrString(_pymsg, "disable_position_gains");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->disable_position_gains = (Py_True == field);
    Py_DECREF(field);
  }
  {  // disable_antiwindups
    PyObject * field = PyObject_GetAttrString(_pymsg, "disable_antiwindups");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->disable_antiwindups = (Py_True == field);
    Py_DECREF(field);
  }
  {  // use_position_horizontal
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_position_horizontal");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->use_position_horizontal = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // use_position_vertical
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_position_vertical");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->use_position_vertical = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // use_velocity_horizontal
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_velocity_horizontal");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->use_velocity_horizontal = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // use_velocity_vertical
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_velocity_vertical");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->use_velocity_vertical = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // use_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_acceleration");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->use_acceleration = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // use_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_jerk");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->use_jerk = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // use_snap
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_snap");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->use_snap = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // use_attitude_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_attitude_rate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->use_attitude_rate = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // use_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_heading");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->use_heading = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // use_heading_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_heading_rate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->use_heading_rate = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // use_heading_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_heading_acceleration");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->use_heading_acceleration = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // use_heading_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_heading_jerk");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->use_heading_jerk = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // use_orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_orientation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->use_orientation = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // use_throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_throttle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->use_throttle = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // use_full_state_prediction
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_full_state_prediction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->use_full_state_prediction = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_msgs__msg__tracker_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrackerCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._tracker_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrackerCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__TrackerCommand * ros_message = (mrs_msgs__msg__TrackerCommand *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->acceleration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // jerk
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->jerk);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // snap
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->snap);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "snap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // full_state_prediction
    PyObject * field = NULL;
    field = mrs_msgs__msg__mpc_prediction_full_state__convert_to_py(&ros_message->full_state_prediction);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "full_state_prediction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation
    PyObject * field = NULL;
    field = geometry_msgs__msg__quaternion__convert_to_py(&ros_message->orientation);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attitude_rate
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->attitude_rate);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "attitude_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_jerk
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_jerk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disable_position_gains
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->disable_position_gains ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disable_position_gains", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disable_antiwindups
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->disable_antiwindups ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disable_antiwindups", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_position_horizontal
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->use_position_horizontal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_position_horizontal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_position_vertical
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->use_position_vertical);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_position_vertical", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_velocity_horizontal
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->use_velocity_horizontal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_velocity_horizontal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_velocity_vertical
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->use_velocity_vertical);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_velocity_vertical", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_acceleration
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->use_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_jerk
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->use_jerk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_snap
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->use_snap);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_snap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_attitude_rate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->use_attitude_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_attitude_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_heading
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->use_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_heading_rate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->use_heading_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_heading_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_heading_acceleration
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->use_heading_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_heading_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_heading_jerk
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->use_heading_jerk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_heading_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_orientation
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->use_orientation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_throttle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->use_throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_full_state_prediction
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->use_full_state_prediction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_full_state_prediction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
