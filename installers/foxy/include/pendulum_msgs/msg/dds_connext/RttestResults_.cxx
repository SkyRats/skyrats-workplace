

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RttestResults_.idl using "rtiddsgen".
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

#include "RttestResults_.h"

#include <new>

namespace pendulum_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *RttestResults_TYPENAME = "pendulum_msgs::msg::dds_::RttestResults_";

            DDS_TypeCode* RttestResults__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RttestResults__g_tc_members[9]=
                {

                    {
                        (char *)"stamp_",/* Member name */
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
                        (char *)"command_",/* Member name */
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
                        (char *)"state_",/* Member name */
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
                    }, 
                    {
                        (char *)"cur_latency_",/* Member name */
                        {
                            3,/* Representation ID */          
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
                        (char *)"mean_latency_",/* Member name */
                        {
                            4,/* Representation ID */          
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
                        (char *)"min_latency_",/* Member name */
                        {
                            5,/* Representation ID */          
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
                        (char *)"max_latency_",/* Member name */
                        {
                            6,/* Representation ID */          
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
                        (char *)"minor_pagefaults_",/* Member name */
                        {
                            7,/* Representation ID */          
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
                        (char *)"major_pagefaults_",/* Member name */
                        {
                            8,/* Representation ID */          
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

                static DDS_TypeCode RttestResults__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"pendulum_msgs::msg::dds_::RttestResults_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        RttestResults__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for RttestResults_*/

                if (is_initialized) {
                    return &RttestResults__g_tc;
                }

                RttestResults__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                RttestResults__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)pendulum_msgs::msg::dds_::JointCommand__get_typecode();

                RttestResults__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)pendulum_msgs::msg::dds_::JointState__get_typecode();

                RttestResults__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                RttestResults__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RttestResults__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                RttestResults__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                RttestResults__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                RttestResults__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                is_initialized = RTI_TRUE;

                return &RttestResults__g_tc;
            }

            RTIBool RttestResults__initialize(
                RttestResults_* sample) {
                return pendulum_msgs::msg::dds_::RttestResults__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool RttestResults__initialize_ex(
                RttestResults_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return pendulum_msgs::msg::dds_::RttestResults__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool RttestResults__initialize_w_params(
                RttestResults_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->stamp_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!pendulum_msgs::msg::dds_::JointCommand__initialize_w_params(&sample->command_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!pendulum_msgs::msg::dds_::JointState__initialize_w_params(&sample->state_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLongLong(&sample->cur_latency_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->mean_latency_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLongLong(&sample->min_latency_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLongLong(&sample->max_latency_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLongLong(&sample->minor_pagefaults_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLongLong(&sample->major_pagefaults_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void RttestResults__finalize(
                RttestResults_* sample)
            {

                pendulum_msgs::msg::dds_::RttestResults__finalize_ex(sample,RTI_TRUE);
            }

            void RttestResults__finalize_ex(
                RttestResults_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                pendulum_msgs::msg::dds_::RttestResults__finalize_w_params(
                    sample,&deallocParams);
            }

            void RttestResults__finalize_w_params(
                RttestResults_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->stamp_,deallocParams);

                pendulum_msgs::msg::dds_::JointCommand__finalize_w_params(&sample->command_,deallocParams);

                pendulum_msgs::msg::dds_::JointState__finalize_w_params(&sample->state_,deallocParams);

            }

            void RttestResults__finalize_optional_members(
                RttestResults_* sample, RTIBool deletePointers)
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

                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->stamp_, deallocParams->delete_pointers);
                pendulum_msgs::msg::dds_::JointCommand__finalize_optional_members(&sample->command_, deallocParams->delete_pointers);
                pendulum_msgs::msg::dds_::JointState__finalize_optional_members(&sample->state_, deallocParams->delete_pointers);
            }

            RTIBool RttestResults__copy(
                RttestResults_* dst,
                const RttestResults_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->stamp_,(const builtin_interfaces::msg::dds_::Time_*)&src->stamp_)) {
                        return RTI_FALSE;
                    } 
                    if (!pendulum_msgs::msg::dds_::JointCommand__copy(
                        &dst->command_,(const pendulum_msgs::msg::dds_::JointCommand_*)&src->command_)) {
                        return RTI_FALSE;
                    } 
                    if (!pendulum_msgs::msg::dds_::JointState__copy(
                        &dst->state_,(const pendulum_msgs::msg::dds_::JointState_*)&src->state_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyUnsignedLongLong (
                        &dst->cur_latency_, &src->cur_latency_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->mean_latency_, &src->mean_latency_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLongLong (
                        &dst->min_latency_, &src->min_latency_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLongLong (
                        &dst->max_latency_, &src->max_latency_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLongLong (
                        &dst->minor_pagefaults_, &src->minor_pagefaults_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLongLong (
                        &dst->major_pagefaults_, &src->major_pagefaults_)) { 
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
            * Configure and implement 'RttestResults_' sequence class.
            */
            #define T RttestResults_
            #define TSeq RttestResults_Seq

            #define T_initialize_w_params pendulum_msgs::msg::dds_::RttestResults__initialize_w_params

            #define T_finalize_w_params   pendulum_msgs::msg::dds_::RttestResults__finalize_w_params
            #define T_copy       pendulum_msgs::msg::dds_::RttestResults__copy

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
} /* namespace pendulum_msgs  */

