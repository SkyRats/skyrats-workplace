

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RoutePath_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RoutePath__2122949601_h
#define RoutePath__2122949601_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/KeyValue_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace geographic_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *RoutePath_TYPENAME;

            struct RoutePath_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RoutePath_TypeSupport;
            class RoutePath_DataWriter;
            class RoutePath_DataReader;
            #endif

            class RoutePath_ 
            {
              public:
                typedef struct RoutePath_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RoutePath_TypeSupport TypeSupport;
                typedef RoutePath_DataWriter DataWriter;
                typedef RoutePath_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                unique_identifier_msgs::msg::dds_::UUID_   network_ ;
                unique_identifier_msgs::msg::dds_::UUID_Seq  segments_ ;
                geographic_msgs::msg::dds_::KeyValue_Seq  props_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RoutePath__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RoutePath_Seq, RoutePath_);

            NDDSUSERDllExport
            RTIBool RoutePath__initialize(
                RoutePath_* self);

            NDDSUSERDllExport
            RTIBool RoutePath__initialize_ex(
                RoutePath_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RoutePath__initialize_w_params(
                RoutePath_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RoutePath__finalize(
                RoutePath_* self);

            NDDSUSERDllExport
            void RoutePath__finalize_ex(
                RoutePath_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RoutePath__finalize_w_params(
                RoutePath_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RoutePath__finalize_optional_members(
                RoutePath_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RoutePath__copy(
                RoutePath_* dst,
                const RoutePath_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geographic_msgs  */

#endif /* RoutePath_ */

