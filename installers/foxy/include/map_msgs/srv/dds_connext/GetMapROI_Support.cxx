
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetMapROI_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "GetMapROI_Support.h"
#include "GetMapROI_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace map_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'GetMapROI_Request_' support classes.

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
            #define TTYPENAME   GetMapROI_Request_TYPENAME

            /* Defines */
            #define TDataWriter GetMapROI_Request_DataWriter
            #define TData       map_msgs::srv::dds_::GetMapROI_Request_

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
            #define TTYPENAME   GetMapROI_Request_TYPENAME

            /* Defines */
            #define TDataReader GetMapROI_Request_DataReader
            #define TDataSeq    GetMapROI_Request_Seq
            #define TData       map_msgs::srv::dds_::GetMapROI_Request_

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
            #define TTYPENAME    GetMapROI_Request_TYPENAME
            #define TPlugin_new  map_msgs::srv::dds_::GetMapROI_Request_Plugin_new
            #define TPlugin_delete  map_msgs::srv::dds_::GetMapROI_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport GetMapROI_Request_TypeSupport
            #define TData        map_msgs::srv::dds_::GetMapROI_Request_
            #define TDataReader  GetMapROI_Request_DataReader
            #define TDataWriter  GetMapROI_Request_DataWriter
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
} /* namespace map_msgs  */
namespace map_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'GetMapROI_Response_' support classes.

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
            #define TTYPENAME   GetMapROI_Response_TYPENAME

            /* Defines */
            #define TDataWriter GetMapROI_Response_DataWriter
            #define TData       map_msgs::srv::dds_::GetMapROI_Response_

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
            #define TTYPENAME   GetMapROI_Response_TYPENAME

            /* Defines */
            #define TDataReader GetMapROI_Response_DataReader
            #define TDataSeq    GetMapROI_Response_Seq
            #define TData       map_msgs::srv::dds_::GetMapROI_Response_

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
            #define TTYPENAME    GetMapROI_Response_TYPENAME
            #define TPlugin_new  map_msgs::srv::dds_::GetMapROI_Response_Plugin_new
            #define TPlugin_delete  map_msgs::srv::dds_::GetMapROI_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport GetMapROI_Response_TypeSupport
            #define TData        map_msgs::srv::dds_::GetMapROI_Response_
            #define TDataReader  GetMapROI_Response_DataReader
            #define TDataWriter  GetMapROI_Response_DataWriter
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
} /* namespace map_msgs  */

