// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from docker_messages:msg/DockerStatistics.idl
// generated code does not contain a copyright notice

#ifndef DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS__STRUCT_H_
#define DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'id'
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DockerStatistics in the package docker_messages.
typedef struct docker_messages__msg__DockerStatistics
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String name;
  float cpu;
  float ram;
  float net_i;
  float net_o;
  float block_i;
  float block_o;
} docker_messages__msg__DockerStatistics;

// Struct for a sequence of docker_messages__msg__DockerStatistics.
typedef struct docker_messages__msg__DockerStatistics__Sequence
{
  docker_messages__msg__DockerStatistics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} docker_messages__msg__DockerStatistics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS__STRUCT_H_
