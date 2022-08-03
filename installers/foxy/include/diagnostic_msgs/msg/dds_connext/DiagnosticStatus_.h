

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DiagnosticStatus_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DiagnosticStatus__2027181458_h
#define DiagnosticStatus__2027181458_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "diagnostic_msgs/msg/dds_connext/KeyValue_.h"
namespace diagnostic_msgs {
    namespace msg {
        namespace dds_ {
            namespace DiagnosticStatus_Constants {
                static const DDS_Octet OK_= 0;
                static const DDS_Octet WARN_= 1;
                static const DDS_Octet ERROR_= 2;
                static const DDS_Octet STALE_= 3;
            } /* namespace DiagnosticStatus_Constants  */

            extern const char *DiagnosticStatus_TYPENAME;

            struct DiagnosticStatus_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DiagnosticStatus_TypeSupport;
            class DiagnosticStatus_DataWriter;
            class DiagnosticStatus_DataReader;
            #endif

            class DiagnosticStatus_ 
            {
              public:
                typedef struct DiagnosticStatus_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DiagnosticStatus_TypeSupport TypeSupport;
                typedef DiagnosticStatus_DataWriter DataWriter;
                typedef DiagnosticStatus_DataReader DataReader;
                #endif

                DDS_Octet   level_ ;
                DDS_Char *   name_ ;
                DDS_Char *   message_ ;
                DDS_Char *   hardware_id_ ;
                diagnostic_msgs::msg::dds_::KeyValue_Seq  values_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DiagnosticStatus__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DiagnosticStatus_Seq, DiagnosticStatus_);

            NDDSUSERDllExport
            RTIBool DiagnosticStatus__initialize(
                DiagnosticStatus_* self);

            NDDSUSERDllExport
            RTIBool DiagnosticStatus__initialize_ex(
                DiagnosticStatus_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DiagnosticStatus__initialize_w_params(
                DiagnosticStatus_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DiagnosticStatus__finalize(
                DiagnosticStatus_* self);

            NDDSUSERDllExport
            void DiagnosticStatus__finalize_ex(
                DiagnosticStatus_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DiagnosticStatus__finalize_w_params(
                DiagnosticStatus_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DiagnosticStatus__finalize_optional_members(
                DiagnosticStatus_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DiagnosticStatus__copy(
                DiagnosticStatus_* dst,
                const DiagnosticStatus_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace diagnostic_msgs  */

#endif /* DiagnosticStatus_ */

