// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_modules_msgs:msg/Gprmc.idl
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
#include "mrs_modules_msgs/msg/detail/gprmc__struct.h"
#include "mrs_modules_msgs/msg/detail/gprmc__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool mrs_modules_msgs__msg__gps_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mrs_modules_msgs__msg__gps_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_modules_msgs__msg__gprmc__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("mrs_modules_msgs.msg._gprmc.Gprmc", full_classname_dest, 33) == 0);
  }
  mrs_modules_msgs__msg__Gprmc * ros_message = _ros_message;
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
  {  // utc_seconds
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_seconds");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->utc_seconds = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_status");
    if (!field) {
      return false;
    }
    if (!mrs_modules_msgs__msg__gps_status__convert_from_py(field, &ros_message->position_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // latitude_dir
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude_dir");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->latitude_dir, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // longitude_dir
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude_dir");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->longitude_dir, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // track
    PyObject * field = PyObject_GetAttrString(_pymsg, "track");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->track = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // date
    PyObject * field = PyObject_GetAttrString(_pymsg, "date");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->date, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // mag_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mag_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mag_var_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_var_direction");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mag_var_direction, PyBytes_AS_STRING(encoded_field));
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
PyObject * mrs_modules_msgs__msg__gprmc__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Gprmc */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_modules_msgs.msg._gprmc");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Gprmc");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_modules_msgs__msg__Gprmc * ros_message = (mrs_modules_msgs__msg__Gprmc *)raw_ros_message;
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
  {  // utc_seconds
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->utc_seconds);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_seconds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_status
    PyObject * field = NULL;
    field = mrs_modules_msgs__msg__gps_status__convert_to_py(&ros_message->position_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitude_dir
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->latitude_dir.data,
      strlen(ros_message->latitude_dir.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude_dir", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude_dir
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->longitude_dir.data,
      strlen(ros_message->longitude_dir.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude_dir", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->track);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // date
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->date.data,
      strlen(ros_message->date.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "date", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mag_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_var_direction
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mag_var_direction.data,
      strlen(ros_message->mag_var_direction.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_var_direction", field);
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
