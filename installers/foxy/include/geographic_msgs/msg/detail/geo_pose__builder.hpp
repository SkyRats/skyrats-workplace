// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geographic_msgs:msg/GeoPose.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE__BUILDER_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE__BUILDER_HPP_

#include "geographic_msgs/msg/detail/geo_pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geographic_msgs
{

namespace msg
{

namespace builder
{

class Init_GeoPose_orientation
{
public:
  explicit Init_GeoPose_orientation(::geographic_msgs::msg::GeoPose & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::msg::GeoPose orientation(::geographic_msgs::msg::GeoPose::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::msg::GeoPose msg_;
};

class Init_GeoPose_position
{
public:
  Init_GeoPose_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeoPose_orientation position(::geographic_msgs::msg::GeoPose::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GeoPose_orientation(msg_);
  }

private:
  ::geographic_msgs::msg::GeoPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::msg::GeoPose>()
{
  return geographic_msgs::msg::builder::Init_GeoPose_position();
}

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE__BUILDER_HPP_
