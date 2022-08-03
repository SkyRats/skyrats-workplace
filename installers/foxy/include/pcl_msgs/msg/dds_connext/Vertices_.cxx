

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Vertices_.idl using "rtiddsgen".
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

#include "Vertices_.h"

#include <new>

namespace pcl_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Vertices_TYPENAME = "pcl_msgs::msg::dds_::Vertices_";

            DDS_TypeCode* Vertices__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Vertices__g_tc_vertices__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member Vertices__g_tc_members[1]=
                {

                    {
                        (char *)"vertices_",/* Member name */
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

                static DDS_TypeCode Vertices__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"pcl_msgs::msg::dds_::Vertices_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        Vertices__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Vertices_*/

                if (is_initialized) {
                    return &Vertices__g_tc;
                }

                Vertices__g_tc_vertices__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                Vertices__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& Vertices__g_tc_vertices__sequence;

                is_initialized = RTI_TRUE;

                return &Vertices__g_tc;
            }

            RTIBool Vertices__initialize(
                Vertices_* sample) {
                return pcl_msgs::msg::dds_::Vertices__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Vertices__initialize_ex(
                Vertices_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return pcl_msgs::msg::dds_::Vertices__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Vertices__initialize_w_params(
                Vertices_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    DDS_UnsignedLongSeq_initialize(&sample->vertices_  );
                    DDS_UnsignedLongSeq_set_absolute_maximum(&sample->vertices_ , RTI_INT32_MAX);
                    if (!DDS_UnsignedLongSeq_set_maximum(&sample->vertices_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_UnsignedLongSeq_set_length(&sample->vertices_, 0);
                }
                return RTI_TRUE;
            }

            void Vertices__finalize(
                Vertices_* sample)
            {

                pcl_msgs::msg::dds_::Vertices__finalize_ex(sample,RTI_TRUE);
            }

            void Vertices__finalize_ex(
                Vertices_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                pcl_msgs::msg::dds_::Vertices__finalize_w_params(
                    sample,&deallocParams);
            }

            void Vertices__finalize_w_params(
                Vertices_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                DDS_UnsignedLongSeq_finalize(&sample->vertices_);

            }

            void Vertices__finalize_optional_members(
                Vertices_* sample, RTIBool deletePointers)
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

            RTIBool Vertices__copy(
                Vertices_* dst,
                const Vertices_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!DDS_UnsignedLongSeq_copy(&dst->vertices_ ,
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
            * Configure and implement 'Vertices_' sequence class.
            */
            #define T Vertices_
            #define TSeq Vertices_Seq

            #define T_initialize_w_params pcl_msgs::msg::dds_::Vertices__initialize_w_params

            #define T_finalize_w_params   pcl_msgs::msg::dds_::Vertices__finalize_w_params
            #define T_copy       pcl_msgs::msg::dds_::Vertices__copy

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

