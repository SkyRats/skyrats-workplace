// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geographic_msgs:msg/GeographicMapChanges.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEOGRAPHIC_MAP_CHANGES__BUILDER_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEOGRAPHIC_MAP_CHANGES__BUILDER_HPP_

#include "geographic_msgs/msg/detail/geographic_map_changes__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geographic_msgs
{

namespace msg
{

namespace builder
{

class Init_GeographicMapChanges_deletes
{
public:
  explicit Init_GeographicMapChanges_deletes(::geographic_msgs::msg::GeographicMapChanges & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::msg::GeographicMapChanges deletes(::geographic_msgs::msg::GeographicMapChanges::_deletes_type arg)
  {
    msg_.deletes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::msg::GeographicMapChanges msg_;
};

class Init_GeographicMapChanges_diffs
{
public:
  explicit Init_GeographicMapChanges_diffs(::geographic_msgs::msg::GeographicMapChanges & msg)
  : msg_(msg)
  {}
  Init_GeographicMapChanges_deletes diffs(::geographic_msgs::msg::GeographicMapChanges::_diffs_type arg)
  {
    msg_.diffs = std::move(arg);
    return Init_GeographicMapChanges_deletes(msg_);
  }

private:
  ::geographic_msgs::msg::GeographicMapChanges msg_;
};

class Init_GeographicMapChanges_header
{
public:
  Init_GeographicMapChanges_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeographicMapChanges_diffs header(::geographic_msgs::msg::GeographicMapChanges::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GeographicMapChanges_diffs(msg_);
  }

private:
  ::geographic_msgs::msg::GeographicMapChanges msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::msg::GeographicMapChanges>()
{
  return geographic_msgs::msg::builder::Init_GeographicMapChanges_header();
}

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEOGRAPHIC_MAP_CHANGES__BUILDER_HPP_
