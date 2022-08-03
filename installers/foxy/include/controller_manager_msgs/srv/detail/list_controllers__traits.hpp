// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_manager_msgs:srv/ListControllers.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_CONTROLLERS__TRAITS_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_CONTROLLERS__TRAITS_HPP_

#include "controller_manager_msgs/srv/detail/list_controllers__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_manager_msgs::srv::ListControllers_Request>()
{
  return "controller_manager_msgs::srv::ListControllers_Request";
}

template<>
inline const char * name<controller_manager_msgs::srv::ListControllers_Request>()
{
  return "controller_manager_msgs/srv/ListControllers_Request";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ListControllers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ListControllers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_manager_msgs::srv::ListControllers_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_manager_msgs::srv::ListControllers_Response>()
{
  return "controller_manager_msgs::srv::ListControllers_Response";
}

template<>
inline const char * name<controller_manager_msgs::srv::ListControllers_Response>()
{
  return "controller_manager_msgs/srv/ListControllers_Response";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ListControllers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ListControllers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<controller_manager_msgs::srv::ListControllers_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_manager_msgs::srv::ListControllers>()
{
  return "controller_manager_msgs::srv::ListControllers";
}

template<>
inline const char * name<controller_manager_msgs::srv::ListControllers>()
{
  return "controller_manager_msgs/srv/ListControllers";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ListControllers>
  : std::integral_constant<
    bool,
    has_fixed_size<controller_manager_msgs::srv::ListControllers_Request>::value &&
    has_fixed_size<controller_manager_msgs::srv::ListControllers_Response>::value
  >
{
};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ListControllers>
  : std::integral_constant<
    bool,
    has_bounded_size<controller_manager_msgs::srv::ListControllers_Request>::value &&
    has_bounded_size<controller_manager_msgs::srv::ListControllers_Response>::value
  >
{
};

template<>
struct is_service<controller_manager_msgs::srv::ListControllers>
  : std::true_type
{
};

template<>
struct is_service_request<controller_manager_msgs::srv::ListControllers_Request>
  : std::true_type
{
};

template<>
struct is_service_response<controller_manager_msgs::srv::ListControllers_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_CONTROLLERS__TRAITS_HPP_
