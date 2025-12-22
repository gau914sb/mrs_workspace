// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/Path.idl
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
#include "mrs_msgs/msg/detail/path__struct.h"
#include "mrs_msgs/msg/detail/path__functions.h"

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
bool mrs_msgs__msg__path__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[24];
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
    assert(strncmp("mrs_msgs.msg._path.Path", full_classname_dest, 23) == 0);
  }
  mrs_msgs__msg__Path * ros_message = _ros_message;
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
  {  // stop_at_waypoints
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_at_waypoints");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stop_at_waypoints = (Py_True == field);
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
  {  // max_execution_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_execution_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_execution_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_deviation_from_path
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_deviation_from_path");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_deviation_from_path = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dont_prepend_current_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "dont_prepend_current_state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dont_prepend_current_state = (Py_True == field);
    Py_DECREF(field);
  }
  {  // override_heading_atan2
    PyObject * field = PyObject_GetAttrString(_pymsg, "override_heading_atan2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->override_heading_atan2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // override_constraints
    PyObject * field = PyObject_GetAttrString(_pymsg, "override_constraints");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->override_constraints = (Py_True == field);
    Py_DECREF(field);
  }
  {  // override_max_velocity_horizontal
    PyObject * field = PyObject_GetAttrString(_pymsg, "override_max_velocity_horizontal");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->override_max_velocity_horizontal = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // override_max_acceleration_horizontal
    PyObject * field = PyObject_GetAttrString(_pymsg, "override_max_acceleration_horizontal");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->override_max_acceleration_horizontal = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // override_max_jerk_horizontal
    PyObject * field = PyObject_GetAttrString(_pymsg, "override_max_jerk_horizontal");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->override_max_jerk_horizontal = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // override_max_velocity_vertical
    PyObject * field = PyObject_GetAttrString(_pymsg, "override_max_velocity_vertical");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->override_max_velocity_vertical = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // override_max_acceleration_vertical
    PyObject * field = PyObject_GetAttrString(_pymsg, "override_max_acceleration_vertical");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->override_max_acceleration_vertical = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // override_max_jerk_vertical
    PyObject * field = PyObject_GetAttrString(_pymsg, "override_max_jerk_vertical");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->override_max_jerk_vertical = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // relax_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "relax_heading");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->relax_heading = (Py_True == field);
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
PyObject * mrs_msgs__msg__path__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Path */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._path");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Path");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__Path * ros_message = (mrs_msgs__msg__Path *)raw_ros_message;
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
  {  // stop_at_waypoints
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stop_at_waypoints ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_at_waypoints", field);
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
  {  // max_execution_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_execution_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_execution_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_deviation_from_path
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_deviation_from_path);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_deviation_from_path", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dont_prepend_current_state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dont_prepend_current_state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dont_prepend_current_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // override_heading_atan2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->override_heading_atan2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "override_heading_atan2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // override_constraints
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->override_constraints ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "override_constraints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // override_max_velocity_horizontal
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->override_max_velocity_horizontal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "override_max_velocity_horizontal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // override_max_acceleration_horizontal
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->override_max_acceleration_horizontal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "override_max_acceleration_horizontal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // override_max_jerk_horizontal
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->override_max_jerk_horizontal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "override_max_jerk_horizontal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // override_max_velocity_vertical
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->override_max_velocity_vertical);
    {
      int rc = PyObject_SetAttrString(_pymessage, "override_max_velocity_vertical", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // override_max_acceleration_vertical
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->override_max_acceleration_vertical);
    {
      int rc = PyObject_SetAttrString(_pymessage, "override_max_acceleration_vertical", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // override_max_jerk_vertical
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->override_max_jerk_vertical);
    {
      int rc = PyObject_SetAttrString(_pymessage, "override_max_jerk_vertical", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relax_heading
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->relax_heading ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "relax_heading", field);
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
