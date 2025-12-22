// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_modules_msgs:msg/Range.idl
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
#include "mrs_modules_msgs/msg/detail/range__struct.h"
#include "mrs_modules_msgs/msg/detail/range__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "mrs_modules_msgs/msg/detail/range_information__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool mrs_modules_msgs__msg__tersus_message_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mrs_modules_msgs__msg__tersus_message_header__convert_to_py(void * raw_ros_message);
bool mrs_modules_msgs__msg__range_information__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mrs_modules_msgs__msg__range_information__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_modules_msgs__msg__range__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
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
    assert(strncmp("mrs_modules_msgs.msg._range.Range", full_classname_dest, 33) == 0);
  }
  mrs_modules_msgs__msg__Range * ros_message = _ros_message;
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
  {  // tersus_msg_header
    PyObject * field = PyObject_GetAttrString(_pymsg, "tersus_msg_header");
    if (!field) {
      return false;
    }
    if (!mrs_modules_msgs__msg__tersus_message_header__convert_from_py(field, &ros_message->tersus_msg_header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // numb_of_observ
    PyObject * field = PyObject_GetAttrString(_pymsg, "numb_of_observ");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->numb_of_observ = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'info'");
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
    if (!mrs_modules_msgs__msg__RangeInformation__Sequence__init(&(ros_message->info), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create mrs_modules_msgs__msg__RangeInformation__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    mrs_modules_msgs__msg__RangeInformation * dest = ros_message->info.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!mrs_modules_msgs__msg__range_information__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * mrs_modules_msgs__msg__range__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Range */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_modules_msgs.msg._range");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Range");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_modules_msgs__msg__Range * ros_message = (mrs_modules_msgs__msg__Range *)raw_ros_message;
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
  {  // tersus_msg_header
    PyObject * field = NULL;
    field = mrs_modules_msgs__msg__tersus_message_header__convert_to_py(&ros_message->tersus_msg_header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tersus_msg_header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // numb_of_observ
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->numb_of_observ);
    {
      int rc = PyObject_SetAttrString(_pymessage, "numb_of_observ", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // info
    PyObject * field = NULL;
    size_t size = ros_message->info.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    mrs_modules_msgs__msg__RangeInformation * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->info.data[i]);
      PyObject * pyitem = mrs_modules_msgs__msg__range_information__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
