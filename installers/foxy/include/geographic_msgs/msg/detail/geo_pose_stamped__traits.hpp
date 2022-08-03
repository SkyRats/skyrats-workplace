// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geographic_msgs:msg/GeoPoseStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_STAMPED__TRAITS_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_STAMPED__TRAITS_HPP_

#include "geographic_msgs/msg/detail/geo_pose_stamped__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geographic_msgs/msg/detail/geo_pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geographic_msgs::msg::GeoPoseStamped>()
{
  return "geographic_msgs::msg::GeoPoseStamped";
}

template<>
inline const char * name<geographic_msgs::msg::GeoPoseStamped>()
{
  return "geographic_msgs/msg/GeoPoseStamped";
}

template<>
struct has_fixed_size<geographic_msgs::msg::GeoPoseStamped>
  : std::integral_constant<bool, has_fixed_size<geographic_msgs::msg::GeoPose>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<geographic_msgs::msg::GeoPoseStamped>
  : std::integral_constant<bool, has_bounded_size<geographic_msgs::msg::GeoPose>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<geographic_msgs::msg::GeoPoseStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_STAMPED__TRAITS_HPP_
