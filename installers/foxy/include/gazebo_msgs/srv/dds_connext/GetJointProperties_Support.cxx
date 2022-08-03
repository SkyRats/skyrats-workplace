
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetJointProperties_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "GetJointProperties_Support.h"
#include "GetJointProperties_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'GetJointProperties_Request_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   GetJointProperties_Request_TYPENAME

            /* Defines */
            #define TDataWriter GetJointProperties_Request_DataWriter
            #define TData       gazebo_msgs::srv::dds_::GetJointProperties_Request_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   GetJointProperties_Request_TYPENAME

            /* Defines */
            #define TDataReader GetJointProperties_Request_DataReader
            #define TDataSeq    GetJointProperties_Request_Seq
            #define TData       gazebo_msgs::srv::dds_::GetJointProperties_Request_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    GetJointProperties_Request_TYPENAME
            #define TPlugin_new  gazebo_msgs::srv::dds_::GetJointProperties_Request_Plugin_new
            #define TPlugin_delete  gazebo_msgs::srv::dds_::GetJointProperties_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport GetJointProperties_Request_TypeSupport
            #define TData        gazebo_msgs::srv::dds_::GetJointProperties_Request_
            #define TDataReader  GetJointProperties_Request_DataReader
            #define TDataWriter  GetJointProperties_Request_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {
            namespace GetJointProperties_Response_Constants {
            } /* namespace GetJointProperties_Response_Constants  */

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'GetJointProperties_Response_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   GetJointProperties_Response_TYPENAME

            /* Defines */
            #define TDataWriter GetJointProperties_Response_DataWriter
            #define TData       gazebo_msgs::srv::dds_::GetJointProperties_Response_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   GetJointProperties_Response_TYPENAME

            /* Defines */
            #define TDataReader GetJointProperties_Response_DataReader
            #define TDataSeq    GetJointProperties_Response_Seq
            #define TData       gazebo_msgs::srv::dds_::GetJointProperties_Response_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    GetJointProperties_Response_TYPENAME
            #define TPlugin_new  gazebo_msgs::srv::dds_::GetJointProperties_Response_Plugin_new
            #define TPlugin_delete  gazebo_msgs::srv::dds_::GetJointProperties_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport GetJointProperties_Response_TypeSupport
            #define TData        gazebo_msgs::srv::dds_::GetJointProperties_Response_
            #define TDataReader  GetJointProperties_Response_DataReader
            #define TDataWriter  GetJointProperties_Response_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

