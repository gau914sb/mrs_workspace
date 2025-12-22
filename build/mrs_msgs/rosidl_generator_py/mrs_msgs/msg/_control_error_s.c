// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/ControlError.idl
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
#include "mrs_msgs/msg/detail/control_error__struct.h"
#include "mrs_msgs/msg/detail/control_error__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_msgs__msg__control_error__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("mrs_msgs.msg._control_error.ControlError", full_classname_dest, 40) == 0);
  }
  mrs_msgs__msg__ControlError * ros_message = _ros_message;
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
  {  // position_errors
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_errors");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->position_errors)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // total_position_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_position_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_position_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_eland_threshold
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_eland_threshold");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_eland_threshold = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_failsafe_threshold
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_failsafe_threshold");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_failsafe_threshold = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_msgs__msg__control_error__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlError */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._control_error");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlError");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__ControlError * ros_message = (mrs_msgs__msg__ControlError *)raw_ros_message;
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
  {  // position_errors
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->position_errors);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_errors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_position_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_position_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_position_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_eland_threshold
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_eland_threshold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_eland_threshold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_failsafe_threshold
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_failsafe_threshold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_failsafe_threshold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
