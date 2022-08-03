// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from gazebo_msgs:msg/LinkState.idl
// generated code does not contain a copyright notice


#ifndef GAZEBO_MSGS__MSG__LINK_STATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define GAZEBO_MSGS__MSG__LINK_STATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "gazebo_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "gazebo_msgs/msg/detail/link_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "gazebo_msgs/msg/dds_connext/LinkState_Support.h"
#include "gazebo_msgs/msg/dds_connext/LinkState_Plugin.h"
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


namespace gazebo_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__LinkState();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_gazebo_msgs
convert_ros_message_to_dds(
  const gazebo_msgs::msg::LinkState & ros_message,
  gazebo_msgs::msg::dds_::LinkState_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_gazebo_msgs
convert_dds_message_to_ros(
  const gazebo_msgs::msg::dds_::LinkState_ & dds_message,
  gazebo_msgs::msg::LinkState & ros_message);

bool
to_cdr_stream__LinkState(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__LinkState(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace gazebo_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_gazebo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  gazebo_msgs, msg,
  LinkState)();

#ifdef __cplusplus
}
#endif


#endif  // GAZEBO_MSGS__MSG__LINK_STATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
