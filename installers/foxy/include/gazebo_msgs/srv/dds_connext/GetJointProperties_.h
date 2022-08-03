

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetJointProperties_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetJointProperties__1744115148_h
#define GetJointProperties__1744115148_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetJointProperties_Request_TYPENAME;

            struct GetJointProperties_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetJointProperties_Request_TypeSupport;
            class GetJointProperties_Request_DataWriter;
            class GetJointProperties_Request_DataReader;
            #endif

            class GetJointProperties_Request_ 
            {
              public:
                typedef struct GetJointProperties_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetJointProperties_Request_TypeSupport TypeSupport;
                typedef GetJointProperties_Request_DataWriter DataWriter;
                typedef GetJointProperties_Request_DataReader DataReader;
                #endif

                DDS_Char *   joint_name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetJointProperties_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetJointProperties_Request_Seq, GetJointProperties_Request_);

            NDDSUSERDllExport
            RTIBool GetJointProperties_Request__initialize(
                GetJointProperties_Request_* self);

            NDDSUSERDllExport
            RTIBool GetJointProperties_Request__initialize_ex(
                GetJointProperties_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetJointProperties_Request__initialize_w_params(
                GetJointProperties_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetJointProperties_Request__finalize(
                GetJointProperties_Request_* self);

            NDDSUSERDllExport
            void GetJointProperties_Request__finalize_ex(
                GetJointProperties_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetJointProperties_Request__finalize_w_params(
                GetJointProperties_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetJointProperties_Request__finalize_optional_members(
                GetJointProperties_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetJointProperties_Request__copy(
                GetJointProperties_Request_* dst,
                const GetJointProperties_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {
            namespace GetJointProperties_Response_Constants {
                static const DDS_Octet REVOLUTE_= 0;
                static const DDS_Octet CONTINUOUS_= 1;
                static const DDS_Octet PRISMATIC_= 2;
                static const DDS_Octet FIXED_= 3;
                static const DDS_Octet BALL_= 4;
                static const DDS_Octet UNIVERSAL_= 5;
            } /* namespace GetJointProperties_Response_Constants  */

            extern const char *GetJointProperties_Response_TYPENAME;

            struct GetJointProperties_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetJointProperties_Response_TypeSupport;
            class GetJointProperties_Response_DataWriter;
            class GetJointProperties_Response_DataReader;
            #endif

            class GetJointProperties_Response_ 
            {
              public:
                typedef struct GetJointProperties_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetJointProperties_Response_TypeSupport TypeSupport;
                typedef GetJointProperties_Response_DataWriter DataWriter;
                typedef GetJointProperties_Response_DataReader DataReader;
                #endif

                DDS_Octet   type_ ;
                DDS_DoubleSeq  damping_ ;
                DDS_DoubleSeq  position_ ;
                DDS_DoubleSeq  rate_ ;
                DDS_Boolean   success_ ;
                DDS_Char *   status_message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetJointProperties_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetJointProperties_Response_Seq, GetJointProperties_Response_);

            NDDSUSERDllExport
            RTIBool GetJointProperties_Response__initialize(
                GetJointProperties_Response_* self);

            NDDSUSERDllExport
            RTIBool GetJointProperties_Response__initialize_ex(
                GetJointProperties_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetJointProperties_Response__initialize_w_params(
                GetJointProperties_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetJointProperties_Response__finalize(
                GetJointProperties_Response_* self);

            NDDSUSERDllExport
            void GetJointProperties_Response__finalize_ex(
                GetJointProperties_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetJointProperties_Response__finalize_w_params(
                GetJointProperties_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetJointProperties_Response__finalize_optional_members(
                GetJointProperties_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetJointProperties_Response__copy(
                GetJointProperties_Response_* dst,
                const GetJointProperties_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* GetJointProperties_ */

