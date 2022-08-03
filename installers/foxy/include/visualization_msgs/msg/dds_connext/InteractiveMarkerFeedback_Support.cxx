
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InteractiveMarkerFeedback_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "InteractiveMarkerFeedback_Support.h"
#include "InteractiveMarkerFeedback_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace visualization_msgs {
    namespace msg {
        namespace dds_ {
            namespace InteractiveMarkerFeedback_Constants {
            } /* namespace InteractiveMarkerFeedback_Constants  */

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'InteractiveMarkerFeedback_' support classes.

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
            #define TTYPENAME   InteractiveMarkerFeedback_TYPENAME

            /* Defines */
            #define TDataWriter InteractiveMarkerFeedback_DataWriter
            #define TData       visualization_msgs::msg::dds_::InteractiveMarkerFeedback_

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
            #define TTYPENAME   InteractiveMarkerFeedback_TYPENAME

            /* Defines */
            #define TDataReader InteractiveMarkerFeedback_DataReader
            #define TDataSeq    InteractiveMarkerFeedback_Seq
            #define TData       visualization_msgs::msg::dds_::InteractiveMarkerFeedback_

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
            #define TTYPENAME    InteractiveMarkerFeedback_TYPENAME
            #define TPlugin_new  visualization_msgs::msg::dds_::InteractiveMarkerFeedback_Plugin_new
            #define TPlugin_delete  visualization_msgs::msg::dds_::InteractiveMarkerFeedback_Plugin_delete

            /* Defines */
            #define TTypeSupport InteractiveMarkerFeedback_TypeSupport
            #define TData        visualization_msgs::msg::dds_::InteractiveMarkerFeedback_
            #define TDataReader  InteractiveMarkerFeedback_DataReader
            #define TDataWriter  InteractiveMarkerFeedback_DataWriter
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

