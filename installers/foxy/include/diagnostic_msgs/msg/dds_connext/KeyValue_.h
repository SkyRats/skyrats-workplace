

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from KeyValue_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef KeyValue__974022502_h
#define KeyValue__974022502_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace diagnostic_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *KeyValue_TYPENAME;

            struct KeyValue_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class KeyValue_TypeSupport;
            class KeyValue_DataWriter;
            class KeyValue_DataReader;
            #endif

            class KeyValue_ 
            {
              public:
                typedef struct KeyValue_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef KeyValue_TypeSupport TypeSupport;
                typedef KeyValue_DataWriter DataWriter;
                typedef KeyValue_DataReader DataReader;
                #endif

                DDS_Char *   key_ ;
                DDS_Char *   value_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* KeyValue__get_typecode(void); /* Type code */

            DDS_SEQUENCE(KeyValue_Seq, KeyValue_);

            NDDSUSERDllExport
            RTIBool KeyValue__initialize(
                KeyValue_* self);

            NDDSUSERDllExport
            RTIBool KeyValue__initialize_ex(
                KeyValue_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool KeyValue__initialize_w_params(
                KeyValue_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void KeyValue__finalize(
                KeyValue_* self);

            NDDSUSERDllExport
            void KeyValue__finalize_ex(
                KeyValue_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void KeyValue__finalize_w_params(
                KeyValue_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void KeyValue__finalize_optional_members(
                KeyValue_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool KeyValue__copy(
                KeyValue_* dst,
                const KeyValue_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace diagnostic_msgs  */

#endif /* KeyValue_ */

