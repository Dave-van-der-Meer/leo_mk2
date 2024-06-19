// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from docker_messages:msg/DockerStatisticsArray.idl
// generated code does not contain a copyright notice

#ifndef DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS_ARRAY__FUNCTIONS_H_
#define DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "docker_messages/msg/rosidl_generator_c__visibility_control.h"

#include "docker_messages/msg/detail/docker_statistics_array__struct.h"

/// Initialize msg/DockerStatisticsArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * docker_messages__msg__DockerStatisticsArray
 * )) before or use
 * docker_messages__msg__DockerStatisticsArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
bool
docker_messages__msg__DockerStatisticsArray__init(docker_messages__msg__DockerStatisticsArray * msg);

/// Finalize msg/DockerStatisticsArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
void
docker_messages__msg__DockerStatisticsArray__fini(docker_messages__msg__DockerStatisticsArray * msg);

/// Create msg/DockerStatisticsArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * docker_messages__msg__DockerStatisticsArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
docker_messages__msg__DockerStatisticsArray *
docker_messages__msg__DockerStatisticsArray__create();

/// Destroy msg/DockerStatisticsArray message.
/**
 * It calls
 * docker_messages__msg__DockerStatisticsArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
void
docker_messages__msg__DockerStatisticsArray__destroy(docker_messages__msg__DockerStatisticsArray * msg);

/// Check for msg/DockerStatisticsArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
bool
docker_messages__msg__DockerStatisticsArray__are_equal(const docker_messages__msg__DockerStatisticsArray * lhs, const docker_messages__msg__DockerStatisticsArray * rhs);

/// Copy a msg/DockerStatisticsArray message.
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
docker_messages__msg__DockerStatisticsArray__copy(
  const docker_messages__msg__DockerStatisticsArray * input,
  docker_messages__msg__DockerStatisticsArray * output);

/// Initialize array of msg/DockerStatisticsArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * docker_messages__msg__DockerStatisticsArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
bool
docker_messages__msg__DockerStatisticsArray__Sequence__init(docker_messages__msg__DockerStatisticsArray__Sequence * array, size_t size);

/// Finalize array of msg/DockerStatisticsArray messages.
/**
 * It calls
 * docker_messages__msg__DockerStatisticsArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
void
docker_messages__msg__DockerStatisticsArray__Sequence__fini(docker_messages__msg__DockerStatisticsArray__Sequence * array);

/// Create array of msg/DockerStatisticsArray messages.
/**
 * It allocates the memory for the array and calls
 * docker_messages__msg__DockerStatisticsArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
docker_messages__msg__DockerStatisticsArray__Sequence *
docker_messages__msg__DockerStatisticsArray__Sequence__create(size_t size);

/// Destroy array of msg/DockerStatisticsArray messages.
/**
 * It calls
 * docker_messages__msg__DockerStatisticsArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
void
docker_messages__msg__DockerStatisticsArray__Sequence__destroy(docker_messages__msg__DockerStatisticsArray__Sequence * array);

/// Check for msg/DockerStatisticsArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_docker_messages
bool
docker_messages__msg__DockerStatisticsArray__Sequence__are_equal(const docker_messages__msg__DockerStatisticsArray__Sequence * lhs, const docker_messages__msg__DockerStatisticsArray__Sequence * rhs);

/// Copy an array of msg/DockerStatisticsArray messages.
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
docker_messages__msg__DockerStatisticsArray__Sequence__copy(
  const docker_messages__msg__DockerStatisticsArray__Sequence * input,
  docker_messages__msg__DockerStatisticsArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS_ARRAY__FUNCTIONS_H_
