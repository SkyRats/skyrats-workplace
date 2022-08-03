// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geographic_msgs:msg/RouteNetwork.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_NETWORK__BUILDER_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_NETWORK__BUILDER_HPP_

#include "geographic_msgs/msg/detail/route_network__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geographic_msgs
{

namespace msg
{

namespace builder
{

class Init_RouteNetwork_props
{
public:
  explicit Init_RouteNetwork_props(::geographic_msgs::msg::RouteNetwork & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::msg::RouteNetwork props(::geographic_msgs::msg::RouteNetwork::_props_type arg)
  {
    msg_.props = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::msg::RouteNetwork msg_;
};

class Init_RouteNetwork_segments
{
public:
  explicit Init_RouteNetwork_segments(::geographic_msgs::msg::RouteNetwork & msg)
  : msg_(msg)
  {}
  Init_RouteNetwork_props segments(::geographic_msgs::msg::RouteNetwork::_segments_type arg)
  {
    msg_.segments = std::move(arg);
    return Init_RouteNetwork_props(msg_);
  }

private:
  ::geographic_msgs::msg::RouteNetwork msg_;
};

class Init_RouteNetwork_points
{
public:
  explicit Init_RouteNetwork_points(::geographic_msgs::msg::RouteNetwork & msg)
  : msg_(msg)
  {}
  Init_RouteNetwork_segments points(::geographic_msgs::msg::RouteNetwork::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_RouteNetwork_segments(msg_);
  }

private:
  ::geographic_msgs::msg::RouteNetwork msg_;
};

class Init_RouteNetwork_bounds
{
public:
  explicit Init_RouteNetwork_bounds(::geographic_msgs::msg::RouteNetwork & msg)
  : msg_(msg)
  {}
  Init_RouteNetwork_points bounds(::geographic_msgs::msg::RouteNetwork::_bounds_type arg)
  {
    msg_.bounds = std::move(arg);
    return Init_RouteNetwork_points(msg_);
  }

private:
  ::geographic_msgs::msg::RouteNetwork msg_;
};

class Init_RouteNetwork_id
{
public:
  explicit Init_RouteNetwork_id(::geographic_msgs::msg::RouteNetwork & msg)
  : msg_(msg)
  {}
  Init_RouteNetwork_bounds id(::geographic_msgs::msg::RouteNetwork::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RouteNetwork_bounds(msg_);
  }

private:
  ::geographic_msgs::msg::RouteNetwork msg_;
};

class Init_RouteNetwork_header
{
public:
  Init_RouteNetwork_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RouteNetwork_id header(::geographic_msgs::msg::RouteNetwork::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RouteNetwork_id(msg_);
  }

private:
  ::geographic_msgs::msg::RouteNetwork msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::msg::RouteNetwork>()
{
  return geographic_msgs::msg::builder::Init_RouteNetwork_header();
}

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_NETWORK__BUILDER_HPP_
