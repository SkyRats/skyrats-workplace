

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointCloud2Update_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PointCloud2Update__1447668773_h
#define PointCloud2Update__1447668773_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "sensor_msgs/msg/dds_connext/PointCloud2_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace map_msgs {
    namespace msg {
        namespace dds_ {
            namespace PointCloud2Update_Constants {
                static const DDS_UnsignedLong ADD_= 0;
                static const DDS_UnsignedLong DELETE_= 1;
            } /* namespace PointCloud2Update_Constants  */

            extern const char *PointCloud2Update_TYPENAME;

            struct PointCloud2Update_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PointCloud2Update_TypeSupport;
            class PointCloud2Update_DataWriter;
            class PointCloud2Update_DataReader;
            #endif

            class PointCloud2Update_ 
            {
              public:
                typedef struct PointCloud2Update_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PointCloud2Update_TypeSupport TypeSupport;
                typedef PointCloud2Update_DataWriter DataWriter;
                typedef PointCloud2Update_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_UnsignedLong   type_ ;
                sensor_msgs::msg::dds_::PointCloud2_   points_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PointCloud2Update__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PointCloud2Update_Seq, PointCloud2Update_);

            NDDSUSERDllExport
            RTIBool PointCloud2Update__initialize(
                PointCloud2Update_* self);

            NDDSUSERDllExport
            RTIBool PointCloud2Update__initialize_ex(
                PointCloud2Update_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PointCloud2Update__initialize_w_params(
                PointCloud2Update_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PointCloud2Update__finalize(
                PointCloud2Update_* self);

            NDDSUSERDllExport
            void PointCloud2Update__finalize_ex(
                PointCloud2Update_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PointCloud2Update__finalize_w_params(
                PointCloud2Update_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PointCloud2Update__finalize_optional_members(
                PointCloud2Update_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PointCloud2Update__copy(
                PointCloud2Update_* dst,
                const PointCloud2Update_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace map_msgs  */

#endif /* PointCloud2Update_ */

