// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/RangeWithCovarianceIdentified.idl
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
#include "mrs_msgs/msg/detail/range_with_covariance_identified__struct.h"
#include "mrs_msgs/msg/detail/range_with_covariance_identified__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__range__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__range__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_msgs__msg__range_with_covariance_identified__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[77];
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
    assert(strncmp("mrs_msgs.msg._range_with_covariance_identified.RangeWithCovarianceIdentified", full_classname_dest, 76) == 0);
  }
  mrs_msgs__msg__RangeWithCovarianceIdentified * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // range
    PyObject * field = PyObject_GetAttrString(_pymsg, "range");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__range__convert_from_py(field, &ros_message->range)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // variance
    PyObject * field = PyObject_GetAttrString(_pymsg, "variance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->variance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // power_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->power_a = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // power_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_b");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->power_b = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_msgs__msg__range_with_covariance_identified__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RangeWithCovarianceIdentified */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._range_with_covariance_identified");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RangeWithCovarianceIdentified");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__RangeWithCovarianceIdentified * ros_message = (mrs_msgs__msg__RangeWithCovarianceIdentified *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range
    PyObject * field = NULL;
    field = sensor_msgs__msg__range__convert_to_py(&ros_message->range);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // variance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->variance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "variance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->power_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_b
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->power_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
