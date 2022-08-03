// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from libstatistics_collector:msg/DummyMessage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "libstatistics_collector/msg/detail/dummy_message__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace libstatistics_collector
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DummyMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) libstatistics_collector::msg::DummyMessage(_init);
}

void DummyMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<libstatistics_collector::msg::DummyMessage *>(message_memory);
  typed_message->~DummyMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DummyMessage_message_member_array[1] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(libstatistics_collector::msg::DummyMessage, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DummyMessage_message_members = {
  "libstatistics_collector::msg",  // message namespace
  "DummyMessage",  // message name
  1,  // number of fields
  sizeof(libstatistics_collector::msg::DummyMessage),
  DummyMessage_message_member_array,  // message members
  DummyMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  DummyMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DummyMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DummyMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace libstatistics_collector


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<libstatistics_collector::msg::DummyMessage>()
{
  return &::libstatistics_collector::msg::rosidl_typesupport_introspection_cpp::DummyMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, libstatistics_collector, msg, DummyMessage)() {
  return &::libstatistics_collector::msg::rosidl_typesupport_introspection_cpp::DummyMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
