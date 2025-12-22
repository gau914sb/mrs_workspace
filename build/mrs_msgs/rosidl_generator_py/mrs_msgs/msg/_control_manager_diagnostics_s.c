// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrs_msgs:msg/ControlManagerDiagnostics.idl
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
#include "mrs_msgs/msg/detail/control_manager_diagnostics__struct.h"
#include "mrs_msgs/msg/detail/control_manager_diagnostics__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool mrs_msgs__msg__tracker_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mrs_msgs__msg__tracker_status__convert_to_py(void * raw_ros_message);
bool mrs_msgs__msg__controller_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mrs_msgs__msg__controller_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrs_msgs__msg__control_manager_diagnostics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("mrs_msgs.msg._control_manager_diagnostics.ControlManagerDiagnostics", full_classname_dest, 67) == 0);
  }
  mrs_msgs__msg__ControlManagerDiagnostics * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
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
  {  // output_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->output_enabled = (Py_True == field);
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
  {  // joystick_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "joystick_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->joystick_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bumper_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "bumper_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bumper_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // desired_uav_state_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "desired_uav_state_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->desired_uav_state_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // active_tracker
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_tracker");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->active_tracker, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // tracker_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracker_status");
    if (!field) {
      return false;
    }
    if (!mrs_msgs__msg__tracker_status__convert_from_py(field, &ros_message->tracker_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // active_controller
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_controller");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->active_controller, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // controller_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "controller_status");
    if (!field) {
      return false;
    }
    if (!mrs_msgs__msg__controller_status__convert_from_py(field, &ros_message->controller_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // available_controllers
    PyObject * field = PyObject_GetAttrString(_pymsg, "available_controllers");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'available_controllers'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->available_controllers), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->available_controllers.data;
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
  {  // available_trackers
    PyObject * field = PyObject_GetAttrString(_pymsg, "available_trackers");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'available_trackers'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->available_trackers), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->available_trackers.data;
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
  {  // human_switchable_controllers
    PyObject * field = PyObject_GetAttrString(_pymsg, "human_switchable_controllers");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(bool);
      if (!rosidl_runtime_c__boolean__Sequence__init(&(ros_message->human_switchable_controllers), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create boolean__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      bool * dest = ros_message->human_switchable_controllers.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'human_switchable_controllers'");
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
      if (!rosidl_runtime_c__boolean__Sequence__init(&(ros_message->human_switchable_controllers), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create boolean__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      bool * dest = ros_message->human_switchable_controllers.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // human_switchable_trackers
    PyObject * field = PyObject_GetAttrString(_pymsg, "human_switchable_trackers");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(bool);
      if (!rosidl_runtime_c__boolean__Sequence__init(&(ros_message->human_switchable_trackers), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create boolean__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      bool * dest = ros_message->human_switchable_trackers.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'human_switchable_trackers'");
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
      if (!rosidl_runtime_c__boolean__Sequence__init(&(ros_message->human_switchable_trackers), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create boolean__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      bool * dest = ros_message->human_switchable_trackers.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrs_msgs__msg__control_manager_diagnostics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlManagerDiagnostics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrs_msgs.msg._control_manager_diagnostics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlManagerDiagnostics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrs_msgs__msg__ControlManagerDiagnostics * ros_message = (mrs_msgs__msg__ControlManagerDiagnostics *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
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
  {  // output_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->output_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_enabled", field);
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
  {  // joystick_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->joystick_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joystick_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bumper_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bumper_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bumper_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // desired_uav_state_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->desired_uav_state_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "desired_uav_state_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_tracker
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->active_tracker.data,
      strlen(ros_message->active_tracker.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_tracker", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tracker_status
    PyObject * field = NULL;
    field = mrs_msgs__msg__tracker_status__convert_to_py(&ros_message->tracker_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracker_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_controller
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->active_controller.data,
      strlen(ros_message->active_controller.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_controller", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // controller_status
    PyObject * field = NULL;
    field = mrs_msgs__msg__controller_status__convert_to_py(&ros_message->controller_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "controller_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // available_controllers
    PyObject * field = NULL;
    size_t size = ros_message->available_controllers.size;
    rosidl_runtime_c__String * src = ros_message->available_controllers.data;
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
      int rc = PyObject_SetAttrString(_pymessage, "available_controllers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // available_trackers
    PyObject * field = NULL;
    size_t size = ros_message->available_trackers.size;
    rosidl_runtime_c__String * src = ros_message->available_trackers.data;
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
      int rc = PyObject_SetAttrString(_pymessage, "available_trackers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // human_switchable_controllers
    PyObject * field = NULL;
    size_t size = ros_message->human_switchable_controllers.size;
    bool * src = ros_message->human_switchable_controllers.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "human_switchable_controllers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // human_switchable_trackers
    PyObject * field = NULL;
    size_t size = ros_message->human_switchable_trackers.size;
    bool * src = ros_message->human_switchable_trackers.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "human_switchable_trackers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
