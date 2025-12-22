// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/SafetyBorder.idl
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
#include "mrs_msgs/msg/detail/safety_border__struct.h"
#include "mrs_msgs/msg/detail/safety_border__functions.h"

bool mrs_msgs__msg__prism__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mrs_msgs__msg__prism__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_msgs__msg__safety_border__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("mrs_msgs.msg._safety_border.SafetyBorder", full_classname_dest, 40) == 0);
  }
  mrs_msgs__msg__SafetyBorder * ros_message = _ros_message;
  {  // prism
    PyObject * field = PyObject_GetAttrString(_pymsg, "prism");
    if (!field) {
      return false;
    }
    if (!mrs_msgs__msg__prism__convert_from_py(field, &ros_message->prism)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // keep_obstacles
    PyObject * field = PyObject_GetAttrString(_pymsg, "keep_obstacles");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->keep_obstacles = (Py_True == field);
    Py_DECREF(field);
  }
  {  // update_world_origin
    PyObject * field = PyObject_GetAttrString(_pymsg, "update_world_origin");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->update_world_origin = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_msgs__msg__safety_border__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SafetyBorder */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._safety_border");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SafetyBorder");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__SafetyBorder * ros_message = (mrs_msgs__msg__SafetyBorder *)raw_ros_message;
  {  // prism
    PyObject * field = NULL;
    field = mrs_msgs__msg__prism__convert_to_py(&ros_message->prism);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "prism", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // keep_obstacles
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->keep_obstacles ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "keep_obstacles", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // update_world_origin
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->update_world_origin ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "update_world_origin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
