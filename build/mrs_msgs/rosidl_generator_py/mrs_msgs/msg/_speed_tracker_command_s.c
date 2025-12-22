// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/SpeedTrackerCommand.idl
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
#include "mrs_msgs/msg/detail/speed_tracker_command__struct.h"
#include "mrs_msgs/msg/detail/speed_tracker_command__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
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

ROSIDL_GENERATOR_C_EXPORT
bool mrs_msgs__msg__speed_tracker_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("mrs_msgs.msg._speed_tracker_command.SpeedTrackerCommand", full_classname_dest, 55) == 0);
  }
  mrs_msgs__msg__SpeedTrackerCommand * ros_message = _ros_message;
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
  {  // force
    PyObject * field = PyObject_GetAttrString(_pymsg, "force");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->force)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z = PyFloat_AS_DOUBLE(field);
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
  {  // use_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_velocity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_velocity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // use_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_acceleration");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_acceleration = (Py_True == field);
    Py_DECREF(field);
  }
  {  // use_force
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_force");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_force = (Py_True == field);
    Py_DECREF(field);
  }
  {  // use_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_z");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_z = (Py_True == field);
    Py_DECREF(field);
  }
  {  // use_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_heading");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_heading = (Py_True == field);
    Py_DECREF(field);
  }
  {  // use_heading_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_heading_rate");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_heading_rate = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_msgs__msg__speed_tracker_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SpeedTrackerCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._speed_tracker_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SpeedTrackerCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__SpeedTrackerCommand * ros_message = (mrs_msgs__msg__SpeedTrackerCommand *)raw_ros_message;
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
  {  // force
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->force);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "force", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
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
  {  // use_velocity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_velocity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_acceleration
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_acceleration ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_force
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_force ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_force", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_z
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_z ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_heading
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_heading ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->use_heading_rate ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_heading_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
