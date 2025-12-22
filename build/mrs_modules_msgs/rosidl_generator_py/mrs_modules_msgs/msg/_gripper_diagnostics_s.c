// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_modules_msgs:msg/GripperDiagnostics.idl
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
#include "mrs_modules_msgs/msg/detail/gripper_diagnostics__struct.h"
#include "mrs_modules_msgs/msg/detail/gripper_diagnostics__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_modules_msgs__msg__gripper_diagnostics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("mrs_modules_msgs.msg._gripper_diagnostics.GripperDiagnostics", full_classname_dest, 60) == 0);
  }
  mrs_modules_msgs__msg__GripperDiagnostics * ros_message = _ros_message;
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
  {  // gripper_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gripper_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gripping_object
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripping_object");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gripping_object = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_hall
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_hall");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_hall = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hall1_debug
    PyObject * field = PyObject_GetAttrString(_pymsg, "hall1_debug");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hall1_debug = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // hall2_debug
    PyObject * field = PyObject_GetAttrString(_pymsg, "hall2_debug");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hall2_debug = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // has_ultrasonic
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_ultrasonic");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_ultrasonic = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ultrasonic1_debug
    PyObject * field = PyObject_GetAttrString(_pymsg, "ultrasonic1_debug");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ultrasonic1_debug = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ultrasonic2_debug
    PyObject * field = PyObject_GetAttrString(_pymsg, "ultrasonic2_debug");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ultrasonic2_debug = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // has_proximity
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_proximity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_proximity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // proximity1_debug
    PyObject * field = PyObject_GetAttrString(_pymsg, "proximity1_debug");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->proximity1_debug = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // proximity2_debug
    PyObject * field = PyObject_GetAttrString(_pymsg, "proximity2_debug");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->proximity2_debug = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_modules_msgs__msg__gripper_diagnostics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GripperDiagnostics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_modules_msgs.msg._gripper_diagnostics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GripperDiagnostics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_modules_msgs__msg__GripperDiagnostics * ros_message = (mrs_modules_msgs__msg__GripperDiagnostics *)raw_ros_message;
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
  {  // gripper_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gripper_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripping_object
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gripping_object ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripping_object", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_hall
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_hall ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_hall", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hall1_debug
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->hall1_debug);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hall1_debug", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hall2_debug
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->hall2_debug);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hall2_debug", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_ultrasonic
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_ultrasonic ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_ultrasonic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ultrasonic1_debug
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ultrasonic1_debug);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ultrasonic1_debug", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ultrasonic2_debug
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ultrasonic2_debug);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ultrasonic2_debug", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_proximity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_proximity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_proximity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // proximity1_debug
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->proximity1_debug);
    {
      int rc = PyObject_SetAttrString(_pymessage, "proximity1_debug", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // proximity2_debug
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->proximity2_debug);
    {
      int rc = PyObject_SetAttrString(_pymessage, "proximity2_debug", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
