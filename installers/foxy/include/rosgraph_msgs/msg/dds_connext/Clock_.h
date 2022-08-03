

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Clock_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Clock__1213558957_h
#define Clock__1213558957_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
namespace rosgraph_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Clock_TYPENAME;

            struct Clock_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Clock_TypeSupport;
            class Clock_DataWriter;
            class Clock_DataReader;
            #endif

            class Clock_ 
            {
              public:
                typedef struct Clock_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Clock_TypeSupport TypeSupport;
                typedef Clock_DataWriter DataWriter;
                typedef Clock_DataReader DataReader;
                #endif

                builtin_interfaces::msg::dds_::Time_   clock_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Clock__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Clock_Seq, Clock_);

            NDDSUSERDllExport
            RTIBool Clock__initialize(
                Clock_* self);

            NDDSUSERDllExport
            RTIBool Clock__initialize_ex(
                Clock_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Clock__initialize_w_params(
                Clock_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Clock__finalize(
                Clock_* self);

            NDDSUSERDllExport
            void Clock__finalize_ex(
                Clock_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Clock__finalize_w_params(
                Clock_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Clock__finalize_optional_members(
                Clock_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Clock__copy(
                Clock_* dst,
                const Clock_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rosgraph_msgs  */

#endif /* Clock_ */

