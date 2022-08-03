// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from control_msgs:srv/QueryCalibrationState.idl
// generated code does not contain a copyright notice


#ifndef CONTROL_MSGS__SRV__QUERY_CALIBRATION_STATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define CONTROL_MSGS__SRV__QUERY_CALIBRATION_STATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "control_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "control_msgs/srv/detail/query_calibration_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "control_msgs/srv/dds_connext/QueryCalibrationState_Support.h"
#include "control_msgs/srv/dds_connext/QueryCalibrationState_Plugin.h"
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


namespace control_msgs
{

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__QueryCalibrationState_Request();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
convert_ros_message_to_dds(
  const control_msgs::srv::QueryCalibrationState_Request & ros_message,
  control_msgs::srv::dds_::QueryCalibrationState_Request_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
convert_dds_message_to_ros(
  const control_msgs::srv::dds_::QueryCalibrationState_Request_ & dds_message,
  control_msgs::srv::QueryCalibrationState_Request & ros_message);

bool
to_cdr_stream__QueryCalibrationState_Request(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__QueryCalibrationState_Request(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace control_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  control_msgs, srv,
  QueryCalibrationState_Request)();

#ifdef __cplusplus
}
#endif


// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "control_msgs/srv/detail/query_calibration_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "control_msgs/srv/dds_connext/QueryCalibrationState_Support.h"
// already included above
// #include "control_msgs/srv/dds_connext/QueryCalibrationState_Plugin.h"
// already included above
// #include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace control_msgs
{

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__QueryCalibrationState_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
convert_ros_message_to_dds(
  const control_msgs::srv::QueryCalibrationState_Response & ros_message,
  control_msgs::srv::dds_::QueryCalibrationState_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
convert_dds_message_to_ros(
  const control_msgs::srv::dds_::QueryCalibrationState_Response_ & dds_message,
  control_msgs::srv::QueryCalibrationState_Response & ros_message);

bool
to_cdr_stream__QueryCalibrationState_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__QueryCalibrationState_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace control_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  control_msgs, srv,
  QueryCalibrationState_Response)();

#ifdef __cplusplus
}
#endif


#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace control_msgs
{
namespace srv
{
namespace typesupport_connext_cpp
{

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
void *
create_requester__QueryCalibrationState(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
const char *
destroy_requester__QueryCalibrationState(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
int64_t
send_request__QueryCalibrationState(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
void *
create_replier__QueryCalibrationState(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
const char *
destroy_replier__QueryCalibrationState(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
bool
take_request__QueryCalibrationState(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
bool
take_response__QueryCalibrationState(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
bool
send_response__QueryCalibrationState(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
void *
get_request_datawriter__QueryCalibrationState(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
void *
get_reply_datareader__QueryCalibrationState(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
void *
get_request_datareader__QueryCalibrationState(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
void *
get_reply_datawriter__QueryCalibrationState(void * untyped_replier);

}  // namespace typesupport_connext_cpp
}  // namespace srv
}  // namespace control_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  control_msgs, srv,
  QueryCalibrationState)();

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__SRV__QUERY_CALIBRATION_STATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
