// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from pcl_msgs:msg/PolygonMesh.idl
// generated code does not contain a copyright notice


#ifndef PCL_MSGS__MSG__POLYGON_MESH__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define PCL_MSGS__MSG__POLYGON_MESH__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pcl_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "pcl_msgs/msg/detail/polygon_mesh__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "pcl_msgs/msg/dds_connext/PolygonMesh_Support.h"
#include "pcl_msgs/msg/dds_connext/PolygonMesh_Plugin.h"
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


namespace pcl_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__PolygonMesh();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_pcl_msgs
convert_ros_message_to_dds(
  const pcl_msgs::msg::PolygonMesh & ros_message,
  pcl_msgs::msg::dds_::PolygonMesh_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_pcl_msgs
convert_dds_message_to_ros(
  const pcl_msgs::msg::dds_::PolygonMesh_ & dds_message,
  pcl_msgs::msg::PolygonMesh & ros_message);

bool
to_cdr_stream__PolygonMesh(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__PolygonMesh(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace pcl_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_pcl_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  pcl_msgs, msg,
  PolygonMesh)();

#ifdef __cplusplus
}
#endif


#endif  // PCL_MSGS__MSG__POLYGON_MESH__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
