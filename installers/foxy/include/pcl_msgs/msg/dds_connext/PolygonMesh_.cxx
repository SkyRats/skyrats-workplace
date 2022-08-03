

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PolygonMesh_.idl using "rtiddsgen".
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

#include "PolygonMesh_.h"

#include <new>

namespace pcl_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *PolygonMesh_TYPENAME = "pcl_msgs::msg::dds_::PolygonMesh_";

            DDS_TypeCode* PolygonMesh__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PolygonMesh__g_tc_polygons__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member PolygonMesh__g_tc_members[3]=
                {

                    {
                        (char *)"header_",/* Member name */
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
                        (char *)"cloud_",/* Member name */
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
                        (char *)"polygons_",/* Member name */
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

                static DDS_TypeCode PolygonMesh__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"pcl_msgs::msg::dds_::PolygonMesh_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        PolygonMesh__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PolygonMesh_*/

                if (is_initialized) {
                    return &PolygonMesh__g_tc;
                }

                PolygonMesh__g_tc_polygons__sequence._data._typeCode = (RTICdrTypeCode *)pcl_msgs::msg::dds_::Vertices__get_typecode();

                PolygonMesh__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                PolygonMesh__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)sensor_msgs::msg::dds_::PointCloud2__get_typecode();

                PolygonMesh__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& PolygonMesh__g_tc_polygons__sequence;

                is_initialized = RTI_TRUE;

                return &PolygonMesh__g_tc;
            }

            RTIBool PolygonMesh__initialize(
                PolygonMesh_* sample) {
                return pcl_msgs::msg::dds_::PolygonMesh__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PolygonMesh__initialize_ex(
                PolygonMesh_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return pcl_msgs::msg::dds_::PolygonMesh__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PolygonMesh__initialize_w_params(
                PolygonMesh_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!std_msgs::msg::dds_::Header__initialize_w_params(&sample->header_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!sensor_msgs::msg::dds_::PointCloud2__initialize_w_params(&sample->cloud_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    pcl_msgs::msg::dds_::Vertices_Seq_initialize(&sample->polygons_ );
                    pcl_msgs::msg::dds_::Vertices_Seq_set_element_allocation_params(&sample->polygons_ ,allocParams);
                    pcl_msgs::msg::dds_::Vertices_Seq_set_absolute_maximum(&sample->polygons_ , RTI_INT32_MAX);
                    if (!pcl_msgs::msg::dds_::Vertices_Seq_set_maximum(&sample->polygons_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    pcl_msgs::msg::dds_::Vertices_Seq_set_length(&sample->polygons_, 0);
                }
                return RTI_TRUE;
            }

            void PolygonMesh__finalize(
                PolygonMesh_* sample)
            {

                pcl_msgs::msg::dds_::PolygonMesh__finalize_ex(sample,RTI_TRUE);
            }

            void PolygonMesh__finalize_ex(
                PolygonMesh_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                pcl_msgs::msg::dds_::PolygonMesh__finalize_w_params(
                    sample,&deallocParams);
            }

            void PolygonMesh__finalize_w_params(
                PolygonMesh_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                sensor_msgs::msg::dds_::PointCloud2__finalize_w_params(&sample->cloud_,deallocParams);

                pcl_msgs::msg::dds_::Vertices_Seq_set_element_deallocation_params(
                    &sample->polygons_,deallocParams);
                pcl_msgs::msg::dds_::Vertices_Seq_finalize(&sample->polygons_);

            }

            void PolygonMesh__finalize_optional_members(
                PolygonMesh_* sample, RTIBool deletePointers)
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

                std_msgs::msg::dds_::Header__finalize_optional_members(&sample->header_, deallocParams->delete_pointers);
                sensor_msgs::msg::dds_::PointCloud2__finalize_optional_members(&sample->cloud_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = pcl_msgs::msg::dds_::Vertices_Seq_get_length(
                        &sample->polygons_);

                    for (i = 0; i < length; i++) {
                        pcl_msgs::msg::dds_::Vertices__finalize_optional_members(
                            pcl_msgs::msg::dds_::Vertices_Seq_get_reference(
                                &sample->polygons_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool PolygonMesh__copy(
                PolygonMesh_* dst,
                const PolygonMesh_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!sensor_msgs::msg::dds_::PointCloud2__copy(
                        &dst->cloud_,(const sensor_msgs::msg::dds_::PointCloud2_*)&src->cloud_)) {
                        return RTI_FALSE;
                    } 
                    if (!pcl_msgs::msg::dds_::Vertices_Seq_copy(&dst->polygons_ ,
                    &src->polygons_ )) {
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
            * Configure and implement 'PolygonMesh_' sequence class.
            */
            #define T PolygonMesh_
            #define TSeq PolygonMesh_Seq

            #define T_initialize_w_params pcl_msgs::msg::dds_::PolygonMesh__initialize_w_params

            #define T_finalize_w_params   pcl_msgs::msg::dds_::PolygonMesh__finalize_w_params
            #define T_copy       pcl_msgs::msg::dds_::PolygonMesh__copy

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
} /* namespace pcl_msgs  */

