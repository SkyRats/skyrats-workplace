// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geographic_msgs:srv/UpdateGeographicMap.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__SRV__DETAIL__UPDATE_GEOGRAPHIC_MAP__TRAITS_HPP_
#define GEOGRAPHIC_MSGS__SRV__DETAIL__UPDATE_GEOGRAPHIC_MAP__TRAITS_HPP_

#include "geographic_msgs/srv/detail/update_geographic_map__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'updates'
#include "geographic_msgs/msg/detail/geographic_map_changes__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geographic_msgs::srv::UpdateGeographicMap_Request>()
{
  return "geographic_msgs::srv::UpdateGeographicMap_Request";
}

template<>
inline const char * name<geographic_msgs::srv::UpdateGeographicMap_Request>()
{
  return "geographic_msgs/srv/UpdateGeographicMap_Request";
}

template<>
struct has_fixed_size<geographic_msgs::srv::UpdateGeographicMap_Request>
  : std::integral_constant<bool, has_fixed_size<geographic_msgs::msg::GeographicMapChanges>::value> {};

template<>
struct has_bounded_size<geographic_msgs::srv::UpdateGeographicMap_Request>
  : std::integral_constant<bool, has_bounded_size<geographic_msgs::msg::GeographicMapChanges>::value> {};

template<>
struct is_message<geographic_msgs::srv::UpdateGeographicMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geographic_msgs::srv::UpdateGeographicMap_Response>()
{
  return "geographic_msgs::srv::UpdateGeographicMap_Response";
}

template<>
inline const char * name<geographic_msgs::srv::UpdateGeographicMap_Response>()
{
  return "geographic_msgs/srv/UpdateGeographicMap_Response";
}

template<>
struct has_fixed_size<geographic_msgs::srv::UpdateGeographicMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<geographic_msgs::srv::UpdateGeographicMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<geographic_msgs::srv::UpdateGeographicMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geographic_msgs::srv::UpdateGeographicMap>()
{
  return "geographic_msgs::srv::UpdateGeographicMap";
}

template<>
inline const char * name<geographic_msgs::srv::UpdateGeographicMap>()
{
  return "geographic_msgs/srv/UpdateGeographicMap";
}

template<>
struct has_fixed_size<geographic_msgs::srv::UpdateGeographicMap>
  : std::integral_constant<
    bool,
    has_fixed_size<geographic_msgs::srv::UpdateGeographicMap_Request>::value &&
    has_fixed_size<geographic_msgs::srv::UpdateGeographicMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<geographic_msgs::srv::UpdateGeographicMap>
  : std::integral_constant<
    bool,
    has_bounded_size<geographic_msgs::srv::UpdateGeographicMap_Request>::value &&
    has_bounded_size<geographic_msgs::srv::UpdateGeographicMap_Response>::value
  >
{
};

template<>
struct is_service<geographic_msgs::srv::UpdateGeographicMap>
  : std::true_type
{
};

template<>
struct is_service_request<geographic_msgs::srv::UpdateGeographicMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<geographic_msgs::srv::UpdateGeographicMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GEOGRAPHIC_MSGS__SRV__DETAIL__UPDATE_GEOGRAPHIC_MAP__TRAITS_HPP_
