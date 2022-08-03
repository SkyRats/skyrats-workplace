// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from controller_manager_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice


#ifndef CONTROLLER_MANAGER_MSGS__MSG__CONTROLLER_STATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define CONTROLLER_MANAGER_MSGS__MSG__CONTROLLER_STATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "controller_manager_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "controller_manager_msgs/msg/detail/controller_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "controller_manager_msgs/msg/dds_connext/ControllerState_Support.h"
#include "controller_manager_msgs/msg/dds_connext/ControllerState_Plugin.h"
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


namespace controller_manager_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__ControllerState();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_controller_manager_msgs
convert_ros_message_to_dds(
  const controller_manager_msgs::msg::ControllerState & ros_message,
  controller_manager_msgs::msg::dds_::ControllerState_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_controller_manager_msgs
convert_dds_message_to_ros(
  const controller_manager_msgs::msg::dds_::ControllerState_ & dds_message,
  controller_manager_msgs::msg::ControllerState & ros_message);

bool
to_cdr_stream__ControllerState(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__ControllerState(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace controller_manager_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_controller_manager_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  controller_manager_msgs, msg,
  ControllerState)();

#ifdef __cplusplus
}
#endif


#endif  // CONTROLLER_MANAGER_MSGS__MSG__CONTROLLER_STATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
