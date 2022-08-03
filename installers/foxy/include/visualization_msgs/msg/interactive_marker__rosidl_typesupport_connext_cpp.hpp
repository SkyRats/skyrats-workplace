// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from visualization_msgs:msg/InteractiveMarker.idl
// generated code does not contain a copyright notice


#ifndef VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "visualization_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "visualization_msgs/msg/detail/interactive_marker__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "visualization_msgs/msg/dds_connext/InteractiveMarker_Support.h"
#include "visualization_msgs/msg/dds_connext/InteractiveMarker_Plugin.h"
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


namespace visualization_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__InteractiveMarker();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_visualization_msgs
convert_ros_message_to_dds(
  const visualization_msgs::msg::InteractiveMarker & ros_message,
  visualization_msgs::msg::dds_::InteractiveMarker_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_visualization_msgs
convert_dds_message_to_ros(
  const visualization_msgs::msg::dds_::InteractiveMarker_ & dds_message,
  visualization_msgs::msg::InteractiveMarker & ros_message);

bool
to_cdr_stream__InteractiveMarker(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__InteractiveMarker(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace visualization_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_visualization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  visualization_msgs, msg,
  InteractiveMarker)();

#ifdef __cplusplus
}
#endif


#endif  // VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
