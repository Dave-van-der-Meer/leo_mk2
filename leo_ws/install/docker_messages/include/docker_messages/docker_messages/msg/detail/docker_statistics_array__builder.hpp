// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from docker_messages:msg/DockerStatisticsArray.idl
// generated code does not contain a copyright notice

#ifndef DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS_ARRAY__BUILDER_HPP_
#define DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "docker_messages/msg/detail/docker_statistics_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace docker_messages
{

namespace msg
{

namespace builder
{

class Init_DockerStatisticsArray_docker_statistics
{
public:
  Init_DockerStatisticsArray_docker_statistics()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::docker_messages::msg::DockerStatisticsArray docker_statistics(::docker_messages::msg::DockerStatisticsArray::_docker_statistics_type arg)
  {
    msg_.docker_statistics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::docker_messages::msg::DockerStatisticsArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::docker_messages::msg::DockerStatisticsArray>()
{
  return docker_messages::msg::builder::Init_DockerStatisticsArray_docker_statistics();
}

}  // namespace docker_messages

#endif  // DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS_ARRAY__BUILDER_HPP_
