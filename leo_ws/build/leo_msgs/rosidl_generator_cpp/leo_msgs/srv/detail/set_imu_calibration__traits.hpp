// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leo_msgs:srv/SetImuCalibration.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__SRV__DETAIL__SET_IMU_CALIBRATION__TRAITS_HPP_
#define LEO_MSGS__SRV__DETAIL__SET_IMU_CALIBRATION__TRAITS_HPP_

#include "leo_msgs/srv/detail/set_imu_calibration__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<leo_msgs::srv::SetImuCalibration_Request>()
{
  return "leo_msgs::srv::SetImuCalibration_Request";
}

template<>
inline const char * name<leo_msgs::srv::SetImuCalibration_Request>()
{
  return "leo_msgs/srv/SetImuCalibration_Request";
}

template<>
struct has_fixed_size<leo_msgs::srv::SetImuCalibration_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<leo_msgs::srv::SetImuCalibration_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<leo_msgs::srv::SetImuCalibration_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<leo_msgs::srv::SetImuCalibration_Response>()
{
  return "leo_msgs::srv::SetImuCalibration_Response";
}

template<>
inline const char * name<leo_msgs::srv::SetImuCalibration_Response>()
{
  return "leo_msgs/srv/SetImuCalibration_Response";
}

template<>
struct has_fixed_size<leo_msgs::srv::SetImuCalibration_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<leo_msgs::srv::SetImuCalibration_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<leo_msgs::srv::SetImuCalibration_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<leo_msgs::srv::SetImuCalibration>()
{
  return "leo_msgs::srv::SetImuCalibration";
}

template<>
inline const char * name<leo_msgs::srv::SetImuCalibration>()
{
  return "leo_msgs/srv/SetImuCalibration";
}

template<>
struct has_fixed_size<leo_msgs::srv::SetImuCalibration>
  : std::integral_constant<
    bool,
    has_fixed_size<leo_msgs::srv::SetImuCalibration_Request>::value &&
    has_fixed_size<leo_msgs::srv::SetImuCalibration_Response>::value
  >
{
};

template<>
struct has_bounded_size<leo_msgs::srv::SetImuCalibration>
  : std::integral_constant<
    bool,
    has_bounded_size<leo_msgs::srv::SetImuCalibration_Request>::value &&
    has_bounded_size<leo_msgs::srv::SetImuCalibration_Response>::value
  >
{
};

template<>
struct is_service<leo_msgs::srv::SetImuCalibration>
  : std::true_type
{
};

template<>
struct is_service_request<leo_msgs::srv::SetImuCalibration_Request>
  : std::true_type
{
};

template<>
struct is_service_response<leo_msgs::srv::SetImuCalibration_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEO_MSGS__SRV__DETAIL__SET_IMU_CALIBRATION__TRAITS_HPP_
