// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from map_msgs:srv/SaveMap.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_
#define MAP_MSGS__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_

#include "map_msgs/srv/detail/save_map__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace map_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveMap_Request_filename
{
public:
  Init_SaveMap_Request_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::map_msgs::srv::SaveMap_Request filename(::map_msgs::srv::SaveMap_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::map_msgs::srv::SaveMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::map_msgs::srv::SaveMap_Request>()
{
  return map_msgs::srv::builder::Init_SaveMap_Request_filename();
}

}  // namespace map_msgs


namespace map_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::map_msgs::srv::SaveMap_Response>()
{
  return ::map_msgs::srv::SaveMap_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace map_msgs

#endif  // MAP_MSGS__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_
