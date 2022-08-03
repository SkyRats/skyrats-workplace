// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from logging_demo:srv/ConfigLogger.idl
// generated code does not contain a copyright notice

#ifndef LOGGING_DEMO__SRV__DETAIL__CONFIG_LOGGER__BUILDER_HPP_
#define LOGGING_DEMO__SRV__DETAIL__CONFIG_LOGGER__BUILDER_HPP_

#include "logging_demo/srv/detail/config_logger__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace logging_demo
{

namespace srv
{

namespace builder
{

class Init_ConfigLogger_Request_level
{
public:
  explicit Init_ConfigLogger_Request_level(::logging_demo::srv::ConfigLogger_Request & msg)
  : msg_(msg)
  {}
  ::logging_demo::srv::ConfigLogger_Request level(::logging_demo::srv::ConfigLogger_Request::_level_type arg)
  {
    msg_.level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::logging_demo::srv::ConfigLogger_Request msg_;
};

class Init_ConfigLogger_Request_logger_name
{
public:
  Init_ConfigLogger_Request_logger_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfigLogger_Request_level logger_name(::logging_demo::srv::ConfigLogger_Request::_logger_name_type arg)
  {
    msg_.logger_name = std::move(arg);
    return Init_ConfigLogger_Request_level(msg_);
  }

private:
  ::logging_demo::srv::ConfigLogger_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::logging_demo::srv::ConfigLogger_Request>()
{
  return logging_demo::srv::builder::Init_ConfigLogger_Request_logger_name();
}

}  // namespace logging_demo


namespace logging_demo
{

namespace srv
{

namespace builder
{

class Init_ConfigLogger_Response_success
{
public:
  Init_ConfigLogger_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::logging_demo::srv::ConfigLogger_Response success(::logging_demo::srv::ConfigLogger_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::logging_demo::srv::ConfigLogger_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::logging_demo::srv::ConfigLogger_Response>()
{
  return logging_demo::srv::builder::Init_ConfigLogger_Response_success();
}

}  // namespace logging_demo

#endif  // LOGGING_DEMO__SRV__DETAIL__CONFIG_LOGGER__BUILDER_HPP_
