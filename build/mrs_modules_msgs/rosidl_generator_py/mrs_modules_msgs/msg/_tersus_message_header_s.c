// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_modules_msgs:msg/TersusMessageHeader.idl
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
#include "mrs_modules_msgs/msg/detail/tersus_message_header__struct.h"
#include "mrs_modules_msgs/msg/detail/tersus_message_header__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mrs_modules_msgs__msg__tersus_message_header__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("mrs_modules_msgs.msg._tersus_message_header.TersusMessageHeader", full_classname_dest, 63) == 0);
  }
  mrs_modules_msgs__msg__TersusMessageHeader * ros_message = _ros_message;
  {  // message_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "message_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // port_address
    PyObject * field = PyObject_GetAttrString(_pymsg, "port_address");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->port_address, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // sequence
    PyObject * field = PyObject_GetAttrString(_pymsg, "sequence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sequence = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // idle_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "idle_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->idle_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->time_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // gps_week
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_week");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_week = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gps_week_seconds
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_week_seconds");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gps_week_seconds = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // receiver_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "receiver_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->receiver_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // software_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "software_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->software_version = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_modules_msgs__msg__tersus_message_header__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TersusMessageHeader */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_modules_msgs.msg._tersus_message_header");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TersusMessageHeader");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_modules_msgs__msg__TersusMessageHeader * ros_message = (mrs_modules_msgs__msg__TersusMessageHeader *)raw_ros_message;
  {  // message_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message_name.data,
      strlen(ros_message->message_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // port_address
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->port_address.data,
      strlen(ros_message->port_address.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "port_address", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sequence
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sequence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sequence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // idle_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->idle_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "idle_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->time_status.data,
      strlen(ros_message->time_status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_week
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gps_week);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_week", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_week_seconds
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gps_week_seconds);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_week_seconds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // receiver_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->receiver_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "receiver_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // software_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->software_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "software_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
