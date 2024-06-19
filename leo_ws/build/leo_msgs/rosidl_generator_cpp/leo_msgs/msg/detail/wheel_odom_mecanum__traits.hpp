// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leo_msgs:msg/WheelOdomMecanum.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__MSG__DETAIL__WHEEL_ODOM_MECANUM__TRAITS_HPP_
#define LEO_MSGS__MSG__DETAIL__WHEEL_ODOM_MECANUM__TRAITS_HPP_

#include "leo_msgs/msg/detail/wheel_odom_mecanum__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<leo_msgs::msg::WheelOdomMecanum>()
{
  return "leo_msgs::msg::WheelOdomMecanum";
}

template<>
inline const char * name<leo_msgs::msg::WheelOdomMecanum>()
{
  return "leo_msgs/msg/WheelOdomMecanum";
}

template<>
struct has_fixed_size<leo_msgs::msg::WheelOdomMecanum>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<leo_msgs::msg::WheelOdomMecanum>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<leo_msgs::msg::WheelOdomMecanum>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEO_MSGS__MSG__DETAIL__WHEEL_ODOM_MECANUM__TRAITS_HPP_
