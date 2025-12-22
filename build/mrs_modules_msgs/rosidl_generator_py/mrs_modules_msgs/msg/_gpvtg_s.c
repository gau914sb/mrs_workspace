// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_modules_msgs:msg/Gpvtg.idl
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
#include "mrs_modules_msgs/msg/detail/gpvtg__struct.h"
#include "mrs_modules_msgs/msg/detail/gpvtg__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_modules_msgs__msg__gpvtg__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("mrs_modules_msgs.msg._gpvtg.Gpvtg", full_classname_dest, 33) == 0);
  }
  mrs_modules_msgs__msg__Gpvtg * ros_message = _ros_message;
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
  {  // message_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "message_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // track_true
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_true");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->track_true = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // track_true_indicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_true_indicator");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->track_true_indicator, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // track_mag
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_mag");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->track_mag = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // track_mag_indicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_mag_indicator");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->track_mag_indicator, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // speed_knots
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_knots");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_knots = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_knots_indicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_knots_indicator");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->speed_knots_indicator, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // speed_kmh
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_kmh");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_kmh = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_kmh_indicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_kmh_indicator");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->speed_kmh_indicator, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // mode_indicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_indicator");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mode_indicator, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_modules_msgs__msg__gpvtg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Gpvtg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_modules_msgs.msg._gpvtg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Gpvtg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_modules_msgs__msg__Gpvtg * ros_message = (mrs_modules_msgs__msg__Gpvtg *)raw_ros_message;
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
  {  // message_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message_id.data,
      strlen(ros_message->message_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_true
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->track_true);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_true", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_true_indicator
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->track_true_indicator.data,
      strlen(ros_message->track_true_indicator.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_true_indicator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_mag
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->track_mag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_mag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_mag_indicator
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->track_mag_indicator.data,
      strlen(ros_message->track_mag_indicator.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_mag_indicator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_knots
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_knots);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_knots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_knots_indicator
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->speed_knots_indicator.data,
      strlen(ros_message->speed_knots_indicator.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_knots_indicator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_kmh
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_kmh);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_kmh", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_kmh_indicator
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->speed_kmh_indicator.data,
      strlen(ros_message->speed_kmh_indicator.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_kmh_indicator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_indicator
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mode_indicator.data,
      strlen(ros_message->mode_indicator.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_indicator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
