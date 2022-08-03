// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from logging_demo:srv/ConfigLogger.idl
// generated code does not contain a copyright notice

#ifndef LOGGING_DEMO__SRV__DETAIL__CONFIG_LOGGER__TRAITS_HPP_
#define LOGGING_DEMO__SRV__DETAIL__CONFIG_LOGGER__TRAITS_HPP_

#include "logging_demo/srv/detail/config_logger__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<logging_demo::srv::ConfigLogger_Request>()
{
  return "logging_demo::srv::ConfigLogger_Request";
}

template<>
inline const char * name<logging_demo::srv::ConfigLogger_Request>()
{
  return "logging_demo/srv/ConfigLogger_Request";
}

template<>
struct has_fixed_size<logging_demo::srv::ConfigLogger_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<logging_demo::srv::ConfigLogger_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<logging_demo::srv::ConfigLogger_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<logging_demo::srv::ConfigLogger_Response>()
{
  return "logging_demo::srv::ConfigLogger_Response";
}

template<>
inline const char * name<logging_demo::srv::ConfigLogger_Response>()
{
  return "logging_demo/srv/ConfigLogger_Response";
}

template<>
struct has_fixed_size<logging_demo::srv::ConfigLogger_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<logging_demo::srv::ConfigLogger_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<logging_demo::srv::ConfigLogger_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<logging_demo::srv::ConfigLogger>()
{
  return "logging_demo::srv::ConfigLogger";
}

template<>
inline const char * name<logging_demo::srv::ConfigLogger>()
{
  return "logging_demo/srv/ConfigLogger";
}

template<>
struct has_fixed_size<logging_demo::srv::ConfigLogger>
  : std::integral_constant<
    bool,
    has_fixed_size<logging_demo::srv::ConfigLogger_Request>::value &&
    has_fixed_size<logging_demo::srv::ConfigLogger_Response>::value
  >
{
};

template<>
struct has_bounded_size<logging_demo::srv::ConfigLogger>
  : std::integral_constant<
    bool,
    has_bounded_size<logging_demo::srv::ConfigLogger_Request>::value &&
    has_bounded_size<logging_demo::srv::ConfigLogger_Response>::value
  >
{
};

template<>
struct is_service<logging_demo::srv::ConfigLogger>
  : std::true_type
{
};

template<>
struct is_service_request<logging_demo::srv::ConfigLogger_Request>
  : std::true_type
{
};

template<>
struct is_service_response<logging_demo::srv::ConfigLogger_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LOGGING_DEMO__SRV__DETAIL__CONFIG_LOGGER__TRAITS_HPP_
