// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geographic_msgs:srv/GetGeoPath.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEO_PATH__BUILDER_HPP_
#define GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEO_PATH__BUILDER_HPP_

#include "geographic_msgs/srv/detail/get_geo_path__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geographic_msgs
{

namespace srv
{

namespace builder
{

class Init_GetGeoPath_Request_goal
{
public:
  explicit Init_GetGeoPath_Request_goal(::geographic_msgs::srv::GetGeoPath_Request & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::srv::GetGeoPath_Request goal(::geographic_msgs::srv::GetGeoPath_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::srv::GetGeoPath_Request msg_;
};

class Init_GetGeoPath_Request_start
{
public:
  Init_GetGeoPath_Request_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetGeoPath_Request_goal start(::geographic_msgs::srv::GetGeoPath_Request::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_GetGeoPath_Request_goal(msg_);
  }

private:
  ::geographic_msgs::srv::GetGeoPath_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::srv::GetGeoPath_Request>()
{
  return geographic_msgs::srv::builder::Init_GetGeoPath_Request_start();
}

}  // namespace geographic_msgs


namespace geographic_msgs
{

namespace srv
{

namespace builder
{

class Init_GetGeoPath_Response_distance
{
public:
  explicit Init_GetGeoPath_Response_distance(::geographic_msgs::srv::GetGeoPath_Response & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::srv::GetGeoPath_Response distance(::geographic_msgs::srv::GetGeoPath_Response::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::srv::GetGeoPath_Response msg_;
};

class Init_GetGeoPath_Response_goal_seg
{
public:
  explicit Init_GetGeoPath_Response_goal_seg(::geographic_msgs::srv::GetGeoPath_Response & msg)
  : msg_(msg)
  {}
  Init_GetGeoPath_Response_distance goal_seg(::geographic_msgs::srv::GetGeoPath_Response::_goal_seg_type arg)
  {
    msg_.goal_seg = std::move(arg);
    return Init_GetGeoPath_Response_distance(msg_);
  }

private:
  ::geographic_msgs::srv::GetGeoPath_Response msg_;
};

class Init_GetGeoPath_Response_start_seg
{
public:
  explicit Init_GetGeoPath_Response_start_seg(::geographic_msgs::srv::GetGeoPath_Response & msg)
  : msg_(msg)
  {}
  Init_GetGeoPath_Response_goal_seg start_seg(::geographic_msgs::srv::GetGeoPath_Response::_start_seg_type arg)
  {
    msg_.start_seg = std::move(arg);
    return Init_GetGeoPath_Response_goal_seg(msg_);
  }

private:
  ::geographic_msgs::srv::GetGeoPath_Response msg_;
};

class Init_GetGeoPath_Response_network
{
public:
  explicit Init_GetGeoPath_Response_network(::geographic_msgs::srv::GetGeoPath_Response & msg)
  : msg_(msg)
  {}
  Init_GetGeoPath_Response_start_seg network(::geographic_msgs::srv::GetGeoPath_Response::_network_type arg)
  {
    msg_.network = std::move(arg);
    return Init_GetGeoPath_Response_start_seg(msg_);
  }

private:
  ::geographic_msgs::srv::GetGeoPath_Response msg_;
};

class Init_GetGeoPath_Response_plan
{
public:
  explicit Init_GetGeoPath_Response_plan(::geographic_msgs::srv::GetGeoPath_Response & msg)
  : msg_(msg)
  {}
  Init_GetGeoPath_Response_network plan(::geographic_msgs::srv::GetGeoPath_Response::_plan_type arg)
  {
    msg_.plan = std::move(arg);
    return Init_GetGeoPath_Response_network(msg_);
  }

private:
  ::geographic_msgs::srv::GetGeoPath_Response msg_;
};

class Init_GetGeoPath_Response_status
{
public:
  explicit Init_GetGeoPath_Response_status(::geographic_msgs::srv::GetGeoPath_Response & msg)
  : msg_(msg)
  {}
  Init_GetGeoPath_Response_plan status(::geographic_msgs::srv::GetGeoPath_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetGeoPath_Response_plan(msg_);
  }

private:
  ::geographic_msgs::srv::GetGeoPath_Response msg_;
};

class Init_GetGeoPath_Response_success
{
public:
  Init_GetGeoPath_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetGeoPath_Response_status success(::geographic_msgs::srv::GetGeoPath_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetGeoPath_Response_status(msg_);
  }

private:
  ::geographic_msgs::srv::GetGeoPath_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::srv::GetGeoPath_Response>()
{
  return geographic_msgs::srv::builder::Init_GetGeoPath_Response_success();
}

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEO_PATH__BUILDER_HPP_
