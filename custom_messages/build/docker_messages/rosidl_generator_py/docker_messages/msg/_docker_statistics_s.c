// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from docker_messages:msg/DockerStatistics.idl
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
#include "docker_messages/msg/detail/docker_statistics__struct.h"
#include "docker_messages/msg/detail/docker_statistics__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool docker_messages__msg__docker_statistics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("docker_messages.msg._docker_statistics.DockerStatistics", full_classname_dest, 55) == 0);
  }
  docker_messages__msg__DockerStatistics * ros_message = _ros_message;
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
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // cpu
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ram
    PyObject * field = PyObject_GetAttrString(_pymsg, "ram");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ram = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // net_i
    PyObject * field = PyObject_GetAttrString(_pymsg, "net_i");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->net_i = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // net_o
    PyObject * field = PyObject_GetAttrString(_pymsg, "net_o");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->net_o = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // block_i
    PyObject * field = PyObject_GetAttrString(_pymsg, "block_i");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->block_i = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // block_o
    PyObject * field = PyObject_GetAttrString(_pymsg, "block_o");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->block_o = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * docker_messages__msg__docker_statistics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DockerStatistics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("docker_messages.msg._docker_statistics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DockerStatistics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  docker_messages__msg__DockerStatistics * ros_message = (docker_messages__msg__DockerStatistics *)raw_ros_message;
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
  {  // id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->id.data,
      strlen(ros_message->id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cpu
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ram
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ram);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ram", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // net_i
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->net_i);
    {
      int rc = PyObject_SetAttrString(_pymessage, "net_i", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // net_o
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->net_o);
    {
      int rc = PyObject_SetAttrString(_pymessage, "net_o", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // block_i
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->block_i);
    {
      int rc = PyObject_SetAttrString(_pymessage, "block_i", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // block_o
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->block_o);
    {
      int rc = PyObject_SetAttrString(_pymessage, "block_o", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
