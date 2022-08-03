

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Transition_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Transition__1322293206_h
#define Transition__1322293206_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace lifecycle_msgs {
    namespace msg {
        namespace dds_ {
            namespace Transition_Constants {
                static const DDS_Octet TRANSITION_CREATE_= 0;
                static const DDS_Octet TRANSITION_CONFIGURE_= 1;
                static const DDS_Octet TRANSITION_CLEANUP_= 2;
                static const DDS_Octet TRANSITION_ACTIVATE_= 3;
                static const DDS_Octet TRANSITION_DEACTIVATE_= 4;
                static const DDS_Octet TRANSITION_UNCONFIGURED_SHUTDOWN_= 5;
                static const DDS_Octet TRANSITION_INACTIVE_SHUTDOWN_= 6;
                static const DDS_Octet TRANSITION_ACTIVE_SHUTDOWN_= 7;
                static const DDS_Octet TRANSITION_DESTROY_= 8;
                static const DDS_Octet TRANSITION_ON_CONFIGURE_SUCCESS_= 10;
                static const DDS_Octet TRANSITION_ON_CONFIGURE_FAILURE_= 11;
                static const DDS_Octet TRANSITION_ON_CONFIGURE_ERROR_= 12;
                static const DDS_Octet TRANSITION_ON_CLEANUP_SUCCESS_= 20;
                static const DDS_Octet TRANSITION_ON_CLEANUP_FAILURE_= 21;
                static const DDS_Octet TRANSITION_ON_CLEANUP_ERROR_= 22;
                static const DDS_Octet TRANSITION_ON_ACTIVATE_SUCCESS_= 30;
                static const DDS_Octet TRANSITION_ON_ACTIVATE_FAILURE_= 31;
                static const DDS_Octet TRANSITION_ON_ACTIVATE_ERROR_= 32;
                static const DDS_Octet TRANSITION_ON_DEACTIVATE_SUCCESS_= 40;
                static const DDS_Octet TRANSITION_ON_DEACTIVATE_FAILURE_= 41;
                static const DDS_Octet TRANSITION_ON_DEACTIVATE_ERROR_= 42;
                static const DDS_Octet TRANSITION_ON_SHUTDOWN_SUCCESS_= 50;
                static const DDS_Octet TRANSITION_ON_SHUTDOWN_FAILURE_= 51;
                static const DDS_Octet TRANSITION_ON_SHUTDOWN_ERROR_= 52;
                static const DDS_Octet TRANSITION_ON_ERROR_SUCCESS_= 60;
                static const DDS_Octet TRANSITION_ON_ERROR_FAILURE_= 61;
                static const DDS_Octet TRANSITION_ON_ERROR_ERROR_= 62;
                static const DDS_Octet TRANSITION_CALLBACK_SUCCESS_= 97;
                static const DDS_Octet TRANSITION_CALLBACK_FAILURE_= 98;
                static const DDS_Octet TRANSITION_CALLBACK_ERROR_= 99;
            } /* namespace Transition_Constants  */

            extern const char *Transition_TYPENAME;

            struct Transition_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Transition_TypeSupport;
            class Transition_DataWriter;
            class Transition_DataReader;
            #endif

            class Transition_ 
            {
              public:
                typedef struct Transition_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Transition_TypeSupport TypeSupport;
                typedef Transition_DataWriter DataWriter;
                typedef Transition_DataReader DataReader;
                #endif

                DDS_Octet   id_ ;
                DDS_Char *   label_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Transition__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Transition_Seq, Transition_);

            NDDSUSERDllExport
            RTIBool Transition__initialize(
                Transition_* self);

            NDDSUSERDllExport
            RTIBool Transition__initialize_ex(
                Transition_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Transition__initialize_w_params(
                Transition_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Transition__finalize(
                Transition_* self);

            NDDSUSERDllExport
            void Transition__finalize_ex(
                Transition_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Transition__finalize_w_params(
                Transition_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Transition__finalize_optional_members(
                Transition_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Transition__copy(
                Transition_* dst,
                const Transition_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace lifecycle_msgs  */

#endif /* Transition_ */

