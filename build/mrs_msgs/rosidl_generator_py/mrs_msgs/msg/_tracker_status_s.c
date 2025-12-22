// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/TrackerStatus.idl
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
#include "mrs_msgs/msg/detail/tracker_status__struct.h"
#include "mrs_msgs/msg/detail/tracker_status__functions.h"

bool mrs_msgs__msg__reference_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mrs_msgs__msg__reference_stamped__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_msgs__msg__tracker_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("mrs_msgs.msg._tracker_status.TrackerStatus", full_classname_dest, 42) == 0);
  }
  mrs_msgs__msg__TrackerStatus * ros_message = _ros_message;
  {  // active
    PyObject * field = PyObject_GetAttrString(_pymsg, "active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // callbacks_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "callbacks_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->callbacks_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // have_goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "have_goal");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->have_goal = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tracking_trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracking_trajectory");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tracking_trajectory = (Py_True == field);
    Py_DECREF(field);
  }
  {  // trajectory_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trajectory_length = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // trajectory_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trajectory_idx = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // trajectory_reference
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_reference");
    if (!field) {
      return false;
    }
    if (!mrs_msgs__msg__reference_stamped__convert_from_py(field, &ros_message->trajectory_reference)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_msgs__msg__tracker_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrackerStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._tracker_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrackerStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__TrackerStatus * ros_message = (mrs_msgs__msg__TrackerStatus *)raw_ros_message;
  {  // active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // callbacks_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->callbacks_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "callbacks_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // have_goal
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->have_goal ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "have_goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tracking_trajectory
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tracking_trajectory ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracking_trajectory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory_length
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->trajectory_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory_idx
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->trajectory_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory_reference
    PyObject * field = NULL;
    field = mrs_msgs__msg__reference_stamped__convert_to_py(&ros_message->trajectory_reference);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_reference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
