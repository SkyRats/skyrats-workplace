// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from turtlesim:msg/Pose.idl
// generated code does not contain a copyright notice


#ifndef TURTLESIM__MSG__POSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define TURTLESIM__MSG__POSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "turtlesim/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "turtlesim/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "turtlesim/msg/dds_connext/Pose_Support.h"
#include "turtlesim/msg/dds_connext/Pose_Plugin.h"
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


namespace turtlesim
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Pose();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
convert_ros_message_to_dds(
  const turtlesim::msg::Pose & ros_message,
  turtlesim::msg::dds_::Pose_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
convert_dds_message_to_ros(
  const turtlesim::msg::dds_::Pose_ & dds_message,
  turtlesim::msg::Pose & ros_message);

bool
to_cdr_stream__Pose(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Pose(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace turtlesim


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  turtlesim, msg,
  Pose)();

#ifdef __cplusplus
}
#endif


#endif  // TURTLESIM__MSG__POSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
