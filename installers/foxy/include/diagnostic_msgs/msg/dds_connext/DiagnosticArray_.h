

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DiagnosticArray_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DiagnosticArray__688529382_h
#define DiagnosticArray__688529382_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "diagnostic_msgs/msg/dds_connext/DiagnosticStatus_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace diagnostic_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *DiagnosticArray_TYPENAME;

            struct DiagnosticArray_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DiagnosticArray_TypeSupport;
            class DiagnosticArray_DataWriter;
            class DiagnosticArray_DataReader;
            #endif

            class DiagnosticArray_ 
            {
              public:
                typedef struct DiagnosticArray_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DiagnosticArray_TypeSupport TypeSupport;
                typedef DiagnosticArray_DataWriter DataWriter;
                typedef DiagnosticArray_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq  status_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DiagnosticArray__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DiagnosticArray_Seq, DiagnosticArray_);

            NDDSUSERDllExport
            RTIBool DiagnosticArray__initialize(
                DiagnosticArray_* self);

            NDDSUSERDllExport
            RTIBool DiagnosticArray__initialize_ex(
                DiagnosticArray_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DiagnosticArray__initialize_w_params(
                DiagnosticArray_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DiagnosticArray__finalize(
                DiagnosticArray_* self);

            NDDSUSERDllExport
            void DiagnosticArray__finalize_ex(
                DiagnosticArray_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DiagnosticArray__finalize_w_params(
                DiagnosticArray_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DiagnosticArray__finalize_optional_members(
                DiagnosticArray_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DiagnosticArray__copy(
                DiagnosticArray_* dst,
                const DiagnosticArray_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace diagnostic_msgs  */

#endif /* DiagnosticArray_ */

