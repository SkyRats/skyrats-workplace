// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from rosgraph_msgs:msg/Clock.idl
// generated code does not contain a copyright notice


#ifndef ROSGRAPH_MSGS__MSG__CLOCK__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define ROSGRAPH_MSGS__MSG__CLOCK__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rosgraph_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "rosgraph_msgs/msg/detail/clock__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "rosgraph_msgs/msg/dds_connext/Clock_Support.h"
#include "rosgraph_msgs/msg/dds_connext/Clock_Plugin.h"
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


namespace rosgraph_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Clock();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_rosgraph_msgs
convert_ros_message_to_dds(
  const rosgraph_msgs::msg::Clock & ros_message,
  rosgraph_msgs::msg::dds_::Clock_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_rosgraph_msgs
convert_dds_message_to_ros(
  const rosgraph_msgs::msg::dds_::Clock_ & dds_message,
  rosgraph_msgs::msg::Clock & ros_message);

bool
to_cdr_stream__Clock(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Clock(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace rosgraph_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_rosgraph_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  rosgraph_msgs, msg,
  Clock)();

#ifdef __cplusplus
}
#endif


#endif  // ROSGRAPH_MSGS__MSG__CLOCK__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
