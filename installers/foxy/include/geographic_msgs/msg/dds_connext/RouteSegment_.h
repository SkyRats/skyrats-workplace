

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RouteSegment_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RouteSegment__1370178882_h
#define RouteSegment__1370178882_h

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

            extern const char *RouteSegment_TYPENAME;

            struct RouteSegment_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RouteSegment_TypeSupport;
            class RouteSegment_DataWriter;
            class RouteSegment_DataReader;
            #endif

            class RouteSegment_ 
            {
              public:
                typedef struct RouteSegment_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RouteSegment_TypeSupport TypeSupport;
                typedef RouteSegment_DataWriter DataWriter;
                typedef RouteSegment_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   id_ ;
                unique_identifier_msgs::msg::dds_::UUID_   start_ ;
                unique_identifier_msgs::msg::dds_::UUID_   end_ ;
                geographic_msgs::msg::dds_::KeyValue_Seq  props_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RouteSegment__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RouteSegment_Seq, RouteSegment_);

            NDDSUSERDllExport
            RTIBool RouteSegment__initialize(
                RouteSegment_* self);

            NDDSUSERDllExport
            RTIBool RouteSegment__initialize_ex(
                RouteSegment_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RouteSegment__initialize_w_params(
                RouteSegment_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RouteSegment__finalize(
                RouteSegment_* self);

            NDDSUSERDllExport
            void RouteSegment__finalize_ex(
                RouteSegment_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RouteSegment__finalize_w_params(
                RouteSegment_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RouteSegment__finalize_optional_members(
                RouteSegment_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RouteSegment__copy(
                RouteSegment_* dst,
                const RouteSegment_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geographic_msgs  */

#endif /* RouteSegment_ */

