
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointCloud2Update_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "PointCloud2Update_Support.h"
#include "PointCloud2Update_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace map_msgs {
    namespace msg {
        namespace dds_ {
            namespace PointCloud2Update_Constants {
            } /* namespace PointCloud2Update_Constants  */

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'PointCloud2Update_' support classes.

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
            #define TTYPENAME   PointCloud2Update_TYPENAME

            /* Defines */
            #define TDataWriter PointCloud2Update_DataWriter
            #define TData       map_msgs::msg::dds_::PointCloud2Update_

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
            #define TTYPENAME   PointCloud2Update_TYPENAME

            /* Defines */
            #define TDataReader PointCloud2Update_DataReader
            #define TDataSeq    PointCloud2Update_Seq
            #define TData       map_msgs::msg::dds_::PointCloud2Update_

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
            #define TTYPENAME    PointCloud2Update_TYPENAME
            #define TPlugin_new  map_msgs::msg::dds_::PointCloud2Update_Plugin_new
            #define TPlugin_delete  map_msgs::msg::dds_::PointCloud2Update_Plugin_delete

            /* Defines */
            #define TTypeSupport PointCloud2Update_TypeSupport
            #define TData        map_msgs::msg::dds_::PointCloud2Update_
            #define TDataReader  PointCloud2Update_DataReader
            #define TDataWriter  PointCloud2Update_DataWriter
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
} /* namespace map_msgs  */

