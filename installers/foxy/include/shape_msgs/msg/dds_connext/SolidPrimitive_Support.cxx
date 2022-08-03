
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SolidPrimitive_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "SolidPrimitive_Support.h"
#include "SolidPrimitive_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace shape_msgs {
    namespace msg {
        namespace dds_ {
            namespace SolidPrimitive_Constants {
            } /* namespace SolidPrimitive_Constants  */

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'SolidPrimitive_' support classes.

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
            #define TTYPENAME   SolidPrimitive_TYPENAME

            /* Defines */
            #define TDataWriter SolidPrimitive_DataWriter
            #define TData       shape_msgs::msg::dds_::SolidPrimitive_

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
            #define TTYPENAME   SolidPrimitive_TYPENAME

            /* Defines */
            #define TDataReader SolidPrimitive_DataReader
            #define TDataSeq    SolidPrimitive_Seq
            #define TData       shape_msgs::msg::dds_::SolidPrimitive_

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
            #define TTYPENAME    SolidPrimitive_TYPENAME
            #define TPlugin_new  shape_msgs::msg::dds_::SolidPrimitive_Plugin_new
            #define TPlugin_delete  shape_msgs::msg::dds_::SolidPrimitive_Plugin_delete

            /* Defines */
            #define TTypeSupport SolidPrimitive_TypeSupport
            #define TData        shape_msgs::msg::dds_::SolidPrimitive_
            #define TDataReader  SolidPrimitive_DataReader
            #define TDataWriter  SolidPrimitive_DataWriter
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
} /* namespace shape_msgs  */

