

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointTrajectory_.idl using "rtiddsgen".
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

#include "JointTrajectory_.h"

#include <new>

namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *JointTrajectory_Goal_TYPENAME = "control_msgs::action::dds_::JointTrajectory_Goal_";

            DDS_TypeCode* JointTrajectory_Goal__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member JointTrajectory_Goal__g_tc_members[1]=
                {

                    {
                        (char *)"trajectory_",/* Member name */
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

                static DDS_TypeCode JointTrajectory_Goal__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::JointTrajectory_Goal_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        JointTrajectory_Goal__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for JointTrajectory_Goal_*/

                if (is_initialized) {
                    return &JointTrajectory_Goal__g_tc;
                }

                JointTrajectory_Goal__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)trajectory_msgs::msg::dds_::JointTrajectory__get_typecode();

                is_initialized = RTI_TRUE;

                return &JointTrajectory_Goal__g_tc;
            }

            RTIBool JointTrajectory_Goal__initialize(
                JointTrajectory_Goal_* sample) {
                return control_msgs::action::dds_::JointTrajectory_Goal__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool JointTrajectory_Goal__initialize_ex(
                JointTrajectory_Goal_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::JointTrajectory_Goal__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool JointTrajectory_Goal__initialize_w_params(
                JointTrajectory_Goal_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!trajectory_msgs::msg::dds_::JointTrajectory__initialize_w_params(&sample->trajectory_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void JointTrajectory_Goal__finalize(
                JointTrajectory_Goal_* sample)
            {

                control_msgs::action::dds_::JointTrajectory_Goal__finalize_ex(sample,RTI_TRUE);
            }

            void JointTrajectory_Goal__finalize_ex(
                JointTrajectory_Goal_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::JointTrajectory_Goal__finalize_w_params(
                    sample,&deallocParams);
            }

            void JointTrajectory_Goal__finalize_w_params(
                JointTrajectory_Goal_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                trajectory_msgs::msg::dds_::JointTrajectory__finalize_w_params(&sample->trajectory_,deallocParams);

            }

            void JointTrajectory_Goal__finalize_optional_members(
                JointTrajectory_Goal_* sample, RTIBool deletePointers)
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

                trajectory_msgs::msg::dds_::JointTrajectory__finalize_optional_members(&sample->trajectory_, deallocParams->delete_pointers);
            }

            RTIBool JointTrajectory_Goal__copy(
                JointTrajectory_Goal_* dst,
                const JointTrajectory_Goal_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!trajectory_msgs::msg::dds_::JointTrajectory__copy(
                        &dst->trajectory_,(const trajectory_msgs::msg::dds_::JointTrajectory_*)&src->trajectory_)) {
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
            * Configure and implement 'JointTrajectory_Goal_' sequence class.
            */
            #define T JointTrajectory_Goal_
            #define TSeq JointTrajectory_Goal_Seq

            #define T_initialize_w_params control_msgs::action::dds_::JointTrajectory_Goal__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::JointTrajectory_Goal__finalize_w_params
            #define T_copy       control_msgs::action::dds_::JointTrajectory_Goal__copy

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
            const char *JointTrajectory_SendGoal_Request_TYPENAME = "control_msgs::action::dds_::JointTrajectory_SendGoal_Request_";

            DDS_TypeCode* JointTrajectory_SendGoal_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member JointTrajectory_SendGoal_Request__g_tc_members[2]=
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

                static DDS_TypeCode JointTrajectory_SendGoal_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::JointTrajectory_SendGoal_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        JointTrajectory_SendGoal_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for JointTrajectory_SendGoal_Request_*/

                if (is_initialized) {
                    return &JointTrajectory_SendGoal_Request__g_tc;
                }

                JointTrajectory_SendGoal_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                JointTrajectory_SendGoal_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)control_msgs::action::dds_::JointTrajectory_Goal__get_typecode();

                is_initialized = RTI_TRUE;

                return &JointTrajectory_SendGoal_Request__g_tc;
            }

            RTIBool JointTrajectory_SendGoal_Request__initialize(
                JointTrajectory_SendGoal_Request_* sample) {
                return control_msgs::action::dds_::JointTrajectory_SendGoal_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool JointTrajectory_SendGoal_Request__initialize_ex(
                JointTrajectory_SendGoal_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::JointTrajectory_SendGoal_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool JointTrajectory_SendGoal_Request__initialize_w_params(
                JointTrajectory_SendGoal_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                if (!control_msgs::action::dds_::JointTrajectory_Goal__initialize_w_params(&sample->goal_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void JointTrajectory_SendGoal_Request__finalize(
                JointTrajectory_SendGoal_Request_* sample)
            {

                control_msgs::action::dds_::JointTrajectory_SendGoal_Request__finalize_ex(sample,RTI_TRUE);
            }

            void JointTrajectory_SendGoal_Request__finalize_ex(
                JointTrajectory_SendGoal_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::JointTrajectory_SendGoal_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void JointTrajectory_SendGoal_Request__finalize_w_params(
                JointTrajectory_SendGoal_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                control_msgs::action::dds_::JointTrajectory_Goal__finalize_w_params(&sample->goal_,deallocParams);

            }

            void JointTrajectory_SendGoal_Request__finalize_optional_members(
                JointTrajectory_SendGoal_Request_* sample, RTIBool deletePointers)
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
                control_msgs::action::dds_::JointTrajectory_Goal__finalize_optional_members(&sample->goal_, deallocParams->delete_pointers);
            }

            RTIBool JointTrajectory_SendGoal_Request__copy(
                JointTrajectory_SendGoal_Request_* dst,
                const JointTrajectory_SendGoal_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!control_msgs::action::dds_::JointTrajectory_Goal__copy(
                        &dst->goal_,(const control_msgs::action::dds_::JointTrajectory_Goal_*)&src->goal_)) {
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
            * Configure and implement 'JointTrajectory_SendGoal_Request_' sequence class.
            */
            #define T JointTrajectory_SendGoal_Request_
            #define TSeq JointTrajectory_SendGoal_Request_Seq

            #define T_initialize_w_params control_msgs::action::dds_::JointTrajectory_SendGoal_Request__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::JointTrajectory_SendGoal_Request__finalize_w_params
            #define T_copy       control_msgs::action::dds_::JointTrajectory_SendGoal_Request__copy

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
            const char *JointTrajectory_SendGoal_Response_TYPENAME = "control_msgs::action::dds_::JointTrajectory_SendGoal_Response_";

            DDS_TypeCode* JointTrajectory_SendGoal_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member JointTrajectory_SendGoal_Response__g_tc_members[2]=
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

                static DDS_TypeCode JointTrajectory_SendGoal_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::JointTrajectory_SendGoal_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        JointTrajectory_SendGoal_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for JointTrajectory_SendGoal_Response_*/

                if (is_initialized) {
                    return &JointTrajectory_SendGoal_Response__g_tc;
                }

                JointTrajectory_SendGoal_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                JointTrajectory_SendGoal_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                is_initialized = RTI_TRUE;

                return &JointTrajectory_SendGoal_Response__g_tc;
            }

            RTIBool JointTrajectory_SendGoal_Response__initialize(
                JointTrajectory_SendGoal_Response_* sample) {
                return control_msgs::action::dds_::JointTrajectory_SendGoal_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool JointTrajectory_SendGoal_Response__initialize_ex(
                JointTrajectory_SendGoal_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::JointTrajectory_SendGoal_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool JointTrajectory_SendGoal_Response__initialize_w_params(
                JointTrajectory_SendGoal_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void JointTrajectory_SendGoal_Response__finalize(
                JointTrajectory_SendGoal_Response_* sample)
            {

                control_msgs::action::dds_::JointTrajectory_SendGoal_Response__finalize_ex(sample,RTI_TRUE);
            }

            void JointTrajectory_SendGoal_Response__finalize_ex(
                JointTrajectory_SendGoal_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::JointTrajectory_SendGoal_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void JointTrajectory_SendGoal_Response__finalize_w_params(
                JointTrajectory_SendGoal_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->stamp_,deallocParams);

            }

            void JointTrajectory_SendGoal_Response__finalize_optional_members(
                JointTrajectory_SendGoal_Response_* sample, RTIBool deletePointers)
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

            RTIBool JointTrajectory_SendGoal_Response__copy(
                JointTrajectory_SendGoal_Response_* dst,
                const JointTrajectory_SendGoal_Response_* src)
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
            * Configure and implement 'JointTrajectory_SendGoal_Response_' sequence class.
            */
            #define T JointTrajectory_SendGoal_Response_
            #define TSeq JointTrajectory_SendGoal_Response_Seq

            #define T_initialize_w_params control_msgs::action::dds_::JointTrajectory_SendGoal_Response__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::JointTrajectory_SendGoal_Response__finalize_w_params
            #define T_copy       control_msgs::action::dds_::JointTrajectory_SendGoal_Response__copy

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
            const char *JointTrajectory_Result_TYPENAME = "control_msgs::action::dds_::JointTrajectory_Result_";

            DDS_TypeCode* JointTrajectory_Result__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member JointTrajectory_Result__g_tc_members[1]=
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

                static DDS_TypeCode JointTrajectory_Result__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::JointTrajectory_Result_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        JointTrajectory_Result__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for JointTrajectory_Result_*/

                if (is_initialized) {
                    return &JointTrajectory_Result__g_tc;
                }

                JointTrajectory_Result__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &JointTrajectory_Result__g_tc;
            }

            RTIBool JointTrajectory_Result__initialize(
                JointTrajectory_Result_* sample) {
                return control_msgs::action::dds_::JointTrajectory_Result__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool JointTrajectory_Result__initialize_ex(
                JointTrajectory_Result_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::JointTrajectory_Result__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool JointTrajectory_Result__initialize_w_params(
                JointTrajectory_Result_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void JointTrajectory_Result__finalize(
                JointTrajectory_Result_* sample)
            {

                control_msgs::action::dds_::JointTrajectory_Result__finalize_ex(sample,RTI_TRUE);
            }

            void JointTrajectory_Result__finalize_ex(
                JointTrajectory_Result_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::JointTrajectory_Result__finalize_w_params(
                    sample,&deallocParams);
            }

            void JointTrajectory_Result__finalize_w_params(
                JointTrajectory_Result_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void JointTrajectory_Result__finalize_optional_members(
                JointTrajectory_Result_* sample, RTIBool deletePointers)
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

            RTIBool JointTrajectory_Result__copy(
                JointTrajectory_Result_* dst,
                const JointTrajectory_Result_* src)
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
            * Configure and implement 'JointTrajectory_Result_' sequence class.
            */
            #define T JointTrajectory_Result_
            #define TSeq JointTrajectory_Result_Seq

            #define T_initialize_w_params control_msgs::action::dds_::JointTrajectory_Result__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::JointTrajectory_Result__finalize_w_params
            #define T_copy       control_msgs::action::dds_::JointTrajectory_Result__copy

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
            const char *JointTrajectory_GetResult_Request_TYPENAME = "control_msgs::action::dds_::JointTrajectory_GetResult_Request_";

            DDS_TypeCode* JointTrajectory_GetResult_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member JointTrajectory_GetResult_Request__g_tc_members[1]=
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

                static DDS_TypeCode JointTrajectory_GetResult_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::JointTrajectory_GetResult_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        JointTrajectory_GetResult_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for JointTrajectory_GetResult_Request_*/

                if (is_initialized) {
                    return &JointTrajectory_GetResult_Request__g_tc;
                }

                JointTrajectory_GetResult_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                is_initialized = RTI_TRUE;

                return &JointTrajectory_GetResult_Request__g_tc;
            }

            RTIBool JointTrajectory_GetResult_Request__initialize(
                JointTrajectory_GetResult_Request_* sample) {
                return control_msgs::action::dds_::JointTrajectory_GetResult_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool JointTrajectory_GetResult_Request__initialize_ex(
                JointTrajectory_GetResult_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::JointTrajectory_GetResult_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool JointTrajectory_GetResult_Request__initialize_w_params(
                JointTrajectory_GetResult_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void JointTrajectory_GetResult_Request__finalize(
                JointTrajectory_GetResult_Request_* sample)
            {

                control_msgs::action::dds_::JointTrajectory_GetResult_Request__finalize_ex(sample,RTI_TRUE);
            }

            void JointTrajectory_GetResult_Request__finalize_ex(
                JointTrajectory_GetResult_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::JointTrajectory_GetResult_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void JointTrajectory_GetResult_Request__finalize_w_params(
                JointTrajectory_GetResult_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

            }

            void JointTrajectory_GetResult_Request__finalize_optional_members(
                JointTrajectory_GetResult_Request_* sample, RTIBool deletePointers)
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

            RTIBool JointTrajectory_GetResult_Request__copy(
                JointTrajectory_GetResult_Request_* dst,
                const JointTrajectory_GetResult_Request_* src)
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
            * Configure and implement 'JointTrajectory_GetResult_Request_' sequence class.
            */
            #define T JointTrajectory_GetResult_Request_
            #define TSeq JointTrajectory_GetResult_Request_Seq

            #define T_initialize_w_params control_msgs::action::dds_::JointTrajectory_GetResult_Request__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::JointTrajectory_GetResult_Request__finalize_w_params
            #define T_copy       control_msgs::action::dds_::JointTrajectory_GetResult_Request__copy

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
            const char *JointTrajectory_GetResult_Response_TYPENAME = "control_msgs::action::dds_::JointTrajectory_GetResult_Response_";

            DDS_TypeCode* JointTrajectory_GetResult_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member JointTrajectory_GetResult_Response__g_tc_members[2]=
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

                static DDS_TypeCode JointTrajectory_GetResult_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::JointTrajectory_GetResult_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        JointTrajectory_GetResult_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for JointTrajectory_GetResult_Response_*/

                if (is_initialized) {
                    return &JointTrajectory_GetResult_Response__g_tc;
                }

                JointTrajectory_GetResult_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                JointTrajectory_GetResult_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)control_msgs::action::dds_::JointTrajectory_Result__get_typecode();

                is_initialized = RTI_TRUE;

                return &JointTrajectory_GetResult_Response__g_tc;
            }

            RTIBool JointTrajectory_GetResult_Response__initialize(
                JointTrajectory_GetResult_Response_* sample) {
                return control_msgs::action::dds_::JointTrajectory_GetResult_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool JointTrajectory_GetResult_Response__initialize_ex(
                JointTrajectory_GetResult_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::JointTrajectory_GetResult_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool JointTrajectory_GetResult_Response__initialize_w_params(
                JointTrajectory_GetResult_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                if (!control_msgs::action::dds_::JointTrajectory_Result__initialize_w_params(&sample->result_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void JointTrajectory_GetResult_Response__finalize(
                JointTrajectory_GetResult_Response_* sample)
            {

                control_msgs::action::dds_::JointTrajectory_GetResult_Response__finalize_ex(sample,RTI_TRUE);
            }

            void JointTrajectory_GetResult_Response__finalize_ex(
                JointTrajectory_GetResult_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::JointTrajectory_GetResult_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void JointTrajectory_GetResult_Response__finalize_w_params(
                JointTrajectory_GetResult_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                control_msgs::action::dds_::JointTrajectory_Result__finalize_w_params(&sample->result_,deallocParams);

            }

            void JointTrajectory_GetResult_Response__finalize_optional_members(
                JointTrajectory_GetResult_Response_* sample, RTIBool deletePointers)
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

                control_msgs::action::dds_::JointTrajectory_Result__finalize_optional_members(&sample->result_, deallocParams->delete_pointers);
            }

            RTIBool JointTrajectory_GetResult_Response__copy(
                JointTrajectory_GetResult_Response_* dst,
                const JointTrajectory_GetResult_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->status_, &src->status_)) { 
                        return RTI_FALSE;
                    }
                    if (!control_msgs::action::dds_::JointTrajectory_Result__copy(
                        &dst->result_,(const control_msgs::action::dds_::JointTrajectory_Result_*)&src->result_)) {
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
            * Configure and implement 'JointTrajectory_GetResult_Response_' sequence class.
            */
            #define T JointTrajectory_GetResult_Response_
            #define TSeq JointTrajectory_GetResult_Response_Seq

            #define T_initialize_w_params control_msgs::action::dds_::JointTrajectory_GetResult_Response__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::JointTrajectory_GetResult_Response__finalize_w_params
            #define T_copy       control_msgs::action::dds_::JointTrajectory_GetResult_Response__copy

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
            const char *JointTrajectory_Feedback_TYPENAME = "control_msgs::action::dds_::JointTrajectory_Feedback_";

            DDS_TypeCode* JointTrajectory_Feedback__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member JointTrajectory_Feedback__g_tc_members[1]=
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

                static DDS_TypeCode JointTrajectory_Feedback__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::JointTrajectory_Feedback_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        JointTrajectory_Feedback__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for JointTrajectory_Feedback_*/

                if (is_initialized) {
                    return &JointTrajectory_Feedback__g_tc;
                }

                JointTrajectory_Feedback__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &JointTrajectory_Feedback__g_tc;
            }

            RTIBool JointTrajectory_Feedback__initialize(
                JointTrajectory_Feedback_* sample) {
                return control_msgs::action::dds_::JointTrajectory_Feedback__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool JointTrajectory_Feedback__initialize_ex(
                JointTrajectory_Feedback_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::JointTrajectory_Feedback__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool JointTrajectory_Feedback__initialize_w_params(
                JointTrajectory_Feedback_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void JointTrajectory_Feedback__finalize(
                JointTrajectory_Feedback_* sample)
            {

                control_msgs::action::dds_::JointTrajectory_Feedback__finalize_ex(sample,RTI_TRUE);
            }

            void JointTrajectory_Feedback__finalize_ex(
                JointTrajectory_Feedback_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::JointTrajectory_Feedback__finalize_w_params(
                    sample,&deallocParams);
            }

            void JointTrajectory_Feedback__finalize_w_params(
                JointTrajectory_Feedback_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void JointTrajectory_Feedback__finalize_optional_members(
                JointTrajectory_Feedback_* sample, RTIBool deletePointers)
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

            RTIBool JointTrajectory_Feedback__copy(
                JointTrajectory_Feedback_* dst,
                const JointTrajectory_Feedback_* src)
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
            * Configure and implement 'JointTrajectory_Feedback_' sequence class.
            */
            #define T JointTrajectory_Feedback_
            #define TSeq JointTrajectory_Feedback_Seq

            #define T_initialize_w_params control_msgs::action::dds_::JointTrajectory_Feedback__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::JointTrajectory_Feedback__finalize_w_params
            #define T_copy       control_msgs::action::dds_::JointTrajectory_Feedback__copy

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
            const char *JointTrajectory_FeedbackMessage_TYPENAME = "control_msgs::action::dds_::JointTrajectory_FeedbackMessage_";

            DDS_TypeCode* JointTrajectory_FeedbackMessage__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member JointTrajectory_FeedbackMessage__g_tc_members[2]=
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

                static DDS_TypeCode JointTrajectory_FeedbackMessage__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::JointTrajectory_FeedbackMessage_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        JointTrajectory_FeedbackMessage__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for JointTrajectory_FeedbackMessage_*/

                if (is_initialized) {
                    return &JointTrajectory_FeedbackMessage__g_tc;
                }

                JointTrajectory_FeedbackMessage__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                JointTrajectory_FeedbackMessage__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)control_msgs::action::dds_::JointTrajectory_Feedback__get_typecode();

                is_initialized = RTI_TRUE;

                return &JointTrajectory_FeedbackMessage__g_tc;
            }

            RTIBool JointTrajectory_FeedbackMessage__initialize(
                JointTrajectory_FeedbackMessage_* sample) {
                return control_msgs::action::dds_::JointTrajectory_FeedbackMessage__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool JointTrajectory_FeedbackMessage__initialize_ex(
                JointTrajectory_FeedbackMessage_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::JointTrajectory_FeedbackMessage__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool JointTrajectory_FeedbackMessage__initialize_w_params(
                JointTrajectory_FeedbackMessage_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                if (!control_msgs::action::dds_::JointTrajectory_Feedback__initialize_w_params(&sample->feedback_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void JointTrajectory_FeedbackMessage__finalize(
                JointTrajectory_FeedbackMessage_* sample)
            {

                control_msgs::action::dds_::JointTrajectory_FeedbackMessage__finalize_ex(sample,RTI_TRUE);
            }

            void JointTrajectory_FeedbackMessage__finalize_ex(
                JointTrajectory_FeedbackMessage_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::JointTrajectory_FeedbackMessage__finalize_w_params(
                    sample,&deallocParams);
            }

            void JointTrajectory_FeedbackMessage__finalize_w_params(
                JointTrajectory_FeedbackMessage_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                control_msgs::action::dds_::JointTrajectory_Feedback__finalize_w_params(&sample->feedback_,deallocParams);

            }

            void JointTrajectory_FeedbackMessage__finalize_optional_members(
                JointTrajectory_FeedbackMessage_* sample, RTIBool deletePointers)
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
                control_msgs::action::dds_::JointTrajectory_Feedback__finalize_optional_members(&sample->feedback_, deallocParams->delete_pointers);
            }

            RTIBool JointTrajectory_FeedbackMessage__copy(
                JointTrajectory_FeedbackMessage_* dst,
                const JointTrajectory_FeedbackMessage_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!control_msgs::action::dds_::JointTrajectory_Feedback__copy(
                        &dst->feedback_,(const control_msgs::action::dds_::JointTrajectory_Feedback_*)&src->feedback_)) {
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
            * Configure and implement 'JointTrajectory_FeedbackMessage_' sequence class.
            */
            #define T JointTrajectory_FeedbackMessage_
            #define TSeq JointTrajectory_FeedbackMessage_Seq

            #define T_initialize_w_params control_msgs::action::dds_::JointTrajectory_FeedbackMessage__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::JointTrajectory_FeedbackMessage__finalize_w_params
            #define T_copy       control_msgs::action::dds_::JointTrajectory_FeedbackMessage__copy

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

