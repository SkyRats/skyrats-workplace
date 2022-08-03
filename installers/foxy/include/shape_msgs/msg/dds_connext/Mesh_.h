

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Mesh_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Mesh__245494073_h
#define Mesh__245494073_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Point_.h"
#include "shape_msgs/msg/dds_connext/MeshTriangle_.h"
namespace shape_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Mesh_TYPENAME;

            struct Mesh_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Mesh_TypeSupport;
            class Mesh_DataWriter;
            class Mesh_DataReader;
            #endif

            class Mesh_ 
            {
              public:
                typedef struct Mesh_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Mesh_TypeSupport TypeSupport;
                typedef Mesh_DataWriter DataWriter;
                typedef Mesh_DataReader DataReader;
                #endif

                shape_msgs::msg::dds_::MeshTriangle_Seq  triangles_ ;
                geometry_msgs::msg::dds_::Point_Seq  vertices_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Mesh__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Mesh_Seq, Mesh_);

            NDDSUSERDllExport
            RTIBool Mesh__initialize(
                Mesh_* self);

            NDDSUSERDllExport
            RTIBool Mesh__initialize_ex(
                Mesh_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Mesh__initialize_w_params(
                Mesh_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Mesh__finalize(
                Mesh_* self);

            NDDSUSERDllExport
            void Mesh__finalize_ex(
                Mesh_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Mesh__finalize_w_params(
                Mesh_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Mesh__finalize_optional_members(
                Mesh_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Mesh__copy(
                Mesh_* dst,
                const Mesh_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace shape_msgs  */

#endif /* Mesh_ */

