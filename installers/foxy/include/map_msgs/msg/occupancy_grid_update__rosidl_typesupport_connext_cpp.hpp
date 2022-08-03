// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from map_msgs:msg/OccupancyGridUpdate.idl
// generated code does not contain a copyright notice


#ifndef MAP_MSGS__MSG__OCCUPANCY_GRID_UPDATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define MAP_MSGS__MSG__OCCUPANCY_GRID_UPDATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "map_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "map_msgs/msg/detail/occupancy_grid_update__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "map_msgs/msg/dds_connext/OccupancyGridUpdate_Support.h"
#include "map_msgs/msg/dds_connext/OccupancyGridUpdate_Plugin.h"
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


namespace map_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__OccupancyGridUpdate();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_map_msgs
convert_ros_message_to_dds(
  const map_msgs::msg::OccupancyGridUpdate & ros_message,
  map_msgs::msg::dds_::OccupancyGridUpdate_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_map_msgs
convert_dds_message_to_ros(
  const map_msgs::msg::dds_::OccupancyGridUpdate_ & dds_message,
  map_msgs::msg::OccupancyGridUpdate & ros_message);

bool
to_cdr_stream__OccupancyGridUpdate(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__OccupancyGridUpdate(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace map_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_map_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  map_msgs, msg,
  OccupancyGridUpdate)();

#ifdef __cplusplus
}
#endif


#endif  // MAP_MSGS__MSG__OCCUPANCY_GRID_UPDATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
