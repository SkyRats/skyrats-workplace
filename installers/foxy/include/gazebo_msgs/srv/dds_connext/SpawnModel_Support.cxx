
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpawnModel_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "SpawnModel_Support.h"
#include "SpawnModel_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'SpawnModel_Request_' support classes.

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
            #define TTYPENAME   SpawnModel_Request_TYPENAME

            /* Defines */
            #define TDataWriter SpawnModel_Request_DataWriter
            #define TData       gazebo_msgs::srv::dds_::SpawnModel_Request_

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
            #define TTYPENAME   SpawnModel_Request_TYPENAME

            /* Defines */
            #define TDataReader SpawnModel_Request_DataReader
            #define TDataSeq    SpawnModel_Request_Seq
            #define TData       gazebo_msgs::srv::dds_::SpawnModel_Request_

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
            #define TTYPENAME    SpawnModel_Request_TYPENAME
            #define TPlugin_new  gazebo_msgs::srv::dds_::SpawnModel_Request_Plugin_new
            #define TPlugin_delete  gazebo_msgs::srv::dds_::SpawnModel_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport SpawnModel_Request_TypeSupport
            #define TData        gazebo_msgs::srv::dds_::SpawnModel_Request_
            #define TDataReader  SpawnModel_Request_DataReader
            #define TDataWriter  SpawnModel_Request_DataWriter
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
} /* namespace gazebo_msgs  */
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'SpawnModel_Response_' support classes.

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
            #define TTYPENAME   SpawnModel_Response_TYPENAME

            /* Defines */
            #define TDataWriter SpawnModel_Response_DataWriter
            #define TData       gazebo_msgs::srv::dds_::SpawnModel_Response_

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
            #define TTYPENAME   SpawnModel_Response_TYPENAME

            /* Defines */
            #define TDataReader SpawnModel_Response_DataReader
            #define TDataSeq    SpawnModel_Response_Seq
            #define TData       gazebo_msgs::srv::dds_::SpawnModel_Response_

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
            #define TTYPENAME    SpawnModel_Response_TYPENAME
            #define TPlugin_new  gazebo_msgs::srv::dds_::SpawnModel_Response_Plugin_new
            #define TPlugin_delete  gazebo_msgs::srv::dds_::SpawnModel_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport SpawnModel_Response_TypeSupport
            #define TData        gazebo_msgs::srv::dds_::SpawnModel_Response_
            #define TDataReader  SpawnModel_Response_DataReader
            #define TDataWriter  SpawnModel_Response_DataWriter
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
} /* namespace gazebo_msgs  */

