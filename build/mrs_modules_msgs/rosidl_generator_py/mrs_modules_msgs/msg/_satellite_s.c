// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_modules_msgs:msg/Satellite.idl
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
#include "mrs_modules_msgs/msg/detail/satellite__struct.h"
#include "mrs_modules_msgs/msg/detail/satellite__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mrs_modules_msgs__msg__satellite__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("mrs_modules_msgs.msg._satellite.Satellite", full_classname_dest, 41) == 0);
  }
  mrs_modules_msgs__msg__Satellite * ros_message = _ros_message;
  {  // prn
    PyObject * field = PyObject_GetAttrString(_pymsg, "prn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // elevation
    PyObject * field = PyObject_GetAttrString(_pymsg, "elevation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->elevation = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // azimuth
    PyObject * field = PyObject_GetAttrString(_pymsg, "azimuth");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->azimuth = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // snr
    PyObject * field = PyObject_GetAttrString(_pymsg, "snr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->snr = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_modules_msgs__msg__satellite__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Satellite */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_modules_msgs.msg._satellite");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Satellite");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_modules_msgs__msg__Satellite * ros_message = (mrs_modules_msgs__msg__Satellite *)raw_ros_message;
  {  // prn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elevation
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->elevation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elevation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // azimuth
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->azimuth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "azimuth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // snr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->snr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "snr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
