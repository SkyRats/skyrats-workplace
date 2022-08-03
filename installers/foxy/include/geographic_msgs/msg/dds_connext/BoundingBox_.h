

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BoundingBox_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef BoundingBox__279539227_h
#define BoundingBox__279539227_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/GeoPoint_.h"
namespace geographic_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *BoundingBox_TYPENAME;

            struct BoundingBox_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class BoundingBox_TypeSupport;
            class BoundingBox_DataWriter;
            class BoundingBox_DataReader;
            #endif

            class BoundingBox_ 
            {
              public:
                typedef struct BoundingBox_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef BoundingBox_TypeSupport TypeSupport;
                typedef BoundingBox_DataWriter DataWriter;
                typedef BoundingBox_DataReader DataReader;
                #endif

                geographic_msgs::msg::dds_::GeoPoint_   min_pt_ ;
                geographic_msgs::msg::dds_::GeoPoint_   max_pt_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* BoundingBox__get_typecode(void); /* Type code */

            DDS_SEQUENCE(BoundingBox_Seq, BoundingBox_);

            NDDSUSERDllExport
            RTIBool BoundingBox__initialize(
                BoundingBox_* self);

            NDDSUSERDllExport
            RTIBool BoundingBox__initialize_ex(
                BoundingBox_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool BoundingBox__initialize_w_params(
                BoundingBox_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void BoundingBox__finalize(
                BoundingBox_* self);

            NDDSUSERDllExport
            void BoundingBox__finalize_ex(
                BoundingBox_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void BoundingBox__finalize_w_params(
                BoundingBox_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void BoundingBox__finalize_optional_members(
                BoundingBox_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool BoundingBox__copy(
                BoundingBox_* dst,
                const BoundingBox_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geographic_msgs  */

#endif /* BoundingBox_ */

