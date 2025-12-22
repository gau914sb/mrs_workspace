// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/GazeboSpawnerDiagnostics.idl
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
#include "mrs_msgs/msg/detail/gazebo_spawner_diagnostics__struct.h"
#include "mrs_msgs/msg/detail/gazebo_spawner_diagnostics__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mrs_msgs__msg__gazebo_spawner_diagnostics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
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
    assert(strncmp("mrs_msgs.msg._gazebo_spawner_diagnostics.GazeboSpawnerDiagnostics", full_classname_dest, 65) == 0);
  }
  mrs_msgs__msg__GazeboSpawnerDiagnostics * ros_message = _ros_message;
  {  // spawn_called
    PyObject * field = PyObject_GetAttrString(_pymsg, "spawn_called");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->spawn_called = (Py_True == field);
    Py_DECREF(field);
  }
  {  // processing
    PyObject * field = PyObject_GetAttrString(_pymsg, "processing");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->processing = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_vehicles
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_vehicles");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'active_vehicles'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->active_vehicles), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->active_vehicles.data;
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
  {  // queued_vehicles
    PyObject * field = PyObject_GetAttrString(_pymsg, "queued_vehicles");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'queued_vehicles'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->queued_vehicles), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->queued_vehicles.data;
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
  {  // queued_processes
    PyObject * field = PyObject_GetAttrString(_pymsg, "queued_processes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->queued_processes = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_msgs__msg__gazebo_spawner_diagnostics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GazeboSpawnerDiagnostics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._gazebo_spawner_diagnostics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GazeboSpawnerDiagnostics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__GazeboSpawnerDiagnostics * ros_message = (mrs_msgs__msg__GazeboSpawnerDiagnostics *)raw_ros_message;
  {  // spawn_called
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->spawn_called ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spawn_called", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // processing
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->processing ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "processing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_vehicles
    PyObject * field = NULL;
    size_t size = ros_message->active_vehicles.size;
    rosidl_runtime_c__String * src = ros_message->active_vehicles.data;
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
      int rc = PyObject_SetAttrString(_pymessage, "active_vehicles", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // queued_vehicles
    PyObject * field = NULL;
    size_t size = ros_message->queued_vehicles.size;
    rosidl_runtime_c__String * src = ros_message->queued_vehicles.data;
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
      int rc = PyObject_SetAttrString(_pymessage, "queued_vehicles", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // queued_processes
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->queued_processes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "queued_processes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
