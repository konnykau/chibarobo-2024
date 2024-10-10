// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robomas_plugins:msg/RobomasFrame.idl
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
#include "robomas_plugins/msg/detail/robomas_frame__struct.h"
#include "robomas_plugins/msg/detail/robomas_frame__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool robomas_plugins__msg__robomas_frame__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("robomas_plugins.msg._robomas_frame.RobomasFrame", full_classname_dest, 47) == 0);
  }
  robomas_plugins__msg__RobomasFrame * ros_message = _ros_message;
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
  {  // motor
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // c620
    PyObject * field = PyObject_GetAttrString(_pymsg, "c620");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->c620 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // velkp
    PyObject * field = PyObject_GetAttrString(_pymsg, "velkp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velkp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velki
    PyObject * field = PyObject_GetAttrString(_pymsg, "velki");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velki = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // poskp
    PyObject * field = PyObject_GetAttrString(_pymsg, "poskp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->poskp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tyoku_vel_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "tyoku_vel_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tyoku_vel_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tyoku_pos_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "tyoku_pos_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tyoku_pos_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stable_pos_limit_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "stable_pos_limit_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stable_pos_limit_vel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robomas_plugins__msg__robomas_frame__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobomasFrame */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robomas_plugins.msg._robomas_frame");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobomasFrame");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robomas_plugins__msg__RobomasFrame * ros_message = (robomas_plugins__msg__RobomasFrame *)raw_ros_message;
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
  {  // motor
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // c620
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->c620 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c620", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velkp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velkp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velkp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velki
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velki);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velki", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // poskp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->poskp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "poskp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tyoku_vel_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tyoku_vel_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tyoku_vel_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tyoku_pos_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tyoku_pos_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tyoku_pos_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stable_pos_limit_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stable_pos_limit_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stable_pos_limit_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
