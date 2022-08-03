// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from theora_image_transport:msg/Packet.idl
// generated code does not contain a copyright notice


#ifndef THEORA_IMAGE_TRANSPORT__MSG__PACKET__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define THEORA_IMAGE_TRANSPORT__MSG__PACKET__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "theora_image_transport/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "theora_image_transport/msg/detail/packet__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "theora_image_transport/msg/dds_connext/Packet_Support.h"
#include "theora_image_transport/msg/dds_connext/Packet_Plugin.h"
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


namespace theora_image_transport
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Packet();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_theora_image_transport
convert_ros_message_to_dds(
  const theora_image_transport::msg::Packet & ros_message,
  theora_image_transport::msg::dds_::Packet_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_theora_image_transport
convert_dds_message_to_ros(
  const theora_image_transport::msg::dds_::Packet_ & dds_message,
  theora_image_transport::msg::Packet & ros_message);

bool
to_cdr_stream__Packet(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Packet(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace theora_image_transport


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_theora_image_transport
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  theora_image_transport, msg,
  Packet)();

#ifdef __cplusplus
}
#endif


#endif  // THEORA_IMAGE_TRANSPORT__MSG__PACKET__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
