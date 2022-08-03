
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AddDiagnostics_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "AddDiagnostics_Support.h"
#include "AddDiagnostics_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace diagnostic_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'AddDiagnostics_Request_' support classes.

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
            #define TTYPENAME   AddDiagnostics_Request_TYPENAME

            /* Defines */
            #define TDataWriter AddDiagnostics_Request_DataWriter
            #define TData       diagnostic_msgs::srv::dds_::AddDiagnostics_Request_

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
            #define TTYPENAME   AddDiagnostics_Request_TYPENAME

            /* Defines */
            #define TDataReader AddDiagnostics_Request_DataReader
            #define TDataSeq    AddDiagnostics_Request_Seq
            #define TData       diagnostic_msgs::srv::dds_::AddDiagnostics_Request_

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
            #define TTYPENAME    AddDiagnostics_Request_TYPENAME
            #define TPlugin_new  diagnostic_msgs::srv::dds_::AddDiagnostics_Request_Plugin_new
            #define TPlugin_delete  diagnostic_msgs::srv::dds_::AddDiagnostics_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport AddDiagnostics_Request_TypeSupport
            #define TData        diagnostic_msgs::srv::dds_::AddDiagnostics_Request_
            #define TDataReader  AddDiagnostics_Request_DataReader
            #define TDataWriter  AddDiagnostics_Request_DataWriter
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
} /* namespace diagnostic_msgs  */
namespace diagnostic_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'AddDiagnostics_Response_' support classes.

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
            #define TTYPENAME   AddDiagnostics_Response_TYPENAME

            /* Defines */
            #define TDataWriter AddDiagnostics_Response_DataWriter
            #define TData       diagnostic_msgs::srv::dds_::AddDiagnostics_Response_

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
            #define TTYPENAME   AddDiagnostics_Response_TYPENAME

            /* Defines */
            #define TDataReader AddDiagnostics_Response_DataReader
            #define TDataSeq    AddDiagnostics_Response_Seq
            #define TData       diagnostic_msgs::srv::dds_::AddDiagnostics_Response_

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
            #define TTYPENAME    AddDiagnostics_Response_TYPENAME
            #define TPlugin_new  diagnostic_msgs::srv::dds_::AddDiagnostics_Response_Plugin_new
            #define TPlugin_delete  diagnostic_msgs::srv::dds_::AddDiagnostics_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport AddDiagnostics_Response_TypeSupport
            #define TData        diagnostic_msgs::srv::dds_::AddDiagnostics_Response_
            #define TDataReader  AddDiagnostics_Response_DataReader
            #define TDataWriter  AddDiagnostics_Response_DataWriter
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
} /* namespace diagnostic_msgs  */

