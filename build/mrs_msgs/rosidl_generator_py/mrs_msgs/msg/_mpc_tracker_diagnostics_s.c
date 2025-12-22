// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/MpcTrackerDiagnostics.idl
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
#include "mrs_msgs/msg/detail/mpc_tracker_diagnostics__struct.h"
#include "mrs_msgs/msg/detail/mpc_tracker_diagnostics__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_msgs__msg__mpc_tracker_diagnostics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("mrs_msgs.msg._mpc_tracker_diagnostics.MpcTrackerDiagnostics", full_classname_dest, 59) == 0);
  }
  mrs_msgs__msg__MpcTrackerDiagnostics * ros_message = _ros_message;
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
  {  // uav_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "uav_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->uav_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // active
    PyObject * field = PyObject_GetAttrString(_pymsg, "active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // collision_avoidance_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "collision_avoidance_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->collision_avoidance_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // avoiding_collision
    PyObject * field = PyObject_GetAttrString(_pymsg, "avoiding_collision");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->avoiding_collision = (Py_True == field);
    Py_DECREF(field);
  }
  {  // avoidance_active_uavs
    PyObject * field = PyObject_GetAttrString(_pymsg, "avoidance_active_uavs");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'avoidance_active_uavs'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->avoidance_active_uavs), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->avoidance_active_uavs.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // setpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "setpoint");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->setpoint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_msgs__msg__mpc_tracker_diagnostics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MpcTrackerDiagnostics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._mpc_tracker_diagnostics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MpcTrackerDiagnostics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__MpcTrackerDiagnostics * ros_message = (mrs_msgs__msg__MpcTrackerDiagnostics *)raw_ros_message;
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
  {  // uav_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->uav_name.data,
      strlen(ros_message->uav_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "uav_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
  {  // collision_avoidance_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->collision_avoidance_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "collision_avoidance_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avoiding_collision
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->avoiding_collision ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avoiding_collision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avoidance_active_uavs
    PyObject * field = NULL;
    size_t size = ros_message->avoidance_active_uavs.size;
    rosidl_runtime_c__String * src = ros_message->avoidance_active_uavs.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "avoidance_active_uavs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // setpoint
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->setpoint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "setpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
