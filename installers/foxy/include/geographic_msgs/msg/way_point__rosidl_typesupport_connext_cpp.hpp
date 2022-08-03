// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from geographic_msgs:msg/WayPoint.idl
// generated code does not contain a copyright notice


#ifndef GEOGRAPHIC_MSGS__MSG__WAY_POINT__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define GEOGRAPHIC_MSGS__MSG__WAY_POINT__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "geographic_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "geographic_msgs/msg/detail/way_point__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "geographic_msgs/msg/dds_connext/WayPoint_Support.h"
#include "geographic_msgs/msg/dds_connext/WayPoint_Plugin.h"
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


namespace geographic_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__WayPoint();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_geographic_msgs
convert_ros_message_to_dds(
  const geographic_msgs::msg::WayPoint & ros_message,
  geographic_msgs::msg::dds_::WayPoint_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_geographic_msgs
convert_dds_message_to_ros(
  const geographic_msgs::msg::dds_::WayPoint_ & dds_message,
  geographic_msgs::msg::WayPoint & ros_message);

bool
to_cdr_stream__WayPoint(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__WayPoint(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace geographic_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_geographic_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  geographic_msgs, msg,
  WayPoint)();

#ifdef __cplusplus
}
#endif


#endif  // GEOGRAPHIC_MSGS__MSG__WAY_POINT__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
