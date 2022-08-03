

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeoPoseStamped_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GeoPoseStamped__1040300407_h
#define GeoPoseStamped__1040300407_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/GeoPose_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace geographic_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *GeoPoseStamped_TYPENAME;

            struct GeoPoseStamped_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GeoPoseStamped_TypeSupport;
            class GeoPoseStamped_DataWriter;
            class GeoPoseStamped_DataReader;
            #endif

            class GeoPoseStamped_ 
            {
              public:
                typedef struct GeoPoseStamped_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GeoPoseStamped_TypeSupport TypeSupport;
                typedef GeoPoseStamped_DataWriter DataWriter;
                typedef GeoPoseStamped_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geographic_msgs::msg::dds_::GeoPose_   pose_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GeoPoseStamped__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GeoPoseStamped_Seq, GeoPoseStamped_);

            NDDSUSERDllExport
            RTIBool GeoPoseStamped__initialize(
                GeoPoseStamped_* self);

            NDDSUSERDllExport
            RTIBool GeoPoseStamped__initialize_ex(
                GeoPoseStamped_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GeoPoseStamped__initialize_w_params(
                GeoPoseStamped_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GeoPoseStamped__finalize(
                GeoPoseStamped_* self);

            NDDSUSERDllExport
            void GeoPoseStamped__finalize_ex(
                GeoPoseStamped_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GeoPoseStamped__finalize_w_params(
                GeoPoseStamped_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GeoPoseStamped__finalize_optional_members(
                GeoPoseStamped_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GeoPoseStamped__copy(
                GeoPoseStamped_* dst,
                const GeoPoseStamped_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geographic_msgs  */

#endif /* GeoPoseStamped_ */

