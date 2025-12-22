// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/UavStatus.idl
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
#include "mrs_msgs/msg/detail/uav_status__struct.h"
#include "mrs_msgs/msg/detail/uav_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "mrs_msgs/msg/detail/custom_topic__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool mrs_msgs__msg__custom_topic__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mrs_msgs__msg__custom_topic__convert_to_py(void * raw_ros_message);
bool mrs_msgs__msg__node_cpu_load__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mrs_msgs__msg__node_cpu_load__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_msgs__msg__uav_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("mrs_msgs.msg._uav_status.UavStatus", full_classname_dest, 34) == 0);
  }
  mrs_msgs__msg__UavStatus * ros_message = _ros_message;
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
  {  // uav_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "uav_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->uav_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // uav_mass
    PyObject * field = PyObject_GetAttrString(_pymsg, "uav_mass");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->uav_mass, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // control_manager_diag_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_manager_diag_hz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->control_manager_diag_hz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // control_manager_diag_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_manager_diag_color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_manager_diag_color = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // controllers
    PyObject * field = PyObject_GetAttrString(_pymsg, "controllers");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'controllers'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->controllers), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->controllers.data;
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
  {  // gains
    PyObject * field = PyObject_GetAttrString(_pymsg, "gains");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'gains'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->gains), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->gains.data;
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
  {  // trackers
    PyObject * field = PyObject_GetAttrString(_pymsg, "trackers");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'trackers'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->trackers), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->trackers.data;
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
  {  // constraints
    PyObject * field = PyObject_GetAttrString(_pymsg, "constraints");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'constraints'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->constraints), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->constraints.data;
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
  {  // null_tracker
    PyObject * field = PyObject_GetAttrString(_pymsg, "null_tracker");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->null_tracker = (Py_True == field);
    Py_DECREF(field);
  }
  {  // secs_flown
    PyObject * field = PyObject_GetAttrString(_pymsg, "secs_flown");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->secs_flown = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // odom_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_hz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odom_hz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // odom_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->odom_color = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // odom_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odom_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // odom_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odom_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // odom_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odom_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // odom_hdg
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_hdg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odom_hdg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // odom_frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_frame");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->odom_frame, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // odom_estimators
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_estimators");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'odom_estimators'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->odom_estimators), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->odom_estimators.data;
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
  {  // horizontal_estimator
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_estimator");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->horizontal_estimator, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // vertical_estimator
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_estimator");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->vertical_estimator, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // heading_estimator
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_estimator");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->heading_estimator, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // agl_estimator
    PyObject * field = PyObject_GetAttrString(_pymsg, "agl_estimator");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->agl_estimator, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // max_flight_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_flight_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_flight_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cmd_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cmd_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cmd_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cmd_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cmd_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cmd_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cmd_hdg
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_hdg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cmd_hdg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cpu_load
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu_load");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu_load = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cpu_load_total
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu_load_total");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu_load_total = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cpu_ghz
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu_ghz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu_ghz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cpu_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // free_ram
    PyObject * field = PyObject_GetAttrString(_pymsg, "free_ram");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->free_ram = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_ram
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_ram");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_ram = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // free_hdd
    PyObject * field = PyObject_GetAttrString(_pymsg, "free_hdd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->free_hdd = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // hw_api_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_api_hz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hw_api_hz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hw_api_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_api_color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hw_api_color = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // hw_api_battery_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_api_battery_hz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hw_api_battery_hz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hw_api_state_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_api_state_hz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hw_api_state_hz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hw_api_cmd_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_api_cmd_hz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hw_api_cmd_hz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hw_api_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_api_mode");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->hw_api_mode, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // hw_api_armed
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_api_armed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hw_api_armed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hw_api_gnss_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_api_gnss_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hw_api_gnss_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hw_api_gnss_qual
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_api_gnss_qual");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hw_api_gnss_qual = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mag_norm_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_norm_hz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mag_norm_hz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hw_api_gnss_fix_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_api_gnss_fix_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hw_api_gnss_fix_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hw_api_gnss_num_sats
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_api_gnss_num_sats");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hw_api_gnss_num_sats = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hw_api_gnss_pos_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_api_gnss_pos_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hw_api_gnss_pos_acc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hw_api_gnss_status_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_api_gnss_status_hz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hw_api_gnss_status_hz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mag_norm
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_norm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mag_norm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_volt
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_volt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_volt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_curr
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_curr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_curr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_wh_drained
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_wh_drained");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_wh_drained = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // thrust
    PyObject * field = PyObject_GetAttrString(_pymsg, "thrust");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->thrust = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mass_estimate
    PyObject * field = PyObject_GetAttrString(_pymsg, "mass_estimate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mass_estimate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mass_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "mass_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mass_set = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // custom_topics
    PyObject * field = PyObject_GetAttrString(_pymsg, "custom_topics");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'custom_topics'");
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
    if (!mrs_msgs__msg__CustomTopic__Sequence__init(&(ros_message->custom_topics), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create mrs_msgs__msg__CustomTopic__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    mrs_msgs__msg__CustomTopic * dest = ros_message->custom_topics.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!mrs_msgs__msg__custom_topic__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // custom_string_outputs
    PyObject * field = PyObject_GetAttrString(_pymsg, "custom_string_outputs");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'custom_string_outputs'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->custom_string_outputs), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->custom_string_outputs.data;
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
  {  // node_cpu_loads
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_cpu_loads");
    if (!field) {
      return false;
    }
    if (!mrs_msgs__msg__node_cpu_load__convert_from_py(field, &ros_message->node_cpu_loads)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // flying_normally
    PyObject * field = PyObject_GetAttrString(_pymsg, "flying_normally");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flying_normally = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rc_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rc_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // have_goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "have_goal");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->have_goal = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tracking_trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracking_trajectory");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tracking_trajectory = (Py_True == field);
    Py_DECREF(field);
  }
  {  // callbacks_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "callbacks_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->callbacks_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // collision_avoidance_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "collision_avoidance_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->collision_avoidance_enabled = (Py_True == field);
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
  {  // automatic_start_can_takeoff
    PyObject * field = PyObject_GetAttrString(_pymsg, "automatic_start_can_takeoff");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->automatic_start_can_takeoff = (Py_True == field);
    Py_DECREF(field);
  }
  {  // num_other_uavs
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_other_uavs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_other_uavs = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_msgs__msg__uav_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UavStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._uav_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UavStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__UavStatus * ros_message = (mrs_msgs__msg__UavStatus *)raw_ros_message;
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
  {  // uav_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->uav_type.data,
      strlen(ros_message->uav_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "uav_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uav_mass
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->uav_mass.data,
      strlen(ros_message->uav_mass.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "uav_mass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_manager_diag_hz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->control_manager_diag_hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_manager_diag_hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_manager_diag_color
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->control_manager_diag_color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_manager_diag_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // controllers
    PyObject * field = NULL;
    size_t size = ros_message->controllers.size;
    rosidl_runtime_c__String * src = ros_message->controllers.data;
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
      int rc = PyObject_SetAttrString(_pymessage, "controllers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gains
    PyObject * field = NULL;
    size_t size = ros_message->gains.size;
    rosidl_runtime_c__String * src = ros_message->gains.data;
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
      int rc = PyObject_SetAttrString(_pymessage, "gains", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trackers
    PyObject * field = NULL;
    size_t size = ros_message->trackers.size;
    rosidl_runtime_c__String * src = ros_message->trackers.data;
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
      int rc = PyObject_SetAttrString(_pymessage, "trackers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // constraints
    PyObject * field = NULL;
    size_t size = ros_message->constraints.size;
    rosidl_runtime_c__String * src = ros_message->constraints.data;
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
      int rc = PyObject_SetAttrString(_pymessage, "constraints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // null_tracker
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->null_tracker ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "null_tracker", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // secs_flown
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->secs_flown);
    {
      int rc = PyObject_SetAttrString(_pymessage, "secs_flown", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_hz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odom_hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_color
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->odom_color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odom_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odom_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odom_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_hdg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odom_hdg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_hdg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_frame
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->odom_frame.data,
      strlen(ros_message->odom_frame.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_estimators
    PyObject * field = NULL;
    size_t size = ros_message->odom_estimators.size;
    rosidl_runtime_c__String * src = ros_message->odom_estimators.data;
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
      int rc = PyObject_SetAttrString(_pymessage, "odom_estimators", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_estimator
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->horizontal_estimator.data,
      strlen(ros_message->horizontal_estimator.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_estimator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_estimator
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->vertical_estimator.data,
      strlen(ros_message->vertical_estimator.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_estimator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_estimator
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->heading_estimator.data,
      strlen(ros_message->heading_estimator.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_estimator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // agl_estimator
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->agl_estimator.data,
      strlen(ros_message->agl_estimator.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "agl_estimator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_flight_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_flight_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_flight_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cmd_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cmd_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cmd_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_hdg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cmd_hdg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_hdg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cpu_load
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu_load);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu_load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cpu_load_total
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu_load_total);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu_load_total", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cpu_ghz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu_ghz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu_ghz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cpu_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // free_ram
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->free_ram);
    {
      int rc = PyObject_SetAttrString(_pymessage, "free_ram", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_ram
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_ram);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_ram", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // free_hdd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->free_hdd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "free_hdd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hw_api_hz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hw_api_hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_api_hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hw_api_color
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->hw_api_color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_api_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hw_api_battery_hz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hw_api_battery_hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_api_battery_hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hw_api_state_hz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hw_api_state_hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_api_state_hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hw_api_cmd_hz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hw_api_cmd_hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_api_cmd_hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hw_api_mode
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->hw_api_mode.data,
      strlen(ros_message->hw_api_mode.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_api_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hw_api_armed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hw_api_armed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_api_armed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hw_api_gnss_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hw_api_gnss_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_api_gnss_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hw_api_gnss_qual
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hw_api_gnss_qual);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_api_gnss_qual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_norm_hz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mag_norm_hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_norm_hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hw_api_gnss_fix_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hw_api_gnss_fix_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_api_gnss_fix_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hw_api_gnss_num_sats
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hw_api_gnss_num_sats);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_api_gnss_num_sats", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hw_api_gnss_pos_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hw_api_gnss_pos_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_api_gnss_pos_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hw_api_gnss_status_hz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hw_api_gnss_status_hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_api_gnss_status_hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_norm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mag_norm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_norm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_volt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_volt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_volt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_curr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_curr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_curr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_wh_drained
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_wh_drained);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_wh_drained", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thrust
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->thrust);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thrust", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mass_estimate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mass_estimate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mass_estimate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mass_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mass_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mass_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // custom_topics
    PyObject * field = NULL;
    size_t size = ros_message->custom_topics.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    mrs_msgs__msg__CustomTopic * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->custom_topics.data[i]);
      PyObject * pyitem = mrs_msgs__msg__custom_topic__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "custom_topics", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // custom_string_outputs
    PyObject * field = NULL;
    size_t size = ros_message->custom_string_outputs.size;
    rosidl_runtime_c__String * src = ros_message->custom_string_outputs.data;
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
      int rc = PyObject_SetAttrString(_pymessage, "custom_string_outputs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // node_cpu_loads
    PyObject * field = NULL;
    field = mrs_msgs__msg__node_cpu_load__convert_to_py(&ros_message->node_cpu_loads);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_cpu_loads", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flying_normally
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flying_normally ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flying_normally", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rc_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // have_goal
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->have_goal ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "have_goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tracking_trajectory
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tracking_trajectory ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracking_trajectory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // callbacks_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->callbacks_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "callbacks_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // collision_avoidance_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->collision_avoidance_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "collision_avoidance_enabled", field);
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
  {  // automatic_start_can_takeoff
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->automatic_start_can_takeoff ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "automatic_start_can_takeoff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_other_uavs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_other_uavs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_other_uavs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
