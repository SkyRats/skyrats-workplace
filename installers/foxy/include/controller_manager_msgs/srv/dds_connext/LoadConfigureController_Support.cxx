
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LoadConfigureController_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "LoadConfigureController_Support.h"
#include "LoadConfigureController_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace controller_manager_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'LoadConfigureController_Request_' support classes.

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
            #define TTYPENAME   LoadConfigureController_Request_TYPENAME

            /* Defines */
            #define TDataWriter LoadConfigureController_Request_DataWriter
            #define TData       controller_manager_msgs::srv::dds_::LoadConfigureController_Request_

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
            #define TTYPENAME   LoadConfigureController_Request_TYPENAME

            /* Defines */
            #define TDataReader LoadConfigureController_Request_DataReader
            #define TDataSeq    LoadConfigureController_Request_Seq
            #define TData       controller_manager_msgs::srv::dds_::LoadConfigureController_Request_

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
            #define TTYPENAME    LoadConfigureController_Request_TYPENAME
            #define TPlugin_new  controller_manager_msgs::srv::dds_::LoadConfigureController_Request_Plugin_new
            #define TPlugin_delete  controller_manager_msgs::srv::dds_::LoadConfigureController_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport LoadConfigureController_Request_TypeSupport
            #define TData        controller_manager_msgs::srv::dds_::LoadConfigureController_Request_
            #define TDataReader  LoadConfigureController_Request_DataReader
            #define TDataWriter  LoadConfigureController_Request_DataWriter
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
} /* namespace controller_manager_msgs  */
namespace controller_manager_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'LoadConfigureController_Response_' support classes.

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
            #define TTYPENAME   LoadConfigureController_Response_TYPENAME

            /* Defines */
            #define TDataWriter LoadConfigureController_Response_DataWriter
            #define TData       controller_manager_msgs::srv::dds_::LoadConfigureController_Response_

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
            #define TTYPENAME   LoadConfigureController_Response_TYPENAME

            /* Defines */
            #define TDataReader LoadConfigureController_Response_DataReader
            #define TDataSeq    LoadConfigureController_Response_Seq
            #define TData       controller_manager_msgs::srv::dds_::LoadConfigureController_Response_

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
            #define TTYPENAME    LoadConfigureController_Response_TYPENAME
            #define TPlugin_new  controller_manager_msgs::srv::dds_::LoadConfigureController_Response_Plugin_new
            #define TPlugin_delete  controller_manager_msgs::srv::dds_::LoadConfigureController_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport LoadConfigureController_Response_TypeSupport
            #define TData        controller_manager_msgs::srv::dds_::LoadConfigureController_Response_
            #define TDataReader  LoadConfigureController_Response_DataReader
            #define TDataWriter  LoadConfigureController_Response_DataWriter
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
} /* namespace controller_manager_msgs  */

