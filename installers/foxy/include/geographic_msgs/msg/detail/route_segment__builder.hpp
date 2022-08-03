// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geographic_msgs:msg/RouteSegment.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_SEGMENT__BUILDER_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_SEGMENT__BUILDER_HPP_

#include "geographic_msgs/msg/detail/route_segment__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geographic_msgs
{

namespace msg
{

namespace builder
{

class Init_RouteSegment_props
{
public:
  explicit Init_RouteSegment_props(::geographic_msgs::msg::RouteSegment & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::msg::RouteSegment props(::geographic_msgs::msg::RouteSegment::_props_type arg)
  {
    msg_.props = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::msg::RouteSegment msg_;
};

class Init_RouteSegment_end
{
public:
  explicit Init_RouteSegment_end(::geographic_msgs::msg::RouteSegment & msg)
  : msg_(msg)
  {}
  Init_RouteSegment_props end(::geographic_msgs::msg::RouteSegment::_end_type arg)
  {
    msg_.end = std::move(arg);
    return Init_RouteSegment_props(msg_);
  }

private:
  ::geographic_msgs::msg::RouteSegment msg_;
};

class Init_RouteSegment_start
{
public:
  explicit Init_RouteSegment_start(::geographic_msgs::msg::RouteSegment & msg)
  : msg_(msg)
  {}
  Init_RouteSegment_end start(::geographic_msgs::msg::RouteSegment::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_RouteSegment_end(msg_);
  }

private:
  ::geographic_msgs::msg::RouteSegment msg_;
};

class Init_RouteSegment_id
{
public:
  Init_RouteSegment_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RouteSegment_start id(::geographic_msgs::msg::RouteSegment::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RouteSegment_start(msg_);
  }

private:
  ::geographic_msgs::msg::RouteSegment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::msg::RouteSegment>()
{
  return geographic_msgs::msg::builder::Init_RouteSegment_id();
}

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_SEGMENT__BUILDER_HPP_
