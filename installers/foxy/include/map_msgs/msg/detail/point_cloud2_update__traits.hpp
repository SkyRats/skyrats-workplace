// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from map_msgs:msg/PointCloud2Update.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__MSG__DETAIL__POINT_CLOUD2_UPDATE__TRAITS_HPP_
#define MAP_MSGS__MSG__DETAIL__POINT_CLOUD2_UPDATE__TRAITS_HPP_

#include "map_msgs/msg/detail/point_cloud2_update__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'points'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::msg::PointCloud2Update>()
{
  return "map_msgs::msg::PointCloud2Update";
}

template<>
inline const char * name<map_msgs::msg::PointCloud2Update>()
{
  return "map_msgs/msg/PointCloud2Update";
}

template<>
struct has_fixed_size<map_msgs::msg::PointCloud2Update>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::PointCloud2>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<map_msgs::msg::PointCloud2Update>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::PointCloud2>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<map_msgs::msg::PointCloud2Update>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAP_MSGS__MSG__DETAIL__POINT_CLOUD2_UPDATE__TRAITS_HPP_
