// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geographic_msgs:msg/GeoPoint.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POINT__BUILDER_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POINT__BUILDER_HPP_

#include "geographic_msgs/msg/detail/geo_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geographic_msgs
{

namespace msg
{

namespace builder
{

class Init_GeoPoint_altitude
{
public:
  explicit Init_GeoPoint_altitude(::geographic_msgs::msg::GeoPoint & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::msg::GeoPoint altitude(::geographic_msgs::msg::GeoPoint::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::msg::GeoPoint msg_;
};

class Init_GeoPoint_longitude
{
public:
  explicit Init_GeoPoint_longitude(::geographic_msgs::msg::GeoPoint & msg)
  : msg_(msg)
  {}
  Init_GeoPoint_altitude longitude(::geographic_msgs::msg::GeoPoint::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_GeoPoint_altitude(msg_);
  }

private:
  ::geographic_msgs::msg::GeoPoint msg_;
};

class Init_GeoPoint_latitude
{
public:
  Init_GeoPoint_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeoPoint_longitude latitude(::geographic_msgs::msg::GeoPoint::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_GeoPoint_longitude(msg_);
  }

private:
  ::geographic_msgs::msg::GeoPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::msg::GeoPoint>()
{
  return geographic_msgs::msg::builder::Init_GeoPoint_latitude();
}

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POINT__BUILDER_HPP_
