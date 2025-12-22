// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_modules_msgs:msg/Bestpos.idl
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
#include "mrs_modules_msgs/msg/detail/bestpos__struct.h"
#include "mrs_modules_msgs/msg/detail/bestpos__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool mrs_modules_msgs__msg__tersus_message_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mrs_modules_msgs__msg__tersus_message_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_modules_msgs__msg__bestpos__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("mrs_modules_msgs.msg._bestpos.Bestpos", full_classname_dest, 37) == 0);
  }
  mrs_modules_msgs__msg__Bestpos * ros_message = _ros_message;
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
  {  // solution_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "solution_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->solution_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // position_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->position_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
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
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // undulation
    PyObject * field = PyObject_GetAttrString(_pymsg, "undulation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->undulation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // datum_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "datum_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->datum_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // latitude_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // base_station_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_station_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->base_station_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // diff_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "diff_age");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->diff_age = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // solution_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "solution_age");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->solution_age = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // num_satellites_tracked
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_satellites_tracked");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_satellites_tracked = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_satellites_used_in_solution
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_satellites_used_in_solution");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_satellites_used_in_solution = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_gps_and_glonass_l1_used_in_solution
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_gps_and_glonass_l1_used_in_solution");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_gps_and_glonass_l1_used_in_solution = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_gps_and_glonass_l1_and_l2_used_in_solution
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_gps_and_glonass_l1_and_l2_used_in_solution");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_gps_and_glonass_l1_and_l2_used_in_solution = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_modules_msgs__msg__bestpos__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Bestpos */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_modules_msgs.msg._bestpos");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Bestpos");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_modules_msgs__msg__Bestpos * ros_message = (mrs_modules_msgs__msg__Bestpos *)raw_ros_message;
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
  {  // solution_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->solution_status.data,
      strlen(ros_message->solution_status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "solution_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->position_type.data,
      strlen(ros_message->position_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_type", field);
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
  {  // height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // undulation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->undulation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "undulation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // datum_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->datum_id.data,
      strlen(ros_message->datum_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "datum_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitude_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_station_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->base_station_id.data,
      strlen(ros_message->base_station_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_station_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diff_age
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->diff_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diff_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // solution_age
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->solution_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "solution_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_satellites_tracked
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_satellites_tracked);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_satellites_tracked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_satellites_used_in_solution
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_satellites_used_in_solution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_satellites_used_in_solution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_gps_and_glonass_l1_used_in_solution
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_gps_and_glonass_l1_used_in_solution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_gps_and_glonass_l1_used_in_solution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_gps_and_glonass_l1_and_l2_used_in_solution
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_gps_and_glonass_l1_and_l2_used_in_solution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_gps_and_glonass_l1_and_l2_used_in_solution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
