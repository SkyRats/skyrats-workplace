
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GripperCommand_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "GripperCommand_Support.h"
#include "GripperCommand_Plugin.h"

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

            Configure and implement 'GripperCommand_Goal_' support classes.

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
            #define TTYPENAME   GripperCommand_Goal_TYPENAME

            /* Defines */
            #define TDataWriter GripperCommand_Goal_DataWriter
            #define TData       control_msgs::action::dds_::GripperCommand_Goal_

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
            #define TTYPENAME   GripperCommand_Goal_TYPENAME

            /* Defines */
            #define TDataReader GripperCommand_Goal_DataReader
            #define TDataSeq    GripperCommand_Goal_Seq
            #define TData       control_msgs::action::dds_::GripperCommand_Goal_

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
            #define TTYPENAME    GripperCommand_Goal_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::GripperCommand_Goal_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::GripperCommand_Goal_Plugin_delete

            /* Defines */
            #define TTypeSupport GripperCommand_Goal_TypeSupport
            #define TData        control_msgs::action::dds_::GripperCommand_Goal_
            #define TDataReader  GripperCommand_Goal_DataReader
            #define TDataWriter  GripperCommand_Goal_DataWriter
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

            Configure and implement 'GripperCommand_SendGoal_Request_' support classes.

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
            #define TTYPENAME   GripperCommand_SendGoal_Request_TYPENAME

            /* Defines */
            #define TDataWriter GripperCommand_SendGoal_Request_DataWriter
            #define TData       control_msgs::action::dds_::GripperCommand_SendGoal_Request_

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
            #define TTYPENAME   GripperCommand_SendGoal_Request_TYPENAME

            /* Defines */
            #define TDataReader GripperCommand_SendGoal_Request_DataReader
            #define TDataSeq    GripperCommand_SendGoal_Request_Seq
            #define TData       control_msgs::action::dds_::GripperCommand_SendGoal_Request_

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
            #define TTYPENAME    GripperCommand_SendGoal_Request_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::GripperCommand_SendGoal_Request_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::GripperCommand_SendGoal_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport GripperCommand_SendGoal_Request_TypeSupport
            #define TData        control_msgs::action::dds_::GripperCommand_SendGoal_Request_
            #define TDataReader  GripperCommand_SendGoal_Request_DataReader
            #define TDataWriter  GripperCommand_SendGoal_Request_DataWriter
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

            Configure and implement 'GripperCommand_SendGoal_Response_' support classes.

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
            #define TTYPENAME   GripperCommand_SendGoal_Response_TYPENAME

            /* Defines */
            #define TDataWriter GripperCommand_SendGoal_Response_DataWriter
            #define TData       control_msgs::action::dds_::GripperCommand_SendGoal_Response_

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
            #define TTYPENAME   GripperCommand_SendGoal_Response_TYPENAME

            /* Defines */
            #define TDataReader GripperCommand_SendGoal_Response_DataReader
            #define TDataSeq    GripperCommand_SendGoal_Response_Seq
            #define TData       control_msgs::action::dds_::GripperCommand_SendGoal_Response_

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
            #define TTYPENAME    GripperCommand_SendGoal_Response_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::GripperCommand_SendGoal_Response_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::GripperCommand_SendGoal_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport GripperCommand_SendGoal_Response_TypeSupport
            #define TData        control_msgs::action::dds_::GripperCommand_SendGoal_Response_
            #define TDataReader  GripperCommand_SendGoal_Response_DataReader
            #define TDataWriter  GripperCommand_SendGoal_Response_DataWriter
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

            Configure and implement 'GripperCommand_Result_' support classes.

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
            #define TTYPENAME   GripperCommand_Result_TYPENAME

            /* Defines */
            #define TDataWriter GripperCommand_Result_DataWriter
            #define TData       control_msgs::action::dds_::GripperCommand_Result_

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
            #define TTYPENAME   GripperCommand_Result_TYPENAME

            /* Defines */
            #define TDataReader GripperCommand_Result_DataReader
            #define TDataSeq    GripperCommand_Result_Seq
            #define TData       control_msgs::action::dds_::GripperCommand_Result_

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
            #define TTYPENAME    GripperCommand_Result_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::GripperCommand_Result_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::GripperCommand_Result_Plugin_delete

            /* Defines */
            #define TTypeSupport GripperCommand_Result_TypeSupport
            #define TData        control_msgs::action::dds_::GripperCommand_Result_
            #define TDataReader  GripperCommand_Result_DataReader
            #define TDataWriter  GripperCommand_Result_DataWriter
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

            Configure and implement 'GripperCommand_GetResult_Request_' support classes.

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
            #define TTYPENAME   GripperCommand_GetResult_Request_TYPENAME

            /* Defines */
            #define TDataWriter GripperCommand_GetResult_Request_DataWriter
            #define TData       control_msgs::action::dds_::GripperCommand_GetResult_Request_

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
            #define TTYPENAME   GripperCommand_GetResult_Request_TYPENAME

            /* Defines */
            #define TDataReader GripperCommand_GetResult_Request_DataReader
            #define TDataSeq    GripperCommand_GetResult_Request_Seq
            #define TData       control_msgs::action::dds_::GripperCommand_GetResult_Request_

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
            #define TTYPENAME    GripperCommand_GetResult_Request_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::GripperCommand_GetResult_Request_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::GripperCommand_GetResult_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport GripperCommand_GetResult_Request_TypeSupport
            #define TData        control_msgs::action::dds_::GripperCommand_GetResult_Request_
            #define TDataReader  GripperCommand_GetResult_Request_DataReader
            #define TDataWriter  GripperCommand_GetResult_Request_DataWriter
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

            Configure and implement 'GripperCommand_GetResult_Response_' support classes.

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
            #define TTYPENAME   GripperCommand_GetResult_Response_TYPENAME

            /* Defines */
            #define TDataWriter GripperCommand_GetResult_Response_DataWriter
            #define TData       control_msgs::action::dds_::GripperCommand_GetResult_Response_

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
            #define TTYPENAME   GripperCommand_GetResult_Response_TYPENAME

            /* Defines */
            #define TDataReader GripperCommand_GetResult_Response_DataReader
            #define TDataSeq    GripperCommand_GetResult_Response_Seq
            #define TData       control_msgs::action::dds_::GripperCommand_GetResult_Response_

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
            #define TTYPENAME    GripperCommand_GetResult_Response_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::GripperCommand_GetResult_Response_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::GripperCommand_GetResult_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport GripperCommand_GetResult_Response_TypeSupport
            #define TData        control_msgs::action::dds_::GripperCommand_GetResult_Response_
            #define TDataReader  GripperCommand_GetResult_Response_DataReader
            #define TDataWriter  GripperCommand_GetResult_Response_DataWriter
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

            Configure and implement 'GripperCommand_Feedback_' support classes.

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
            #define TTYPENAME   GripperCommand_Feedback_TYPENAME

            /* Defines */
            #define TDataWriter GripperCommand_Feedback_DataWriter
            #define TData       control_msgs::action::dds_::GripperCommand_Feedback_

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
            #define TTYPENAME   GripperCommand_Feedback_TYPENAME

            /* Defines */
            #define TDataReader GripperCommand_Feedback_DataReader
            #define TDataSeq    GripperCommand_Feedback_Seq
            #define TData       control_msgs::action::dds_::GripperCommand_Feedback_

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
            #define TTYPENAME    GripperCommand_Feedback_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::GripperCommand_Feedback_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::GripperCommand_Feedback_Plugin_delete

            /* Defines */
            #define TTypeSupport GripperCommand_Feedback_TypeSupport
            #define TData        control_msgs::action::dds_::GripperCommand_Feedback_
            #define TDataReader  GripperCommand_Feedback_DataReader
            #define TDataWriter  GripperCommand_Feedback_DataWriter
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

            Configure and implement 'GripperCommand_FeedbackMessage_' support classes.

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
            #define TTYPENAME   GripperCommand_FeedbackMessage_TYPENAME

            /* Defines */
            #define TDataWriter GripperCommand_FeedbackMessage_DataWriter
            #define TData       control_msgs::action::dds_::GripperCommand_FeedbackMessage_

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
            #define TTYPENAME   GripperCommand_FeedbackMessage_TYPENAME

            /* Defines */
            #define TDataReader GripperCommand_FeedbackMessage_DataReader
            #define TDataSeq    GripperCommand_FeedbackMessage_Seq
            #define TData       control_msgs::action::dds_::GripperCommand_FeedbackMessage_

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
            #define TTYPENAME    GripperCommand_FeedbackMessage_TYPENAME
            #define TPlugin_new  control_msgs::action::dds_::GripperCommand_FeedbackMessage_Plugin_new
            #define TPlugin_delete  control_msgs::action::dds_::GripperCommand_FeedbackMessage_Plugin_delete

            /* Defines */
            #define TTypeSupport GripperCommand_FeedbackMessage_TypeSupport
            #define TData        control_msgs::action::dds_::GripperCommand_FeedbackMessage_
            #define TDataReader  GripperCommand_FeedbackMessage_DataReader
            #define TDataWriter  GripperCommand_FeedbackMessage_DataWriter
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

