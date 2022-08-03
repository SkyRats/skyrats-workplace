// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from rmw_dds_common:msg/NodeEntitiesInfo.idl
// generated code does not contain a copyright notice


#ifndef RMW_DDS_COMMON__MSG__NODE_ENTITIES_INFO__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define RMW_DDS_COMMON__MSG__NODE_ENTITIES_INFO__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rmw_dds_common/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "rmw_dds_common/msg/detail/node_entities_info__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "rmw_dds_common/msg/dds_connext/NodeEntitiesInfo_Support.h"
#include "rmw_dds_common/msg/dds_connext/NodeEntitiesInfo_Plugin.h"
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


namespace rmw_dds_common
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__NodeEntitiesInfo();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_rmw_dds_common
convert_ros_message_to_dds(
  const rmw_dds_common::msg::NodeEntitiesInfo & ros_message,
  rmw_dds_common::msg::dds_::NodeEntitiesInfo_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_rmw_dds_common
convert_dds_message_to_ros(
  const rmw_dds_common::msg::dds_::NodeEntitiesInfo_ & dds_message,
  rmw_dds_common::msg::NodeEntitiesInfo & ros_message);

bool
to_cdr_stream__NodeEntitiesInfo(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__NodeEntitiesInfo(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace rmw_dds_common


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_rmw_dds_common
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  rmw_dds_common, msg,
  NodeEntitiesInfo)();

#ifdef __cplusplus
}
#endif


#endif  // RMW_DDS_COMMON__MSG__NODE_ENTITIES_INFO__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
