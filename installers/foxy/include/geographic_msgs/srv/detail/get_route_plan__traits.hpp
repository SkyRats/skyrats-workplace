// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geographic_msgs:srv/GetRoutePlan.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__SRV__DETAIL__GET_ROUTE_PLAN__TRAITS_HPP_
#define GEOGRAPHIC_MSGS__SRV__DETAIL__GET_ROUTE_PLAN__TRAITS_HPP_

#include "geographic_msgs/srv/detail/get_route_plan__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'network'
// Member 'start'
// Member 'goal'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geographic_msgs::srv::GetRoutePlan_Request>()
{
  return "geographic_msgs::srv::GetRoutePlan_Request";
}

template<>
inline const char * name<geographic_msgs::srv::GetRoutePlan_Request>()
{
  return "geographic_msgs/srv/GetRoutePlan_Request";
}

template<>
struct has_fixed_size<geographic_msgs::srv::GetRoutePlan_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<geographic_msgs::srv::GetRoutePlan_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<geographic_msgs::srv::GetRoutePlan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'plan'
#include "geographic_msgs/msg/detail/route_path__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geographic_msgs::srv::GetRoutePlan_Response>()
{
  return "geographic_msgs::srv::GetRoutePlan_Response";
}

template<>
inline const char * name<geographic_msgs::srv::GetRoutePlan_Response>()
{
  return "geographic_msgs/srv/GetRoutePlan_Response";
}

template<>
struct has_fixed_size<geographic_msgs::srv::GetRoutePlan_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<geographic_msgs::srv::GetRoutePlan_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<geographic_msgs::srv::GetRoutePlan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geographic_msgs::srv::GetRoutePlan>()
{
  return "geographic_msgs::srv::GetRoutePlan";
}

template<>
inline const char * name<geographic_msgs::srv::GetRoutePlan>()
{
  return "geographic_msgs/srv/GetRoutePlan";
}

template<>
struct has_fixed_size<geographic_msgs::srv::GetRoutePlan>
  : std::integral_constant<
    bool,
    has_fixed_size<geographic_msgs::srv::GetRoutePlan_Request>::value &&
    has_fixed_size<geographic_msgs::srv::GetRoutePlan_Response>::value
  >
{
};

template<>
struct has_bounded_size<geographic_msgs::srv::GetRoutePlan>
  : std::integral_constant<
    bool,
    has_bounded_size<geographic_msgs::srv::GetRoutePlan_Request>::value &&
    has_bounded_size<geographic_msgs::srv::GetRoutePlan_Response>::value
  >
{
};

template<>
struct is_service<geographic_msgs::srv::GetRoutePlan>
  : std::true_type
{
};

template<>
struct is_service_request<geographic_msgs::srv::GetRoutePlan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<geographic_msgs::srv::GetRoutePlan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GEOGRAPHIC_MSGS__SRV__DETAIL__GET_ROUTE_PLAN__TRAITS_HPP_
