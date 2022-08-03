

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ReloadControllerLibraries_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ReloadControllerLibraries__888350348_h
#define ReloadControllerLibraries__888350348_h

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

            extern const char *ReloadControllerLibraries_Request_TYPENAME;

            struct ReloadControllerLibraries_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ReloadControllerLibraries_Request_TypeSupport;
            class ReloadControllerLibraries_Request_DataWriter;
            class ReloadControllerLibraries_Request_DataReader;
            #endif

            class ReloadControllerLibraries_Request_ 
            {
              public:
                typedef struct ReloadControllerLibraries_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ReloadControllerLibraries_Request_TypeSupport TypeSupport;
                typedef ReloadControllerLibraries_Request_DataWriter DataWriter;
                typedef ReloadControllerLibraries_Request_DataReader DataReader;
                #endif

                DDS_Boolean   force_kill_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ReloadControllerLibraries_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ReloadControllerLibraries_Request_Seq, ReloadControllerLibraries_Request_);

            NDDSUSERDllExport
            RTIBool ReloadControllerLibraries_Request__initialize(
                ReloadControllerLibraries_Request_* self);

            NDDSUSERDllExport
            RTIBool ReloadControllerLibraries_Request__initialize_ex(
                ReloadControllerLibraries_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ReloadControllerLibraries_Request__initialize_w_params(
                ReloadControllerLibraries_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ReloadControllerLibraries_Request__finalize(
                ReloadControllerLibraries_Request_* self);

            NDDSUSERDllExport
            void ReloadControllerLibraries_Request__finalize_ex(
                ReloadControllerLibraries_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ReloadControllerLibraries_Request__finalize_w_params(
                ReloadControllerLibraries_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ReloadControllerLibraries_Request__finalize_optional_members(
                ReloadControllerLibraries_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ReloadControllerLibraries_Request__copy(
                ReloadControllerLibraries_Request_* dst,
                const ReloadControllerLibraries_Request_* src);

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

            extern const char *ReloadControllerLibraries_Response_TYPENAME;

            struct ReloadControllerLibraries_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ReloadControllerLibraries_Response_TypeSupport;
            class ReloadControllerLibraries_Response_DataWriter;
            class ReloadControllerLibraries_Response_DataReader;
            #endif

            class ReloadControllerLibraries_Response_ 
            {
              public:
                typedef struct ReloadControllerLibraries_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ReloadControllerLibraries_Response_TypeSupport TypeSupport;
                typedef ReloadControllerLibraries_Response_DataWriter DataWriter;
                typedef ReloadControllerLibraries_Response_DataReader DataReader;
                #endif

                DDS_Boolean   ok_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ReloadControllerLibraries_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ReloadControllerLibraries_Response_Seq, ReloadControllerLibraries_Response_);

            NDDSUSERDllExport
            RTIBool ReloadControllerLibraries_Response__initialize(
                ReloadControllerLibraries_Response_* self);

            NDDSUSERDllExport
            RTIBool ReloadControllerLibraries_Response__initialize_ex(
                ReloadControllerLibraries_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ReloadControllerLibraries_Response__initialize_w_params(
                ReloadControllerLibraries_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ReloadControllerLibraries_Response__finalize(
                ReloadControllerLibraries_Response_* self);

            NDDSUSERDllExport
            void ReloadControllerLibraries_Response__finalize_ex(
                ReloadControllerLibraries_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ReloadControllerLibraries_Response__finalize_w_params(
                ReloadControllerLibraries_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ReloadControllerLibraries_Response__finalize_optional_members(
                ReloadControllerLibraries_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ReloadControllerLibraries_Response__copy(
                ReloadControllerLibraries_Response_* dst,
                const ReloadControllerLibraries_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace controller_manager_msgs  */

#endif /* ReloadControllerLibraries_ */

