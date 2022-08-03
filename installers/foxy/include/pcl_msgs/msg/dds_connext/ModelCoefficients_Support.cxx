
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ModelCoefficients_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "ModelCoefficients_Support.h"
#include "ModelCoefficients_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace pcl_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'ModelCoefficients_' support classes.

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
            #define TTYPENAME   ModelCoefficients_TYPENAME

            /* Defines */
            #define TDataWriter ModelCoefficients_DataWriter
            #define TData       pcl_msgs::msg::dds_::ModelCoefficients_

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
            #define TTYPENAME   ModelCoefficients_TYPENAME

            /* Defines */
            #define TDataReader ModelCoefficients_DataReader
            #define TDataSeq    ModelCoefficients_Seq
            #define TData       pcl_msgs::msg::dds_::ModelCoefficients_

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
            #define TTYPENAME    ModelCoefficients_TYPENAME
            #define TPlugin_new  pcl_msgs::msg::dds_::ModelCoefficients_Plugin_new
            #define TPlugin_delete  pcl_msgs::msg::dds_::ModelCoefficients_Plugin_delete

            /* Defines */
            #define TTypeSupport ModelCoefficients_TypeSupport
            #define TData        pcl_msgs::msg::dds_::ModelCoefficients_
            #define TDataReader  ModelCoefficients_DataReader
            #define TDataWriter  ModelCoefficients_DataWriter
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
} /* namespace pcl_msgs  */

