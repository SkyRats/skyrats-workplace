

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeoPointStamped_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GeoPointStamped__1155164031_h
#define GeoPointStamped__1155164031_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/GeoPoint_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace geographic_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *GeoPointStamped_TYPENAME;

            struct GeoPointStamped_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GeoPointStamped_TypeSupport;
            class GeoPointStamped_DataWriter;
            class GeoPointStamped_DataReader;
            #endif

            class GeoPointStamped_ 
            {
              public:
                typedef struct GeoPointStamped_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GeoPointStamped_TypeSupport TypeSupport;
                typedef GeoPointStamped_DataWriter DataWriter;
                typedef GeoPointStamped_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geographic_msgs::msg::dds_::GeoPoint_   position_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GeoPointStamped__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GeoPointStamped_Seq, GeoPointStamped_);

            NDDSUSERDllExport
            RTIBool GeoPointStamped__initialize(
                GeoPointStamped_* self);

            NDDSUSERDllExport
            RTIBool GeoPointStamped__initialize_ex(
                GeoPointStamped_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GeoPointStamped__initialize_w_params(
                GeoPointStamped_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GeoPointStamped__finalize(
                GeoPointStamped_* self);

            NDDSUSERDllExport
            void GeoPointStamped__finalize_ex(
                GeoPointStamped_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GeoPointStamped__finalize_w_params(
                GeoPointStamped_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GeoPointStamped__finalize_optional_members(
                GeoPointStamped_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GeoPointStamped__copy(
                GeoPointStamped_* dst,
                const GeoPointStamped_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geographic_msgs  */

#endif /* GeoPointStamped_ */

