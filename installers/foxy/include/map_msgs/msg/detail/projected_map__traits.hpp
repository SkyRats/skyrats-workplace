// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from map_msgs:msg/ProjectedMap.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__MSG__DETAIL__PROJECTED_MAP__TRAITS_HPP_
#define MAP_MSGS__MSG__DETAIL__PROJECTED_MAP__TRAITS_HPP_

#include "map_msgs/msg/detail/projected_map__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'map'
#include "nav_msgs/msg/detail/occupancy_grid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::msg::ProjectedMap>()
{
  return "map_msgs::msg::ProjectedMap";
}

template<>
inline const char * name<map_msgs::msg::ProjectedMap>()
{
  return "map_msgs/msg/ProjectedMap";
}

template<>
struct has_fixed_size<map_msgs::msg::ProjectedMap>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct has_bounded_size<map_msgs::msg::ProjectedMap>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct is_message<map_msgs::msg::ProjectedMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAP_MSGS__MSG__DETAIL__PROJECTED_MAP__TRAITS_HPP_
