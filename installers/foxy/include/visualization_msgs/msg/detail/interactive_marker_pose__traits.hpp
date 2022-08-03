// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:msg/InteractiveMarkerPose.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_POSE__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_POSE__TRAITS_HPP_

#include "visualization_msgs/msg/detail/interactive_marker_pose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<visualization_msgs::msg::InteractiveMarkerPose>()
{
  return "visualization_msgs::msg::InteractiveMarkerPose";
}

template<>
inline const char * name<visualization_msgs::msg::InteractiveMarkerPose>()
{
  return "visualization_msgs/msg/InteractiveMarkerPose";
}

template<>
struct has_fixed_size<visualization_msgs::msg::InteractiveMarkerPose>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::msg::InteractiveMarkerPose>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<visualization_msgs::msg::InteractiveMarkerPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_POSE__TRAITS_HPP_
