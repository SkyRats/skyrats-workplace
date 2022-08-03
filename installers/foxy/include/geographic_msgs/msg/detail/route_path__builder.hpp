// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geographic_msgs:msg/RoutePath.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_PATH__BUILDER_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_PATH__BUILDER_HPP_

#include "geographic_msgs/msg/detail/route_path__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geographic_msgs
{

namespace msg
{

namespace builder
{

class Init_RoutePath_props
{
public:
  explicit Init_RoutePath_props(::geographic_msgs::msg::RoutePath & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::msg::RoutePath props(::geographic_msgs::msg::RoutePath::_props_type arg)
  {
    msg_.props = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::msg::RoutePath msg_;
};

class Init_RoutePath_segments
{
public:
  explicit Init_RoutePath_segments(::geographic_msgs::msg::RoutePath & msg)
  : msg_(msg)
  {}
  Init_RoutePath_props segments(::geographic_msgs::msg::RoutePath::_segments_type arg)
  {
    msg_.segments = std::move(arg);
    return Init_RoutePath_props(msg_);
  }

private:
  ::geographic_msgs::msg::RoutePath msg_;
};

class Init_RoutePath_network
{
public:
  explicit Init_RoutePath_network(::geographic_msgs::msg::RoutePath & msg)
  : msg_(msg)
  {}
  Init_RoutePath_segments network(::geographic_msgs::msg::RoutePath::_network_type arg)
  {
    msg_.network = std::move(arg);
    return Init_RoutePath_segments(msg_);
  }

private:
  ::geographic_msgs::msg::RoutePath msg_;
};

class Init_RoutePath_header
{
public:
  Init_RoutePath_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoutePath_network header(::geographic_msgs::msg::RoutePath::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RoutePath_network(msg_);
  }

private:
  ::geographic_msgs::msg::RoutePath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::msg::RoutePath>()
{
  return geographic_msgs::msg::builder::Init_RoutePath_header();
}

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_PATH__BUILDER_HPP_
