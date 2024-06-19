// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from docker_messages:msg/DockerStatisticsArray.idl
// generated code does not contain a copyright notice

#ifndef DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS_ARRAY__TRAITS_HPP_
#define DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "docker_messages/msg/detail/docker_statistics_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'docker_statistics'
#include "docker_messages/msg/detail/docker_statistics__traits.hpp"

namespace docker_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const DockerStatisticsArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: docker_statistics
  {
    if (msg.docker_statistics.size() == 0) {
      out << "docker_statistics: []";
    } else {
      out << "docker_statistics: [";
      size_t pending_items = msg.docker_statistics.size();
      for (auto item : msg.docker_statistics) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DockerStatisticsArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: docker_statistics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.docker_statistics.size() == 0) {
      out << "docker_statistics: []\n";
    } else {
      out << "docker_statistics:\n";
      for (auto item : msg.docker_statistics) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DockerStatisticsArray & msg, bool use_flow_style = false)
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
  const docker_messages::msg::DockerStatisticsArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  docker_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use docker_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const docker_messages::msg::DockerStatisticsArray & msg)
{
  return docker_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<docker_messages::msg::DockerStatisticsArray>()
{
  return "docker_messages::msg::DockerStatisticsArray";
}

template<>
inline const char * name<docker_messages::msg::DockerStatisticsArray>()
{
  return "docker_messages/msg/DockerStatisticsArray";
}

template<>
struct has_fixed_size<docker_messages::msg::DockerStatisticsArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<docker_messages::msg::DockerStatisticsArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<docker_messages::msg::DockerStatisticsArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS_ARRAY__TRAITS_HPP_
