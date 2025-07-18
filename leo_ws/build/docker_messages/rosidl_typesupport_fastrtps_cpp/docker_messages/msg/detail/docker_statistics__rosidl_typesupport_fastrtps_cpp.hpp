// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from docker_messages:msg/DockerStatistics.idl
// generated code does not contain a copyright notice

#ifndef DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "docker_messages/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "docker_messages/msg/detail/docker_statistics__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace docker_messages
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_docker_messages
cdr_serialize(
  const docker_messages::msg::DockerStatistics & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_docker_messages
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  docker_messages::msg::DockerStatistics & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_docker_messages
get_serialized_size(
  const docker_messages::msg::DockerStatistics & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_docker_messages
max_serialized_size_DockerStatistics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace docker_messages

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_docker_messages
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, docker_messages, msg, DockerStatistics)();

#ifdef __cplusplus
}
#endif

#endif  // DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
