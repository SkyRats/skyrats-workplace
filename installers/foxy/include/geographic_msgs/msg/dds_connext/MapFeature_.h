

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MapFeature_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MapFeature__1192866249_h
#define MapFeature__1192866249_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/KeyValue_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace geographic_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *MapFeature_TYPENAME;

            struct MapFeature_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MapFeature_TypeSupport;
            class MapFeature_DataWriter;
            class MapFeature_DataReader;
            #endif

            class MapFeature_ 
            {
              public:
                typedef struct MapFeature_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MapFeature_TypeSupport TypeSupport;
                typedef MapFeature_DataWriter DataWriter;
                typedef MapFeature_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   id_ ;
                unique_identifier_msgs::msg::dds_::UUID_Seq  components_ ;
                geographic_msgs::msg::dds_::KeyValue_Seq  props_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MapFeature__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MapFeature_Seq, MapFeature_);

            NDDSUSERDllExport
            RTIBool MapFeature__initialize(
                MapFeature_* self);

            NDDSUSERDllExport
            RTIBool MapFeature__initialize_ex(
                MapFeature_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MapFeature__initialize_w_params(
                MapFeature_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MapFeature__finalize(
                MapFeature_* self);

            NDDSUSERDllExport
            void MapFeature__finalize_ex(
                MapFeature_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MapFeature__finalize_w_params(
                MapFeature_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MapFeature__finalize_optional_members(
                MapFeature_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MapFeature__copy(
                MapFeature_* dst,
                const MapFeature_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geographic_msgs  */

#endif /* MapFeature_ */

