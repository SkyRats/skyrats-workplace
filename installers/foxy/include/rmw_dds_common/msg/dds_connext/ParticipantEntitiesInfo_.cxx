

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParticipantEntitiesInfo_.idl using "rtiddsgen".
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

#include "ParticipantEntitiesInfo_.h"

#include <new>

namespace rmw_dds_common {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *ParticipantEntitiesInfo_TYPENAME = "rmw_dds_common::msg::dds_::ParticipantEntitiesInfo_";

            DDS_TypeCode* ParticipantEntitiesInfo__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ParticipantEntitiesInfo__g_tc_node_entities_info_seq__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member ParticipantEntitiesInfo__g_tc_members[2]=
                {

                    {
                        (char *)"gid_",/* Member name */
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
                        (char *)"node_entities_info_seq_",/* Member name */
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

                static DDS_TypeCode ParticipantEntitiesInfo__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"rmw_dds_common::msg::dds_::ParticipantEntitiesInfo_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ParticipantEntitiesInfo__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ParticipantEntitiesInfo_*/

                if (is_initialized) {
                    return &ParticipantEntitiesInfo__g_tc;
                }

                ParticipantEntitiesInfo__g_tc_node_entities_info_seq__sequence._data._typeCode = (RTICdrTypeCode *)rmw_dds_common::msg::dds_::NodeEntitiesInfo__get_typecode();

                ParticipantEntitiesInfo__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rmw_dds_common::msg::dds_::Gid__get_typecode();

                ParticipantEntitiesInfo__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& ParticipantEntitiesInfo__g_tc_node_entities_info_seq__sequence;

                is_initialized = RTI_TRUE;

                return &ParticipantEntitiesInfo__g_tc;
            }

            RTIBool ParticipantEntitiesInfo__initialize(
                ParticipantEntitiesInfo_* sample) {
                return rmw_dds_common::msg::dds_::ParticipantEntitiesInfo__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ParticipantEntitiesInfo__initialize_ex(
                ParticipantEntitiesInfo_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return rmw_dds_common::msg::dds_::ParticipantEntitiesInfo__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ParticipantEntitiesInfo__initialize_w_params(
                ParticipantEntitiesInfo_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!rmw_dds_common::msg::dds_::Gid__initialize_w_params(&sample->gid_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    rmw_dds_common::msg::dds_::NodeEntitiesInfo_Seq_initialize(&sample->node_entities_info_seq_ );
                    rmw_dds_common::msg::dds_::NodeEntitiesInfo_Seq_set_element_allocation_params(&sample->node_entities_info_seq_ ,allocParams);
                    rmw_dds_common::msg::dds_::NodeEntitiesInfo_Seq_set_absolute_maximum(&sample->node_entities_info_seq_ , RTI_INT32_MAX);
                    if (!rmw_dds_common::msg::dds_::NodeEntitiesInfo_Seq_set_maximum(&sample->node_entities_info_seq_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    rmw_dds_common::msg::dds_::NodeEntitiesInfo_Seq_set_length(&sample->node_entities_info_seq_, 0);
                }
                return RTI_TRUE;
            }

            void ParticipantEntitiesInfo__finalize(
                ParticipantEntitiesInfo_* sample)
            {

                rmw_dds_common::msg::dds_::ParticipantEntitiesInfo__finalize_ex(sample,RTI_TRUE);
            }

            void ParticipantEntitiesInfo__finalize_ex(
                ParticipantEntitiesInfo_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                rmw_dds_common::msg::dds_::ParticipantEntitiesInfo__finalize_w_params(
                    sample,&deallocParams);
            }

            void ParticipantEntitiesInfo__finalize_w_params(
                ParticipantEntitiesInfo_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                rmw_dds_common::msg::dds_::Gid__finalize_w_params(&sample->gid_,deallocParams);

                rmw_dds_common::msg::dds_::NodeEntitiesInfo_Seq_set_element_deallocation_params(
                    &sample->node_entities_info_seq_,deallocParams);
                rmw_dds_common::msg::dds_::NodeEntitiesInfo_Seq_finalize(&sample->node_entities_info_seq_);

            }

            void ParticipantEntitiesInfo__finalize_optional_members(
                ParticipantEntitiesInfo_* sample, RTIBool deletePointers)
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

                rmw_dds_common::msg::dds_::Gid__finalize_optional_members(&sample->gid_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = rmw_dds_common::msg::dds_::NodeEntitiesInfo_Seq_get_length(
                        &sample->node_entities_info_seq_);

                    for (i = 0; i < length; i++) {
                        rmw_dds_common::msg::dds_::NodeEntitiesInfo__finalize_optional_members(
                            rmw_dds_common::msg::dds_::NodeEntitiesInfo_Seq_get_reference(
                                &sample->node_entities_info_seq_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool ParticipantEntitiesInfo__copy(
                ParticipantEntitiesInfo_* dst,
                const ParticipantEntitiesInfo_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!rmw_dds_common::msg::dds_::Gid__copy(
                        &dst->gid_,(const rmw_dds_common::msg::dds_::Gid_*)&src->gid_)) {
                        return RTI_FALSE;
                    } 
                    if (!rmw_dds_common::msg::dds_::NodeEntitiesInfo_Seq_copy(&dst->node_entities_info_seq_ ,
                    &src->node_entities_info_seq_ )) {
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
            * Configure and implement 'ParticipantEntitiesInfo_' sequence class.
            */
            #define T ParticipantEntitiesInfo_
            #define TSeq ParticipantEntitiesInfo_Seq

            #define T_initialize_w_params rmw_dds_common::msg::dds_::ParticipantEntitiesInfo__initialize_w_params

            #define T_finalize_w_params   rmw_dds_common::msg::dds_::ParticipantEntitiesInfo__finalize_w_params
            #define T_copy       rmw_dds_common::msg::dds_::ParticipantEntitiesInfo__copy

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
} /* namespace rmw_dds_common  */

