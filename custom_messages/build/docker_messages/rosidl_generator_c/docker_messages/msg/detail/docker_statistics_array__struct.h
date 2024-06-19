// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from docker_messages:msg/DockerStatisticsArray.idl
// generated code does not contain a copyright notice

#ifndef DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS_ARRAY__STRUCT_H_
#define DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'docker_statistics'
#include "docker_messages/msg/detail/docker_statistics__struct.h"

/// Struct defined in msg/DockerStatisticsArray in the package docker_messages.
typedef struct docker_messages__msg__DockerStatisticsArray
{
  docker_messages__msg__DockerStatistics__Sequence docker_statistics;
} docker_messages__msg__DockerStatisticsArray;

// Struct for a sequence of docker_messages__msg__DockerStatisticsArray.
typedef struct docker_messages__msg__DockerStatisticsArray__Sequence
{
  docker_messages__msg__DockerStatisticsArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} docker_messages__msg__DockerStatisticsArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS_ARRAY__STRUCT_H_
