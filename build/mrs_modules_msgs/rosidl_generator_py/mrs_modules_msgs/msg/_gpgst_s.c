// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_modules_msgs:msg/Gpgst.idl
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
#include "mrs_modules_msgs/msg/detail/gpgst__struct.h"
#include "mrs_modules_msgs/msg/detail/gpgst__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_modules_msgs__msg__gpgst__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
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
    assert(strncmp("mrs_modules_msgs.msg._gpgst.Gpgst", full_classname_dest, 33) == 0);
  }
  mrs_modules_msgs__msg__Gpgst * ros_message = _ros_message;
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
  {  // message_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "message_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // utc
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->utc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rms
    PyObject * field = PyObject_GetAttrString(_pymsg, "rms");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rms = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // smjr_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "smjr_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->smjr_std = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // smnr_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "smnr_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->smnr_std = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // orient
    PyObject * field = PyObject_GetAttrString(_pymsg, "orient");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->orient = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lat_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat_std = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lon_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lon_std = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alt_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "alt_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alt_std = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_modules_msgs__msg__gpgst__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Gpgst */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_modules_msgs.msg._gpgst");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Gpgst");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_modules_msgs__msg__Gpgst * ros_message = (mrs_modules_msgs__msg__Gpgst *)raw_ros_message;
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
  {  // message_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message_id.data,
      strlen(ros_message->message_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->utc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rms
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // smjr_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->smjr_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "smjr_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // smnr_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->smnr_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "smnr_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orient
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->orient);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orient", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lon_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alt_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alt_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alt_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
