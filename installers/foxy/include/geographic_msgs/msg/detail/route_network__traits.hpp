// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geographic_msgs:msg/RouteNetwork.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_NETWORK__TRAITS_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_NETWORK__TRAITS_HPP_

#include "geographic_msgs/msg/detail/route_network__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'bounds'
#include "geographic_msgs/msg/detail/bounding_box__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geographic_msgs::msg::RouteNetwork>()
{
  return "geographic_msgs::msg::RouteNetwork";
}

template<>
inline const char * name<geographic_msgs::msg::RouteNetwork>()
{
  return "geographic_msgs/msg/RouteNetwork";
}

template<>
struct has_fixed_size<geographic_msgs::msg::RouteNetwork>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<geographic_msgs::msg::RouteNetwork>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<geographic_msgs::msg::RouteNetwork>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_NETWORK__TRAITS_HPP_
