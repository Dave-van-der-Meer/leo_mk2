// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from docker_messages:msg/DockerStatisticsArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "docker_messages/msg/detail/docker_statistics_array__rosidl_typesupport_introspection_c.h"
#include "docker_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "docker_messages/msg/detail/docker_statistics_array__functions.h"
#include "docker_messages/msg/detail/docker_statistics_array__struct.h"


// Include directives for member types
// Member `docker_statistics`
#include "docker_messages/msg/docker_statistics.h"
// Member `docker_statistics`
#include "docker_messages/msg/detail/docker_statistics__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__DockerStatisticsArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  docker_messages__msg__DockerStatisticsArray__init(message_memory);
}

void docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__DockerStatisticsArray_fini_function(void * message_memory)
{
  docker_messages__msg__DockerStatisticsArray__fini(message_memory);
}

size_t docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__size_function__DockerStatisticsArray__docker_statistics(
  const void * untyped_member)
{
  const docker_messages__msg__DockerStatistics__Sequence * member =
    (const docker_messages__msg__DockerStatistics__Sequence *)(untyped_member);
  return member->size;
}

const void * docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__get_const_function__DockerStatisticsArray__docker_statistics(
  const void * untyped_member, size_t index)
{
  const docker_messages__msg__DockerStatistics__Sequence * member =
    (const docker_messages__msg__DockerStatistics__Sequence *)(untyped_member);
  return &member->data[index];
}

void * docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__get_function__DockerStatisticsArray__docker_statistics(
  void * untyped_member, size_t index)
{
  docker_messages__msg__DockerStatistics__Sequence * member =
    (docker_messages__msg__DockerStatistics__Sequence *)(untyped_member);
  return &member->data[index];
}

void docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__fetch_function__DockerStatisticsArray__docker_statistics(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const docker_messages__msg__DockerStatistics * item =
    ((const docker_messages__msg__DockerStatistics *)
    docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__get_const_function__DockerStatisticsArray__docker_statistics(untyped_member, index));
  docker_messages__msg__DockerStatistics * value =
    (docker_messages__msg__DockerStatistics *)(untyped_value);
  *value = *item;
}

void docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__assign_function__DockerStatisticsArray__docker_statistics(
  void * untyped_member, size_t index, const void * untyped_value)
{
  docker_messages__msg__DockerStatistics * item =
    ((docker_messages__msg__DockerStatistics *)
    docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__get_function__DockerStatisticsArray__docker_statistics(untyped_member, index));
  const docker_messages__msg__DockerStatistics * value =
    (const docker_messages__msg__DockerStatistics *)(untyped_value);
  *item = *value;
}

bool docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__resize_function__DockerStatisticsArray__docker_statistics(
  void * untyped_member, size_t size)
{
  docker_messages__msg__DockerStatistics__Sequence * member =
    (docker_messages__msg__DockerStatistics__Sequence *)(untyped_member);
  docker_messages__msg__DockerStatistics__Sequence__fini(member);
  return docker_messages__msg__DockerStatistics__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__DockerStatisticsArray_message_member_array[1] = {
  {
    "docker_statistics",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(docker_messages__msg__DockerStatisticsArray, docker_statistics),  // bytes offset in struct
    NULL,  // default value
    docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__size_function__DockerStatisticsArray__docker_statistics,  // size() function pointer
    docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__get_const_function__DockerStatisticsArray__docker_statistics,  // get_const(index) function pointer
    docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__get_function__DockerStatisticsArray__docker_statistics,  // get(index) function pointer
    docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__fetch_function__DockerStatisticsArray__docker_statistics,  // fetch(index, &value) function pointer
    docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__assign_function__DockerStatisticsArray__docker_statistics,  // assign(index, value) function pointer
    docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__resize_function__DockerStatisticsArray__docker_statistics  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__DockerStatisticsArray_message_members = {
  "docker_messages__msg",  // message namespace
  "DockerStatisticsArray",  // message name
  1,  // number of fields
  sizeof(docker_messages__msg__DockerStatisticsArray),
  docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__DockerStatisticsArray_message_member_array,  // message members
  docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__DockerStatisticsArray_init_function,  // function to initialize message memory (memory has to be allocated)
  docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__DockerStatisticsArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__DockerStatisticsArray_message_type_support_handle = {
  0,
  &docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__DockerStatisticsArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_docker_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, docker_messages, msg, DockerStatisticsArray)() {
  docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__DockerStatisticsArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, docker_messages, msg, DockerStatistics)();
  if (!docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__DockerStatisticsArray_message_type_support_handle.typesupport_identifier) {
    docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__DockerStatisticsArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &docker_messages__msg__DockerStatisticsArray__rosidl_typesupport_introspection_c__DockerStatisticsArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
