// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geographic_msgs:msg/GeoPath.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_PATH__BUILDER_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_PATH__BUILDER_HPP_

#include "geographic_msgs/msg/detail/geo_path__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geographic_msgs
{

namespace msg
{

namespace builder
{

class Init_GeoPath_poses
{
public:
  explicit Init_GeoPath_poses(::geographic_msgs::msg::GeoPath & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::msg::GeoPath poses(::geographic_msgs::msg::GeoPath::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::msg::GeoPath msg_;
};

class Init_GeoPath_header
{
public:
  Init_GeoPath_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeoPath_poses header(::geographic_msgs::msg::GeoPath::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GeoPath_poses(msg_);
  }

private:
  ::geographic_msgs::msg::GeoPath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::msg::GeoPath>()
{
  return geographic_msgs::msg::builder::Init_GeoPath_header();
}

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_PATH__BUILDER_HPP_
