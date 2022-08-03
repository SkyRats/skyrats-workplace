

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ProjectedMap_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "ProjectedMap_.h"

#include <new>

namespace map_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *ProjectedMap_TYPENAME = "map_msgs::msg::dds_::ProjectedMap_";

            DDS_TypeCode* ProjectedMap__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ProjectedMap__g_tc_members[3]=
                {

                    {
                        (char *)"map_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"min_z_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"max_z_",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode ProjectedMap__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"map_msgs::msg::dds_::ProjectedMap_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        ProjectedMap__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ProjectedMap_*/

                if (is_initialized) {
                    return &ProjectedMap__g_tc;
                }

                ProjectedMap__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)nav_msgs::msg::dds_::OccupancyGrid__get_typecode();

                ProjectedMap__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                ProjectedMap__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                is_initialized = RTI_TRUE;

                return &ProjectedMap__g_tc;
            }

            RTIBool ProjectedMap__initialize(
                ProjectedMap_* sample) {
                return map_msgs::msg::dds_::ProjectedMap__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ProjectedMap__initialize_ex(
                ProjectedMap_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return map_msgs::msg::dds_::ProjectedMap__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ProjectedMap__initialize_w_params(
                ProjectedMap_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!nav_msgs::msg::dds_::OccupancyGrid__initialize_w_params(&sample->map_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->min_z_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->max_z_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void ProjectedMap__finalize(
                ProjectedMap_* sample)
            {

                map_msgs::msg::dds_::ProjectedMap__finalize_ex(sample,RTI_TRUE);
            }

            void ProjectedMap__finalize_ex(
                ProjectedMap_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                map_msgs::msg::dds_::ProjectedMap__finalize_w_params(
                    sample,&deallocParams);
            }

            void ProjectedMap__finalize_w_params(
                ProjectedMap_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                nav_msgs::msg::dds_::OccupancyGrid__finalize_w_params(&sample->map_,deallocParams);

            }

            void ProjectedMap__finalize_optional_members(
                ProjectedMap_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                nav_msgs::msg::dds_::OccupancyGrid__finalize_optional_members(&sample->map_, deallocParams->delete_pointers);
            }

            RTIBool ProjectedMap__copy(
                ProjectedMap_* dst,
                const ProjectedMap_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!nav_msgs::msg::dds_::OccupancyGrid__copy(
                        &dst->map_,(const nav_msgs::msg::dds_::OccupancyGrid_*)&src->map_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyDouble (
                        &dst->min_z_, &src->min_z_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->max_z_, &src->max_z_)) { 
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'ProjectedMap_' sequence class.
            */
            #define T ProjectedMap_
            #define TSeq ProjectedMap_Seq

            #define T_initialize_w_params map_msgs::msg::dds_::ProjectedMap__initialize_w_params

            #define T_finalize_w_params   map_msgs::msg::dds_::ProjectedMap__finalize_w_params
            #define T_copy       map_msgs::msg::dds_::ProjectedMap__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace map_msgs  */

