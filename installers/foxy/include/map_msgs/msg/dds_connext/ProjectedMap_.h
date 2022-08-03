

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ProjectedMap_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ProjectedMap__153366657_h
#define ProjectedMap__153366657_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "nav_msgs/msg/dds_connext/OccupancyGrid_.h"
namespace map_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *ProjectedMap_TYPENAME;

            struct ProjectedMap_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ProjectedMap_TypeSupport;
            class ProjectedMap_DataWriter;
            class ProjectedMap_DataReader;
            #endif

            class ProjectedMap_ 
            {
              public:
                typedef struct ProjectedMap_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ProjectedMap_TypeSupport TypeSupport;
                typedef ProjectedMap_DataWriter DataWriter;
                typedef ProjectedMap_DataReader DataReader;
                #endif

                nav_msgs::msg::dds_::OccupancyGrid_   map_ ;
                DDS_Double   min_z_ ;
                DDS_Double   max_z_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ProjectedMap__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ProjectedMap_Seq, ProjectedMap_);

            NDDSUSERDllExport
            RTIBool ProjectedMap__initialize(
                ProjectedMap_* self);

            NDDSUSERDllExport
            RTIBool ProjectedMap__initialize_ex(
                ProjectedMap_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ProjectedMap__initialize_w_params(
                ProjectedMap_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ProjectedMap__finalize(
                ProjectedMap_* self);

            NDDSUSERDllExport
            void ProjectedMap__finalize_ex(
                ProjectedMap_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ProjectedMap__finalize_w_params(
                ProjectedMap_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ProjectedMap__finalize_optional_members(
                ProjectedMap_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ProjectedMap__copy(
                ProjectedMap_* dst,
                const ProjectedMap_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace map_msgs  */

#endif /* ProjectedMap_ */

