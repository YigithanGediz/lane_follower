// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from spark_msgs:msg/WaypointsList.idl
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
#include "rosidl_generator_c/visibility_control.h"
#include "spark_msgs/msg/waypoints_list__struct.h"
#include "spark_msgs/msg/waypoints_list__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool spark_msgs__msg__waypoints__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * spark_msgs__msg__waypoints__convert_to_py(void * raw_ros_message);
bool spark_msgs__msg__waypoints__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * spark_msgs__msg__waypoints__convert_to_py(void * raw_ros_message);
bool spark_msgs__msg__waypoints__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * spark_msgs__msg__waypoints__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool spark_msgs__msg__waypoints_list__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp(
        "spark_msgs.msg._waypoints_list.WaypointsList",
        full_classname_dest, 44) == 0);
  }
  spark_msgs__msg__WaypointsList * ros_message = _ros_message;
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
  {  // left
    PyObject * field = PyObject_GetAttrString(_pymsg, "left");
    if (!field) {
      return false;
    }
    if (!spark_msgs__msg__waypoints__convert_from_py(field, &ros_message->left)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // right
    PyObject * field = PyObject_GetAttrString(_pymsg, "right");
    if (!field) {
      return false;
    }
    if (!spark_msgs__msg__waypoints__convert_from_py(field, &ros_message->right)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // forward
    PyObject * field = PyObject_GetAttrString(_pymsg, "forward");
    if (!field) {
      return false;
    }
    if (!spark_msgs__msg__waypoints__convert_from_py(field, &ros_message->forward)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * spark_msgs__msg__waypoints_list__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WaypointsList */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("spark_msgs.msg._waypoints_list");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WaypointsList");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  spark_msgs__msg__WaypointsList * ros_message = (spark_msgs__msg__WaypointsList *)raw_ros_message;
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
  {  // left
    PyObject * field = NULL;
    field = spark_msgs__msg__waypoints__convert_to_py(&ros_message->left);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right
    PyObject * field = NULL;
    field = spark_msgs__msg__waypoints__convert_to_py(&ros_message->right);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // forward
    PyObject * field = NULL;
    field = spark_msgs__msg__waypoints__convert_to_py(&ros_message->forward);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "forward", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}