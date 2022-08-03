// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from map_msgs:srv/GetPointMap.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__DETAIL__GET_POINT_MAP__TRAITS_HPP_
#define MAP_MSGS__SRV__DETAIL__GET_POINT_MAP__TRAITS_HPP_

#include "map_msgs/srv/detail/get_point_map__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::GetPointMap_Request>()
{
  return "map_msgs::srv::GetPointMap_Request";
}

template<>
inline const char * name<map_msgs::srv::GetPointMap_Request>()
{
  return "map_msgs/srv/GetPointMap_Request";
}

template<>
struct has_fixed_size<map_msgs::srv::GetPointMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<map_msgs::srv::GetPointMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<map_msgs::srv::GetPointMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'map'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::GetPointMap_Response>()
{
  return "map_msgs::srv::GetPointMap_Response";
}

template<>
inline const char * name<map_msgs::srv::GetPointMap_Response>()
{
  return "map_msgs/srv/GetPointMap_Response";
}

template<>
struct has_fixed_size<map_msgs::srv::GetPointMap_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<map_msgs::srv::GetPointMap_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<map_msgs::srv::GetPointMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::GetPointMap>()
{
  return "map_msgs::srv::GetPointMap";
}

template<>
inline const char * name<map_msgs::srv::GetPointMap>()
{
  return "map_msgs/srv/GetPointMap";
}

template<>
struct has_fixed_size<map_msgs::srv::GetPointMap>
  : std::integral_constant<
    bool,
    has_fixed_size<map_msgs::srv::GetPointMap_Request>::value &&
    has_fixed_size<map_msgs::srv::GetPointMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<map_msgs::srv::GetPointMap>
  : std::integral_constant<
    bool,
    has_bounded_size<map_msgs::srv::GetPointMap_Request>::value &&
    has_bounded_size<map_msgs::srv::GetPointMap_Response>::value
  >
{
};

template<>
struct is_service<map_msgs::srv::GetPointMap>
  : std::true_type
{
};

template<>
struct is_service_request<map_msgs::srv::GetPointMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<map_msgs::srv::GetPointMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MAP_MSGS__SRV__DETAIL__GET_POINT_MAP__TRAITS_HPP_
