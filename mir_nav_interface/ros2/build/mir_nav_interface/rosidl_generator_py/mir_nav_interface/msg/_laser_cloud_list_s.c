// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mir_nav_interface:msg/LaserCloudList.idl
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
#include "mir_nav_interface/msg/detail/laser_cloud_list__struct.h"
#include "mir_nav_interface/msg/detail/laser_cloud_list__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "mir_nav_interface/msg/detail/laser_cloud__functions.h"
// end nested array functions include
bool mir_nav_interface__msg__laser_cloud__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mir_nav_interface__msg__laser_cloud__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mir_nav_interface__msg__laser_cloud_list__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("mir_nav_interface.msg._laser_cloud_list.LaserCloudList", full_classname_dest, 54) == 0);
  }
  mir_nav_interface__msg__LaserCloudList * ros_message = _ros_message;
  {  // clouds
    PyObject * field = PyObject_GetAttrString(_pymsg, "clouds");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'clouds'");
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
    if (!mir_nav_interface__msg__LaserCloud__Sequence__init(&(ros_message->clouds), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create mir_nav_interface__msg__LaserCloud__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    mir_nav_interface__msg__LaserCloud * dest = ros_message->clouds.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!mir_nav_interface__msg__laser_cloud__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * mir_nav_interface__msg__laser_cloud_list__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaserCloudList */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mir_nav_interface.msg._laser_cloud_list");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaserCloudList");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mir_nav_interface__msg__LaserCloudList * ros_message = (mir_nav_interface__msg__LaserCloudList *)raw_ros_message;
  {  // clouds
    PyObject * field = NULL;
    size_t size = ros_message->clouds.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    mir_nav_interface__msg__LaserCloud * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->clouds.data[i]);
      PyObject * pyitem = mir_nav_interface__msg__laser_cloud__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "clouds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
