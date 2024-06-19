// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from docker_messages:msg/DockerStatistics.idl
// generated code does not contain a copyright notice
#include "docker_messages/msg/detail/docker_statistics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `id`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
docker_messages__msg__DockerStatistics__init(docker_messages__msg__DockerStatistics * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    docker_messages__msg__DockerStatistics__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    docker_messages__msg__DockerStatistics__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    docker_messages__msg__DockerStatistics__fini(msg);
    return false;
  }
  // cpu
  // ram
  // net_i
  // net_o
  // block_i
  // block_o
  return true;
}

void
docker_messages__msg__DockerStatistics__fini(docker_messages__msg__DockerStatistics * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // cpu
  // ram
  // net_i
  // net_o
  // block_i
  // block_o
}

bool
docker_messages__msg__DockerStatistics__are_equal(const docker_messages__msg__DockerStatistics * lhs, const docker_messages__msg__DockerStatistics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // cpu
  if (lhs->cpu != rhs->cpu) {
    return false;
  }
  // ram
  if (lhs->ram != rhs->ram) {
    return false;
  }
  // net_i
  if (lhs->net_i != rhs->net_i) {
    return false;
  }
  // net_o
  if (lhs->net_o != rhs->net_o) {
    return false;
  }
  // block_i
  if (lhs->block_i != rhs->block_i) {
    return false;
  }
  // block_o
  if (lhs->block_o != rhs->block_o) {
    return false;
  }
  return true;
}

bool
docker_messages__msg__DockerStatistics__copy(
  const docker_messages__msg__DockerStatistics * input,
  docker_messages__msg__DockerStatistics * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // cpu
  output->cpu = input->cpu;
  // ram
  output->ram = input->ram;
  // net_i
  output->net_i = input->net_i;
  // net_o
  output->net_o = input->net_o;
  // block_i
  output->block_i = input->block_i;
  // block_o
  output->block_o = input->block_o;
  return true;
}

docker_messages__msg__DockerStatistics *
docker_messages__msg__DockerStatistics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  docker_messages__msg__DockerStatistics * msg = (docker_messages__msg__DockerStatistics *)allocator.allocate(sizeof(docker_messages__msg__DockerStatistics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(docker_messages__msg__DockerStatistics));
  bool success = docker_messages__msg__DockerStatistics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
docker_messages__msg__DockerStatistics__destroy(docker_messages__msg__DockerStatistics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    docker_messages__msg__DockerStatistics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
docker_messages__msg__DockerStatistics__Sequence__init(docker_messages__msg__DockerStatistics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  docker_messages__msg__DockerStatistics * data = NULL;

  if (size) {
    data = (docker_messages__msg__DockerStatistics *)allocator.zero_allocate(size, sizeof(docker_messages__msg__DockerStatistics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = docker_messages__msg__DockerStatistics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        docker_messages__msg__DockerStatistics__fini(&data[i - 1]);
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
docker_messages__msg__DockerStatistics__Sequence__fini(docker_messages__msg__DockerStatistics__Sequence * array)
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
      docker_messages__msg__DockerStatistics__fini(&array->data[i]);
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

docker_messages__msg__DockerStatistics__Sequence *
docker_messages__msg__DockerStatistics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  docker_messages__msg__DockerStatistics__Sequence * array = (docker_messages__msg__DockerStatistics__Sequence *)allocator.allocate(sizeof(docker_messages__msg__DockerStatistics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = docker_messages__msg__DockerStatistics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
docker_messages__msg__DockerStatistics__Sequence__destroy(docker_messages__msg__DockerStatistics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    docker_messages__msg__DockerStatistics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
docker_messages__msg__DockerStatistics__Sequence__are_equal(const docker_messages__msg__DockerStatistics__Sequence * lhs, const docker_messages__msg__DockerStatistics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!docker_messages__msg__DockerStatistics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
docker_messages__msg__DockerStatistics__Sequence__copy(
  const docker_messages__msg__DockerStatistics__Sequence * input,
  docker_messages__msg__DockerStatistics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(docker_messages__msg__DockerStatistics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    docker_messages__msg__DockerStatistics * data =
      (docker_messages__msg__DockerStatistics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!docker_messages__msg__DockerStatistics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          docker_messages__msg__DockerStatistics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!docker_messages__msg__DockerStatistics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
