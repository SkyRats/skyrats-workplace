// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geographic_msgs:msg/WayPoint.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__WAY_POINT__TRAITS_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__WAY_POINT__TRAITS_HPP_

#include "geographic_msgs/msg/detail/way_point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'position'
#include "geographic_msgs/msg/detail/geo_point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geographic_msgs::msg::WayPoint>()
{
  return "geographic_msgs::msg::WayPoint";
}

template<>
inline const char * name<geographic_msgs::msg::WayPoint>()
{
  return "geographic_msgs/msg/WayPoint";
}

template<>
struct has_fixed_size<geographic_msgs::msg::WayPoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<geographic_msgs::msg::WayPoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<geographic_msgs::msg::WayPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__WAY_POINT__TRAITS_HPP_
