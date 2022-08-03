
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FollowJointTrajectory_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FollowJointTrajectory_Support_1305761419_h
#define FollowJointTrajectory_Support_1305761419_h

/* Uses */
#include "FollowJointTrajectory_.h"

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)

class __declspec(dllimport) DDSTypeSupport;
class __declspec(dllimport) DDSDataWriter;
class __declspec(dllimport) DDSDataReader;

#endif

namespace control_msgs {
    namespace action {
        namespace dds_ {
            /* ========================================================================= */
            /**
            Uses:     T

            Defines:  TTypeSupport, TDataWriter, TDataReader

            Organized using the well-documented "Generics Pattern" for
            implementing generics in C and C++.
            */

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                FollowJointTrajectory_Goal_TypeSupport, 
                FollowJointTrajectory_Goal_);

            DDS_DATAWRITER_CPP(FollowJointTrajectory_Goal_DataWriter, FollowJointTrajectory_Goal_);
            DDS_DATAREADER_CPP(FollowJointTrajectory_Goal_DataReader, FollowJointTrajectory_Goal_Seq, FollowJointTrajectory_Goal_);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {
            /* ========================================================================= */
            /**
            Uses:     T

            Defines:  TTypeSupport, TDataWriter, TDataReader

            Organized using the well-documented "Generics Pattern" for
            implementing generics in C and C++.
            */

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                FollowJointTrajectory_SendGoal_Request_TypeSupport, 
                FollowJointTrajectory_SendGoal_Request_);

            DDS_DATAWRITER_CPP(FollowJointTrajectory_SendGoal_Request_DataWriter, FollowJointTrajectory_SendGoal_Request_);
            DDS_DATAREADER_CPP(FollowJointTrajectory_SendGoal_Request_DataReader, FollowJointTrajectory_SendGoal_Request_Seq, FollowJointTrajectory_SendGoal_Request_);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {
            /* ========================================================================= */
            /**
            Uses:     T

            Defines:  TTypeSupport, TDataWriter, TDataReader

            Organized using the well-documented "Generics Pattern" for
            implementing generics in C and C++.
            */

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                FollowJointTrajectory_SendGoal_Response_TypeSupport, 
                FollowJointTrajectory_SendGoal_Response_);

            DDS_DATAWRITER_CPP(FollowJointTrajectory_SendGoal_Response_DataWriter, FollowJointTrajectory_SendGoal_Response_);
            DDS_DATAREADER_CPP(FollowJointTrajectory_SendGoal_Response_DataReader, FollowJointTrajectory_SendGoal_Response_Seq, FollowJointTrajectory_SendGoal_Response_);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {
            namespace FollowJointTrajectory_Result_Constants {
            } /* namespace FollowJointTrajectory_Result_Constants  */
            /* ========================================================================= */
            /**
            Uses:     T

            Defines:  TTypeSupport, TDataWriter, TDataReader

            Organized using the well-documented "Generics Pattern" for
            implementing generics in C and C++.
            */

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                FollowJointTrajectory_Result_TypeSupport, 
                FollowJointTrajectory_Result_);

            DDS_DATAWRITER_CPP(FollowJointTrajectory_Result_DataWriter, FollowJointTrajectory_Result_);
            DDS_DATAREADER_CPP(FollowJointTrajectory_Result_DataReader, FollowJointTrajectory_Result_Seq, FollowJointTrajectory_Result_);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {
            /* ========================================================================= */
            /**
            Uses:     T

            Defines:  TTypeSupport, TDataWriter, TDataReader

            Organized using the well-documented "Generics Pattern" for
            implementing generics in C and C++.
            */

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                FollowJointTrajectory_GetResult_Request_TypeSupport, 
                FollowJointTrajectory_GetResult_Request_);

            DDS_DATAWRITER_CPP(FollowJointTrajectory_GetResult_Request_DataWriter, FollowJointTrajectory_GetResult_Request_);
            DDS_DATAREADER_CPP(FollowJointTrajectory_GetResult_Request_DataReader, FollowJointTrajectory_GetResult_Request_Seq, FollowJointTrajectory_GetResult_Request_);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {
            /* ========================================================================= */
            /**
            Uses:     T

            Defines:  TTypeSupport, TDataWriter, TDataReader

            Organized using the well-documented "Generics Pattern" for
            implementing generics in C and C++.
            */

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                FollowJointTrajectory_GetResult_Response_TypeSupport, 
                FollowJointTrajectory_GetResult_Response_);

            DDS_DATAWRITER_CPP(FollowJointTrajectory_GetResult_Response_DataWriter, FollowJointTrajectory_GetResult_Response_);
            DDS_DATAREADER_CPP(FollowJointTrajectory_GetResult_Response_DataReader, FollowJointTrajectory_GetResult_Response_Seq, FollowJointTrajectory_GetResult_Response_);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {
            /* ========================================================================= */
            /**
            Uses:     T

            Defines:  TTypeSupport, TDataWriter, TDataReader

            Organized using the well-documented "Generics Pattern" for
            implementing generics in C and C++.
            */

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                FollowJointTrajectory_Feedback_TypeSupport, 
                FollowJointTrajectory_Feedback_);

            DDS_DATAWRITER_CPP(FollowJointTrajectory_Feedback_DataWriter, FollowJointTrajectory_Feedback_);
            DDS_DATAREADER_CPP(FollowJointTrajectory_Feedback_DataReader, FollowJointTrajectory_Feedback_Seq, FollowJointTrajectory_Feedback_);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {
            /* ========================================================================= */
            /**
            Uses:     T

            Defines:  TTypeSupport, TDataWriter, TDataReader

            Organized using the well-documented "Generics Pattern" for
            implementing generics in C and C++.
            */

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                FollowJointTrajectory_FeedbackMessage_TypeSupport, 
                FollowJointTrajectory_FeedbackMessage_);

            DDS_DATAWRITER_CPP(FollowJointTrajectory_FeedbackMessage_DataWriter, FollowJointTrajectory_FeedbackMessage_);
            DDS_DATAREADER_CPP(FollowJointTrajectory_FeedbackMessage_DataReader, FollowJointTrajectory_FeedbackMessage_Seq, FollowJointTrajectory_FeedbackMessage_);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */

#endif  /* FollowJointTrajectory_Support_1305761419_h */

