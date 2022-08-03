

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ProjectedMapInfo_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ProjectedMapInfo__279083632_h
#define ProjectedMapInfo__279083632_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace map_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *ProjectedMapInfo_TYPENAME;

            struct ProjectedMapInfo_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ProjectedMapInfo_TypeSupport;
            class ProjectedMapInfo_DataWriter;
            class ProjectedMapInfo_DataReader;
            #endif

            class ProjectedMapInfo_ 
            {
              public:
                typedef struct ProjectedMapInfo_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ProjectedMapInfo_TypeSupport TypeSupport;
                typedef ProjectedMapInfo_DataWriter DataWriter;
                typedef ProjectedMapInfo_DataReader DataReader;
                #endif

                DDS_Char *   frame_id_ ;
                DDS_Double   x_ ;
                DDS_Double   y_ ;
                DDS_Double   width_ ;
                DDS_Double   height_ ;
                DDS_Double   min_z_ ;
                DDS_Double   max_z_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ProjectedMapInfo__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ProjectedMapInfo_Seq, ProjectedMapInfo_);

            NDDSUSERDllExport
            RTIBool ProjectedMapInfo__initialize(
                ProjectedMapInfo_* self);

            NDDSUSERDllExport
            RTIBool ProjectedMapInfo__initialize_ex(
                ProjectedMapInfo_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ProjectedMapInfo__initialize_w_params(
                ProjectedMapInfo_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ProjectedMapInfo__finalize(
                ProjectedMapInfo_* self);

            NDDSUSERDllExport
            void ProjectedMapInfo__finalize_ex(
                ProjectedMapInfo_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ProjectedMapInfo__finalize_w_params(
                ProjectedMapInfo_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ProjectedMapInfo__finalize_optional_members(
                ProjectedMapInfo_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ProjectedMapInfo__copy(
                ProjectedMapInfo_* dst,
                const ProjectedMapInfo_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace map_msgs  */

#endif /* ProjectedMapInfo_ */

