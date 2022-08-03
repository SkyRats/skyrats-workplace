
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetAvailableStates_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "GetAvailableStates_Support.h"
#include "GetAvailableStates_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace lifecycle_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'GetAvailableStates_Request_' support classes.

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
            #define TTYPENAME   GetAvailableStates_Request_TYPENAME

            /* Defines */
            #define TDataWriter GetAvailableStates_Request_DataWriter
            #define TData       lifecycle_msgs::srv::dds_::GetAvailableStates_Request_

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
            #define TTYPENAME   GetAvailableStates_Request_TYPENAME

            /* Defines */
            #define TDataReader GetAvailableStates_Request_DataReader
            #define TDataSeq    GetAvailableStates_Request_Seq
            #define TData       lifecycle_msgs::srv::dds_::GetAvailableStates_Request_

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
            #define TTYPENAME    GetAvailableStates_Request_TYPENAME
            #define TPlugin_new  lifecycle_msgs::srv::dds_::GetAvailableStates_Request_Plugin_new
            #define TPlugin_delete  lifecycle_msgs::srv::dds_::GetAvailableStates_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport GetAvailableStates_Request_TypeSupport
            #define TData        lifecycle_msgs::srv::dds_::GetAvailableStates_Request_
            #define TDataReader  GetAvailableStates_Request_DataReader
            #define TDataWriter  GetAvailableStates_Request_DataWriter
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
} /* namespace lifecycle_msgs  */
namespace lifecycle_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'GetAvailableStates_Response_' support classes.

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
            #define TTYPENAME   GetAvailableStates_Response_TYPENAME

            /* Defines */
            #define TDataWriter GetAvailableStates_Response_DataWriter
            #define TData       lifecycle_msgs::srv::dds_::GetAvailableStates_Response_

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
            #define TTYPENAME   GetAvailableStates_Response_TYPENAME

            /* Defines */
            #define TDataReader GetAvailableStates_Response_DataReader
            #define TDataSeq    GetAvailableStates_Response_Seq
            #define TData       lifecycle_msgs::srv::dds_::GetAvailableStates_Response_

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
            #define TTYPENAME    GetAvailableStates_Response_TYPENAME
            #define TPlugin_new  lifecycle_msgs::srv::dds_::GetAvailableStates_Response_Plugin_new
            #define TPlugin_delete  lifecycle_msgs::srv::dds_::GetAvailableStates_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport GetAvailableStates_Response_TypeSupport
            #define TData        lifecycle_msgs::srv::dds_::GetAvailableStates_Response_
            #define TDataReader  GetAvailableStates_Response_DataReader
            #define TDataWriter  GetAvailableStates_Response_DataWriter
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
} /* namespace lifecycle_msgs  */

