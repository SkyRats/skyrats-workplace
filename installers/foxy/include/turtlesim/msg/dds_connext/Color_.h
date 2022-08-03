

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Color_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Color__1013905027_h
#define Color__1013905027_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace turtlesim {
    namespace msg {
        namespace dds_ {

            extern const char *Color_TYPENAME;

            struct Color_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Color_TypeSupport;
            class Color_DataWriter;
            class Color_DataReader;
            #endif

            class Color_ 
            {
              public:
                typedef struct Color_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Color_TypeSupport TypeSupport;
                typedef Color_DataWriter DataWriter;
                typedef Color_DataReader DataReader;
                #endif

                DDS_Octet   r_ ;
                DDS_Octet   g_ ;
                DDS_Octet   b_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Color__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Color_Seq, Color_);

            NDDSUSERDllExport
            RTIBool Color__initialize(
                Color_* self);

            NDDSUSERDllExport
            RTIBool Color__initialize_ex(
                Color_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Color__initialize_w_params(
                Color_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Color__finalize(
                Color_* self);

            NDDSUSERDllExport
            void Color__finalize_ex(
                Color_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Color__finalize_w_params(
                Color_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Color__finalize_optional_members(
                Color_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Color__copy(
                Color_* dst,
                const Color_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace turtlesim  */

#endif /* Color_ */

