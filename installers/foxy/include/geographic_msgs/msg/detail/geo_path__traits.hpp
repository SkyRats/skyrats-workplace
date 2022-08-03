// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geographic_msgs:msg/GeoPath.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_PATH__TRAITS_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_PATH__TRAITS_HPP_

#include "geographic_msgs/msg/detail/geo_path__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geographic_msgs::msg::GeoPath>()
{
  return "geographic_msgs::msg::GeoPath";
}

template<>
inline const char * name<geographic_msgs::msg::GeoPath>()
{
  return "geographic_msgs/msg/GeoPath";
}

template<>
struct has_fixed_size<geographic_msgs::msg::GeoPath>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<geographic_msgs::msg::GeoPath>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<geographic_msgs::msg::GeoPath>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_PATH__TRAITS_HPP_
