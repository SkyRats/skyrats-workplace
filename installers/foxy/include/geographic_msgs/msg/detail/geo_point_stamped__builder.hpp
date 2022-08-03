// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geographic_msgs:msg/GeoPointStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POINT_STAMPED__BUILDER_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POINT_STAMPED__BUILDER_HPP_

#include "geographic_msgs/msg/detail/geo_point_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geographic_msgs
{

namespace msg
{

namespace builder
{

class Init_GeoPointStamped_position
{
public:
  explicit Init_GeoPointStamped_position(::geographic_msgs::msg::GeoPointStamped & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::msg::GeoPointStamped position(::geographic_msgs::msg::GeoPointStamped::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::msg::GeoPointStamped msg_;
};

class Init_GeoPointStamped_header
{
public:
  Init_GeoPointStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeoPointStamped_position header(::geographic_msgs::msg::GeoPointStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GeoPointStamped_position(msg_);
  }

private:
  ::geographic_msgs::msg::GeoPointStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::msg::GeoPointStamped>()
{
  return geographic_msgs::msg::builder::Init_GeoPointStamped_header();
}

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POINT_STAMPED__BUILDER_HPP_
