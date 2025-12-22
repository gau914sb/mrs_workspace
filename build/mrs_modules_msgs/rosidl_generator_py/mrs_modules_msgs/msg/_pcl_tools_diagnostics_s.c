// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_modules_msgs:msg/PclToolsDiagnostics.idl
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
#include "mrs_modules_msgs/msg/detail/pcl_tools_diagnostics__struct.h"
#include "mrs_modules_msgs/msg/detail/pcl_tools_diagnostics__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_modules_msgs__msg__pcl_tools_diagnostics__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("mrs_modules_msgs.msg._pcl_tools_diagnostics.PclToolsDiagnostics", full_classname_dest, 63) == 0);
  }
  mrs_modules_msgs__msg__PclToolsDiagnostics * ros_message = _ros_message;
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
  {  // sensor_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->sensor_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // sensor_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensor_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // frequency
    PyObject * field = PyObject_GetAttrString(_pymsg, "frequency");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->frequency = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vfov
    PyObject * field = PyObject_GetAttrString(_pymsg, "vfov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vfov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rows_before
    PyObject * field = PyObject_GetAttrString(_pymsg, "rows_before");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rows_before = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cols_before
    PyObject * field = PyObject_GetAttrString(_pymsg, "cols_before");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cols_before = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rows_after
    PyObject * field = PyObject_GetAttrString(_pymsg, "rows_after");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rows_after = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cols_after
    PyObject * field = PyObject_GetAttrString(_pymsg, "cols_after");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cols_after = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_modules_msgs__msg__pcl_tools_diagnostics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PclToolsDiagnostics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_modules_msgs.msg._pcl_tools_diagnostics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PclToolsDiagnostics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_modules_msgs__msg__PclToolsDiagnostics * ros_message = (mrs_modules_msgs__msg__PclToolsDiagnostics *)raw_ros_message;
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
  {  // sensor_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->sensor_name.data,
      strlen(ros_message->sensor_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sensor_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frequency
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->frequency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frequency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vfov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vfov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vfov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rows_before
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rows_before);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rows_before", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cols_before
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cols_before);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cols_before", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rows_after
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rows_after);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rows_after", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cols_after
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cols_after);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cols_after", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
