

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointRequest_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef JointRequest__1918724024_h
#define JointRequest__1918724024_h

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

            extern const char *JointRequest_Request_TYPENAME;

            struct JointRequest_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JointRequest_Request_TypeSupport;
            class JointRequest_Request_DataWriter;
            class JointRequest_Request_DataReader;
            #endif

            class JointRequest_Request_ 
            {
              public:
                typedef struct JointRequest_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JointRequest_Request_TypeSupport TypeSupport;
                typedef JointRequest_Request_DataWriter DataWriter;
                typedef JointRequest_Request_DataReader DataReader;
                #endif

                DDS_Char *   joint_name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JointRequest_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JointRequest_Request_Seq, JointRequest_Request_);

            NDDSUSERDllExport
            RTIBool JointRequest_Request__initialize(
                JointRequest_Request_* self);

            NDDSUSERDllExport
            RTIBool JointRequest_Request__initialize_ex(
                JointRequest_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JointRequest_Request__initialize_w_params(
                JointRequest_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JointRequest_Request__finalize(
                JointRequest_Request_* self);

            NDDSUSERDllExport
            void JointRequest_Request__finalize_ex(
                JointRequest_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JointRequest_Request__finalize_w_params(
                JointRequest_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JointRequest_Request__finalize_optional_members(
                JointRequest_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JointRequest_Request__copy(
                JointRequest_Request_* dst,
                const JointRequest_Request_* src);

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

            extern const char *JointRequest_Response_TYPENAME;

            struct JointRequest_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JointRequest_Response_TypeSupport;
            class JointRequest_Response_DataWriter;
            class JointRequest_Response_DataReader;
            #endif

            class JointRequest_Response_ 
            {
              public:
                typedef struct JointRequest_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JointRequest_Response_TypeSupport TypeSupport;
                typedef JointRequest_Response_DataWriter DataWriter;
                typedef JointRequest_Response_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JointRequest_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JointRequest_Response_Seq, JointRequest_Response_);

            NDDSUSERDllExport
            RTIBool JointRequest_Response__initialize(
                JointRequest_Response_* self);

            NDDSUSERDllExport
            RTIBool JointRequest_Response__initialize_ex(
                JointRequest_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JointRequest_Response__initialize_w_params(
                JointRequest_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JointRequest_Response__finalize(
                JointRequest_Response_* self);

            NDDSUSERDllExport
            void JointRequest_Response__finalize_ex(
                JointRequest_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JointRequest_Response__finalize_w_params(
                JointRequest_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JointRequest_Response__finalize_optional_members(
                JointRequest_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JointRequest_Response__copy(
                JointRequest_Response_* dst,
                const JointRequest_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* JointRequest_ */

