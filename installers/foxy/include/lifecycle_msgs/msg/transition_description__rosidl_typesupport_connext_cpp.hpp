// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from lifecycle_msgs:msg/TransitionDescription.idl
// generated code does not contain a copyright notice


#ifndef LIFECYCLE_MSGS__MSG__TRANSITION_DESCRIPTION__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define LIFECYCLE_MSGS__MSG__TRANSITION_DESCRIPTION__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "lifecycle_msgs/msg/detail/transition_description__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "lifecycle_msgs/msg/dds_connext/TransitionDescription_Support.h"
#include "lifecycle_msgs/msg/dds_connext/TransitionDescription_Plugin.h"
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


namespace lifecycle_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__TransitionDescription();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_lifecycle_msgs
convert_ros_message_to_dds(
  const lifecycle_msgs::msg::TransitionDescription & ros_message,
  lifecycle_msgs::msg::dds_::TransitionDescription_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_lifecycle_msgs
convert_dds_message_to_ros(
  const lifecycle_msgs::msg::dds_::TransitionDescription_ & dds_message,
  lifecycle_msgs::msg::TransitionDescription & ros_message);

bool
to_cdr_stream__TransitionDescription(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__TransitionDescription(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace lifecycle_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_lifecycle_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  lifecycle_msgs, msg,
  TransitionDescription)();

#ifdef __cplusplus
}
#endif


#endif  // LIFECYCLE_MSGS__MSG__TRANSITION_DESCRIPTION__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
