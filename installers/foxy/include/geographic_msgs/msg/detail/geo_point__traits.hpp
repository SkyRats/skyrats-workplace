// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geographic_msgs:msg/GeoPoint.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POINT__TRAITS_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POINT__TRAITS_HPP_

#include "geographic_msgs/msg/detail/geo_point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geographic_msgs::msg::GeoPoint>()
{
  return "geographic_msgs::msg::GeoPoint";
}

template<>
inline const char * name<geographic_msgs::msg::GeoPoint>()
{
  return "geographic_msgs/msg/GeoPoint";
}

template<>
struct has_fixed_size<geographic_msgs::msg::GeoPoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<geographic_msgs::msg::GeoPoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<geographic_msgs::msg::GeoPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POINT__TRAITS_HPP_
