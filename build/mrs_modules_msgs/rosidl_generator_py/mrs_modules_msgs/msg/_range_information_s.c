// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_modules_msgs:msg/RangeInformation.idl
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
#include "mrs_modules_msgs/msg/detail/range_information__struct.h"
#include "mrs_modules_msgs/msg/detail/range_information__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mrs_modules_msgs__msg__range_information__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("mrs_modules_msgs.msg._range_information.RangeInformation", full_classname_dest, 56) == 0);
  }
  mrs_modules_msgs__msg__RangeInformation * ros_message = _ros_message;
  {  // prn_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "prn_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prn_number = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // glofreq
    PyObject * field = PyObject_GetAttrString(_pymsg, "glofreq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->glofreq = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // psr
    PyObject * field = PyObject_GetAttrString(_pymsg, "psr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->psr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // psr_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "psr_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->psr_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // adr
    PyObject * field = PyObject_GetAttrString(_pymsg, "adr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->adr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // adr_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "adr_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->adr_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dopp
    PyObject * field = PyObject_GetAttrString(_pymsg, "dopp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dopp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // noise_density_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "noise_density_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->noise_density_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // locktime
    PyObject * field = PyObject_GetAttrString(_pymsg, "locktime");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->locktime = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tracking_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracking_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tracking_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_modules_msgs__msg__range_information__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RangeInformation */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_modules_msgs.msg._range_information");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RangeInformation");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_modules_msgs__msg__RangeInformation * ros_message = (mrs_modules_msgs__msg__RangeInformation *)raw_ros_message;
  {  // prn_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prn_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prn_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // glofreq
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->glofreq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "glofreq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->psr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psr_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->psr_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psr_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->adr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "adr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adr_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->adr_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "adr_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dopp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dopp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dopp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // noise_density_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->noise_density_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "noise_density_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // locktime
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->locktime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "locktime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tracking_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tracking_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracking_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
