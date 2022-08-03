

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RouteNetwork_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RouteNetwork__816001147_h
#define RouteNetwork__816001147_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/BoundingBox_.h"
#include "geographic_msgs/msg/dds_connext/KeyValue_.h"
#include "geographic_msgs/msg/dds_connext/RouteSegment_.h"
#include "geographic_msgs/msg/dds_connext/WayPoint_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace geographic_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *RouteNetwork_TYPENAME;

            struct RouteNetwork_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RouteNetwork_TypeSupport;
            class RouteNetwork_DataWriter;
            class RouteNetwork_DataReader;
            #endif

            class RouteNetwork_ 
            {
              public:
                typedef struct RouteNetwork_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RouteNetwork_TypeSupport TypeSupport;
                typedef RouteNetwork_DataWriter DataWriter;
                typedef RouteNetwork_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                unique_identifier_msgs::msg::dds_::UUID_   id_ ;
                geographic_msgs::msg::dds_::BoundingBox_   bounds_ ;
                geographic_msgs::msg::dds_::WayPoint_Seq  points_ ;
                geographic_msgs::msg::dds_::RouteSegment_Seq  segments_ ;
                geographic_msgs::msg::dds_::KeyValue_Seq  props_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RouteNetwork__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RouteNetwork_Seq, RouteNetwork_);

            NDDSUSERDllExport
            RTIBool RouteNetwork__initialize(
                RouteNetwork_* self);

            NDDSUSERDllExport
            RTIBool RouteNetwork__initialize_ex(
                RouteNetwork_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RouteNetwork__initialize_w_params(
                RouteNetwork_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RouteNetwork__finalize(
                RouteNetwork_* self);

            NDDSUSERDllExport
            void RouteNetwork__finalize_ex(
                RouteNetwork_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RouteNetwork__finalize_w_params(
                RouteNetwork_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RouteNetwork__finalize_optional_members(
                RouteNetwork_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RouteNetwork__copy(
                RouteNetwork_* dst,
                const RouteNetwork_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geographic_msgs  */

#endif /* RouteNetwork_ */

