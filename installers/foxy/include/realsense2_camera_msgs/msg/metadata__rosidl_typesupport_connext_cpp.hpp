// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from realsense2_camera_msgs:msg/Metadata.idl
// generated code does not contain a copyright notice


#ifndef REALSENSE2_CAMERA_MSGS__MSG__METADATA__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define REALSENSE2_CAMERA_MSGS__MSG__METADATA__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "realsense2_camera_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "realsense2_camera_msgs/msg/detail/metadata__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "realsense2_camera_msgs/msg/dds_connext/Metadata_Support.h"
#include "realsense2_camera_msgs/msg/dds_connext/Metadata_Plugin.h"
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


namespace realsense2_camera_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Metadata();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_realsense2_camera_msgs
convert_ros_message_to_dds(
  const realsense2_camera_msgs::msg::Metadata & ros_message,
  realsense2_camera_msgs::msg::dds_::Metadata_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_realsense2_camera_msgs
convert_dds_message_to_ros(
  const realsense2_camera_msgs::msg::dds_::Metadata_ & dds_message,
  realsense2_camera_msgs::msg::Metadata & ros_message);

bool
to_cdr_stream__Metadata(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Metadata(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace realsense2_camera_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_realsense2_camera_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  realsense2_camera_msgs, msg,
  Metadata)();

#ifdef __cplusplus
}
#endif


#endif  // REALSENSE2_CAMERA_MSGS__MSG__METADATA__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
