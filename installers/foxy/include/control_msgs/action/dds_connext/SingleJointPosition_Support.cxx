
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SingleJointPosition_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "SingleJointPosition_Support.h"
#include "SingleJointPosition_Plugin.h"

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

            Configure and implement 'SingleJointPosition_Goal_' support classes.

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
            #define TTYPENAME   SingleJointPosition_Goal_TYPENAME

            /* Defines */
            #define TDataWriter SingleJointPosition_Goal_DataWriter
            #define TData       control_msgs::action::dds_::SingleJointPosition_Goal_

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
            #define TTYPENAME   SingleJointPosition_Goal_TYPENAME

            /* Defines */
            #define TDataReader SingleJointPosition_Goal_DataReader
            #define TDataSeq    SingleJointPosition_Goal_Seq
            #define TData       control_msgs::action::dds_::SingleJointPosition_Goal_

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
            #define TTYPENAME    SingleJointPosition_Goal_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::SingleJointPosition_Goal_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::SingleJointPosition_Goal_Plugin_delete

            /* Defines */
            #define TTypeSupport SingleJointPosition_Goal_TypeSupport
            #define TData        control_msgs::action::dds_::SingleJointPosition_Goal_
            #define TDataReader  SingleJointPosition_Goal_DataReader
            #define TDataWriter  SingleJointPosition_Goal_DataWriter
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

            Configure and implement 'SingleJointPosition_SendGoal_Request_' support classes.

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
            #define TTYPENAME   SingleJointPosition_SendGoal_Request_TYPENAME

            /* Defines */
            #define TDataWriter SingleJointPosition_SendGoal_Request_DataWriter
            #define TData       control_msgs::action::dds_::SingleJointPosition_SendGoal_Request_

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
            #define TTYPENAME   SingleJointPosition_SendGoal_Request_TYPENAME

            /* Defines */
            #define TDataReader SingleJointPosition_SendGoal_Request_DataReader
            #define TDataSeq    SingleJointPosition_SendGoal_Request_Seq
            #define TData       control_msgs::action::dds_::SingleJointPosition_SendGoal_Request_

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
            #define TTYPENAME    SingleJointPosition_SendGoal_Request_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::SingleJointPosition_SendGoal_Request_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::SingleJointPosition_SendGoal_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport SingleJointPosition_SendGoal_Request_TypeSupport
            #define TData        control_msgs::action::dds_::SingleJointPosition_SendGoal_Request_
            #define TDataReader  SingleJointPosition_SendGoal_Request_DataReader
            #define TDataWriter  SingleJointPosition_SendGoal_Request_DataWriter
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

            Configure and implement 'SingleJointPosition_SendGoal_Response_' support classes.

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
            #define TTYPENAME   SingleJointPosition_SendGoal_Response_TYPENAME

            /* Defines */
            #define TDataWriter SingleJointPosition_SendGoal_Response_DataWriter
            #define TData       control_msgs::action::dds_::SingleJointPosition_SendGoal_Response_

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
            #define TTYPENAME   SingleJointPosition_SendGoal_Response_TYPENAME

            /* Defines */
            #define TDataReader SingleJointPosition_SendGoal_Response_DataReader
            #define TDataSeq    SingleJointPosition_SendGoal_Response_Seq
            #define TData       control_msgs::action::dds_::SingleJointPosition_SendGoal_Response_

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
            #define TTYPENAME    SingleJointPosition_SendGoal_Response_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::SingleJointPosition_SendGoal_Response_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::SingleJointPosition_SendGoal_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport SingleJointPosition_SendGoal_Response_TypeSupport
            #define TData        control_msgs::action::dds_::SingleJointPosition_SendGoal_Response_
            #define TDataReader  SingleJointPosition_SendGoal_Response_DataReader
            #define TDataWriter  SingleJointPosition_SendGoal_Response_DataWriter
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

            Configure and implement 'SingleJointPosition_Result_' support classes.

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
            #define TTYPENAME   SingleJointPosition_Result_TYPENAME

            /* Defines */
            #define TDataWriter SingleJointPosition_Result_DataWriter
            #define TData       control_msgs::action::dds_::SingleJointPosition_Result_

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
            #define TTYPENAME   SingleJointPosition_Result_TYPENAME

            /* Defines */
            #define TDataReader SingleJointPosition_Result_DataReader
            #define TDataSeq    SingleJointPosition_Result_Seq
            #define TData       control_msgs::action::dds_::SingleJointPosition_Result_

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
            #define TTYPENAME    SingleJointPosition_Result_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::SingleJointPosition_Result_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::SingleJointPosition_Result_Plugin_delete

            /* Defines */
            #define TTypeSupport SingleJointPosition_Result_TypeSupport
            #define TData        control_msgs::action::dds_::SingleJointPosition_Result_
            #define TDataReader  SingleJointPosition_Result_DataReader
            #define TDataWriter  SingleJointPosition_Result_DataWriter
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

            Configure and implement 'SingleJointPosition_GetResult_Request_' support classes.

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
            #define TTYPENAME   SingleJointPosition_GetResult_Request_TYPENAME

            /* Defines */
            #define TDataWriter SingleJointPosition_GetResult_Request_DataWriter
            #define TData       control_msgs::action::dds_::SingleJointPosition_GetResult_Request_

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
            #define TTYPENAME   SingleJointPosition_GetResult_Request_TYPENAME

            /* Defines */
            #define TDataReader SingleJointPosition_GetResult_Request_DataReader
            #define TDataSeq    SingleJointPosition_GetResult_Request_Seq
            #define TData       control_msgs::action::dds_::SingleJointPosition_GetResult_Request_

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
            #define TTYPENAME    SingleJointPosition_GetResult_Request_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::SingleJointPosition_GetResult_Request_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::SingleJointPosition_GetResult_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport SingleJointPosition_GetResult_Request_TypeSupport
            #define TData        control_msgs::action::dds_::SingleJointPosition_GetResult_Request_
            #define TDataReader  SingleJointPosition_GetResult_Request_DataReader
            #define TDataWriter  SingleJointPosition_GetResult_Request_DataWriter
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

            Configure and implement 'SingleJointPosition_GetResult_Response_' support classes.

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
            #define TTYPENAME   SingleJointPosition_GetResult_Response_TYPENAME

            /* Defines */
            #define TDataWriter SingleJointPosition_GetResult_Response_DataWriter
            #define TData       control_msgs::action::dds_::SingleJointPosition_GetResult_Response_

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
            #define TTYPENAME   SingleJointPosition_GetResult_Response_TYPENAME

            /* Defines */
            #define TDataReader SingleJointPosition_GetResult_Response_DataReader
            #define TDataSeq    SingleJointPosition_GetResult_Response_Seq
            #define TData       control_msgs::action::dds_::SingleJointPosition_GetResult_Response_

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
            #define TTYPENAME    SingleJointPosition_GetResult_Response_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::SingleJointPosition_GetResult_Response_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::SingleJointPosition_GetResult_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport SingleJointPosition_GetResult_Response_TypeSupport
            #define TData        control_msgs::action::dds_::SingleJointPosition_GetResult_Response_
            #define TDataReader  SingleJointPosition_GetResult_Response_DataReader
            #define TDataWriter  SingleJointPosition_GetResult_Response_DataWriter
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

            Configure and implement 'SingleJointPosition_Feedback_' support classes.

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
            #define TTYPENAME   SingleJointPosition_Feedback_TYPENAME

            /* Defines */
            #define TDataWriter SingleJointPosition_Feedback_DataWriter
            #define TData       control_msgs::action::dds_::SingleJointPosition_Feedback_

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
            #define TTYPENAME   SingleJointPosition_Feedback_TYPENAME

            /* Defines */
            #define TDataReader SingleJointPosition_Feedback_DataReader
            #define TDataSeq    SingleJointPosition_Feedback_Seq
            #define TData       control_msgs::action::dds_::SingleJointPosition_Feedback_

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
            #define TTYPENAME    SingleJointPosition_Feedback_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::SingleJointPosition_Feedback_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::SingleJointPosition_Feedback_Plugin_delete

            /* Defines */
            #define TTypeSupport SingleJointPosition_Feedback_TypeSupport
            #define TData        control_msgs::action::dds_::SingleJointPosition_Feedback_
            #define TDataReader  SingleJointPosition_Feedback_DataReader
            #define TDataWriter  SingleJointPosition_Feedback_DataWriter
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

            Configure and implement 'SingleJointPosition_FeedbackMessage_' support classes.

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
            #define TTYPENAME   SingleJointPosition_FeedbackMessage_TYPENAME

            /* Defines */
            #define TDataWriter SingleJointPosition_FeedbackMessage_DataWriter
            #define TData       control_msgs::action::dds_::SingleJointPosition_FeedbackMessage_

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
            #define TTYPENAME   SingleJointPosition_FeedbackMessage_TYPENAME

            /* Defines */
            #define TDataReader SingleJointPosition_FeedbackMessage_DataReader
            #define TDataSeq    SingleJointPosition_FeedbackMessage_Seq
            #define TData       control_msgs::action::dds_::SingleJointPosition_FeedbackMessage_

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
            #define TTYPENAME    SingleJointPosition_FeedbackMessage_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::SingleJointPosition_FeedbackMessage_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::SingleJointPosition_FeedbackMessage_Plugin_delete

            /* Defines */
            #define TTypeSupport SingleJointPosition_FeedbackMessage_TypeSupport
            #define TData        control_msgs::action::dds_::SingleJointPosition_FeedbackMessage_
            #define TDataReader  SingleJointPosition_FeedbackMessage_DataReader
            #define TDataWriter  SingleJointPosition_FeedbackMessage_DataWriter
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

