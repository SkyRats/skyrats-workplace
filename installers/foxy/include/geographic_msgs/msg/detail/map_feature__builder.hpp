// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geographic_msgs:msg/MapFeature.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__MAP_FEATURE__BUILDER_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__MAP_FEATURE__BUILDER_HPP_

#include "geographic_msgs/msg/detail/map_feature__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geographic_msgs
{

namespace msg
{

namespace builder
{

class Init_MapFeature_props
{
public:
  explicit Init_MapFeature_props(::geographic_msgs::msg::MapFeature & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::msg::MapFeature props(::geographic_msgs::msg::MapFeature::_props_type arg)
  {
    msg_.props = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::msg::MapFeature msg_;
};

class Init_MapFeature_components
{
public:
  explicit Init_MapFeature_components(::geographic_msgs::msg::MapFeature & msg)
  : msg_(msg)
  {}
  Init_MapFeature_props components(::geographic_msgs::msg::MapFeature::_components_type arg)
  {
    msg_.components = std::move(arg);
    return Init_MapFeature_props(msg_);
  }

private:
  ::geographic_msgs::msg::MapFeature msg_;
};

class Init_MapFeature_id
{
public:
  Init_MapFeature_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapFeature_components id(::geographic_msgs::msg::MapFeature::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_MapFeature_components(msg_);
  }

private:
  ::geographic_msgs::msg::MapFeature msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::msg::MapFeature>()
{
  return geographic_msgs::msg::builder::Init_MapFeature_id();
}

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__MAP_FEATURE__BUILDER_HPP_
