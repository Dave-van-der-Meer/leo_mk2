// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from docker_messages:msg/DockerStatisticsArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "docker_messages/msg/detail/docker_statistics_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace docker_messages
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DockerStatisticsArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) docker_messages::msg::DockerStatisticsArray(_init);
}

void DockerStatisticsArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<docker_messages::msg::DockerStatisticsArray *>(message_memory);
  typed_message->~DockerStatisticsArray();
}

size_t size_function__DockerStatisticsArray__docker_statistics(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<docker_messages::msg::DockerStatistics> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DockerStatisticsArray__docker_statistics(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<docker_messages::msg::DockerStatistics> *>(untyped_member);
  return &member[index];
}

void * get_function__DockerStatisticsArray__docker_statistics(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<docker_messages::msg::DockerStatistics> *>(untyped_member);
  return &member[index];
}

void fetch_function__DockerStatisticsArray__docker_statistics(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const docker_messages::msg::DockerStatistics *>(
    get_const_function__DockerStatisticsArray__docker_statistics(untyped_member, index));
  auto & value = *reinterpret_cast<docker_messages::msg::DockerStatistics *>(untyped_value);
  value = item;
}

void assign_function__DockerStatisticsArray__docker_statistics(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<docker_messages::msg::DockerStatistics *>(
    get_function__DockerStatisticsArray__docker_statistics(untyped_member, index));
  const auto & value = *reinterpret_cast<const docker_messages::msg::DockerStatistics *>(untyped_value);
  item = value;
}

void resize_function__DockerStatisticsArray__docker_statistics(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<docker_messages::msg::DockerStatistics> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DockerStatisticsArray_message_member_array[1] = {
  {
    "docker_statistics",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<docker_messages::msg::DockerStatistics>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(docker_messages::msg::DockerStatisticsArray, docker_statistics),  // bytes offset in struct
    nullptr,  // default value
    size_function__DockerStatisticsArray__docker_statistics,  // size() function pointer
    get_const_function__DockerStatisticsArray__docker_statistics,  // get_const(index) function pointer
    get_function__DockerStatisticsArray__docker_statistics,  // get(index) function pointer
    fetch_function__DockerStatisticsArray__docker_statistics,  // fetch(index, &value) function pointer
    assign_function__DockerStatisticsArray__docker_statistics,  // assign(index, value) function pointer
    resize_function__DockerStatisticsArray__docker_statistics  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DockerStatisticsArray_message_members = {
  "docker_messages::msg",  // message namespace
  "DockerStatisticsArray",  // message name
  1,  // number of fields
  sizeof(docker_messages::msg::DockerStatisticsArray),
  DockerStatisticsArray_message_member_array,  // message members
  DockerStatisticsArray_init_function,  // function to initialize message memory (memory has to be allocated)
  DockerStatisticsArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DockerStatisticsArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DockerStatisticsArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace docker_messages


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<docker_messages::msg::DockerStatisticsArray>()
{
  return &::docker_messages::msg::rosidl_typesupport_introspection_cpp::DockerStatisticsArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, docker_messages, msg, DockerStatisticsArray)() {
  return &::docker_messages::msg::rosidl_typesupport_introspection_cpp::DockerStatisticsArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
