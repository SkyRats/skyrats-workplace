

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ModelCoefficients_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ModelCoefficients__1334887634_h
#define ModelCoefficients__1334887634_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace pcl_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *ModelCoefficients_TYPENAME;

            struct ModelCoefficients_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ModelCoefficients_TypeSupport;
            class ModelCoefficients_DataWriter;
            class ModelCoefficients_DataReader;
            #endif

            class ModelCoefficients_ 
            {
              public:
                typedef struct ModelCoefficients_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ModelCoefficients_TypeSupport TypeSupport;
                typedef ModelCoefficients_DataWriter DataWriter;
                typedef ModelCoefficients_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_FloatSeq  values_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ModelCoefficients__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ModelCoefficients_Seq, ModelCoefficients_);

            NDDSUSERDllExport
            RTIBool ModelCoefficients__initialize(
                ModelCoefficients_* self);

            NDDSUSERDllExport
            RTIBool ModelCoefficients__initialize_ex(
                ModelCoefficients_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ModelCoefficients__initialize_w_params(
                ModelCoefficients_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ModelCoefficients__finalize(
                ModelCoefficients_* self);

            NDDSUSERDllExport
            void ModelCoefficients__finalize_ex(
                ModelCoefficients_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ModelCoefficients__finalize_w_params(
                ModelCoefficients_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ModelCoefficients__finalize_optional_members(
                ModelCoefficients_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ModelCoefficients__copy(
                ModelCoefficients_* dst,
                const ModelCoefficients_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace pcl_msgs  */

#endif /* ModelCoefficients_ */

