// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from diagnostic_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice


#ifndef DIAGNOSTIC_MSGS__MSG__KEY_VALUE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define DIAGNOSTIC_MSGS__MSG__KEY_VALUE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "diagnostic_msgs/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "diagnostic_msgs/msg/dds_connext/KeyValue_Support.h"
#include "diagnostic_msgs/msg/dds_connext/KeyValue_Plugin.h"
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


namespace diagnostic_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__KeyValue();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_diagnostic_msgs
convert_ros_message_to_dds(
  const diagnostic_msgs::msg::KeyValue & ros_message,
  diagnostic_msgs::msg::dds_::KeyValue_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_diagnostic_msgs
convert_dds_message_to_ros(
  const diagnostic_msgs::msg::dds_::KeyValue_ & dds_message,
  diagnostic_msgs::msg::KeyValue & ros_message);

bool
to_cdr_stream__KeyValue(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__KeyValue(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace diagnostic_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_diagnostic_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  diagnostic_msgs, msg,
  KeyValue)();

#ifdef __cplusplus
}
#endif


#endif  // DIAGNOSTIC_MSGS__MSG__KEY_VALUE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
