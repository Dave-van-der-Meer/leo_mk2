// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from docker_messages:msg/DockerStatisticsArray.idl
// generated code does not contain a copyright notice

#ifndef DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS_ARRAY__STRUCT_HPP_
#define DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'docker_statistics'
#include "docker_messages/msg/detail/docker_statistics__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__docker_messages__msg__DockerStatisticsArray __attribute__((deprecated))
#else
# define DEPRECATED__docker_messages__msg__DockerStatisticsArray __declspec(deprecated)
#endif

namespace docker_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DockerStatisticsArray_
{
  using Type = DockerStatisticsArray_<ContainerAllocator>;

  explicit DockerStatisticsArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit DockerStatisticsArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _docker_statistics_type =
    std::vector<docker_messages::msg::DockerStatistics_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<docker_messages::msg::DockerStatistics_<ContainerAllocator>>>;
  _docker_statistics_type docker_statistics;

  // setters for named parameter idiom
  Type & set__docker_statistics(
    const std::vector<docker_messages::msg::DockerStatistics_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<docker_messages::msg::DockerStatistics_<ContainerAllocator>>> & _arg)
  {
    this->docker_statistics = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    docker_messages::msg::DockerStatisticsArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const docker_messages::msg::DockerStatisticsArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<docker_messages::msg::DockerStatisticsArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<docker_messages::msg::DockerStatisticsArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      docker_messages::msg::DockerStatisticsArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<docker_messages::msg::DockerStatisticsArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      docker_messages::msg::DockerStatisticsArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<docker_messages::msg::DockerStatisticsArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<docker_messages::msg::DockerStatisticsArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<docker_messages::msg::DockerStatisticsArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__docker_messages__msg__DockerStatisticsArray
    std::shared_ptr<docker_messages::msg::DockerStatisticsArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__docker_messages__msg__DockerStatisticsArray
    std::shared_ptr<docker_messages::msg::DockerStatisticsArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DockerStatisticsArray_ & other) const
  {
    if (this->docker_statistics != other.docker_statistics) {
      return false;
    }
    return true;
  }
  bool operator!=(const DockerStatisticsArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DockerStatisticsArray_

// alias to use template instance with default allocator
using DockerStatisticsArray =
  docker_messages::msg::DockerStatisticsArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace docker_messages

#endif  // DOCKER_MESSAGES__MSG__DETAIL__DOCKER_STATISTICS_ARRAY__STRUCT_HPP_
