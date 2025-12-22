// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_modules_msgs:msg/Bestvel.idl
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
#include "mrs_modules_msgs/msg/detail/bestvel__struct.h"
#include "mrs_modules_msgs/msg/detail/bestvel__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool mrs_modules_msgs__msg__tersus_message_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mrs_modules_msgs__msg__tersus_message_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_modules_msgs__msg__bestvel__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("mrs_modules_msgs.msg._bestvel.Bestvel", full_classname_dest, 37) == 0);
  }
  mrs_modules_msgs__msg__Bestvel * ros_message = _ros_message;
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
  {  // tersus_msg_header
    PyObject * field = PyObject_GetAttrString(_pymsg, "tersus_msg_header");
    if (!field) {
      return false;
    }
    if (!mrs_modules_msgs__msg__tersus_message_header__convert_from_py(field, &ros_message->tersus_msg_header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // solution_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "solution_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->solution_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // velocity_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->velocity_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // latency
    PyObject * field = PyObject_GetAttrString(_pymsg, "latency");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latency = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // age
    PyObject * field = PyObject_GetAttrString(_pymsg, "age");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->age = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // horizontal_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->horizontal_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // track_ground
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_ground");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->track_ground = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_modules_msgs__msg__bestvel__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Bestvel */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_modules_msgs.msg._bestvel");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Bestvel");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_modules_msgs__msg__Bestvel * ros_message = (mrs_modules_msgs__msg__Bestvel *)raw_ros_message;
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
  {  // tersus_msg_header
    PyObject * field = NULL;
    field = mrs_modules_msgs__msg__tersus_message_header__convert_to_py(&ros_message->tersus_msg_header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tersus_msg_header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // solution_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->solution_status.data,
      strlen(ros_message->solution_status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "solution_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->velocity_type.data,
      strlen(ros_message->velocity_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latency
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // age
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->horizontal_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_ground
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->track_ground);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_ground", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
