// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from docker_messages:msg/DockerStatistics.idl
// generated code does not contain a copyright notice

#ifndef DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS__FUNCTIONS_H_
#define DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "docker_messages/msg/rosidl_generator_c__visibility_control.h"

#include "docker_messages/msg/detail/docker_statistics__struct.h"

/// Initialize msg/DockerStatistics message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * docker_messages__msg__DockerStatistics
 * )) before or use
 * docker_messages__msg__DockerStatistics__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
bool
docker_messages__msg__DockerStatistics__init(docker_messages__msg__DockerStatistics * msg);

/// Finalize msg/DockerStatistics message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
void
docker_messages__msg__DockerStatistics__fini(docker_messages__msg__DockerStatistics * msg);

/// Create msg/DockerStatistics message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * docker_messages__msg__DockerStatistics__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
docker_messages__msg__DockerStatistics *
docker_messages__msg__DockerStatistics__create();

/// Destroy msg/DockerStatistics message.
/**
 * It calls
 * docker_messages__msg__DockerStatistics__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
void
docker_messages__msg__DockerStatistics__destroy(docker_messages__msg__DockerStatistics * msg);

/// Check for msg/DockerStatistics message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
bool
docker_messages__msg__DockerStatistics__are_equal(const docker_messages__msg__DockerStatistics * lhs, const docker_messages__msg__DockerStatistics * rhs);

/// Copy a msg/DockerStatistics message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
bool
docker_messages__msg__DockerStatistics__copy(
  const docker_messages__msg__DockerStatistics * input,
  docker_messages__msg__DockerStatistics * output);

/// Initialize array of msg/DockerStatistics messages.
/**
 * It allocates the memory for the number of elements and calls
 * docker_messages__msg__DockerStatistics__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
bool
docker_messages__msg__DockerStatistics__Sequence__init(docker_messages__msg__DockerStatistics__Sequence * array, size_t size);

/// Finalize array of msg/DockerStatistics messages.
/**
 * It calls
 * docker_messages__msg__DockerStatistics__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
void
docker_messages__msg__DockerStatistics__Sequence__fini(docker_messages__msg__DockerStatistics__Sequence * array);

/// Create array of msg/DockerStatistics messages.
/**
 * It allocates the memory for the array and calls
 * docker_messages__msg__DockerStatistics__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
docker_messages__msg__DockerStatistics__Sequence *
docker_messages__msg__DockerStatistics__Sequence__create(size_t size);

/// Destroy array of msg/DockerStatistics messages.
/**
 * It calls
 * docker_messages__msg__DockerStatistics__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
void
docker_messages__msg__DockerStatistics__Sequence__destroy(docker_messages__msg__DockerStatistics__Sequence * array);

/// Check for msg/DockerStatistics message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
bool
docker_messages__msg__DockerStatistics__Sequence__are_equal(const docker_messages__msg__DockerStatistics__Sequence * lhs, const docker_messages__msg__DockerStatistics__Sequence * rhs);

/// Copy an array of msg/DockerStatistics messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
bool
docker_messages__msg__DockerStatistics__Sequence__copy(
  const docker_messages__msg__DockerStatistics__Sequence * input,
  docker_messages__msg__DockerStatistics__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS__FUNCTIONS_H_
