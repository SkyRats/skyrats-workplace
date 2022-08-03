// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geographic_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_

#include "geographic_msgs/msg/detail/bounding_box__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geographic_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingBox_max_pt
{
public:
  explicit Init_BoundingBox_max_pt(::geographic_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::msg::BoundingBox max_pt(::geographic_msgs::msg::BoundingBox::_max_pt_type arg)
  {
    msg_.max_pt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_min_pt
{
public:
  Init_BoundingBox_min_pt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBox_max_pt min_pt(::geographic_msgs::msg::BoundingBox::_min_pt_type arg)
  {
    msg_.min_pt = std::move(arg);
    return Init_BoundingBox_max_pt(msg_);
  }

private:
  ::geographic_msgs::msg::BoundingBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::msg::BoundingBox>()
{
  return geographic_msgs::msg::builder::Init_BoundingBox_min_pt();
}

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
