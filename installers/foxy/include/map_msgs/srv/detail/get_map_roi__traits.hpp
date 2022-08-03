// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from map_msgs:srv/GetMapROI.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__DETAIL__GET_MAP_ROI__TRAITS_HPP_
#define MAP_MSGS__SRV__DETAIL__GET_MAP_ROI__TRAITS_HPP_

#include "map_msgs/srv/detail/get_map_roi__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::GetMapROI_Request>()
{
  return "map_msgs::srv::GetMapROI_Request";
}

template<>
inline const char * name<map_msgs::srv::GetMapROI_Request>()
{
  return "map_msgs/srv/GetMapROI_Request";
}

template<>
struct has_fixed_size<map_msgs::srv::GetMapROI_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<map_msgs::srv::GetMapROI_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<map_msgs::srv::GetMapROI_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'sub_map'
#include "nav_msgs/msg/detail/occupancy_grid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::GetMapROI_Response>()
{
  return "map_msgs::srv::GetMapROI_Response";
}

template<>
inline const char * name<map_msgs::srv::GetMapROI_Response>()
{
  return "map_msgs/srv/GetMapROI_Response";
}

template<>
struct has_fixed_size<map_msgs::srv::GetMapROI_Response>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct has_bounded_size<map_msgs::srv::GetMapROI_Response>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct is_message<map_msgs::srv::GetMapROI_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::GetMapROI>()
{
  return "map_msgs::srv::GetMapROI";
}

template<>
inline const char * name<map_msgs::srv::GetMapROI>()
{
  return "map_msgs/srv/GetMapROI";
}

template<>
struct has_fixed_size<map_msgs::srv::GetMapROI>
  : std::integral_constant<
    bool,
    has_fixed_size<map_msgs::srv::GetMapROI_Request>::value &&
    has_fixed_size<map_msgs::srv::GetMapROI_Response>::value
  >
{
};

template<>
struct has_bounded_size<map_msgs::srv::GetMapROI>
  : std::integral_constant<
    bool,
    has_bounded_size<map_msgs::srv::GetMapROI_Request>::value &&
    has_bounded_size<map_msgs::srv::GetMapROI_Response>::value
  >
{
};

template<>
struct is_service<map_msgs::srv::GetMapROI>
  : std::true_type
{
};

template<>
struct is_service_request<map_msgs::srv::GetMapROI_Request>
  : std::true_type
{
};

template<>
struct is_service_response<map_msgs::srv::GetMapROI_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MAP_MSGS__SRV__DETAIL__GET_MAP_ROI__TRAITS_HPP_
