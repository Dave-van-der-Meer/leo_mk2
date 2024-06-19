// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from docker_messages:msg/DockerStatistics.idl
// generated code does not contain a copyright notice

#ifndef DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS__STRUCT_HPP_
#define DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__docker_messages__msg__DockerStatistics __attribute__((deprecated))
#else
# define DEPRECATED__docker_messages__msg__DockerStatistics __declspec(deprecated)
#endif

namespace docker_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DockerStatistics_
{
  using Type = DockerStatistics_<ContainerAllocator>;

  explicit DockerStatistics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->name = "";
      this->cpu = 0.0f;
      this->ram = 0.0f;
      this->net_i = 0.0f;
      this->net_o = 0.0f;
      this->block_i = 0.0f;
      this->block_o = 0.0f;
    }
  }

  explicit DockerStatistics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    id(_alloc),
    name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->name = "";
      this->cpu = 0.0f;
      this->ram = 0.0f;
      this->net_i = 0.0f;
      this->net_o = 0.0f;
      this->block_i = 0.0f;
      this->block_o = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _cpu_type =
    float;
  _cpu_type cpu;
  using _ram_type =
    float;
  _ram_type ram;
  using _net_i_type =
    float;
  _net_i_type net_i;
  using _net_o_type =
    float;
  _net_o_type net_o;
  using _block_i_type =
    float;
  _block_i_type block_i;
  using _block_o_type =
    float;
  _block_o_type block_o;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__cpu(
    const float & _arg)
  {
    this->cpu = _arg;
    return *this;
  }
  Type & set__ram(
    const float & _arg)
  {
    this->ram = _arg;
    return *this;
  }
  Type & set__net_i(
    const float & _arg)
  {
    this->net_i = _arg;
    return *this;
  }
  Type & set__net_o(
    const float & _arg)
  {
    this->net_o = _arg;
    return *this;
  }
  Type & set__block_i(
    const float & _arg)
  {
    this->block_i = _arg;
    return *this;
  }
  Type & set__block_o(
    const float & _arg)
  {
    this->block_o = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    docker_messages::msg::DockerStatistics_<ContainerAllocator> *;
  using ConstRawPtr =
    const docker_messages::msg::DockerStatistics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<docker_messages::msg::DockerStatistics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<docker_messages::msg::DockerStatistics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      docker_messages::msg::DockerStatistics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<docker_messages::msg::DockerStatistics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      docker_messages::msg::DockerStatistics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<docker_messages::msg::DockerStatistics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<docker_messages::msg::DockerStatistics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<docker_messages::msg::DockerStatistics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__docker_messages__msg__DockerStatistics
    std::shared_ptr<docker_messages::msg::DockerStatistics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__docker_messages__msg__DockerStatistics
    std::shared_ptr<docker_messages::msg::DockerStatistics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DockerStatistics_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->cpu != other.cpu) {
      return false;
    }
    if (this->ram != other.ram) {
      return false;
    }
    if (this->net_i != other.net_i) {
      return false;
    }
    if (this->net_o != other.net_o) {
      return false;
    }
    if (this->block_i != other.block_i) {
      return false;
    }
    if (this->block_o != other.block_o) {
      return false;
    }
    return true;
  }
  bool operator!=(const DockerStatistics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DockerStatistics_

// alias to use template instance with default allocator
using DockerStatistics =
  docker_messages::msg::DockerStatistics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace docker_messages

#endif  // DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS__STRUCT_HPP_
