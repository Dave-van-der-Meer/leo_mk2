// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from docker_messages:msg/DockerStatisticsArray.idl
// generated code does not contain a copyright notice
#include "docker_messages/msg/detail/docker_statistics_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `docker_statistics`
#include "docker_messages/msg/detail/docker_statistics__functions.h"

bool
docker_messages__msg__DockerStatisticsArray__init(docker_messages__msg__DockerStatisticsArray * msg)
{
  if (!msg) {
    return false;
  }
  // docker_statistics
  if (!docker_messages__msg__DockerStatistics__Sequence__init(&msg->docker_statistics, 0)) {
    docker_messages__msg__DockerStatisticsArray__fini(msg);
    return false;
  }
  return true;
}

void
docker_messages__msg__DockerStatisticsArray__fini(docker_messages__msg__DockerStatisticsArray * msg)
{
  if (!msg) {
    return;
  }
  // docker_statistics
  docker_messages__msg__DockerStatistics__Sequence__fini(&msg->docker_statistics);
}

bool
docker_messages__msg__DockerStatisticsArray__are_equal(const docker_messages__msg__DockerStatisticsArray * lhs, const docker_messages__msg__DockerStatisticsArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // docker_statistics
  if (!docker_messages__msg__DockerStatistics__Sequence__are_equal(
      &(lhs->docker_statistics), &(rhs->docker_statistics)))
  {
    return false;
  }
  return true;
}

bool
docker_messages__msg__DockerStatisticsArray__copy(
  const docker_messages__msg__DockerStatisticsArray * input,
  docker_messages__msg__DockerStatisticsArray * output)
{
  if (!input || !output) {
    return false;
  }
  // docker_statistics
  if (!docker_messages__msg__DockerStatistics__Sequence__copy(
      &(input->docker_statistics), &(output->docker_statistics)))
  {
    return false;
  }
  return true;
}

docker_messages__msg__DockerStatisticsArray *
docker_messages__msg__DockerStatisticsArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  docker_messages__msg__DockerStatisticsArray * msg = (docker_messages__msg__DockerStatisticsArray *)allocator.allocate(sizeof(docker_messages__msg__DockerStatisticsArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(docker_messages__msg__DockerStatisticsArray));
  bool success = docker_messages__msg__DockerStatisticsArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
docker_messages__msg__DockerStatisticsArray__destroy(docker_messages__msg__DockerStatisticsArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    docker_messages__msg__DockerStatisticsArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
docker_messages__msg__DockerStatisticsArray__Sequence__init(docker_messages__msg__DockerStatisticsArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  docker_messages__msg__DockerStatisticsArray * data = NULL;

  if (size) {
    data = (docker_messages__msg__DockerStatisticsArray *)allocator.zero_allocate(size, sizeof(docker_messages__msg__DockerStatisticsArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = docker_messages__msg__DockerStatisticsArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        docker_messages__msg__DockerStatisticsArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
docker_messages__msg__DockerStatisticsArray__Sequence__fini(docker_messages__msg__DockerStatisticsArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      docker_messages__msg__DockerStatisticsArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

docker_messages__msg__DockerStatisticsArray__Sequence *
docker_messages__msg__DockerStatisticsArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  docker_messages__msg__DockerStatisticsArray__Sequence * array = (docker_messages__msg__DockerStatisticsArray__Sequence *)allocator.allocate(sizeof(docker_messages__msg__DockerStatisticsArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = docker_messages__msg__DockerStatisticsArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
docker_messages__msg__DockerStatisticsArray__Sequence__destroy(docker_messages__msg__DockerStatisticsArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    docker_messages__msg__DockerStatisticsArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
docker_messages__msg__DockerStatisticsArray__Sequence__are_equal(const docker_messages__msg__DockerStatisticsArray__Sequence * lhs, const docker_messages__msg__DockerStatisticsArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!docker_messages__msg__DockerStatisticsArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
docker_messages__msg__DockerStatisticsArray__Sequence__copy(
  const docker_messages__msg__DockerStatisticsArray__Sequence * input,
  docker_messages__msg__DockerStatisticsArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(docker_messages__msg__DockerStatisticsArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    docker_messages__msg__DockerStatisticsArray * data =
      (docker_messages__msg__DockerStatisticsArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!docker_messages__msg__DockerStatisticsArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          docker_messages__msg__DockerStatisticsArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!docker_messages__msg__DockerStatisticsArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
