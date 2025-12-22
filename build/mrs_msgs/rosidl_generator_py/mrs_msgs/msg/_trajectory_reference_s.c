// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/TrajectoryReference.idl
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
#include "mrs_msgs/msg/detail/trajectory_reference__struct.h"
#include "mrs_msgs/msg/detail/trajectory_reference__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "mrs_msgs/msg/detail/reference__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool mrs_msgs__msg__reference__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mrs_msgs__msg__reference__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_msgs__msg__trajectory_reference__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("mrs_msgs.msg._trajectory_reference.TrajectoryReference", full_classname_dest, 54) == 0);
  }
  mrs_msgs__msg__TrajectoryReference * ros_message = _ros_message;
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
  {  // input_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->input_id = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // use_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_heading");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_heading = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fly_now
    PyObject * field = PyObject_GetAttrString(_pymsg, "fly_now");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fly_now = (Py_True == field);
    Py_DECREF(field);
  }
  {  // loop
    PyObject * field = PyObject_GetAttrString(_pymsg, "loop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->loop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dt
    PyObject * field = PyObject_GetAttrString(_pymsg, "dt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dt = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // points
    PyObject * field = PyObject_GetAttrString(_pymsg, "points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'points'");
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
    if (!mrs_msgs__msg__Reference__Sequence__init(&(ros_message->points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create mrs_msgs__msg__Reference__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    mrs_msgs__msg__Reference * dest = ros_message->points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!mrs_msgs__msg__reference__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_msgs__msg__trajectory_reference__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrajectoryReference */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._trajectory_reference");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrajectoryReference");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__TrajectoryReference * ros_message = (mrs_msgs__msg__TrajectoryReference *)raw_ros_message;
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
  {  // input_id
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->input_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_heading
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_heading ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fly_now
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fly_now ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fly_now", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->loop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // points
    PyObject * field = NULL;
    size_t size = ros_message->points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    mrs_msgs__msg__Reference * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->points.data[i]);
      PyObject * pyitem = mrs_msgs__msg__reference__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
