

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SwitchController_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SwitchController__1335806900_h
#define SwitchController__1335806900_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Duration_.h"
namespace controller_manager_msgs {
    namespace srv {
        namespace dds_ {
            namespace SwitchController_Request_Constants {
                static const DDS_Long BEST_EFFORT_= 1;
                static const DDS_Long STRICT_= 2;
            } /* namespace SwitchController_Request_Constants  */

            extern const char *SwitchController_Request_TYPENAME;

            struct SwitchController_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SwitchController_Request_TypeSupport;
            class SwitchController_Request_DataWriter;
            class SwitchController_Request_DataReader;
            #endif

            class SwitchController_Request_ 
            {
              public:
                typedef struct SwitchController_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SwitchController_Request_TypeSupport TypeSupport;
                typedef SwitchController_Request_DataWriter DataWriter;
                typedef SwitchController_Request_DataReader DataReader;
                #endif

                DDS_StringSeq  start_controllers_ ;
                DDS_StringSeq  stop_controllers_ ;
                DDS_Long   strictness_ ;
                DDS_Boolean   start_asap_ ;
                builtin_interfaces::msg::dds_::Duration_   timeout_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SwitchController_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SwitchController_Request_Seq, SwitchController_Request_);

            NDDSUSERDllExport
            RTIBool SwitchController_Request__initialize(
                SwitchController_Request_* self);

            NDDSUSERDllExport
            RTIBool SwitchController_Request__initialize_ex(
                SwitchController_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SwitchController_Request__initialize_w_params(
                SwitchController_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SwitchController_Request__finalize(
                SwitchController_Request_* self);

            NDDSUSERDllExport
            void SwitchController_Request__finalize_ex(
                SwitchController_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SwitchController_Request__finalize_w_params(
                SwitchController_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SwitchController_Request__finalize_optional_members(
                SwitchController_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SwitchController_Request__copy(
                SwitchController_Request_* dst,
                const SwitchController_Request_* src);

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

            extern const char *SwitchController_Response_TYPENAME;

            struct SwitchController_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SwitchController_Response_TypeSupport;
            class SwitchController_Response_DataWriter;
            class SwitchController_Response_DataReader;
            #endif

            class SwitchController_Response_ 
            {
              public:
                typedef struct SwitchController_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SwitchController_Response_TypeSupport TypeSupport;
                typedef SwitchController_Response_DataWriter DataWriter;
                typedef SwitchController_Response_DataReader DataReader;
                #endif

                DDS_Boolean   ok_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SwitchController_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SwitchController_Response_Seq, SwitchController_Response_);

            NDDSUSERDllExport
            RTIBool SwitchController_Response__initialize(
                SwitchController_Response_* self);

            NDDSUSERDllExport
            RTIBool SwitchController_Response__initialize_ex(
                SwitchController_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SwitchController_Response__initialize_w_params(
                SwitchController_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SwitchController_Response__finalize(
                SwitchController_Response_* self);

            NDDSUSERDllExport
            void SwitchController_Response__finalize_ex(
                SwitchController_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SwitchController_Response__finalize_w_params(
                SwitchController_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SwitchController_Response__finalize_optional_members(
                SwitchController_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SwitchController_Response__copy(
                SwitchController_Response_* dst,
                const SwitchController_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace controller_manager_msgs  */

#endif /* SwitchController_ */

