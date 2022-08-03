

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Mesh_.idl using "rtiddsgen".
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

#include "Mesh_.h"

#include <new>

namespace shape_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Mesh_TYPENAME = "shape_msgs::msg::dds_::Mesh_";

            DDS_TypeCode* Mesh__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Mesh__g_tc_triangles__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode Mesh__g_tc_vertices__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member Mesh__g_tc_members[2]=
                {

                    {
                        (char *)"triangles_",/* Member name */
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
                        (char *)"vertices_",/* Member name */
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
                    }
                };

                static DDS_TypeCode Mesh__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"shape_msgs::msg::dds_::Mesh_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Mesh__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Mesh_*/

                if (is_initialized) {
                    return &Mesh__g_tc;
                }

                Mesh__g_tc_triangles__sequence._data._typeCode = (RTICdrTypeCode *)shape_msgs::msg::dds_::MeshTriangle__get_typecode();

                Mesh__g_tc_vertices__sequence._data._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Point__get_typecode();

                Mesh__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& Mesh__g_tc_triangles__sequence;
                Mesh__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& Mesh__g_tc_vertices__sequence;

                is_initialized = RTI_TRUE;

                return &Mesh__g_tc;
            }

            RTIBool Mesh__initialize(
                Mesh_* sample) {
                return shape_msgs::msg::dds_::Mesh__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Mesh__initialize_ex(
                Mesh_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return shape_msgs::msg::dds_::Mesh__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Mesh__initialize_w_params(
                Mesh_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    shape_msgs::msg::dds_::MeshTriangle_Seq_initialize(&sample->triangles_ );
                    shape_msgs::msg::dds_::MeshTriangle_Seq_set_element_allocation_params(&sample->triangles_ ,allocParams);
                    shape_msgs::msg::dds_::MeshTriangle_Seq_set_absolute_maximum(&sample->triangles_ , RTI_INT32_MAX);
                    if (!shape_msgs::msg::dds_::MeshTriangle_Seq_set_maximum(&sample->triangles_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    shape_msgs::msg::dds_::MeshTriangle_Seq_set_length(&sample->triangles_, 0);
                }
                if (allocParams->allocate_memory) {
                    geometry_msgs::msg::dds_::Point_Seq_initialize(&sample->vertices_ );
                    geometry_msgs::msg::dds_::Point_Seq_set_element_allocation_params(&sample->vertices_ ,allocParams);
                    geometry_msgs::msg::dds_::Point_Seq_set_absolute_maximum(&sample->vertices_ , RTI_INT32_MAX);
                    if (!geometry_msgs::msg::dds_::Point_Seq_set_maximum(&sample->vertices_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geometry_msgs::msg::dds_::Point_Seq_set_length(&sample->vertices_, 0);
                }
                return RTI_TRUE;
            }

            void Mesh__finalize(
                Mesh_* sample)
            {

                shape_msgs::msg::dds_::Mesh__finalize_ex(sample,RTI_TRUE);
            }

            void Mesh__finalize_ex(
                Mesh_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                shape_msgs::msg::dds_::Mesh__finalize_w_params(
                    sample,&deallocParams);
            }

            void Mesh__finalize_w_params(
                Mesh_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                shape_msgs::msg::dds_::MeshTriangle_Seq_set_element_deallocation_params(
                    &sample->triangles_,deallocParams);
                shape_msgs::msg::dds_::MeshTriangle_Seq_finalize(&sample->triangles_);

                geometry_msgs::msg::dds_::Point_Seq_set_element_deallocation_params(
                    &sample->vertices_,deallocParams);
                geometry_msgs::msg::dds_::Point_Seq_finalize(&sample->vertices_);

            }

            void Mesh__finalize_optional_members(
                Mesh_* sample, RTIBool deletePointers)
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

                {
                    DDS_UnsignedLong i, length;
                    length = shape_msgs::msg::dds_::MeshTriangle_Seq_get_length(
                        &sample->triangles_);

                    for (i = 0; i < length; i++) {
                        shape_msgs::msg::dds_::MeshTriangle__finalize_optional_members(
                            shape_msgs::msg::dds_::MeshTriangle_Seq_get_reference(
                                &sample->triangles_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = geometry_msgs::msg::dds_::Point_Seq_get_length(
                        &sample->vertices_);

                    for (i = 0; i < length; i++) {
                        geometry_msgs::msg::dds_::Point__finalize_optional_members(
                            geometry_msgs::msg::dds_::Point_Seq_get_reference(
                                &sample->vertices_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool Mesh__copy(
                Mesh_* dst,
                const Mesh_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!shape_msgs::msg::dds_::MeshTriangle_Seq_copy(&dst->triangles_ ,
                    &src->triangles_ )) {
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Point_Seq_copy(&dst->vertices_ ,
                    &src->vertices_ )) {
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
            * Configure and implement 'Mesh_' sequence class.
            */
            #define T Mesh_
            #define TSeq Mesh_Seq

            #define T_initialize_w_params shape_msgs::msg::dds_::Mesh__initialize_w_params

            #define T_finalize_w_params   shape_msgs::msg::dds_::Mesh__finalize_w_params
            #define T_copy       shape_msgs::msg::dds_::Mesh__copy

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
} /* namespace shape_msgs  */

