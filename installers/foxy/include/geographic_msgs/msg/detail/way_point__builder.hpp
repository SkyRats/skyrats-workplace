// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geographic_msgs:msg/WayPoint.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__WAY_POINT__BUILDER_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__WAY_POINT__BUILDER_HPP_

#include "geographic_msgs/msg/detail/way_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geographic_msgs
{

namespace msg
{

namespace builder
{

class Init_WayPoint_props
{
public:
  explicit Init_WayPoint_props(::geographic_msgs::msg::WayPoint & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::msg::WayPoint props(::geographic_msgs::msg::WayPoint::_props_type arg)
  {
    msg_.props = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::msg::WayPoint msg_;
};

class Init_WayPoint_position
{
public:
  explicit Init_WayPoint_position(::geographic_msgs::msg::WayPoint & msg)
  : msg_(msg)
  {}
  Init_WayPoint_props position(::geographic_msgs::msg::WayPoint::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_WayPoint_props(msg_);
  }

private:
  ::geographic_msgs::msg::WayPoint msg_;
};

class Init_WayPoint_id
{
public:
  Init_WayPoint_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WayPoint_position id(::geographic_msgs::msg::WayPoint::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_WayPoint_position(msg_);
  }

private:
  ::geographic_msgs::msg::WayPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::msg::WayPoint>()
{
  return geographic_msgs::msg::builder::Init_WayPoint_id();
}

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__WAY_POINT__BUILDER_HPP_
