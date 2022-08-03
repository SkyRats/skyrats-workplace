// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from map_msgs:msg/ProjectedMapInfo.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__MSG__DETAIL__PROJECTED_MAP_INFO__TRAITS_HPP_
#define MAP_MSGS__MSG__DETAIL__PROJECTED_MAP_INFO__TRAITS_HPP_

#include "map_msgs/msg/detail/projected_map_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::msg::ProjectedMapInfo>()
{
  return "map_msgs::msg::ProjectedMapInfo";
}

template<>
inline const char * name<map_msgs::msg::ProjectedMapInfo>()
{
  return "map_msgs/msg/ProjectedMapInfo";
}

template<>
struct has_fixed_size<map_msgs::msg::ProjectedMapInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<map_msgs::msg::ProjectedMapInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<map_msgs::msg::ProjectedMapInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAP_MSGS__MSG__DETAIL__PROJECTED_MAP_INFO__TRAITS_HPP_
