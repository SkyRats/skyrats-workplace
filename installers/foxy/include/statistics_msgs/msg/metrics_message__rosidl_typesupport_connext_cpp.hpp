// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from statistics_msgs:msg/MetricsMessage.idl
// generated code does not contain a copyright notice


#ifndef STATISTICS_MSGS__MSG__METRICS_MESSAGE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define STATISTICS_MSGS__MSG__METRICS_MESSAGE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "statistics_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "statistics_msgs/msg/detail/metrics_message__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "statistics_msgs/msg/dds_connext/MetricsMessage_Support.h"
#include "statistics_msgs/msg/dds_connext/MetricsMessage_Plugin.h"
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


namespace statistics_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__MetricsMessage();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_statistics_msgs
convert_ros_message_to_dds(
  const statistics_msgs::msg::MetricsMessage & ros_message,
  statistics_msgs::msg::dds_::MetricsMessage_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_statistics_msgs
convert_dds_message_to_ros(
  const statistics_msgs::msg::dds_::MetricsMessage_ & dds_message,
  statistics_msgs::msg::MetricsMessage & ros_message);

bool
to_cdr_stream__MetricsMessage(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__MetricsMessage(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace statistics_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_statistics_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  statistics_msgs, msg,
  MetricsMessage)();

#ifdef __cplusplus
}
#endif


#endif  // STATISTICS_MSGS__MSG__METRICS_MESSAGE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
