// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from libstatistics_collector:msg/DummyMessage.idl
// generated code does not contain a copyright notice

#ifndef LIBSTATISTICS_COLLECTOR__MSG__DETAIL__DUMMY_MESSAGE__TRAITS_HPP_
#define LIBSTATISTICS_COLLECTOR__MSG__DETAIL__DUMMY_MESSAGE__TRAITS_HPP_

#include "libstatistics_collector/msg/detail/dummy_message__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<libstatistics_collector::msg::DummyMessage>()
{
  return "libstatistics_collector::msg::DummyMessage";
}

template<>
inline const char * name<libstatistics_collector::msg::DummyMessage>()
{
  return "libstatistics_collector/msg/DummyMessage";
}

template<>
struct has_fixed_size<libstatistics_collector::msg::DummyMessage>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<libstatistics_collector::msg::DummyMessage>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<libstatistics_collector::msg::DummyMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIBSTATISTICS_COLLECTOR__MSG__DETAIL__DUMMY_MESSAGE__TRAITS_HPP_
