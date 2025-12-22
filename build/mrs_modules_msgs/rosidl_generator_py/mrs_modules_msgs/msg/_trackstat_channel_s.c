// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_modules_msgs:msg/TrackstatChannel.idl
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
#include "mrs_modules_msgs/msg/detail/trackstat_channel__struct.h"
#include "mrs_modules_msgs/msg/detail/trackstat_channel__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mrs_modules_msgs__msg__trackstat_channel__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("mrs_modules_msgs.msg._trackstat_channel.TrackstatChannel", full_classname_dest, 56) == 0);
  }
  mrs_modules_msgs__msg__TrackstatChannel * ros_message = _ros_message;
  {  // prn
    PyObject * field = PyObject_GetAttrString(_pymsg, "prn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prn = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // glofreq
    PyObject * field = PyObject_GetAttrString(_pymsg, "glofreq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->glofreq = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ch_tr_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "ch_tr_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ch_tr_status = PyLong_AsUnsignedLong(field);
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
  {  // doppler
    PyObject * field = PyObject_GetAttrString(_pymsg, "doppler");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->doppler = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // c_no
    PyObject * field = PyObject_GetAttrString(_pymsg, "c_no");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c_no = (float)PyFloat_AS_DOUBLE(field);
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
  {  // psr_res
    PyObject * field = PyObject_GetAttrString(_pymsg, "psr_res");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->psr_res = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reject
    PyObject * field = PyObject_GetAttrString(_pymsg, "reject");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->reject, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // psr_weight
    PyObject * field = PyObject_GetAttrString(_pymsg, "psr_weight");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->psr_weight = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_modules_msgs__msg__trackstat_channel__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrackstatChannel */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_modules_msgs.msg._trackstat_channel");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrackstatChannel");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_modules_msgs__msg__TrackstatChannel * ros_message = (mrs_modules_msgs__msg__TrackstatChannel *)raw_ros_message;
  {  // prn
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->prn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // glofreq
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->glofreq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "glofreq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ch_tr_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ch_tr_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ch_tr_status", field);
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
  {  // doppler
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->doppler);
    {
      int rc = PyObject_SetAttrString(_pymessage, "doppler", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // c_no
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->c_no);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c_no", field);
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
  {  // psr_res
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->psr_res);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psr_res", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reject
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->reject.data,
      strlen(ros_message->reject.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reject", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psr_weight
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->psr_weight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psr_weight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
