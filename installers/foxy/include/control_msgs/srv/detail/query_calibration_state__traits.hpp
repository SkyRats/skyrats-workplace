// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:srv/QueryCalibrationState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__SRV__DETAIL__QUERY_CALIBRATION_STATE__TRAITS_HPP_
#define CONTROL_MSGS__SRV__DETAIL__QUERY_CALIBRATION_STATE__TRAITS_HPP_

#include "control_msgs/srv/detail/query_calibration_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::srv::QueryCalibrationState_Request>()
{
  return "control_msgs::srv::QueryCalibrationState_Request";
}

template<>
inline const char * name<control_msgs::srv::QueryCalibrationState_Request>()
{
  return "control_msgs/srv/QueryCalibrationState_Request";
}

template<>
struct has_fixed_size<control_msgs::srv::QueryCalibrationState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_msgs::srv::QueryCalibrationState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_msgs::srv::QueryCalibrationState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::srv::QueryCalibrationState_Response>()
{
  return "control_msgs::srv::QueryCalibrationState_Response";
}

template<>
inline const char * name<control_msgs::srv::QueryCalibrationState_Response>()
{
  return "control_msgs/srv/QueryCalibrationState_Response";
}

template<>
struct has_fixed_size<control_msgs::srv::QueryCalibrationState_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_msgs::srv::QueryCalibrationState_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_msgs::srv::QueryCalibrationState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::srv::QueryCalibrationState>()
{
  return "control_msgs::srv::QueryCalibrationState";
}

template<>
inline const char * name<control_msgs::srv::QueryCalibrationState>()
{
  return "control_msgs/srv/QueryCalibrationState";
}

template<>
struct has_fixed_size<control_msgs::srv::QueryCalibrationState>
  : std::integral_constant<
    bool,
    has_fixed_size<control_msgs::srv::QueryCalibrationState_Request>::value &&
    has_fixed_size<control_msgs::srv::QueryCalibrationState_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_msgs::srv::QueryCalibrationState>
  : std::integral_constant<
    bool,
    has_bounded_size<control_msgs::srv::QueryCalibrationState_Request>::value &&
    has_bounded_size<control_msgs::srv::QueryCalibrationState_Response>::value
  >
{
};

template<>
struct is_service<control_msgs::srv::QueryCalibrationState>
  : std::true_type
{
};

template<>
struct is_service_request<control_msgs::srv::QueryCalibrationState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_msgs::srv::QueryCalibrationState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__SRV__DETAIL__QUERY_CALIBRATION_STATE__TRAITS_HPP_
