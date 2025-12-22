// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_modules_msgs:msg/Time.idl
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
#include "mrs_modules_msgs/msg/detail/time__struct.h"
#include "mrs_modules_msgs/msg/detail/time__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_modules_msgs__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
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
    assert(strncmp("mrs_modules_msgs.msg._time.Time", full_classname_dest, 31) == 0);
  }
  mrs_modules_msgs__msg__Time * ros_message = _ros_message;
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
  {  // clock_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "clock_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->clock_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->offset = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // offset_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->offset_std = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // utc_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->utc_offset = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // utc_year
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_year");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_year = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // utc_month
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_month");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_month = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // utc_day
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_day");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_day = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // utc_hour
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_hour");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_hour = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // utc_minute
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_minute");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_minute = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // utc_millisecond
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_millisecond");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_millisecond = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // utc_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->utc_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_modules_msgs__msg__time__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Time */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_modules_msgs.msg._time");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Time");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_modules_msgs__msg__Time * ros_message = (mrs_modules_msgs__msg__Time *)raw_ros_message;
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
  {  // clock_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->clock_status.data,
      strlen(ros_message->clock_status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "clock_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offset_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->offset_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->utc_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_year
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->utc_year);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_year", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_month
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->utc_month);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_month", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_day
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->utc_day);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_day", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_hour
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->utc_hour);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_hour", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_minute
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->utc_minute);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_minute", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_millisecond
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->utc_millisecond);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_millisecond", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->utc_status.data,
      strlen(ros_message->utc_status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
