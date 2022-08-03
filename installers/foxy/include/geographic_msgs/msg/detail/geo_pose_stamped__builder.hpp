// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geographic_msgs:msg/GeoPoseStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_STAMPED__BUILDER_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_STAMPED__BUILDER_HPP_

#include "geographic_msgs/msg/detail/geo_pose_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geographic_msgs
{

namespace msg
{

namespace builder
{

class Init_GeoPoseStamped_pose
{
public:
  explicit Init_GeoPoseStamped_pose(::geographic_msgs::msg::GeoPoseStamped & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::msg::GeoPoseStamped pose(::geographic_msgs::msg::GeoPoseStamped::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::msg::GeoPoseStamped msg_;
};

class Init_GeoPoseStamped_header
{
public:
  Init_GeoPoseStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeoPoseStamped_pose header(::geographic_msgs::msg::GeoPoseStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GeoPoseStamped_pose(msg_);
  }

private:
  ::geographic_msgs::msg::GeoPoseStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::msg::GeoPoseStamped>()
{
  return geographic_msgs::msg::builder::Init_GeoPoseStamped_header();
}

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_STAMPED__BUILDER_HPP_
