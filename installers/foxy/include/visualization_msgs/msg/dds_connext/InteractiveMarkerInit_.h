

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InteractiveMarkerInit_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef InteractiveMarkerInit__25285186_h
#define InteractiveMarkerInit__25285186_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "visualization_msgs/msg/dds_connext/InteractiveMarker_.h"
namespace visualization_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *InteractiveMarkerInit_TYPENAME;

            struct InteractiveMarkerInit_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class InteractiveMarkerInit_TypeSupport;
            class InteractiveMarkerInit_DataWriter;
            class InteractiveMarkerInit_DataReader;
            #endif

            class InteractiveMarkerInit_ 
            {
              public:
                typedef struct InteractiveMarkerInit_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef InteractiveMarkerInit_TypeSupport TypeSupport;
                typedef InteractiveMarkerInit_DataWriter DataWriter;
                typedef InteractiveMarkerInit_DataReader DataReader;
                #endif

                DDS_Char *   server_id_ ;
                DDS_UnsignedLongLong   seq_num_ ;
                visualization_msgs::msg::dds_::InteractiveMarker_Seq  markers_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* InteractiveMarkerInit__get_typecode(void); /* Type code */

            DDS_SEQUENCE(InteractiveMarkerInit_Seq, InteractiveMarkerInit_);

            NDDSUSERDllExport
            RTIBool InteractiveMarkerInit__initialize(
                InteractiveMarkerInit_* self);

            NDDSUSERDllExport
            RTIBool InteractiveMarkerInit__initialize_ex(
                InteractiveMarkerInit_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool InteractiveMarkerInit__initialize_w_params(
                InteractiveMarkerInit_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void InteractiveMarkerInit__finalize(
                InteractiveMarkerInit_* self);

            NDDSUSERDllExport
            void InteractiveMarkerInit__finalize_ex(
                InteractiveMarkerInit_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void InteractiveMarkerInit__finalize_w_params(
                InteractiveMarkerInit_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void InteractiveMarkerInit__finalize_optional_members(
                InteractiveMarkerInit_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool InteractiveMarkerInit__copy(
                InteractiveMarkerInit_* dst,
                const InteractiveMarkerInit_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace visualization_msgs  */

#endif /* InteractiveMarkerInit_ */

