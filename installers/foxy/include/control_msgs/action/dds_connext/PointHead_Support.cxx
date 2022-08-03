
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointHead_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "PointHead_Support.h"
#include "PointHead_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'PointHead_Goal_' support classes.

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
            #define TTYPENAME   PointHead_Goal_TYPENAME

            /* Defines */
            #define TDataWriter PointHead_Goal_DataWriter
            #define TData       control_msgs::action::dds_::PointHead_Goal_

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
            #define TTYPENAME   PointHead_Goal_TYPENAME

            /* Defines */
            #define TDataReader PointHead_Goal_DataReader
            #define TDataSeq    PointHead_Goal_Seq
            #define TData       control_msgs::action::dds_::PointHead_Goal_

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
            #define TTYPENAME    PointHead_Goal_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::PointHead_Goal_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::PointHead_Goal_Plugin_delete

            /* Defines */
            #define TTypeSupport PointHead_Goal_TypeSupport
            #define TData        control_msgs::action::dds_::PointHead_Goal_
            #define TDataReader  PointHead_Goal_DataReader
            #define TDataWriter  PointHead_Goal_DataWriter
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
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'PointHead_SendGoal_Request_' support classes.

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
            #define TTYPENAME   PointHead_SendGoal_Request_TYPENAME

            /* Defines */
            #define TDataWriter PointHead_SendGoal_Request_DataWriter
            #define TData       control_msgs::action::dds_::PointHead_SendGoal_Request_

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
            #define TTYPENAME   PointHead_SendGoal_Request_TYPENAME

            /* Defines */
            #define TDataReader PointHead_SendGoal_Request_DataReader
            #define TDataSeq    PointHead_SendGoal_Request_Seq
            #define TData       control_msgs::action::dds_::PointHead_SendGoal_Request_

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
            #define TTYPENAME    PointHead_SendGoal_Request_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::PointHead_SendGoal_Request_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::PointHead_SendGoal_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport PointHead_SendGoal_Request_TypeSupport
            #define TData        control_msgs::action::dds_::PointHead_SendGoal_Request_
            #define TDataReader  PointHead_SendGoal_Request_DataReader
            #define TDataWriter  PointHead_SendGoal_Request_DataWriter
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
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'PointHead_SendGoal_Response_' support classes.

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
            #define TTYPENAME   PointHead_SendGoal_Response_TYPENAME

            /* Defines */
            #define TDataWriter PointHead_SendGoal_Response_DataWriter
            #define TData       control_msgs::action::dds_::PointHead_SendGoal_Response_

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
            #define TTYPENAME   PointHead_SendGoal_Response_TYPENAME

            /* Defines */
            #define TDataReader PointHead_SendGoal_Response_DataReader
            #define TDataSeq    PointHead_SendGoal_Response_Seq
            #define TData       control_msgs::action::dds_::PointHead_SendGoal_Response_

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
            #define TTYPENAME    PointHead_SendGoal_Response_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::PointHead_SendGoal_Response_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::PointHead_SendGoal_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport PointHead_SendGoal_Response_TypeSupport
            #define TData        control_msgs::action::dds_::PointHead_SendGoal_Response_
            #define TDataReader  PointHead_SendGoal_Response_DataReader
            #define TDataWriter  PointHead_SendGoal_Response_DataWriter
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
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'PointHead_Result_' support classes.

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
            #define TTYPENAME   PointHead_Result_TYPENAME

            /* Defines */
            #define TDataWriter PointHead_Result_DataWriter
            #define TData       control_msgs::action::dds_::PointHead_Result_

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
            #define TTYPENAME   PointHead_Result_TYPENAME

            /* Defines */
            #define TDataReader PointHead_Result_DataReader
            #define TDataSeq    PointHead_Result_Seq
            #define TData       control_msgs::action::dds_::PointHead_Result_

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
            #define TTYPENAME    PointHead_Result_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::PointHead_Result_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::PointHead_Result_Plugin_delete

            /* Defines */
            #define TTypeSupport PointHead_Result_TypeSupport
            #define TData        control_msgs::action::dds_::PointHead_Result_
            #define TDataReader  PointHead_Result_DataReader
            #define TDataWriter  PointHead_Result_DataWriter
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
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'PointHead_GetResult_Request_' support classes.

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
            #define TTYPENAME   PointHead_GetResult_Request_TYPENAME

            /* Defines */
            #define TDataWriter PointHead_GetResult_Request_DataWriter
            #define TData       control_msgs::action::dds_::PointHead_GetResult_Request_

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
            #define TTYPENAME   PointHead_GetResult_Request_TYPENAME

            /* Defines */
            #define TDataReader PointHead_GetResult_Request_DataReader
            #define TDataSeq    PointHead_GetResult_Request_Seq
            #define TData       control_msgs::action::dds_::PointHead_GetResult_Request_

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
            #define TTYPENAME    PointHead_GetResult_Request_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::PointHead_GetResult_Request_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::PointHead_GetResult_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport PointHead_GetResult_Request_TypeSupport
            #define TData        control_msgs::action::dds_::PointHead_GetResult_Request_
            #define TDataReader  PointHead_GetResult_Request_DataReader
            #define TDataWriter  PointHead_GetResult_Request_DataWriter
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
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'PointHead_GetResult_Response_' support classes.

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
            #define TTYPENAME   PointHead_GetResult_Response_TYPENAME

            /* Defines */
            #define TDataWriter PointHead_GetResult_Response_DataWriter
            #define TData       control_msgs::action::dds_::PointHead_GetResult_Response_

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
            #define TTYPENAME   PointHead_GetResult_Response_TYPENAME

            /* Defines */
            #define TDataReader PointHead_GetResult_Response_DataReader
            #define TDataSeq    PointHead_GetResult_Response_Seq
            #define TData       control_msgs::action::dds_::PointHead_GetResult_Response_

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
            #define TTYPENAME    PointHead_GetResult_Response_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::PointHead_GetResult_Response_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::PointHead_GetResult_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport PointHead_GetResult_Response_TypeSupport
            #define TData        control_msgs::action::dds_::PointHead_GetResult_Response_
            #define TDataReader  PointHead_GetResult_Response_DataReader
            #define TDataWriter  PointHead_GetResult_Response_DataWriter
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
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'PointHead_Feedback_' support classes.

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
            #define TTYPENAME   PointHead_Feedback_TYPENAME

            /* Defines */
            #define TDataWriter PointHead_Feedback_DataWriter
            #define TData       control_msgs::action::dds_::PointHead_Feedback_

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
            #define TTYPENAME   PointHead_Feedback_TYPENAME

            /* Defines */
            #define TDataReader PointHead_Feedback_DataReader
            #define TDataSeq    PointHead_Feedback_Seq
            #define TData       control_msgs::action::dds_::PointHead_Feedback_

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
            #define TTYPENAME    PointHead_Feedback_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::PointHead_Feedback_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::PointHead_Feedback_Plugin_delete

            /* Defines */
            #define TTypeSupport PointHead_Feedback_TypeSupport
            #define TData        control_msgs::action::dds_::PointHead_Feedback_
            #define TDataReader  PointHead_Feedback_DataReader
            #define TDataWriter  PointHead_Feedback_DataWriter
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
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'PointHead_FeedbackMessage_' support classes.

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
            #define TTYPENAME   PointHead_FeedbackMessage_TYPENAME

            /* Defines */
            #define TDataWriter PointHead_FeedbackMessage_DataWriter
            #define TData       control_msgs::action::dds_::PointHead_FeedbackMessage_

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
            #define TTYPENAME   PointHead_FeedbackMessage_TYPENAME

            /* Defines */
            #define TDataReader PointHead_FeedbackMessage_DataReader
            #define TDataSeq    PointHead_FeedbackMessage_Seq
            #define TData       control_msgs::action::dds_::PointHead_FeedbackMessage_

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
            #define TTYPENAME    PointHead_FeedbackMessage_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::PointHead_FeedbackMessage_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::PointHead_FeedbackMessage_Plugin_delete

            /* Defines */
            #define TTypeSupport PointHead_FeedbackMessage_TypeSupport
            #define TData        control_msgs::action::dds_::PointHead_FeedbackMessage_
            #define TDataReader  PointHead_FeedbackMessage_DataReader
            #define TDataWriter  PointHead_FeedbackMessage_DataWriter
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
    } /* namespace action  */
} /* namespace control_msgs  */

