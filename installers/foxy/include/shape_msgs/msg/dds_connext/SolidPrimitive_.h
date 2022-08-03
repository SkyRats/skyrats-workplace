

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SolidPrimitive_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SolidPrimitive__119679986_h
#define SolidPrimitive__119679986_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace shape_msgs {
    namespace msg {
        namespace dds_ {
            namespace SolidPrimitive_Constants {
                static const DDS_Octet BOX_= 1;
                static const DDS_Octet SPHERE_= 2;
                static const DDS_Octet CYLINDER_= 3;
                static const DDS_Octet CONE_= 4;
                static const DDS_Octet BOX_X_= 0;
                static const DDS_Octet BOX_Y_= 1;
                static const DDS_Octet BOX_Z_= 2;
                static const DDS_Octet SPHERE_RADIUS_= 0;
                static const DDS_Octet CYLINDER_HEIGHT_= 0;
                static const DDS_Octet CYLINDER_RADIUS_= 1;
                static const DDS_Octet CONE_HEIGHT_= 0;
                static const DDS_Octet CONE_RADIUS_= 1;
            } /* namespace SolidPrimitive_Constants  */

            extern const char *SolidPrimitive_TYPENAME;

            struct SolidPrimitive_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SolidPrimitive_TypeSupport;
            class SolidPrimitive_DataWriter;
            class SolidPrimitive_DataReader;
            #endif

            class SolidPrimitive_ 
            {
              public:
                typedef struct SolidPrimitive_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SolidPrimitive_TypeSupport TypeSupport;
                typedef SolidPrimitive_DataWriter DataWriter;
                typedef SolidPrimitive_DataReader DataReader;
                #endif

                DDS_Octet   type_ ;
                DDS_DoubleSeq  dimensions_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SolidPrimitive__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SolidPrimitive_Seq, SolidPrimitive_);

            NDDSUSERDllExport
            RTIBool SolidPrimitive__initialize(
                SolidPrimitive_* self);

            NDDSUSERDllExport
            RTIBool SolidPrimitive__initialize_ex(
                SolidPrimitive_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SolidPrimitive__initialize_w_params(
                SolidPrimitive_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SolidPrimitive__finalize(
                SolidPrimitive_* self);

            NDDSUSERDllExport
            void SolidPrimitive__finalize_ex(
                SolidPrimitive_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SolidPrimitive__finalize_w_params(
                SolidPrimitive_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SolidPrimitive__finalize_optional_members(
                SolidPrimitive_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SolidPrimitive__copy(
                SolidPrimitive_* dst,
                const SolidPrimitive_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace shape_msgs  */

#endif /* SolidPrimitive_ */

