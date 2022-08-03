// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_manager_msgs:srv/ConfigureStartController.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__CONFIGURE_START_CONTROLLER__BUILDER_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__CONFIGURE_START_CONTROLLER__BUILDER_HPP_

#include "controller_manager_msgs/srv/detail/configure_start_controller__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace controller_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_ConfigureStartController_Request_name
{
public:
  Init_ConfigureStartController_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::controller_manager_msgs::srv::ConfigureStartController_Request name(::controller_manager_msgs::srv::ConfigureStartController_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::srv::ConfigureStartController_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::ConfigureStartController_Request>()
{
  return controller_manager_msgs::srv::builder::Init_ConfigureStartController_Request_name();
}

}  // namespace controller_manager_msgs


namespace controller_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_ConfigureStartController_Response_ok
{
public:
  Init_ConfigureStartController_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::controller_manager_msgs::srv::ConfigureStartController_Response ok(::controller_manager_msgs::srv::ConfigureStartController_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::srv::ConfigureStartController_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::ConfigureStartController_Response>()
{
  return controller_manager_msgs::srv::builder::Init_ConfigureStartController_Response_ok();
}

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__CONFIGURE_START_CONTROLLER__BUILDER_HPP_
