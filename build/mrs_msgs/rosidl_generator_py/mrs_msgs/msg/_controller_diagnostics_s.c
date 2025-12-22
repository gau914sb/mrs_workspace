// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/ControllerDiagnostics.idl
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
#include "mrs_msgs/msg/detail/controller_diagnostics__struct.h"
#include "mrs_msgs/msg/detail/controller_diagnostics__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_msgs__msg__controller_diagnostics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("mrs_msgs.msg._controller_diagnostics.ControllerDiagnostics", full_classname_dest, 58) == 0);
  }
  mrs_msgs__msg__ControllerDiagnostics * ros_message = _ros_message;
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
  {  // controller
    PyObject * field = PyObject_GetAttrString(_pymsg, "controller");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->controller, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // ramping_up
    PyObject * field = PyObject_GetAttrString(_pymsg, "ramping_up");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ramping_up = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mass_estimator
    PyObject * field = PyObject_GetAttrString(_pymsg, "mass_estimator");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mass_estimator = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mass_difference
    PyObject * field = PyObject_GetAttrString(_pymsg, "mass_difference");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mass_difference = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_mass
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_mass");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_mass = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // disturbance_estimator
    PyObject * field = PyObject_GetAttrString(_pymsg, "disturbance_estimator");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->disturbance_estimator = (Py_True == field);
    Py_DECREF(field);
  }
  {  // disturbance_wx_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "disturbance_wx_w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->disturbance_wx_w = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // disturbance_wy_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "disturbance_wy_w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->disturbance_wy_w = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // disturbance_bx_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "disturbance_bx_w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->disturbance_bx_w = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // disturbance_by_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "disturbance_by_w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->disturbance_by_w = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // disturbance_bx_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "disturbance_bx_b");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->disturbance_bx_b = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // disturbance_by_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "disturbance_by_b");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->disturbance_by_b = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // controller_enforcing_constraints
    PyObject * field = PyObject_GetAttrString(_pymsg, "controller_enforcing_constraints");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->controller_enforcing_constraints = (Py_True == field);
    Py_DECREF(field);
  }
  {  // horizontal_speed_constraint
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_speed_constraint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->horizontal_speed_constraint = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // horizontal_acc_constraint
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_acc_constraint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->horizontal_acc_constraint = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_asc_speed_constraint
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_asc_speed_constraint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_asc_speed_constraint = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_asc_acc_constraint
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_asc_acc_constraint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_asc_acc_constraint = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_desc_speed_constraint
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_desc_speed_constraint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_desc_speed_constraint = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_desc_acc_constraint
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_desc_acc_constraint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_desc_acc_constraint = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_msgs__msg__controller_diagnostics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControllerDiagnostics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._controller_diagnostics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControllerDiagnostics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__ControllerDiagnostics * ros_message = (mrs_msgs__msg__ControllerDiagnostics *)raw_ros_message;
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
  {  // controller
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->controller.data,
      strlen(ros_message->controller.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "controller", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ramping_up
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ramping_up ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ramping_up", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mass_estimator
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mass_estimator ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mass_estimator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mass_difference
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mass_difference);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mass_difference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_mass
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_mass);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_mass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disturbance_estimator
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->disturbance_estimator ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disturbance_estimator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disturbance_wx_w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->disturbance_wx_w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disturbance_wx_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disturbance_wy_w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->disturbance_wy_w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disturbance_wy_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disturbance_bx_w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->disturbance_bx_w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disturbance_bx_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disturbance_by_w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->disturbance_by_w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disturbance_by_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disturbance_bx_b
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->disturbance_bx_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disturbance_bx_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disturbance_by_b
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->disturbance_by_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disturbance_by_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // controller_enforcing_constraints
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->controller_enforcing_constraints ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "controller_enforcing_constraints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_speed_constraint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->horizontal_speed_constraint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_speed_constraint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_acc_constraint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->horizontal_acc_constraint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_acc_constraint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_asc_speed_constraint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_asc_speed_constraint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_asc_speed_constraint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_asc_acc_constraint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_asc_acc_constraint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_asc_acc_constraint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_desc_speed_constraint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_desc_speed_constraint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_desc_speed_constraint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_desc_acc_constraint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_desc_acc_constraint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_desc_acc_constraint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
