

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PolygonMesh_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PolygonMesh__655040956_h
#define PolygonMesh__655040956_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "pcl_msgs/msg/dds_connext/Vertices_.h"
#include "sensor_msgs/msg/dds_connext/PointCloud2_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace pcl_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *PolygonMesh_TYPENAME;

            struct PolygonMesh_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PolygonMesh_TypeSupport;
            class PolygonMesh_DataWriter;
            class PolygonMesh_DataReader;
            #endif

            class PolygonMesh_ 
            {
              public:
                typedef struct PolygonMesh_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PolygonMesh_TypeSupport TypeSupport;
                typedef PolygonMesh_DataWriter DataWriter;
                typedef PolygonMesh_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                sensor_msgs::msg::dds_::PointCloud2_   cloud_ ;
                pcl_msgs::msg::dds_::Vertices_Seq  polygons_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PolygonMesh__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PolygonMesh_Seq, PolygonMesh_);

            NDDSUSERDllExport
            RTIBool PolygonMesh__initialize(
                PolygonMesh_* self);

            NDDSUSERDllExport
            RTIBool PolygonMesh__initialize_ex(
                PolygonMesh_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PolygonMesh__initialize_w_params(
                PolygonMesh_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PolygonMesh__finalize(
                PolygonMesh_* self);

            NDDSUSERDllExport
            void PolygonMesh__finalize_ex(
                PolygonMesh_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PolygonMesh__finalize_w_params(
                PolygonMesh_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PolygonMesh__finalize_optional_members(
                PolygonMesh_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PolygonMesh__copy(
                PolygonMesh_* dst,
                const PolygonMesh_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace pcl_msgs  */

#endif /* PolygonMesh_ */

