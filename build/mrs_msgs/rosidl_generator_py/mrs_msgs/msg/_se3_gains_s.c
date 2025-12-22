// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/Se3Gains.idl
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
#include "mrs_msgs/msg/detail/se3_gains__struct.h"
#include "mrs_msgs/msg/detail/se3_gains__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mrs_msgs__msg__se3_gains__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("mrs_msgs.msg._se3_gains.Se3Gains", full_classname_dest, 32) == 0);
  }
  mrs_msgs__msg__Se3Gains * ros_message = _ros_message;
  {  // kpxy
    PyObject * field = PyObject_GetAttrString(_pymsg, "kpxy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kpxy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kvxy
    PyObject * field = PyObject_GetAttrString(_pymsg, "kvxy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kvxy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kaxy
    PyObject * field = PyObject_GetAttrString(_pymsg, "kaxy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kaxy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kpz
    PyObject * field = PyObject_GetAttrString(_pymsg, "kpz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kpz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kvz
    PyObject * field = PyObject_GetAttrString(_pymsg, "kvz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kvz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kaz
    PyObject * field = PyObject_GetAttrString(_pymsg, "kaz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kaz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kibxy
    PyObject * field = PyObject_GetAttrString(_pymsg, "kibxy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kibxy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kibxy_lim
    PyObject * field = PyObject_GetAttrString(_pymsg, "kibxy_lim");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kibxy_lim = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kiwxy
    PyObject * field = PyObject_GetAttrString(_pymsg, "kiwxy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kiwxy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kiwxy_lim
    PyObject * field = PyObject_GetAttrString(_pymsg, "kiwxy_lim");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kiwxy_lim = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kqrp
    PyObject * field = PyObject_GetAttrString(_pymsg, "kqrp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kqrp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kqy
    PyObject * field = PyObject_GetAttrString(_pymsg, "kqy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kqy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // km
    PyObject * field = PyObject_GetAttrString(_pymsg, "km");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->km = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // km_lim
    PyObject * field = PyObject_GetAttrString(_pymsg, "km_lim");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->km_lim = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_msgs__msg__se3_gains__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Se3Gains */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._se3_gains");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Se3Gains");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__Se3Gains * ros_message = (mrs_msgs__msg__Se3Gains *)raw_ros_message;
  {  // kpxy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kpxy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kpxy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kvxy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kvxy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kvxy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kaxy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kaxy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kaxy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kpz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kpz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kpz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kvz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kvz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kvz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kaz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kaz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kaz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kibxy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kibxy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kibxy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kibxy_lim
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kibxy_lim);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kibxy_lim", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kiwxy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kiwxy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kiwxy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kiwxy_lim
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kiwxy_lim);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kiwxy_lim", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kqrp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kqrp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kqrp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kqy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kqy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kqy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // km
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->km);
    {
      int rc = PyObject_SetAttrString(_pymessage, "km", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // km_lim
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->km_lim);
    {
      int rc = PyObject_SetAttrString(_pymessage, "km_lim", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
