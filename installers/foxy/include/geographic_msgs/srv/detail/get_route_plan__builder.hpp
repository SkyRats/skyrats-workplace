// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geographic_msgs:srv/GetRoutePlan.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__SRV__DETAIL__GET_ROUTE_PLAN__BUILDER_HPP_
#define GEOGRAPHIC_MSGS__SRV__DETAIL__GET_ROUTE_PLAN__BUILDER_HPP_

#include "geographic_msgs/srv/detail/get_route_plan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geographic_msgs
{

namespace srv
{

namespace builder
{

class Init_GetRoutePlan_Request_goal
{
public:
  explicit Init_GetRoutePlan_Request_goal(::geographic_msgs::srv::GetRoutePlan_Request & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::srv::GetRoutePlan_Request goal(::geographic_msgs::srv::GetRoutePlan_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::srv::GetRoutePlan_Request msg_;
};

class Init_GetRoutePlan_Request_start
{
public:
  explicit Init_GetRoutePlan_Request_start(::geographic_msgs::srv::GetRoutePlan_Request & msg)
  : msg_(msg)
  {}
  Init_GetRoutePlan_Request_goal start(::geographic_msgs::srv::GetRoutePlan_Request::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_GetRoutePlan_Request_goal(msg_);
  }

private:
  ::geographic_msgs::srv::GetRoutePlan_Request msg_;
};

class Init_GetRoutePlan_Request_network
{
public:
  Init_GetRoutePlan_Request_network()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRoutePlan_Request_start network(::geographic_msgs::srv::GetRoutePlan_Request::_network_type arg)
  {
    msg_.network = std::move(arg);
    return Init_GetRoutePlan_Request_start(msg_);
  }

private:
  ::geographic_msgs::srv::GetRoutePlan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::srv::GetRoutePlan_Request>()
{
  return geographic_msgs::srv::builder::Init_GetRoutePlan_Request_network();
}

}  // namespace geographic_msgs


namespace geographic_msgs
{

namespace srv
{

namespace builder
{

class Init_GetRoutePlan_Response_plan
{
public:
  explicit Init_GetRoutePlan_Response_plan(::geographic_msgs::srv::GetRoutePlan_Response & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::srv::GetRoutePlan_Response plan(::geographic_msgs::srv::GetRoutePlan_Response::_plan_type arg)
  {
    msg_.plan = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::srv::GetRoutePlan_Response msg_;
};

class Init_GetRoutePlan_Response_status
{
public:
  explicit Init_GetRoutePlan_Response_status(::geographic_msgs::srv::GetRoutePlan_Response & msg)
  : msg_(msg)
  {}
  Init_GetRoutePlan_Response_plan status(::geographic_msgs::srv::GetRoutePlan_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetRoutePlan_Response_plan(msg_);
  }

private:
  ::geographic_msgs::srv::GetRoutePlan_Response msg_;
};

class Init_GetRoutePlan_Response_success
{
public:
  Init_GetRoutePlan_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRoutePlan_Response_status success(::geographic_msgs::srv::GetRoutePlan_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetRoutePlan_Response_status(msg_);
  }

private:
  ::geographic_msgs::srv::GetRoutePlan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::srv::GetRoutePlan_Response>()
{
  return geographic_msgs::srv::builder::Init_GetRoutePlan_Response_success();
}

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__SRV__DETAIL__GET_ROUTE_PLAN__BUILDER_HPP_
