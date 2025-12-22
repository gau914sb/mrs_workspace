// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/UavStatusShort.idl
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
#include "mrs_msgs/msg/detail/uav_status_short__struct.h"
#include "mrs_msgs/msg/detail/uav_status_short__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mrs_msgs__msg__uav_status_short__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("mrs_msgs.msg._uav_status_short.UavStatusShort", full_classname_dest, 45) == 0);
  }
  mrs_msgs__msg__UavStatusShort * ros_message = _ros_message;
  {  // odom_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_hz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odom_hz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // odom_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->odom_color = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // odom_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odom_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // odom_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odom_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // odom_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odom_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // odom_hdg
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_hdg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odom_hdg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cmd_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cmd_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cmd_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cmd_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cmd_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cmd_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cmd_hdg
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_hdg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cmd_hdg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_msgs__msg__uav_status_short__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UavStatusShort */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._uav_status_short");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UavStatusShort");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__UavStatusShort * ros_message = (mrs_msgs__msg__UavStatusShort *)raw_ros_message;
  {  // odom_hz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odom_hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_color
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->odom_color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odom_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odom_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odom_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_hdg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odom_hdg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_hdg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cmd_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cmd_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cmd_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_hdg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cmd_hdg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_hdg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
