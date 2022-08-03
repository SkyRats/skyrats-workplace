// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pendulum_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef PENDULUM_MSGS__MSG__DETAIL__JOINT_STATE__TRAITS_HPP_
#define PENDULUM_MSGS__MSG__DETAIL__JOINT_STATE__TRAITS_HPP_

#include "pendulum_msgs/msg/detail/joint_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pendulum_msgs::msg::JointState>()
{
  return "pendulum_msgs::msg::JointState";
}

template<>
inline const char * name<pendulum_msgs::msg::JointState>()
{
  return "pendulum_msgs/msg/JointState";
}

template<>
struct has_fixed_size<pendulum_msgs::msg::JointState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pendulum_msgs::msg::JointState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pendulum_msgs::msg::JointState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PENDULUM_MSGS__MSG__DETAIL__JOINT_STATE__TRAITS_HPP_
