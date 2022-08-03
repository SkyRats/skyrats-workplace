

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SingleJointPosition_.idl using "rtiddsgen".
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

#include "SingleJointPosition_.h"

#include <new>

namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *SingleJointPosition_Goal_TYPENAME = "control_msgs::action::dds_::SingleJointPosition_Goal_";

            DDS_TypeCode* SingleJointPosition_Goal__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SingleJointPosition_Goal__g_tc_members[3]=
                {

                    {
                        (char *)"position_",/* Member name */
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
                        (char *)"min_duration_",/* Member name */
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
                        (char *)"max_velocity_",/* Member name */
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

                static DDS_TypeCode SingleJointPosition_Goal__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::SingleJointPosition_Goal_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        SingleJointPosition_Goal__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SingleJointPosition_Goal_*/

                if (is_initialized) {
                    return &SingleJointPosition_Goal__g_tc;
                }

                SingleJointPosition_Goal__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                SingleJointPosition_Goal__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Duration__get_typecode();

                SingleJointPosition_Goal__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                is_initialized = RTI_TRUE;

                return &SingleJointPosition_Goal__g_tc;
            }

            RTIBool SingleJointPosition_Goal__initialize(
                SingleJointPosition_Goal_* sample) {
                return control_msgs::action::dds_::SingleJointPosition_Goal__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SingleJointPosition_Goal__initialize_ex(
                SingleJointPosition_Goal_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::SingleJointPosition_Goal__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SingleJointPosition_Goal__initialize_w_params(
                SingleJointPosition_Goal_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->position_)) {
                    return RTI_FALSE;
                }

                if (!builtin_interfaces::msg::dds_::Duration__initialize_w_params(&sample->min_duration_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->max_velocity_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void SingleJointPosition_Goal__finalize(
                SingleJointPosition_Goal_* sample)
            {

                control_msgs::action::dds_::SingleJointPosition_Goal__finalize_ex(sample,RTI_TRUE);
            }

            void SingleJointPosition_Goal__finalize_ex(
                SingleJointPosition_Goal_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::SingleJointPosition_Goal__finalize_w_params(
                    sample,&deallocParams);
            }

            void SingleJointPosition_Goal__finalize_w_params(
                SingleJointPosition_Goal_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                builtin_interfaces::msg::dds_::Duration__finalize_w_params(&sample->min_duration_,deallocParams);

            }

            void SingleJointPosition_Goal__finalize_optional_members(
                SingleJointPosition_Goal_* sample, RTIBool deletePointers)
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

                builtin_interfaces::msg::dds_::Duration__finalize_optional_members(&sample->min_duration_, deallocParams->delete_pointers);
            }

            RTIBool SingleJointPosition_Goal__copy(
                SingleJointPosition_Goal_* dst,
                const SingleJointPosition_Goal_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyDouble (
                        &dst->position_, &src->position_)) { 
                        return RTI_FALSE;
                    }
                    if (!builtin_interfaces::msg::dds_::Duration__copy(
                        &dst->min_duration_,(const builtin_interfaces::msg::dds_::Duration_*)&src->min_duration_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyDouble (
                        &dst->max_velocity_, &src->max_velocity_)) { 
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
            * Configure and implement 'SingleJointPosition_Goal_' sequence class.
            */
            #define T SingleJointPosition_Goal_
            #define TSeq SingleJointPosition_Goal_Seq

            #define T_initialize_w_params control_msgs::action::dds_::SingleJointPosition_Goal__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::SingleJointPosition_Goal__finalize_w_params
            #define T_copy       control_msgs::action::dds_::SingleJointPosition_Goal__copy

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
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *SingleJointPosition_SendGoal_Request_TYPENAME = "control_msgs::action::dds_::SingleJointPosition_SendGoal_Request_";

            DDS_TypeCode* SingleJointPosition_SendGoal_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SingleJointPosition_SendGoal_Request__g_tc_members[2]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
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
                        (char *)"goal_",/* Member name */
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

                static DDS_TypeCode SingleJointPosition_SendGoal_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::SingleJointPosition_SendGoal_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        SingleJointPosition_SendGoal_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SingleJointPosition_SendGoal_Request_*/

                if (is_initialized) {
                    return &SingleJointPosition_SendGoal_Request__g_tc;
                }

                SingleJointPosition_SendGoal_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                SingleJointPosition_SendGoal_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)control_msgs::action::dds_::SingleJointPosition_Goal__get_typecode();

                is_initialized = RTI_TRUE;

                return &SingleJointPosition_SendGoal_Request__g_tc;
            }

            RTIBool SingleJointPosition_SendGoal_Request__initialize(
                SingleJointPosition_SendGoal_Request_* sample) {
                return control_msgs::action::dds_::SingleJointPosition_SendGoal_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SingleJointPosition_SendGoal_Request__initialize_ex(
                SingleJointPosition_SendGoal_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::SingleJointPosition_SendGoal_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SingleJointPosition_SendGoal_Request__initialize_w_params(
                SingleJointPosition_SendGoal_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!control_msgs::action::dds_::SingleJointPosition_Goal__initialize_w_params(&sample->goal_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void SingleJointPosition_SendGoal_Request__finalize(
                SingleJointPosition_SendGoal_Request_* sample)
            {

                control_msgs::action::dds_::SingleJointPosition_SendGoal_Request__finalize_ex(sample,RTI_TRUE);
            }

            void SingleJointPosition_SendGoal_Request__finalize_ex(
                SingleJointPosition_SendGoal_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::SingleJointPosition_SendGoal_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void SingleJointPosition_SendGoal_Request__finalize_w_params(
                SingleJointPosition_SendGoal_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                control_msgs::action::dds_::SingleJointPosition_Goal__finalize_w_params(&sample->goal_,deallocParams);

            }

            void SingleJointPosition_SendGoal_Request__finalize_optional_members(
                SingleJointPosition_SendGoal_Request_* sample, RTIBool deletePointers)
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

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
                control_msgs::action::dds_::SingleJointPosition_Goal__finalize_optional_members(&sample->goal_, deallocParams->delete_pointers);
            }

            RTIBool SingleJointPosition_SendGoal_Request__copy(
                SingleJointPosition_SendGoal_Request_* dst,
                const SingleJointPosition_SendGoal_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!control_msgs::action::dds_::SingleJointPosition_Goal__copy(
                        &dst->goal_,(const control_msgs::action::dds_::SingleJointPosition_Goal_*)&src->goal_)) {
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
            * Configure and implement 'SingleJointPosition_SendGoal_Request_' sequence class.
            */
            #define T SingleJointPosition_SendGoal_Request_
            #define TSeq SingleJointPosition_SendGoal_Request_Seq

            #define T_initialize_w_params control_msgs::action::dds_::SingleJointPosition_SendGoal_Request__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::SingleJointPosition_SendGoal_Request__finalize_w_params
            #define T_copy       control_msgs::action::dds_::SingleJointPosition_SendGoal_Request__copy

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
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *SingleJointPosition_SendGoal_Response_TYPENAME = "control_msgs::action::dds_::SingleJointPosition_SendGoal_Response_";

            DDS_TypeCode* SingleJointPosition_SendGoal_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SingleJointPosition_SendGoal_Response__g_tc_members[2]=
                {

                    {
                        (char *)"accepted_",/* Member name */
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
                        (char *)"stamp_",/* Member name */
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

                static DDS_TypeCode SingleJointPosition_SendGoal_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::SingleJointPosition_SendGoal_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        SingleJointPosition_SendGoal_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SingleJointPosition_SendGoal_Response_*/

                if (is_initialized) {
                    return &SingleJointPosition_SendGoal_Response__g_tc;
                }

                SingleJointPosition_SendGoal_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                SingleJointPosition_SendGoal_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                is_initialized = RTI_TRUE;

                return &SingleJointPosition_SendGoal_Response__g_tc;
            }

            RTIBool SingleJointPosition_SendGoal_Response__initialize(
                SingleJointPosition_SendGoal_Response_* sample) {
                return control_msgs::action::dds_::SingleJointPosition_SendGoal_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SingleJointPosition_SendGoal_Response__initialize_ex(
                SingleJointPosition_SendGoal_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::SingleJointPosition_SendGoal_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SingleJointPosition_SendGoal_Response__initialize_w_params(
                SingleJointPosition_SendGoal_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->accepted_)) {
                    return RTI_FALSE;
                }

                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->stamp_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void SingleJointPosition_SendGoal_Response__finalize(
                SingleJointPosition_SendGoal_Response_* sample)
            {

                control_msgs::action::dds_::SingleJointPosition_SendGoal_Response__finalize_ex(sample,RTI_TRUE);
            }

            void SingleJointPosition_SendGoal_Response__finalize_ex(
                SingleJointPosition_SendGoal_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::SingleJointPosition_SendGoal_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void SingleJointPosition_SendGoal_Response__finalize_w_params(
                SingleJointPosition_SendGoal_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->stamp_,deallocParams);

            }

            void SingleJointPosition_SendGoal_Response__finalize_optional_members(
                SingleJointPosition_SendGoal_Response_* sample, RTIBool deletePointers)
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
            }

            RTIBool SingleJointPosition_SendGoal_Response__copy(
                SingleJointPosition_SendGoal_Response_* dst,
                const SingleJointPosition_SendGoal_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->accepted_, &src->accepted_)) { 
                        return RTI_FALSE;
                    }
                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->stamp_,(const builtin_interfaces::msg::dds_::Time_*)&src->stamp_)) {
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
            * Configure and implement 'SingleJointPosition_SendGoal_Response_' sequence class.
            */
            #define T SingleJointPosition_SendGoal_Response_
            #define TSeq SingleJointPosition_SendGoal_Response_Seq

            #define T_initialize_w_params control_msgs::action::dds_::SingleJointPosition_SendGoal_Response__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::SingleJointPosition_SendGoal_Response__finalize_w_params
            #define T_copy       control_msgs::action::dds_::SingleJointPosition_SendGoal_Response__copy

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
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *SingleJointPosition_Result_TYPENAME = "control_msgs::action::dds_::SingleJointPosition_Result_";

            DDS_TypeCode* SingleJointPosition_Result__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SingleJointPosition_Result__g_tc_members[1]=
                {

                    {
                        (char *)"structure_needs_at_least_one_member_",/* Member name */
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

                static DDS_TypeCode SingleJointPosition_Result__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::SingleJointPosition_Result_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SingleJointPosition_Result__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SingleJointPosition_Result_*/

                if (is_initialized) {
                    return &SingleJointPosition_Result__g_tc;
                }

                SingleJointPosition_Result__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &SingleJointPosition_Result__g_tc;
            }

            RTIBool SingleJointPosition_Result__initialize(
                SingleJointPosition_Result_* sample) {
                return control_msgs::action::dds_::SingleJointPosition_Result__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SingleJointPosition_Result__initialize_ex(
                SingleJointPosition_Result_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::SingleJointPosition_Result__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SingleJointPosition_Result__initialize_w_params(
                SingleJointPosition_Result_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->structure_needs_at_least_one_member_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void SingleJointPosition_Result__finalize(
                SingleJointPosition_Result_* sample)
            {

                control_msgs::action::dds_::SingleJointPosition_Result__finalize_ex(sample,RTI_TRUE);
            }

            void SingleJointPosition_Result__finalize_ex(
                SingleJointPosition_Result_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::SingleJointPosition_Result__finalize_w_params(
                    sample,&deallocParams);
            }

            void SingleJointPosition_Result__finalize_w_params(
                SingleJointPosition_Result_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void SingleJointPosition_Result__finalize_optional_members(
                SingleJointPosition_Result_* sample, RTIBool deletePointers)
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

            RTIBool SingleJointPosition_Result__copy(
                SingleJointPosition_Result_* dst,
                const SingleJointPosition_Result_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->structure_needs_at_least_one_member_, &src->structure_needs_at_least_one_member_)) { 
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
            * Configure and implement 'SingleJointPosition_Result_' sequence class.
            */
            #define T SingleJointPosition_Result_
            #define TSeq SingleJointPosition_Result_Seq

            #define T_initialize_w_params control_msgs::action::dds_::SingleJointPosition_Result__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::SingleJointPosition_Result__finalize_w_params
            #define T_copy       control_msgs::action::dds_::SingleJointPosition_Result__copy

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
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *SingleJointPosition_GetResult_Request_TYPENAME = "control_msgs::action::dds_::SingleJointPosition_GetResult_Request_";

            DDS_TypeCode* SingleJointPosition_GetResult_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SingleJointPosition_GetResult_Request__g_tc_members[1]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
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

                static DDS_TypeCode SingleJointPosition_GetResult_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::SingleJointPosition_GetResult_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SingleJointPosition_GetResult_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SingleJointPosition_GetResult_Request_*/

                if (is_initialized) {
                    return &SingleJointPosition_GetResult_Request__g_tc;
                }

                SingleJointPosition_GetResult_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                is_initialized = RTI_TRUE;

                return &SingleJointPosition_GetResult_Request__g_tc;
            }

            RTIBool SingleJointPosition_GetResult_Request__initialize(
                SingleJointPosition_GetResult_Request_* sample) {
                return control_msgs::action::dds_::SingleJointPosition_GetResult_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SingleJointPosition_GetResult_Request__initialize_ex(
                SingleJointPosition_GetResult_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::SingleJointPosition_GetResult_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SingleJointPosition_GetResult_Request__initialize_w_params(
                SingleJointPosition_GetResult_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void SingleJointPosition_GetResult_Request__finalize(
                SingleJointPosition_GetResult_Request_* sample)
            {

                control_msgs::action::dds_::SingleJointPosition_GetResult_Request__finalize_ex(sample,RTI_TRUE);
            }

            void SingleJointPosition_GetResult_Request__finalize_ex(
                SingleJointPosition_GetResult_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::SingleJointPosition_GetResult_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void SingleJointPosition_GetResult_Request__finalize_w_params(
                SingleJointPosition_GetResult_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

            }

            void SingleJointPosition_GetResult_Request__finalize_optional_members(
                SingleJointPosition_GetResult_Request_* sample, RTIBool deletePointers)
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

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
            }

            RTIBool SingleJointPosition_GetResult_Request__copy(
                SingleJointPosition_GetResult_Request_* dst,
                const SingleJointPosition_GetResult_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
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
            * Configure and implement 'SingleJointPosition_GetResult_Request_' sequence class.
            */
            #define T SingleJointPosition_GetResult_Request_
            #define TSeq SingleJointPosition_GetResult_Request_Seq

            #define T_initialize_w_params control_msgs::action::dds_::SingleJointPosition_GetResult_Request__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::SingleJointPosition_GetResult_Request__finalize_w_params
            #define T_copy       control_msgs::action::dds_::SingleJointPosition_GetResult_Request__copy

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
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *SingleJointPosition_GetResult_Response_TYPENAME = "control_msgs::action::dds_::SingleJointPosition_GetResult_Response_";

            DDS_TypeCode* SingleJointPosition_GetResult_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SingleJointPosition_GetResult_Response__g_tc_members[2]=
                {

                    {
                        (char *)"status_",/* Member name */
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
                        (char *)"result_",/* Member name */
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

                static DDS_TypeCode SingleJointPosition_GetResult_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::SingleJointPosition_GetResult_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        SingleJointPosition_GetResult_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SingleJointPosition_GetResult_Response_*/

                if (is_initialized) {
                    return &SingleJointPosition_GetResult_Response__g_tc;
                }

                SingleJointPosition_GetResult_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                SingleJointPosition_GetResult_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)control_msgs::action::dds_::SingleJointPosition_Result__get_typecode();

                is_initialized = RTI_TRUE;

                return &SingleJointPosition_GetResult_Response__g_tc;
            }

            RTIBool SingleJointPosition_GetResult_Response__initialize(
                SingleJointPosition_GetResult_Response_* sample) {
                return control_msgs::action::dds_::SingleJointPosition_GetResult_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SingleJointPosition_GetResult_Response__initialize_ex(
                SingleJointPosition_GetResult_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::SingleJointPosition_GetResult_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SingleJointPosition_GetResult_Response__initialize_w_params(
                SingleJointPosition_GetResult_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->status_)) {
                    return RTI_FALSE;
                }

                if (!control_msgs::action::dds_::SingleJointPosition_Result__initialize_w_params(&sample->result_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void SingleJointPosition_GetResult_Response__finalize(
                SingleJointPosition_GetResult_Response_* sample)
            {

                control_msgs::action::dds_::SingleJointPosition_GetResult_Response__finalize_ex(sample,RTI_TRUE);
            }

            void SingleJointPosition_GetResult_Response__finalize_ex(
                SingleJointPosition_GetResult_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::SingleJointPosition_GetResult_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void SingleJointPosition_GetResult_Response__finalize_w_params(
                SingleJointPosition_GetResult_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                control_msgs::action::dds_::SingleJointPosition_Result__finalize_w_params(&sample->result_,deallocParams);

            }

            void SingleJointPosition_GetResult_Response__finalize_optional_members(
                SingleJointPosition_GetResult_Response_* sample, RTIBool deletePointers)
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

                control_msgs::action::dds_::SingleJointPosition_Result__finalize_optional_members(&sample->result_, deallocParams->delete_pointers);
            }

            RTIBool SingleJointPosition_GetResult_Response__copy(
                SingleJointPosition_GetResult_Response_* dst,
                const SingleJointPosition_GetResult_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->status_, &src->status_)) { 
                        return RTI_FALSE;
                    }
                    if (!control_msgs::action::dds_::SingleJointPosition_Result__copy(
                        &dst->result_,(const control_msgs::action::dds_::SingleJointPosition_Result_*)&src->result_)) {
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
            * Configure and implement 'SingleJointPosition_GetResult_Response_' sequence class.
            */
            #define T SingleJointPosition_GetResult_Response_
            #define TSeq SingleJointPosition_GetResult_Response_Seq

            #define T_initialize_w_params control_msgs::action::dds_::SingleJointPosition_GetResult_Response__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::SingleJointPosition_GetResult_Response__finalize_w_params
            #define T_copy       control_msgs::action::dds_::SingleJointPosition_GetResult_Response__copy

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
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *SingleJointPosition_Feedback_TYPENAME = "control_msgs::action::dds_::SingleJointPosition_Feedback_";

            DDS_TypeCode* SingleJointPosition_Feedback__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SingleJointPosition_Feedback__g_tc_members[4]=
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
                        (char *)"position_",/* Member name */
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
                        (char *)"velocity_",/* Member name */
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
                        (char *)"error_",/* Member name */
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
                    }
                };

                static DDS_TypeCode SingleJointPosition_Feedback__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::SingleJointPosition_Feedback_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        SingleJointPosition_Feedback__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SingleJointPosition_Feedback_*/

                if (is_initialized) {
                    return &SingleJointPosition_Feedback__g_tc;
                }

                SingleJointPosition_Feedback__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                SingleJointPosition_Feedback__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                SingleJointPosition_Feedback__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                SingleJointPosition_Feedback__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                is_initialized = RTI_TRUE;

                return &SingleJointPosition_Feedback__g_tc;
            }

            RTIBool SingleJointPosition_Feedback__initialize(
                SingleJointPosition_Feedback_* sample) {
                return control_msgs::action::dds_::SingleJointPosition_Feedback__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SingleJointPosition_Feedback__initialize_ex(
                SingleJointPosition_Feedback_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::SingleJointPosition_Feedback__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SingleJointPosition_Feedback__initialize_w_params(
                SingleJointPosition_Feedback_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

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

                if (!RTICdrType_initDouble(&sample->position_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->velocity_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->error_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void SingleJointPosition_Feedback__finalize(
                SingleJointPosition_Feedback_* sample)
            {

                control_msgs::action::dds_::SingleJointPosition_Feedback__finalize_ex(sample,RTI_TRUE);
            }

            void SingleJointPosition_Feedback__finalize_ex(
                SingleJointPosition_Feedback_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::SingleJointPosition_Feedback__finalize_w_params(
                    sample,&deallocParams);
            }

            void SingleJointPosition_Feedback__finalize_w_params(
                SingleJointPosition_Feedback_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

            }

            void SingleJointPosition_Feedback__finalize_optional_members(
                SingleJointPosition_Feedback_* sample, RTIBool deletePointers)
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
            }

            RTIBool SingleJointPosition_Feedback__copy(
                SingleJointPosition_Feedback_* dst,
                const SingleJointPosition_Feedback_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyDouble (
                        &dst->position_, &src->position_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->velocity_, &src->velocity_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->error_, &src->error_)) { 
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
            * Configure and implement 'SingleJointPosition_Feedback_' sequence class.
            */
            #define T SingleJointPosition_Feedback_
            #define TSeq SingleJointPosition_Feedback_Seq

            #define T_initialize_w_params control_msgs::action::dds_::SingleJointPosition_Feedback__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::SingleJointPosition_Feedback__finalize_w_params
            #define T_copy       control_msgs::action::dds_::SingleJointPosition_Feedback__copy

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
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *SingleJointPosition_FeedbackMessage_TYPENAME = "control_msgs::action::dds_::SingleJointPosition_FeedbackMessage_";

            DDS_TypeCode* SingleJointPosition_FeedbackMessage__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SingleJointPosition_FeedbackMessage__g_tc_members[2]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
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
                        (char *)"feedback_",/* Member name */
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

                static DDS_TypeCode SingleJointPosition_FeedbackMessage__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::SingleJointPosition_FeedbackMessage_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        SingleJointPosition_FeedbackMessage__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SingleJointPosition_FeedbackMessage_*/

                if (is_initialized) {
                    return &SingleJointPosition_FeedbackMessage__g_tc;
                }

                SingleJointPosition_FeedbackMessage__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                SingleJointPosition_FeedbackMessage__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)control_msgs::action::dds_::SingleJointPosition_Feedback__get_typecode();

                is_initialized = RTI_TRUE;

                return &SingleJointPosition_FeedbackMessage__g_tc;
            }

            RTIBool SingleJointPosition_FeedbackMessage__initialize(
                SingleJointPosition_FeedbackMessage_* sample) {
                return control_msgs::action::dds_::SingleJointPosition_FeedbackMessage__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SingleJointPosition_FeedbackMessage__initialize_ex(
                SingleJointPosition_FeedbackMessage_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::SingleJointPosition_FeedbackMessage__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SingleJointPosition_FeedbackMessage__initialize_w_params(
                SingleJointPosition_FeedbackMessage_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!control_msgs::action::dds_::SingleJointPosition_Feedback__initialize_w_params(&sample->feedback_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void SingleJointPosition_FeedbackMessage__finalize(
                SingleJointPosition_FeedbackMessage_* sample)
            {

                control_msgs::action::dds_::SingleJointPosition_FeedbackMessage__finalize_ex(sample,RTI_TRUE);
            }

            void SingleJointPosition_FeedbackMessage__finalize_ex(
                SingleJointPosition_FeedbackMessage_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::SingleJointPosition_FeedbackMessage__finalize_w_params(
                    sample,&deallocParams);
            }

            void SingleJointPosition_FeedbackMessage__finalize_w_params(
                SingleJointPosition_FeedbackMessage_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                control_msgs::action::dds_::SingleJointPosition_Feedback__finalize_w_params(&sample->feedback_,deallocParams);

            }

            void SingleJointPosition_FeedbackMessage__finalize_optional_members(
                SingleJointPosition_FeedbackMessage_* sample, RTIBool deletePointers)
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

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
                control_msgs::action::dds_::SingleJointPosition_Feedback__finalize_optional_members(&sample->feedback_, deallocParams->delete_pointers);
            }

            RTIBool SingleJointPosition_FeedbackMessage__copy(
                SingleJointPosition_FeedbackMessage_* dst,
                const SingleJointPosition_FeedbackMessage_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!control_msgs::action::dds_::SingleJointPosition_Feedback__copy(
                        &dst->feedback_,(const control_msgs::action::dds_::SingleJointPosition_Feedback_*)&src->feedback_)) {
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
            * Configure and implement 'SingleJointPosition_FeedbackMessage_' sequence class.
            */
            #define T SingleJointPosition_FeedbackMessage_
            #define TSeq SingleJointPosition_FeedbackMessage_Seq

            #define T_initialize_w_params control_msgs::action::dds_::SingleJointPosition_FeedbackMessage__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::SingleJointPosition_FeedbackMessage__finalize_w_params
            #define T_copy       control_msgs::action::dds_::SingleJointPosition_FeedbackMessage__copy

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
    } /* namespace action  */
} /* namespace control_msgs  */

