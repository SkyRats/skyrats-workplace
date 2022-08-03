// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_manager_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CONTROLLER_STATE__BUILDER_HPP_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CONTROLLER_STATE__BUILDER_HPP_

#include "controller_manager_msgs/msg/detail/controller_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace controller_manager_msgs
{

namespace msg
{

namespace builder
{

class Init_ControllerState_claimed_interfaces
{
public:
  explicit Init_ControllerState_claimed_interfaces(::controller_manager_msgs::msg::ControllerState & msg)
  : msg_(msg)
  {}
  ::controller_manager_msgs::msg::ControllerState claimed_interfaces(::controller_manager_msgs::msg::ControllerState::_claimed_interfaces_type arg)
  {
    msg_.claimed_interfaces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::msg::ControllerState msg_;
};

class Init_ControllerState_type
{
public:
  explicit Init_ControllerState_type(::controller_manager_msgs::msg::ControllerState & msg)
  : msg_(msg)
  {}
  Init_ControllerState_claimed_interfaces type(::controller_manager_msgs::msg::ControllerState::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ControllerState_claimed_interfaces(msg_);
  }

private:
  ::controller_manager_msgs::msg::ControllerState msg_;
};

class Init_ControllerState_state
{
public:
  explicit Init_ControllerState_state(::controller_manager_msgs::msg::ControllerState & msg)
  : msg_(msg)
  {}
  Init_ControllerState_type state(::controller_manager_msgs::msg::ControllerState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_ControllerState_type(msg_);
  }

private:
  ::controller_manager_msgs::msg::ControllerState msg_;
};

class Init_ControllerState_name
{
public:
  Init_ControllerState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerState_state name(::controller_manager_msgs::msg::ControllerState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ControllerState_state(msg_);
  }

private:
  ::controller_manager_msgs::msg::ControllerState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::msg::ControllerState>()
{
  return controller_manager_msgs::msg::builder::Init_ControllerState_name();
}

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CONTROLLER_STATE__BUILDER_HPP_
