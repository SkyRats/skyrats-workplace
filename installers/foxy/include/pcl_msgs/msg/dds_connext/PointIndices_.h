

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointIndices_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PointIndices__1009103135_h
#define PointIndices__1009103135_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace pcl_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *PointIndices_TYPENAME;

            struct PointIndices_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PointIndices_TypeSupport;
            class PointIndices_DataWriter;
            class PointIndices_DataReader;
            #endif

            class PointIndices_ 
            {
              public:
                typedef struct PointIndices_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PointIndices_TypeSupport TypeSupport;
                typedef PointIndices_DataWriter DataWriter;
                typedef PointIndices_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_LongSeq  indices_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PointIndices__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PointIndices_Seq, PointIndices_);

            NDDSUSERDllExport
            RTIBool PointIndices__initialize(
                PointIndices_* self);

            NDDSUSERDllExport
            RTIBool PointIndices__initialize_ex(
                PointIndices_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PointIndices__initialize_w_params(
                PointIndices_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PointIndices__finalize(
                PointIndices_* self);

            NDDSUSERDllExport
            void PointIndices__finalize_ex(
                PointIndices_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PointIndices__finalize_w_params(
                PointIndices_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PointIndices__finalize_optional_members(
                PointIndices_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PointIndices__copy(
                PointIndices_* dst,
                const PointIndices_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace pcl_msgs  */

#endif /* PointIndices_ */

