// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from libstatistics_collector:msg/DummyMessage.idl
// generated code does not contain a copyright notice


#ifndef LIBSTATISTICS_COLLECTOR__MSG__DUMMY_MESSAGE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define LIBSTATISTICS_COLLECTOR__MSG__DUMMY_MESSAGE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "libstatistics_collector/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "libstatistics_collector/msg/detail/dummy_message__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "libstatistics_collector/msg/dds_connext/DummyMessage_Support.h"
#include "libstatistics_collector/msg/dds_connext/DummyMessage_Plugin.h"
#include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace libstatistics_collector
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__DummyMessage();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_libstatistics_collector
convert_ros_message_to_dds(
  const libstatistics_collector::msg::DummyMessage & ros_message,
  libstatistics_collector::msg::dds_::DummyMessage_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_libstatistics_collector
convert_dds_message_to_ros(
  const libstatistics_collector::msg::dds_::DummyMessage_ & dds_message,
  libstatistics_collector::msg::DummyMessage & ros_message);

bool
to_cdr_stream__DummyMessage(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__DummyMessage(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace libstatistics_collector


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_libstatistics_collector
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  libstatistics_collector, msg,
  DummyMessage)();

#ifdef __cplusplus
}
#endif


#endif  // LIBSTATISTICS_COLLECTOR__MSG__DUMMY_MESSAGE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
