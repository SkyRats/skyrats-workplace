

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Extrinsics_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Extrinsics__379675296_h
#define Extrinsics__379675296_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace realsense2_camera_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Extrinsics_TYPENAME;

            struct Extrinsics_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Extrinsics_TypeSupport;
            class Extrinsics_DataWriter;
            class Extrinsics_DataReader;
            #endif

            class Extrinsics_ 
            {
              public:
                typedef struct Extrinsics_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Extrinsics_TypeSupport TypeSupport;
                typedef Extrinsics_DataWriter DataWriter;
                typedef Extrinsics_DataReader DataReader;
                #endif

                DDS_Double   rotation_ [9];
                DDS_Double   translation_ [3];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Extrinsics__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Extrinsics_Seq, Extrinsics_);

            NDDSUSERDllExport
            RTIBool Extrinsics__initialize(
                Extrinsics_* self);

            NDDSUSERDllExport
            RTIBool Extrinsics__initialize_ex(
                Extrinsics_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Extrinsics__initialize_w_params(
                Extrinsics_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Extrinsics__finalize(
                Extrinsics_* self);

            NDDSUSERDllExport
            void Extrinsics__finalize_ex(
                Extrinsics_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Extrinsics__finalize_w_params(
                Extrinsics_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Extrinsics__finalize_optional_members(
                Extrinsics_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Extrinsics__copy(
                Extrinsics_* dst,
                const Extrinsics_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace realsense2_camera_msgs  */

#endif /* Extrinsics_ */

