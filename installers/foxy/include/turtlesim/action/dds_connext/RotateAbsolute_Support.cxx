
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RotateAbsolute_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "RotateAbsolute_Support.h"
#include "RotateAbsolute_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace turtlesim {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'RotateAbsolute_Goal_' support classes.

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
            #define TTYPENAME   RotateAbsolute_Goal_TYPENAME

            /* Defines */
            #define TDataWriter RotateAbsolute_Goal_DataWriter
            #define TData       turtlesim::action::dds_::RotateAbsolute_Goal_

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
            #define TTYPENAME   RotateAbsolute_Goal_TYPENAME

            /* Defines */
            #define TDataReader RotateAbsolute_Goal_DataReader
            #define TDataSeq    RotateAbsolute_Goal_Seq
            #define TData       turtlesim::action::dds_::RotateAbsolute_Goal_

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
            #define TTYPENAME    RotateAbsolute_Goal_TYPENAME
            #define TPlugin_new  turtlesim::action::dds_::RotateAbsolute_Goal_Plugin_new
            #define TPlugin_delete  turtlesim::action::dds_::RotateAbsolute_Goal_Plugin_delete

            /* Defines */
            #define TTypeSupport RotateAbsolute_Goal_TypeSupport
            #define TData        turtlesim::action::dds_::RotateAbsolute_Goal_
            #define TDataReader  RotateAbsolute_Goal_DataReader
            #define TDataWriter  RotateAbsolute_Goal_DataWriter
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
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'RotateAbsolute_SendGoal_Request_' support classes.

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
            #define TTYPENAME   RotateAbsolute_SendGoal_Request_TYPENAME

            /* Defines */
            #define TDataWriter RotateAbsolute_SendGoal_Request_DataWriter
            #define TData       turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_

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
            #define TTYPENAME   RotateAbsolute_SendGoal_Request_TYPENAME

            /* Defines */
            #define TDataReader RotateAbsolute_SendGoal_Request_DataReader
            #define TDataSeq    RotateAbsolute_SendGoal_Request_Seq
            #define TData       turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_

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
            #define TTYPENAME    RotateAbsolute_SendGoal_Request_TYPENAME
            #define TPlugin_new  turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_Plugin_new
            #define TPlugin_delete  turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport RotateAbsolute_SendGoal_Request_TypeSupport
            #define TData        turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_
            #define TDataReader  RotateAbsolute_SendGoal_Request_DataReader
            #define TDataWriter  RotateAbsolute_SendGoal_Request_DataWriter
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
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'RotateAbsolute_SendGoal_Response_' support classes.

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
            #define TTYPENAME   RotateAbsolute_SendGoal_Response_TYPENAME

            /* Defines */
            #define TDataWriter RotateAbsolute_SendGoal_Response_DataWriter
            #define TData       turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_

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
            #define TTYPENAME   RotateAbsolute_SendGoal_Response_TYPENAME

            /* Defines */
            #define TDataReader RotateAbsolute_SendGoal_Response_DataReader
            #define TDataSeq    RotateAbsolute_SendGoal_Response_Seq
            #define TData       turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_

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
            #define TTYPENAME    RotateAbsolute_SendGoal_Response_TYPENAME
            #define TPlugin_new  turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_Plugin_new
            #define TPlugin_delete  turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport RotateAbsolute_SendGoal_Response_TypeSupport
            #define TData        turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_
            #define TDataReader  RotateAbsolute_SendGoal_Response_DataReader
            #define TDataWriter  RotateAbsolute_SendGoal_Response_DataWriter
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
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'RotateAbsolute_Result_' support classes.

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
            #define TTYPENAME   RotateAbsolute_Result_TYPENAME

            /* Defines */
            #define TDataWriter RotateAbsolute_Result_DataWriter
            #define TData       turtlesim::action::dds_::RotateAbsolute_Result_

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
            #define TTYPENAME   RotateAbsolute_Result_TYPENAME

            /* Defines */
            #define TDataReader RotateAbsolute_Result_DataReader
            #define TDataSeq    RotateAbsolute_Result_Seq
            #define TData       turtlesim::action::dds_::RotateAbsolute_Result_

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
            #define TTYPENAME    RotateAbsolute_Result_TYPENAME
            #define TPlugin_new  turtlesim::action::dds_::RotateAbsolute_Result_Plugin_new
            #define TPlugin_delete  turtlesim::action::dds_::RotateAbsolute_Result_Plugin_delete

            /* Defines */
            #define TTypeSupport RotateAbsolute_Result_TypeSupport
            #define TData        turtlesim::action::dds_::RotateAbsolute_Result_
            #define TDataReader  RotateAbsolute_Result_DataReader
            #define TDataWriter  RotateAbsolute_Result_DataWriter
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
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'RotateAbsolute_GetResult_Request_' support classes.

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
            #define TTYPENAME   RotateAbsolute_GetResult_Request_TYPENAME

            /* Defines */
            #define TDataWriter RotateAbsolute_GetResult_Request_DataWriter
            #define TData       turtlesim::action::dds_::RotateAbsolute_GetResult_Request_

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
            #define TTYPENAME   RotateAbsolute_GetResult_Request_TYPENAME

            /* Defines */
            #define TDataReader RotateAbsolute_GetResult_Request_DataReader
            #define TDataSeq    RotateAbsolute_GetResult_Request_Seq
            #define TData       turtlesim::action::dds_::RotateAbsolute_GetResult_Request_

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
            #define TTYPENAME    RotateAbsolute_GetResult_Request_TYPENAME
            #define TPlugin_new  turtlesim::action::dds_::RotateAbsolute_GetResult_Request_Plugin_new
            #define TPlugin_delete  turtlesim::action::dds_::RotateAbsolute_GetResult_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport RotateAbsolute_GetResult_Request_TypeSupport
            #define TData        turtlesim::action::dds_::RotateAbsolute_GetResult_Request_
            #define TDataReader  RotateAbsolute_GetResult_Request_DataReader
            #define TDataWriter  RotateAbsolute_GetResult_Request_DataWriter
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
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'RotateAbsolute_GetResult_Response_' support classes.

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
            #define TTYPENAME   RotateAbsolute_GetResult_Response_TYPENAME

            /* Defines */
            #define TDataWriter RotateAbsolute_GetResult_Response_DataWriter
            #define TData       turtlesim::action::dds_::RotateAbsolute_GetResult_Response_

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
            #define TTYPENAME   RotateAbsolute_GetResult_Response_TYPENAME

            /* Defines */
            #define TDataReader RotateAbsolute_GetResult_Response_DataReader
            #define TDataSeq    RotateAbsolute_GetResult_Response_Seq
            #define TData       turtlesim::action::dds_::RotateAbsolute_GetResult_Response_

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
            #define TTYPENAME    RotateAbsolute_GetResult_Response_TYPENAME
            #define TPlugin_new  turtlesim::action::dds_::RotateAbsolute_GetResult_Response_Plugin_new
            #define TPlugin_delete  turtlesim::action::dds_::RotateAbsolute_GetResult_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport RotateAbsolute_GetResult_Response_TypeSupport
            #define TData        turtlesim::action::dds_::RotateAbsolute_GetResult_Response_
            #define TDataReader  RotateAbsolute_GetResult_Response_DataReader
            #define TDataWriter  RotateAbsolute_GetResult_Response_DataWriter
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
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'RotateAbsolute_Feedback_' support classes.

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
            #define TTYPENAME   RotateAbsolute_Feedback_TYPENAME

            /* Defines */
            #define TDataWriter RotateAbsolute_Feedback_DataWriter
            #define TData       turtlesim::action::dds_::RotateAbsolute_Feedback_

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
            #define TTYPENAME   RotateAbsolute_Feedback_TYPENAME

            /* Defines */
            #define TDataReader RotateAbsolute_Feedback_DataReader
            #define TDataSeq    RotateAbsolute_Feedback_Seq
            #define TData       turtlesim::action::dds_::RotateAbsolute_Feedback_

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
            #define TTYPENAME    RotateAbsolute_Feedback_TYPENAME
            #define TPlugin_new  turtlesim::action::dds_::RotateAbsolute_Feedback_Plugin_new
            #define TPlugin_delete  turtlesim::action::dds_::RotateAbsolute_Feedback_Plugin_delete

            /* Defines */
            #define TTypeSupport RotateAbsolute_Feedback_TypeSupport
            #define TData        turtlesim::action::dds_::RotateAbsolute_Feedback_
            #define TDataReader  RotateAbsolute_Feedback_DataReader
            #define TDataWriter  RotateAbsolute_Feedback_DataWriter
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
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'RotateAbsolute_FeedbackMessage_' support classes.

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
            #define TTYPENAME   RotateAbsolute_FeedbackMessage_TYPENAME

            /* Defines */
            #define TDataWriter RotateAbsolute_FeedbackMessage_DataWriter
            #define TData       turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_

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
            #define TTYPENAME   RotateAbsolute_FeedbackMessage_TYPENAME

            /* Defines */
            #define TDataReader RotateAbsolute_FeedbackMessage_DataReader
            #define TDataSeq    RotateAbsolute_FeedbackMessage_Seq
            #define TData       turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_

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
            #define TTYPENAME    RotateAbsolute_FeedbackMessage_TYPENAME
            #define TPlugin_new  turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_Plugin_new
            #define TPlugin_delete  turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_Plugin_delete

            /* Defines */
            #define TTypeSupport RotateAbsolute_FeedbackMessage_TypeSupport
            #define TData        turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_
            #define TDataReader  RotateAbsolute_FeedbackMessage_DataReader
            #define TDataWriter  RotateAbsolute_FeedbackMessage_DataWriter
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
} /* namespace turtlesim  */

