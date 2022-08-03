

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UnloadController_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UnloadController__258810997_h
#define UnloadController__258810997_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace controller_manager_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *UnloadController_Request_TYPENAME;

            struct UnloadController_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class UnloadController_Request_TypeSupport;
            class UnloadController_Request_DataWriter;
            class UnloadController_Request_DataReader;
            #endif

            class UnloadController_Request_ 
            {
              public:
                typedef struct UnloadController_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef UnloadController_Request_TypeSupport TypeSupport;
                typedef UnloadController_Request_DataWriter DataWriter;
                typedef UnloadController_Request_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* UnloadController_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(UnloadController_Request_Seq, UnloadController_Request_);

            NDDSUSERDllExport
            RTIBool UnloadController_Request__initialize(
                UnloadController_Request_* self);

            NDDSUSERDllExport
            RTIBool UnloadController_Request__initialize_ex(
                UnloadController_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool UnloadController_Request__initialize_w_params(
                UnloadController_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void UnloadController_Request__finalize(
                UnloadController_Request_* self);

            NDDSUSERDllExport
            void UnloadController_Request__finalize_ex(
                UnloadController_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void UnloadController_Request__finalize_w_params(
                UnloadController_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void UnloadController_Request__finalize_optional_members(
                UnloadController_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool UnloadController_Request__copy(
                UnloadController_Request_* dst,
                const UnloadController_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace controller_manager_msgs  */
namespace controller_manager_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *UnloadController_Response_TYPENAME;

            struct UnloadController_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class UnloadController_Response_TypeSupport;
            class UnloadController_Response_DataWriter;
            class UnloadController_Response_DataReader;
            #endif

            class UnloadController_Response_ 
            {
              public:
                typedef struct UnloadController_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef UnloadController_Response_TypeSupport TypeSupport;
                typedef UnloadController_Response_DataWriter DataWriter;
                typedef UnloadController_Response_DataReader DataReader;
                #endif

                DDS_Boolean   ok_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* UnloadController_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(UnloadController_Response_Seq, UnloadController_Response_);

            NDDSUSERDllExport
            RTIBool UnloadController_Response__initialize(
                UnloadController_Response_* self);

            NDDSUSERDllExport
            RTIBool UnloadController_Response__initialize_ex(
                UnloadController_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool UnloadController_Response__initialize_w_params(
                UnloadController_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void UnloadController_Response__finalize(
                UnloadController_Response_* self);

            NDDSUSERDllExport
            void UnloadController_Response__finalize_ex(
                UnloadController_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void UnloadController_Response__finalize_w_params(
                UnloadController_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void UnloadController_Response__finalize_optional_members(
                UnloadController_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool UnloadController_Response__copy(
                UnloadController_Response_* dst,
                const UnloadController_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace controller_manager_msgs  */

#endif /* UnloadController_ */

