// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/GimbalState.idl
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
#include "mrs_msgs/msg/detail/gimbal_state__struct.h"
#include "mrs_msgs/msg/detail/gimbal_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_msgs__msg__gimbal_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("mrs_msgs.msg._gimbal_state.GimbalState", full_classname_dest, 38) == 0);
  }
  mrs_msgs__msg__GimbalState * ros_message = _ros_message;
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
  {  // gimbal_tilt
    PyObject * field = PyObject_GetAttrString(_pymsg, "gimbal_tilt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gimbal_tilt = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gimbal_pan
    PyObject * field = PyObject_GetAttrString(_pymsg, "gimbal_pan");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gimbal_pan = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // is_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fpv_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "fpv_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fpv_mode = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_msgs__msg__gimbal_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GimbalState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._gimbal_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GimbalState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__GimbalState * ros_message = (mrs_msgs__msg__GimbalState *)raw_ros_message;
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
  {  // gimbal_tilt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gimbal_tilt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gimbal_tilt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gimbal_pan
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gimbal_pan);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gimbal_pan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fpv_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fpv_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fpv_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
