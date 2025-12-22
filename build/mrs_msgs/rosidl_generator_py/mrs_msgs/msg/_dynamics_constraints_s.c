// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/DynamicsConstraints.idl
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
#include "mrs_msgs/msg/detail/dynamics_constraints__struct.h"
#include "mrs_msgs/msg/detail/dynamics_constraints__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mrs_msgs__msg__dynamics_constraints__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("mrs_msgs.msg._dynamics_constraints.DynamicsConstraints", full_classname_dest, 54) == 0);
  }
  mrs_msgs__msg__DynamicsConstraints * ros_message = _ros_message;
  {  // horizontal_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->horizontal_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // horizontal_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->horizontal_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // horizontal_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_jerk");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->horizontal_jerk = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // horizontal_snap
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_snap");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->horizontal_snap = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_ascending_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_ascending_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_ascending_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_ascending_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_ascending_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_ascending_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_ascending_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_ascending_jerk");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_ascending_jerk = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_ascending_snap
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_ascending_snap");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_ascending_snap = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_descending_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_descending_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_descending_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_descending_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_descending_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_descending_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_descending_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_descending_jerk");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_descending_jerk = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_descending_snap
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_descending_snap");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_descending_snap = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_jerk");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_jerk = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_snap
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_snap");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_snap = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tilt
    PyObject * field = PyObject_GetAttrString(_pymsg, "tilt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tilt = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_msgs__msg__dynamics_constraints__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DynamicsConstraints */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._dynamics_constraints");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DynamicsConstraints");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__DynamicsConstraints * ros_message = (mrs_msgs__msg__DynamicsConstraints *)raw_ros_message;
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
  {  // horizontal_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->horizontal_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_jerk
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->horizontal_jerk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_snap
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->horizontal_snap);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_snap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_ascending_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_ascending_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_ascending_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_ascending_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_ascending_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_ascending_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_ascending_jerk
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_ascending_jerk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_ascending_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_ascending_snap
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_ascending_snap);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_ascending_snap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_descending_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_descending_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_descending_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_descending_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_descending_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_descending_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_descending_jerk
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_descending_jerk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_descending_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_descending_snap
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_descending_snap);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_descending_snap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_jerk
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_jerk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_snap
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_snap);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_snap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tilt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tilt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tilt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
