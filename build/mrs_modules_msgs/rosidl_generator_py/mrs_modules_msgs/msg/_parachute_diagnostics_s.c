// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_modules_msgs:msg/ParachuteDiagnostics.idl
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
#include "mrs_modules_msgs/msg/detail/parachute_diagnostics__struct.h"
#include "mrs_modules_msgs/msg/detail/parachute_diagnostics__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_modules_msgs__msg__parachute_diagnostics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("mrs_modules_msgs.msg._parachute_diagnostics.ParachuteDiagnostics", full_classname_dest, 64) == 0);
  }
  mrs_modules_msgs__msg__ParachuteDiagnostics * ros_message = _ros_message;
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
  {  // alive
    PyObject * field = PyObject_GetAttrString(_pymsg, "alive");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->alive = (Py_True == field);
    Py_DECREF(field);
  }
  {  // armed
    PyObject * field = PyObject_GetAttrString(_pymsg, "armed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->armed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fired
    PyObject * field = PyObject_GetAttrString(_pymsg, "fired");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fired = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_modules_msgs__msg__parachute_diagnostics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ParachuteDiagnostics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_modules_msgs.msg._parachute_diagnostics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ParachuteDiagnostics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_modules_msgs__msg__ParachuteDiagnostics * ros_message = (mrs_modules_msgs__msg__ParachuteDiagnostics *)raw_ros_message;
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
  {  // alive
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->alive ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alive", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // armed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->armed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "armed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fired
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fired ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fired", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
