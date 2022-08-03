
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DiagnosticStatus_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "DiagnosticStatus_Support.h"
#include "DiagnosticStatus_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace diagnostic_msgs {
    namespace msg {
        namespace dds_ {
            namespace DiagnosticStatus_Constants {
            } /* namespace DiagnosticStatus_Constants  */

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'DiagnosticStatus_' support classes.

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
            #define TTYPENAME   DiagnosticStatus_TYPENAME

            /* Defines */
            #define TDataWriter DiagnosticStatus_DataWriter
            #define TData       diagnostic_msgs::msg::dds_::DiagnosticStatus_

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
            #define TTYPENAME   DiagnosticStatus_TYPENAME

            /* Defines */
            #define TDataReader DiagnosticStatus_DataReader
            #define TDataSeq    DiagnosticStatus_Seq
            #define TData       diagnostic_msgs::msg::dds_::DiagnosticStatus_

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
            #define TTYPENAME    DiagnosticStatus_TYPENAME
            #define TPlugin_new  diagnostic_msgs::msg::dds_::DiagnosticStatus_Plugin_new
            #define TPlugin_delete  diagnostic_msgs::msg::dds_::DiagnosticStatus_Plugin_delete

            /* Defines */
            #define TTypeSupport DiagnosticStatus_TypeSupport
            #define TData        diagnostic_msgs::msg::dds_::DiagnosticStatus_
            #define TDataReader  DiagnosticStatus_DataReader
            #define TDataWriter  DiagnosticStatus_DataWriter
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
    } /* namespace msg  */
} /* namespace diagnostic_msgs  */

