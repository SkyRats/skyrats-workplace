
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InteractiveMarkerControl_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "InteractiveMarkerControl_Support.h"
#include "InteractiveMarkerControl_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace visualization_msgs {
    namespace msg {
        namespace dds_ {
            namespace InteractiveMarkerControl_Constants {
            } /* namespace InteractiveMarkerControl_Constants  */

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'InteractiveMarkerControl_' support classes.

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
            #define TTYPENAME   InteractiveMarkerControl_TYPENAME

            /* Defines */
            #define TDataWriter InteractiveMarkerControl_DataWriter
            #define TData       visualization_msgs::msg::dds_::InteractiveMarkerControl_

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
            #define TTYPENAME   InteractiveMarkerControl_TYPENAME

            /* Defines */
            #define TDataReader InteractiveMarkerControl_DataReader
            #define TDataSeq    InteractiveMarkerControl_Seq
            #define TData       visualization_msgs::msg::dds_::InteractiveMarkerControl_

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
            #define TTYPENAME    InteractiveMarkerControl_TYPENAME
            #define TPlugin_new  visualization_msgs::msg::dds_::InteractiveMarkerControl_Plugin_new
            #define TPlugin_delete  visualization_msgs::msg::dds_::InteractiveMarkerControl_Plugin_delete

            /* Defines */
            #define TTypeSupport InteractiveMarkerControl_TypeSupport
            #define TData        visualization_msgs::msg::dds_::InteractiveMarkerControl_
            #define TDataReader  InteractiveMarkerControl_DataReader
            #define TDataWriter  InteractiveMarkerControl_DataWriter
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
} /* namespace visualization_msgs  */

