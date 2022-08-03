

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MarkerArray_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MarkerArray__1343912078_h
#define MarkerArray__1343912078_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "visualization_msgs/msg/dds_connext/Marker_.h"
namespace visualization_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *MarkerArray_TYPENAME;

            struct MarkerArray_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MarkerArray_TypeSupport;
            class MarkerArray_DataWriter;
            class MarkerArray_DataReader;
            #endif

            class MarkerArray_ 
            {
              public:
                typedef struct MarkerArray_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MarkerArray_TypeSupport TypeSupport;
                typedef MarkerArray_DataWriter DataWriter;
                typedef MarkerArray_DataReader DataReader;
                #endif

                visualization_msgs::msg::dds_::Marker_Seq  markers_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MarkerArray__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MarkerArray_Seq, MarkerArray_);

            NDDSUSERDllExport
            RTIBool MarkerArray__initialize(
                MarkerArray_* self);

            NDDSUSERDllExport
            RTIBool MarkerArray__initialize_ex(
                MarkerArray_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MarkerArray__initialize_w_params(
                MarkerArray_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MarkerArray__finalize(
                MarkerArray_* self);

            NDDSUSERDllExport
            void MarkerArray__finalize_ex(
                MarkerArray_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MarkerArray__finalize_w_params(
                MarkerArray_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MarkerArray__finalize_optional_members(
                MarkerArray_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MarkerArray__copy(
                MarkerArray_* dst,
                const MarkerArray_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace visualization_msgs  */

#endif /* MarkerArray_ */

