// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from docker_messages:msg/DockerStatistics.idl
// generated code does not contain a copyright notice

#ifndef DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS__BUILDER_HPP_
#define DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "docker_messages/msg/detail/docker_statistics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace docker_messages
{

namespace msg
{

namespace builder
{

class Init_DockerStatistics_block_o
{
public:
  explicit Init_DockerStatistics_block_o(::docker_messages::msg::DockerStatistics & msg)
  : msg_(msg)
  {}
  ::docker_messages::msg::DockerStatistics block_o(::docker_messages::msg::DockerStatistics::_block_o_type arg)
  {
    msg_.block_o = std::move(arg);
    return std::move(msg_);
  }

private:
  ::docker_messages::msg::DockerStatistics msg_;
};

class Init_DockerStatistics_block_i
{
public:
  explicit Init_DockerStatistics_block_i(::docker_messages::msg::DockerStatistics & msg)
  : msg_(msg)
  {}
  Init_DockerStatistics_block_o block_i(::docker_messages::msg::DockerStatistics::_block_i_type arg)
  {
    msg_.block_i = std::move(arg);
    return Init_DockerStatistics_block_o(msg_);
  }

private:
  ::docker_messages::msg::DockerStatistics msg_;
};

class Init_DockerStatistics_net_o
{
public:
  explicit Init_DockerStatistics_net_o(::docker_messages::msg::DockerStatistics & msg)
  : msg_(msg)
  {}
  Init_DockerStatistics_block_i net_o(::docker_messages::msg::DockerStatistics::_net_o_type arg)
  {
    msg_.net_o = std::move(arg);
    return Init_DockerStatistics_block_i(msg_);
  }

private:
  ::docker_messages::msg::DockerStatistics msg_;
};

class Init_DockerStatistics_net_i
{
public:
  explicit Init_DockerStatistics_net_i(::docker_messages::msg::DockerStatistics & msg)
  : msg_(msg)
  {}
  Init_DockerStatistics_net_o net_i(::docker_messages::msg::DockerStatistics::_net_i_type arg)
  {
    msg_.net_i = std::move(arg);
    return Init_DockerStatistics_net_o(msg_);
  }

private:
  ::docker_messages::msg::DockerStatistics msg_;
};

class Init_DockerStatistics_ram
{
public:
  explicit Init_DockerStatistics_ram(::docker_messages::msg::DockerStatistics & msg)
  : msg_(msg)
  {}
  Init_DockerStatistics_net_i ram(::docker_messages::msg::DockerStatistics::_ram_type arg)
  {
    msg_.ram = std::move(arg);
    return Init_DockerStatistics_net_i(msg_);
  }

private:
  ::docker_messages::msg::DockerStatistics msg_;
};

class Init_DockerStatistics_cpu
{
public:
  explicit Init_DockerStatistics_cpu(::docker_messages::msg::DockerStatistics & msg)
  : msg_(msg)
  {}
  Init_DockerStatistics_ram cpu(::docker_messages::msg::DockerStatistics::_cpu_type arg)
  {
    msg_.cpu = std::move(arg);
    return Init_DockerStatistics_ram(msg_);
  }

private:
  ::docker_messages::msg::DockerStatistics msg_;
};

class Init_DockerStatistics_name
{
public:
  explicit Init_DockerStatistics_name(::docker_messages::msg::DockerStatistics & msg)
  : msg_(msg)
  {}
  Init_DockerStatistics_cpu name(::docker_messages::msg::DockerStatistics::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_DockerStatistics_cpu(msg_);
  }

private:
  ::docker_messages::msg::DockerStatistics msg_;
};

class Init_DockerStatistics_id
{
public:
  explicit Init_DockerStatistics_id(::docker_messages::msg::DockerStatistics & msg)
  : msg_(msg)
  {}
  Init_DockerStatistics_name id(::docker_messages::msg::DockerStatistics::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_DockerStatistics_name(msg_);
  }

private:
  ::docker_messages::msg::DockerStatistics msg_;
};

class Init_DockerStatistics_header
{
public:
  Init_DockerStatistics_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockerStatistics_id header(::docker_messages::msg::DockerStatistics::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DockerStatistics_id(msg_);
  }

private:
  ::docker_messages::msg::DockerStatistics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::docker_messages::msg::DockerStatistics>()
{
  return docker_messages::msg::builder::Init_DockerStatistics_header();
}

}  // namespace docker_messages

#endif  // DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS__BUILDER_HPP_
