// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from map_msgs:srv/ProjectedMapsInfo.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__DETAIL__PROJECTED_MAPS_INFO__TRAITS_HPP_
#define MAP_MSGS__SRV__DETAIL__PROJECTED_MAPS_INFO__TRAITS_HPP_

#include "map_msgs/srv/detail/projected_maps_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::ProjectedMapsInfo_Request>()
{
  return "map_msgs::srv::ProjectedMapsInfo_Request";
}

template<>
inline const char * name<map_msgs::srv::ProjectedMapsInfo_Request>()
{
  return "map_msgs/srv/ProjectedMapsInfo_Request";
}

template<>
struct has_fixed_size<map_msgs::srv::ProjectedMapsInfo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<map_msgs::srv::ProjectedMapsInfo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<map_msgs::srv::ProjectedMapsInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::ProjectedMapsInfo_Response>()
{
  return "map_msgs::srv::ProjectedMapsInfo_Response";
}

template<>
inline const char * name<map_msgs::srv::ProjectedMapsInfo_Response>()
{
  return "map_msgs/srv/ProjectedMapsInfo_Response";
}

template<>
struct has_fixed_size<map_msgs::srv::ProjectedMapsInfo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<map_msgs::srv::ProjectedMapsInfo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<map_msgs::srv::ProjectedMapsInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::ProjectedMapsInfo>()
{
  return "map_msgs::srv::ProjectedMapsInfo";
}

template<>
inline const char * name<map_msgs::srv::ProjectedMapsInfo>()
{
  return "map_msgs/srv/ProjectedMapsInfo";
}

template<>
struct has_fixed_size<map_msgs::srv::ProjectedMapsInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<map_msgs::srv::ProjectedMapsInfo_Request>::value &&
    has_fixed_size<map_msgs::srv::ProjectedMapsInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<map_msgs::srv::ProjectedMapsInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<map_msgs::srv::ProjectedMapsInfo_Request>::value &&
    has_bounded_size<map_msgs::srv::ProjectedMapsInfo_Response>::value
  >
{
};

template<>
struct is_service<map_msgs::srv::ProjectedMapsInfo>
  : std::true_type
{
};

template<>
struct is_service_request<map_msgs::srv::ProjectedMapsInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<map_msgs::srv::ProjectedMapsInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MAP_MSGS__SRV__DETAIL__PROJECTED_MAPS_INFO__TRAITS_HPP_
