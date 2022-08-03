

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HardwareInterface_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef HardwareInterface__1831276939_h
#define HardwareInterface__1831276939_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace controller_manager_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *HardwareInterface_TYPENAME;

            struct HardwareInterface_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class HardwareInterface_TypeSupport;
            class HardwareInterface_DataWriter;
            class HardwareInterface_DataReader;
            #endif

            class HardwareInterface_ 
            {
              public:
                typedef struct HardwareInterface_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef HardwareInterface_TypeSupport TypeSupport;
                typedef HardwareInterface_DataWriter DataWriter;
                typedef HardwareInterface_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;
                DDS_Boolean   is_claimed_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* HardwareInterface__get_typecode(void); /* Type code */

            DDS_SEQUENCE(HardwareInterface_Seq, HardwareInterface_);

            NDDSUSERDllExport
            RTIBool HardwareInterface__initialize(
                HardwareInterface_* self);

            NDDSUSERDllExport
            RTIBool HardwareInterface__initialize_ex(
                HardwareInterface_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool HardwareInterface__initialize_w_params(
                HardwareInterface_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void HardwareInterface__finalize(
                HardwareInterface_* self);

            NDDSUSERDllExport
            void HardwareInterface__finalize_ex(
                HardwareInterface_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void HardwareInterface__finalize_w_params(
                HardwareInterface_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void HardwareInterface__finalize_optional_members(
                HardwareInterface_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool HardwareInterface__copy(
                HardwareInterface_* dst,
                const HardwareInterface_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace controller_manager_msgs  */

#endif /* HardwareInterface_ */

