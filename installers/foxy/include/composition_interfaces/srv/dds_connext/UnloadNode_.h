

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UnloadNode_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UnloadNode__1122133648_h
#define UnloadNode__1122133648_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace composition_interfaces {
    namespace srv {
        namespace dds_ {

            extern const char *UnloadNode_Request_TYPENAME;

            struct UnloadNode_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class UnloadNode_Request_TypeSupport;
            class UnloadNode_Request_DataWriter;
            class UnloadNode_Request_DataReader;
            #endif

            class UnloadNode_Request_ 
            {
              public:
                typedef struct UnloadNode_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef UnloadNode_Request_TypeSupport TypeSupport;
                typedef UnloadNode_Request_DataWriter DataWriter;
                typedef UnloadNode_Request_DataReader DataReader;
                #endif

                DDS_UnsignedLongLong   unique_id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* UnloadNode_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(UnloadNode_Request_Seq, UnloadNode_Request_);

            NDDSUSERDllExport
            RTIBool UnloadNode_Request__initialize(
                UnloadNode_Request_* self);

            NDDSUSERDllExport
            RTIBool UnloadNode_Request__initialize_ex(
                UnloadNode_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool UnloadNode_Request__initialize_w_params(
                UnloadNode_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void UnloadNode_Request__finalize(
                UnloadNode_Request_* self);

            NDDSUSERDllExport
            void UnloadNode_Request__finalize_ex(
                UnloadNode_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void UnloadNode_Request__finalize_w_params(
                UnloadNode_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void UnloadNode_Request__finalize_optional_members(
                UnloadNode_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool UnloadNode_Request__copy(
                UnloadNode_Request_* dst,
                const UnloadNode_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace composition_interfaces  */
namespace composition_interfaces {
    namespace srv {
        namespace dds_ {

            extern const char *UnloadNode_Response_TYPENAME;

            struct UnloadNode_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class UnloadNode_Response_TypeSupport;
            class UnloadNode_Response_DataWriter;
            class UnloadNode_Response_DataReader;
            #endif

            class UnloadNode_Response_ 
            {
              public:
                typedef struct UnloadNode_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef UnloadNode_Response_TypeSupport TypeSupport;
                typedef UnloadNode_Response_DataWriter DataWriter;
                typedef UnloadNode_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   error_message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* UnloadNode_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(UnloadNode_Response_Seq, UnloadNode_Response_);

            NDDSUSERDllExport
            RTIBool UnloadNode_Response__initialize(
                UnloadNode_Response_* self);

            NDDSUSERDllExport
            RTIBool UnloadNode_Response__initialize_ex(
                UnloadNode_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool UnloadNode_Response__initialize_w_params(
                UnloadNode_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void UnloadNode_Response__finalize(
                UnloadNode_Response_* self);

            NDDSUSERDllExport
            void UnloadNode_Response__finalize_ex(
                UnloadNode_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void UnloadNode_Response__finalize_w_params(
                UnloadNode_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void UnloadNode_Response__finalize_optional_members(
                UnloadNode_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool UnloadNode_Response__copy(
                UnloadNode_Response_* dst,
                const UnloadNode_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace composition_interfaces  */

#endif /* UnloadNode_ */

