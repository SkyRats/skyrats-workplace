// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from libstatistics_collector:msg/DummyMessage.idl
// generated code does not contain a copyright notice

#ifndef LIBSTATISTICS_COLLECTOR__MSG__DETAIL__DUMMY_MESSAGE__BUILDER_HPP_
#define LIBSTATISTICS_COLLECTOR__MSG__DETAIL__DUMMY_MESSAGE__BUILDER_HPP_

#include "libstatistics_collector/msg/detail/dummy_message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace libstatistics_collector
{

namespace msg
{

namespace builder
{

class Init_DummyMessage_header
{
public:
  Init_DummyMessage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::libstatistics_collector::msg::DummyMessage header(::libstatistics_collector::msg::DummyMessage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::libstatistics_collector::msg::DummyMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::libstatistics_collector::msg::DummyMessage>()
{
  return libstatistics_collector::msg::builder::Init_DummyMessage_header();
}

}  // namespace libstatistics_collector

#endif  // LIBSTATISTICS_COLLECTOR__MSG__DETAIL__DUMMY_MESSAGE__BUILDER_HPP_
