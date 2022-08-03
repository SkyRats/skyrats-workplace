// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geographic_msgs:msg/GeographicMap.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEOGRAPHIC_MAP__BUILDER_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEOGRAPHIC_MAP__BUILDER_HPP_

#include "geographic_msgs/msg/detail/geographic_map__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geographic_msgs
{

namespace msg
{

namespace builder
{

class Init_GeographicMap_props
{
public:
  explicit Init_GeographicMap_props(::geographic_msgs::msg::GeographicMap & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::msg::GeographicMap props(::geographic_msgs::msg::GeographicMap::_props_type arg)
  {
    msg_.props = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::msg::GeographicMap msg_;
};

class Init_GeographicMap_features
{
public:
  explicit Init_GeographicMap_features(::geographic_msgs::msg::GeographicMap & msg)
  : msg_(msg)
  {}
  Init_GeographicMap_props features(::geographic_msgs::msg::GeographicMap::_features_type arg)
  {
    msg_.features = std::move(arg);
    return Init_GeographicMap_props(msg_);
  }

private:
  ::geographic_msgs::msg::GeographicMap msg_;
};

class Init_GeographicMap_points
{
public:
  explicit Init_GeographicMap_points(::geographic_msgs::msg::GeographicMap & msg)
  : msg_(msg)
  {}
  Init_GeographicMap_features points(::geographic_msgs::msg::GeographicMap::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_GeographicMap_features(msg_);
  }

private:
  ::geographic_msgs::msg::GeographicMap msg_;
};

class Init_GeographicMap_bounds
{
public:
  explicit Init_GeographicMap_bounds(::geographic_msgs::msg::GeographicMap & msg)
  : msg_(msg)
  {}
  Init_GeographicMap_points bounds(::geographic_msgs::msg::GeographicMap::_bounds_type arg)
  {
    msg_.bounds = std::move(arg);
    return Init_GeographicMap_points(msg_);
  }

private:
  ::geographic_msgs::msg::GeographicMap msg_;
};

class Init_GeographicMap_id
{
public:
  explicit Init_GeographicMap_id(::geographic_msgs::msg::GeographicMap & msg)
  : msg_(msg)
  {}
  Init_GeographicMap_bounds id(::geographic_msgs::msg::GeographicMap::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_GeographicMap_bounds(msg_);
  }

private:
  ::geographic_msgs::msg::GeographicMap msg_;
};

class Init_GeographicMap_header
{
public:
  Init_GeographicMap_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeographicMap_id header(::geographic_msgs::msg::GeographicMap::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GeographicMap_id(msg_);
  }

private:
  ::geographic_msgs::msg::GeographicMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::msg::GeographicMap>()
{
  return geographic_msgs::msg::builder::Init_GeographicMap_header();
}

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEOGRAPHIC_MAP__BUILDER_HPP_
