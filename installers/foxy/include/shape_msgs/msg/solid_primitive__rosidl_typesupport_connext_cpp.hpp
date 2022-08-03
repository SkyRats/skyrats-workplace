// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from shape_msgs:msg/SolidPrimitive.idl
// generated code does not contain a copyright notice


#ifndef SHAPE_MSGS__MSG__SOLID_PRIMITIVE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define SHAPE_MSGS__MSG__SOLID_PRIMITIVE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "shape_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "shape_msgs/msg/detail/solid_primitive__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "shape_msgs/msg/dds_connext/SolidPrimitive_Support.h"
#include "shape_msgs/msg/dds_connext/SolidPrimitive_Plugin.h"
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


namespace shape_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__SolidPrimitive();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_shape_msgs
convert_ros_message_to_dds(
  const shape_msgs::msg::SolidPrimitive & ros_message,
  shape_msgs::msg::dds_::SolidPrimitive_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_shape_msgs
convert_dds_message_to_ros(
  const shape_msgs::msg::dds_::SolidPrimitive_ & dds_message,
  shape_msgs::msg::SolidPrimitive & ros_message);

bool
to_cdr_stream__SolidPrimitive(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__SolidPrimitive(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace shape_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_shape_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  shape_msgs, msg,
  SolidPrimitive)();

#ifdef __cplusplus
}
#endif


#endif  // SHAPE_MSGS__MSG__SOLID_PRIMITIVE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
