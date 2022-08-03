

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TransitionDescription_.idl using "rtiddsgen".
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

#include "TransitionDescription_.h"

#include <new>

namespace lifecycle_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *TransitionDescription_TYPENAME = "lifecycle_msgs::msg::dds_::TransitionDescription_";

            DDS_TypeCode* TransitionDescription__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TransitionDescription__g_tc_members[3]=
                {

                    {
                        (char *)"transition_",/* Member name */
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
                        (char *)"start_state_",/* Member name */
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
                        (char *)"goal_state_",/* Member name */
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

                static DDS_TypeCode TransitionDescription__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"lifecycle_msgs::msg::dds_::TransitionDescription_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        TransitionDescription__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for TransitionDescription_*/

                if (is_initialized) {
                    return &TransitionDescription__g_tc;
                }

                TransitionDescription__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)lifecycle_msgs::msg::dds_::Transition__get_typecode();

                TransitionDescription__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)lifecycle_msgs::msg::dds_::State__get_typecode();

                TransitionDescription__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)lifecycle_msgs::msg::dds_::State__get_typecode();

                is_initialized = RTI_TRUE;

                return &TransitionDescription__g_tc;
            }

            RTIBool TransitionDescription__initialize(
                TransitionDescription_* sample) {
                return lifecycle_msgs::msg::dds_::TransitionDescription__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool TransitionDescription__initialize_ex(
                TransitionDescription_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return lifecycle_msgs::msg::dds_::TransitionDescription__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool TransitionDescription__initialize_w_params(
                TransitionDescription_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!lifecycle_msgs::msg::dds_::Transition__initialize_w_params(&sample->transition_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!lifecycle_msgs::msg::dds_::State__initialize_w_params(&sample->start_state_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!lifecycle_msgs::msg::dds_::State__initialize_w_params(&sample->goal_state_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void TransitionDescription__finalize(
                TransitionDescription_* sample)
            {

                lifecycle_msgs::msg::dds_::TransitionDescription__finalize_ex(sample,RTI_TRUE);
            }

            void TransitionDescription__finalize_ex(
                TransitionDescription_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                lifecycle_msgs::msg::dds_::TransitionDescription__finalize_w_params(
                    sample,&deallocParams);
            }

            void TransitionDescription__finalize_w_params(
                TransitionDescription_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                lifecycle_msgs::msg::dds_::Transition__finalize_w_params(&sample->transition_,deallocParams);

                lifecycle_msgs::msg::dds_::State__finalize_w_params(&sample->start_state_,deallocParams);

                lifecycle_msgs::msg::dds_::State__finalize_w_params(&sample->goal_state_,deallocParams);

            }

            void TransitionDescription__finalize_optional_members(
                TransitionDescription_* sample, RTIBool deletePointers)
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

                lifecycle_msgs::msg::dds_::Transition__finalize_optional_members(&sample->transition_, deallocParams->delete_pointers);
                lifecycle_msgs::msg::dds_::State__finalize_optional_members(&sample->start_state_, deallocParams->delete_pointers);
                lifecycle_msgs::msg::dds_::State__finalize_optional_members(&sample->goal_state_, deallocParams->delete_pointers);
            }

            RTIBool TransitionDescription__copy(
                TransitionDescription_* dst,
                const TransitionDescription_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!lifecycle_msgs::msg::dds_::Transition__copy(
                        &dst->transition_,(const lifecycle_msgs::msg::dds_::Transition_*)&src->transition_)) {
                        return RTI_FALSE;
                    } 
                    if (!lifecycle_msgs::msg::dds_::State__copy(
                        &dst->start_state_,(const lifecycle_msgs::msg::dds_::State_*)&src->start_state_)) {
                        return RTI_FALSE;
                    } 
                    if (!lifecycle_msgs::msg::dds_::State__copy(
                        &dst->goal_state_,(const lifecycle_msgs::msg::dds_::State_*)&src->goal_state_)) {
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
            * Configure and implement 'TransitionDescription_' sequence class.
            */
            #define T TransitionDescription_
            #define TSeq TransitionDescription_Seq

            #define T_initialize_w_params lifecycle_msgs::msg::dds_::TransitionDescription__initialize_w_params

            #define T_finalize_w_params   lifecycle_msgs::msg::dds_::TransitionDescription__finalize_w_params
            #define T_copy       lifecycle_msgs::msg::dds_::TransitionDescription__copy

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
} /* namespace lifecycle_msgs  */

