

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MeshTriangle_.idl using "rtiddsgen".
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

#include "MeshTriangle_.h"

#include <new>

namespace shape_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *MeshTriangle_TYPENAME = "shape_msgs::msg::dds_::MeshTriangle_";

            DDS_TypeCode* MeshTriangle__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MeshTriangle__g_tc_vertex_indices__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode_Member MeshTriangle__g_tc_members[1]=
                {

                    {
                        (char *)"vertex_indices_",/* Member name */
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
                    }
                };

                static DDS_TypeCode MeshTriangle__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"shape_msgs::msg::dds_::MeshTriangle_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        MeshTriangle__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MeshTriangle_*/

                if (is_initialized) {
                    return &MeshTriangle__g_tc;
                }

                MeshTriangle__g_tc_vertex_indices__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulong;

                MeshTriangle__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& MeshTriangle__g_tc_vertex_indices__array;

                is_initialized = RTI_TRUE;

                return &MeshTriangle__g_tc;
            }

            RTIBool MeshTriangle__initialize(
                MeshTriangle_* sample) {
                return shape_msgs::msg::dds_::MeshTriangle__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MeshTriangle__initialize_ex(
                MeshTriangle_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return shape_msgs::msg::dds_::MeshTriangle__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MeshTriangle__initialize_w_params(
                MeshTriangle_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    sample->vertex_indices_, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void MeshTriangle__finalize(
                MeshTriangle_* sample)
            {

                shape_msgs::msg::dds_::MeshTriangle__finalize_ex(sample,RTI_TRUE);
            }

            void MeshTriangle__finalize_ex(
                MeshTriangle_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                shape_msgs::msg::dds_::MeshTriangle__finalize_w_params(
                    sample,&deallocParams);
            }

            void MeshTriangle__finalize_w_params(
                MeshTriangle_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void MeshTriangle__finalize_optional_members(
                MeshTriangle_* sample, RTIBool deletePointers)
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

            }

            RTIBool MeshTriangle__copy(
                MeshTriangle_* dst,
                const MeshTriangle_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        dst->vertex_indices_ ,src->vertex_indices_,(3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
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
            * Configure and implement 'MeshTriangle_' sequence class.
            */
            #define T MeshTriangle_
            #define TSeq MeshTriangle_Seq

            #define T_initialize_w_params shape_msgs::msg::dds_::MeshTriangle__initialize_w_params

            #define T_finalize_w_params   shape_msgs::msg::dds_::MeshTriangle__finalize_w_params
            #define T_copy       shape_msgs::msg::dds_::MeshTriangle__copy

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

