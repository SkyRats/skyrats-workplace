
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HardwareInterface_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "HardwareInterface_Support.h"
#include "HardwareInterface_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace controller_manager_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'HardwareInterface_' support classes.

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
            #define TTYPENAME   HardwareInterface_TYPENAME

            /* Defines */
            #define TDataWriter HardwareInterface_DataWriter
            #define TData       controller_manager_msgs::msg::dds_::HardwareInterface_

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
            #define TTYPENAME   HardwareInterface_TYPENAME

            /* Defines */
            #define TDataReader HardwareInterface_DataReader
            #define TDataSeq    HardwareInterface_Seq
            #define TData       controller_manager_msgs::msg::dds_::HardwareInterface_

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
            #define TTYPENAME    HardwareInterface_TYPENAME
            #define TPlugin_new  controller_manager_msgs::msg::dds_::HardwareInterface_Plugin_new
            #define TPlugin_delete  controller_manager_msgs::msg::dds_::HardwareInterface_Plugin_delete

            /* Defines */
            #define TTypeSupport HardwareInterface_TypeSupport
            #define TData        controller_manager_msgs::msg::dds_::HardwareInterface_
            #define TDataReader  HardwareInterface_DataReader
            #define TDataWriter  HardwareInterface_DataWriter
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
} /* namespace controller_manager_msgs  */

