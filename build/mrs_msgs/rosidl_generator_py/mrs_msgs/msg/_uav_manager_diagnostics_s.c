// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/UavManagerDiagnostics.idl
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
#include "mrs_msgs/msg/detail/uav_manager_diagnostics__struct.h"
#include "mrs_msgs/msg/detail/uav_manager_diagnostics__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_msgs__msg__uav_manager_diagnostics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("mrs_msgs.msg._uav_manager_diagnostics.UavManagerDiagnostics", full_classname_dest, 59) == 0);
  }
  mrs_msgs__msg__UavManagerDiagnostics * ros_message = _ros_message;
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
  {  // uav_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "uav_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->uav_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // home_latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "home_latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->home_latitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // home_longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "home_longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->home_longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cur_latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cur_latitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cur_longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cur_longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // flight_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "flight_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->flight_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_msgs__msg__uav_manager_diagnostics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UavManagerDiagnostics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._uav_manager_diagnostics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UavManagerDiagnostics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__UavManagerDiagnostics * ros_message = (mrs_msgs__msg__UavManagerDiagnostics *)raw_ros_message;
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
  {  // uav_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->uav_name.data,
      strlen(ros_message->uav_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "uav_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // home_latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->home_latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "home_latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // home_longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->home_longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "home_longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cur_latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cur_longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flight_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->flight_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flight_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
