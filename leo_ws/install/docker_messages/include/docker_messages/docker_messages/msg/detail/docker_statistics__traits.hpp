// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from docker_messages:msg/DockerStatistics.idl
// generated code does not contain a copyright notice

#ifndef DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS__TRAITS_HPP_
#define DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "docker_messages/msg/detail/docker_statistics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace docker_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const DockerStatistics & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: cpu
  {
    out << "cpu: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu, out);
    out << ", ";
  }

  // member: ram
  {
    out << "ram: ";
    rosidl_generator_traits::value_to_yaml(msg.ram, out);
    out << ", ";
  }

  // member: net_i
  {
    out << "net_i: ";
    rosidl_generator_traits::value_to_yaml(msg.net_i, out);
    out << ", ";
  }

  // member: net_o
  {
    out << "net_o: ";
    rosidl_generator_traits::value_to_yaml(msg.net_o, out);
    out << ", ";
  }

  // member: block_i
  {
    out << "block_i: ";
    rosidl_generator_traits::value_to_yaml(msg.block_i, out);
    out << ", ";
  }

  // member: block_o
  {
    out << "block_o: ";
    rosidl_generator_traits::value_to_yaml(msg.block_o, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DockerStatistics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: cpu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu, out);
    out << "\n";
  }

  // member: ram
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ram: ";
    rosidl_generator_traits::value_to_yaml(msg.ram, out);
    out << "\n";
  }

  // member: net_i
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "net_i: ";
    rosidl_generator_traits::value_to_yaml(msg.net_i, out);
    out << "\n";
  }

  // member: net_o
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "net_o: ";
    rosidl_generator_traits::value_to_yaml(msg.net_o, out);
    out << "\n";
  }

  // member: block_i
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "block_i: ";
    rosidl_generator_traits::value_to_yaml(msg.block_i, out);
    out << "\n";
  }

  // member: block_o
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "block_o: ";
    rosidl_generator_traits::value_to_yaml(msg.block_o, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DockerStatistics & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace docker_messages

namespace rosidl_generator_traits
{

[[deprecated("use docker_messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const docker_messages::msg::DockerStatistics & msg,
  std::ostream & out, size_t indentation = 0)
{
  docker_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use docker_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const docker_messages::msg::DockerStatistics & msg)
{
  return docker_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<docker_messages::msg::DockerStatistics>()
{
  return "docker_messages::msg::DockerStatistics";
}

template<>
inline const char * name<docker_messages::msg::DockerStatistics>()
{
  return "docker_messages/msg/DockerStatistics";
}

template<>
struct has_fixed_size<docker_messages::msg::DockerStatistics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<docker_messages::msg::DockerStatistics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<docker_messages::msg::DockerStatistics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS__TRAITS_HPP_
