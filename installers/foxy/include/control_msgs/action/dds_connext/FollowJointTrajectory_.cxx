

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FollowJointTrajectory_.idl using "rtiddsgen".
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

#include "FollowJointTrajectory_.h"

#include <new>

namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *FollowJointTrajectory_Goal_TYPENAME = "control_msgs::action::dds_::FollowJointTrajectory_Goal_";

            DDS_TypeCode* FollowJointTrajectory_Goal__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode FollowJointTrajectory_Goal__g_tc_path_tolerance__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode FollowJointTrajectory_Goal__g_tc_goal_tolerance__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member FollowJointTrajectory_Goal__g_tc_members[4]=
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
                    }, 
                    {
                        (char *)"path_tolerance_",/* Member name */
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
                        (char *)"goal_tolerance_",/* Member name */
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
                        (char *)"goal_time_tolerance_",/* Member name */
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

                static DDS_TypeCode FollowJointTrajectory_Goal__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::FollowJointTrajectory_Goal_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        FollowJointTrajectory_Goal__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for FollowJointTrajectory_Goal_*/

                if (is_initialized) {
                    return &FollowJointTrajectory_Goal__g_tc;
                }

                FollowJointTrajectory_Goal__g_tc_path_tolerance__sequence._data._typeCode = (RTICdrTypeCode *)control_msgs::msg::dds_::JointTolerance__get_typecode();

                FollowJointTrajectory_Goal__g_tc_goal_tolerance__sequence._data._typeCode = (RTICdrTypeCode *)control_msgs::msg::dds_::JointTolerance__get_typecode();

                FollowJointTrajectory_Goal__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)trajectory_msgs::msg::dds_::JointTrajectory__get_typecode();

                FollowJointTrajectory_Goal__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& FollowJointTrajectory_Goal__g_tc_path_tolerance__sequence;
                FollowJointTrajectory_Goal__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& FollowJointTrajectory_Goal__g_tc_goal_tolerance__sequence;
                FollowJointTrajectory_Goal__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Duration__get_typecode();

                is_initialized = RTI_TRUE;

                return &FollowJointTrajectory_Goal__g_tc;
            }

            RTIBool FollowJointTrajectory_Goal__initialize(
                FollowJointTrajectory_Goal_* sample) {
                return control_msgs::action::dds_::FollowJointTrajectory_Goal__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool FollowJointTrajectory_Goal__initialize_ex(
                FollowJointTrajectory_Goal_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::FollowJointTrajectory_Goal__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool FollowJointTrajectory_Goal__initialize_w_params(
                FollowJointTrajectory_Goal_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

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
                if (allocParams->allocate_memory) {
                    control_msgs::msg::dds_::JointTolerance_Seq_initialize(&sample->path_tolerance_ );
                    control_msgs::msg::dds_::JointTolerance_Seq_set_element_allocation_params(&sample->path_tolerance_ ,allocParams);
                    control_msgs::msg::dds_::JointTolerance_Seq_set_absolute_maximum(&sample->path_tolerance_ , RTI_INT32_MAX);
                    if (!control_msgs::msg::dds_::JointTolerance_Seq_set_maximum(&sample->path_tolerance_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    control_msgs::msg::dds_::JointTolerance_Seq_set_length(&sample->path_tolerance_, 0);
                }
                if (allocParams->allocate_memory) {
                    control_msgs::msg::dds_::JointTolerance_Seq_initialize(&sample->goal_tolerance_ );
                    control_msgs::msg::dds_::JointTolerance_Seq_set_element_allocation_params(&sample->goal_tolerance_ ,allocParams);
                    control_msgs::msg::dds_::JointTolerance_Seq_set_absolute_maximum(&sample->goal_tolerance_ , RTI_INT32_MAX);
                    if (!control_msgs::msg::dds_::JointTolerance_Seq_set_maximum(&sample->goal_tolerance_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    control_msgs::msg::dds_::JointTolerance_Seq_set_length(&sample->goal_tolerance_, 0);
                }
                if (!builtin_interfaces::msg::dds_::Duration__initialize_w_params(&sample->goal_time_tolerance_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void FollowJointTrajectory_Goal__finalize(
                FollowJointTrajectory_Goal_* sample)
            {

                control_msgs::action::dds_::FollowJointTrajectory_Goal__finalize_ex(sample,RTI_TRUE);
            }

            void FollowJointTrajectory_Goal__finalize_ex(
                FollowJointTrajectory_Goal_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::FollowJointTrajectory_Goal__finalize_w_params(
                    sample,&deallocParams);
            }

            void FollowJointTrajectory_Goal__finalize_w_params(
                FollowJointTrajectory_Goal_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                trajectory_msgs::msg::dds_::JointTrajectory__finalize_w_params(&sample->trajectory_,deallocParams);

                control_msgs::msg::dds_::JointTolerance_Seq_set_element_deallocation_params(
                    &sample->path_tolerance_,deallocParams);
                control_msgs::msg::dds_::JointTolerance_Seq_finalize(&sample->path_tolerance_);

                control_msgs::msg::dds_::JointTolerance_Seq_set_element_deallocation_params(
                    &sample->goal_tolerance_,deallocParams);
                control_msgs::msg::dds_::JointTolerance_Seq_finalize(&sample->goal_tolerance_);

                builtin_interfaces::msg::dds_::Duration__finalize_w_params(&sample->goal_time_tolerance_,deallocParams);

            }

            void FollowJointTrajectory_Goal__finalize_optional_members(
                FollowJointTrajectory_Goal_* sample, RTIBool deletePointers)
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
                {
                    DDS_UnsignedLong i, length;
                    length = control_msgs::msg::dds_::JointTolerance_Seq_get_length(
                        &sample->path_tolerance_);

                    for (i = 0; i < length; i++) {
                        control_msgs::msg::dds_::JointTolerance__finalize_optional_members(
                            control_msgs::msg::dds_::JointTolerance_Seq_get_reference(
                                &sample->path_tolerance_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = control_msgs::msg::dds_::JointTolerance_Seq_get_length(
                        &sample->goal_tolerance_);

                    for (i = 0; i < length; i++) {
                        control_msgs::msg::dds_::JointTolerance__finalize_optional_members(
                            control_msgs::msg::dds_::JointTolerance_Seq_get_reference(
                                &sample->goal_tolerance_, i), deallocParams->delete_pointers);
                    }
                }  

                builtin_interfaces::msg::dds_::Duration__finalize_optional_members(&sample->goal_time_tolerance_, deallocParams->delete_pointers);
            }

            RTIBool FollowJointTrajectory_Goal__copy(
                FollowJointTrajectory_Goal_* dst,
                const FollowJointTrajectory_Goal_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!trajectory_msgs::msg::dds_::JointTrajectory__copy(
                        &dst->trajectory_,(const trajectory_msgs::msg::dds_::JointTrajectory_*)&src->trajectory_)) {
                        return RTI_FALSE;
                    } 
                    if (!control_msgs::msg::dds_::JointTolerance_Seq_copy(&dst->path_tolerance_ ,
                    &src->path_tolerance_ )) {
                        return RTI_FALSE;
                    }
                    if (!control_msgs::msg::dds_::JointTolerance_Seq_copy(&dst->goal_tolerance_ ,
                    &src->goal_tolerance_ )) {
                        return RTI_FALSE;
                    }
                    if (!builtin_interfaces::msg::dds_::Duration__copy(
                        &dst->goal_time_tolerance_,(const builtin_interfaces::msg::dds_::Duration_*)&src->goal_time_tolerance_)) {
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
            * Configure and implement 'FollowJointTrajectory_Goal_' sequence class.
            */
            #define T FollowJointTrajectory_Goal_
            #define TSeq FollowJointTrajectory_Goal_Seq

            #define T_initialize_w_params control_msgs::action::dds_::FollowJointTrajectory_Goal__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::FollowJointTrajectory_Goal__finalize_w_params
            #define T_copy       control_msgs::action::dds_::FollowJointTrajectory_Goal__copy

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
            const char *FollowJointTrajectory_SendGoal_Request_TYPENAME = "control_msgs::action::dds_::FollowJointTrajectory_SendGoal_Request_";

            DDS_TypeCode* FollowJointTrajectory_SendGoal_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FollowJointTrajectory_SendGoal_Request__g_tc_members[2]=
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

                static DDS_TypeCode FollowJointTrajectory_SendGoal_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::FollowJointTrajectory_SendGoal_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        FollowJointTrajectory_SendGoal_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for FollowJointTrajectory_SendGoal_Request_*/

                if (is_initialized) {
                    return &FollowJointTrajectory_SendGoal_Request__g_tc;
                }

                FollowJointTrajectory_SendGoal_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                FollowJointTrajectory_SendGoal_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)control_msgs::action::dds_::FollowJointTrajectory_Goal__get_typecode();

                is_initialized = RTI_TRUE;

                return &FollowJointTrajectory_SendGoal_Request__g_tc;
            }

            RTIBool FollowJointTrajectory_SendGoal_Request__initialize(
                FollowJointTrajectory_SendGoal_Request_* sample) {
                return control_msgs::action::dds_::FollowJointTrajectory_SendGoal_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool FollowJointTrajectory_SendGoal_Request__initialize_ex(
                FollowJointTrajectory_SendGoal_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::FollowJointTrajectory_SendGoal_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool FollowJointTrajectory_SendGoal_Request__initialize_w_params(
                FollowJointTrajectory_SendGoal_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                if (!control_msgs::action::dds_::FollowJointTrajectory_Goal__initialize_w_params(&sample->goal_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void FollowJointTrajectory_SendGoal_Request__finalize(
                FollowJointTrajectory_SendGoal_Request_* sample)
            {

                control_msgs::action::dds_::FollowJointTrajectory_SendGoal_Request__finalize_ex(sample,RTI_TRUE);
            }

            void FollowJointTrajectory_SendGoal_Request__finalize_ex(
                FollowJointTrajectory_SendGoal_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::FollowJointTrajectory_SendGoal_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void FollowJointTrajectory_SendGoal_Request__finalize_w_params(
                FollowJointTrajectory_SendGoal_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                control_msgs::action::dds_::FollowJointTrajectory_Goal__finalize_w_params(&sample->goal_,deallocParams);

            }

            void FollowJointTrajectory_SendGoal_Request__finalize_optional_members(
                FollowJointTrajectory_SendGoal_Request_* sample, RTIBool deletePointers)
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
                control_msgs::action::dds_::FollowJointTrajectory_Goal__finalize_optional_members(&sample->goal_, deallocParams->delete_pointers);
            }

            RTIBool FollowJointTrajectory_SendGoal_Request__copy(
                FollowJointTrajectory_SendGoal_Request_* dst,
                const FollowJointTrajectory_SendGoal_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!control_msgs::action::dds_::FollowJointTrajectory_Goal__copy(
                        &dst->goal_,(const control_msgs::action::dds_::FollowJointTrajectory_Goal_*)&src->goal_)) {
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
            * Configure and implement 'FollowJointTrajectory_SendGoal_Request_' sequence class.
            */
            #define T FollowJointTrajectory_SendGoal_Request_
            #define TSeq FollowJointTrajectory_SendGoal_Request_Seq

            #define T_initialize_w_params control_msgs::action::dds_::FollowJointTrajectory_SendGoal_Request__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::FollowJointTrajectory_SendGoal_Request__finalize_w_params
            #define T_copy       control_msgs::action::dds_::FollowJointTrajectory_SendGoal_Request__copy

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
            const char *FollowJointTrajectory_SendGoal_Response_TYPENAME = "control_msgs::action::dds_::FollowJointTrajectory_SendGoal_Response_";

            DDS_TypeCode* FollowJointTrajectory_SendGoal_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FollowJointTrajectory_SendGoal_Response__g_tc_members[2]=
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

                static DDS_TypeCode FollowJointTrajectory_SendGoal_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::FollowJointTrajectory_SendGoal_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        FollowJointTrajectory_SendGoal_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for FollowJointTrajectory_SendGoal_Response_*/

                if (is_initialized) {
                    return &FollowJointTrajectory_SendGoal_Response__g_tc;
                }

                FollowJointTrajectory_SendGoal_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                FollowJointTrajectory_SendGoal_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                is_initialized = RTI_TRUE;

                return &FollowJointTrajectory_SendGoal_Response__g_tc;
            }

            RTIBool FollowJointTrajectory_SendGoal_Response__initialize(
                FollowJointTrajectory_SendGoal_Response_* sample) {
                return control_msgs::action::dds_::FollowJointTrajectory_SendGoal_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool FollowJointTrajectory_SendGoal_Response__initialize_ex(
                FollowJointTrajectory_SendGoal_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::FollowJointTrajectory_SendGoal_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool FollowJointTrajectory_SendGoal_Response__initialize_w_params(
                FollowJointTrajectory_SendGoal_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void FollowJointTrajectory_SendGoal_Response__finalize(
                FollowJointTrajectory_SendGoal_Response_* sample)
            {

                control_msgs::action::dds_::FollowJointTrajectory_SendGoal_Response__finalize_ex(sample,RTI_TRUE);
            }

            void FollowJointTrajectory_SendGoal_Response__finalize_ex(
                FollowJointTrajectory_SendGoal_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::FollowJointTrajectory_SendGoal_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void FollowJointTrajectory_SendGoal_Response__finalize_w_params(
                FollowJointTrajectory_SendGoal_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->stamp_,deallocParams);

            }

            void FollowJointTrajectory_SendGoal_Response__finalize_optional_members(
                FollowJointTrajectory_SendGoal_Response_* sample, RTIBool deletePointers)
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

            RTIBool FollowJointTrajectory_SendGoal_Response__copy(
                FollowJointTrajectory_SendGoal_Response_* dst,
                const FollowJointTrajectory_SendGoal_Response_* src)
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
            * Configure and implement 'FollowJointTrajectory_SendGoal_Response_' sequence class.
            */
            #define T FollowJointTrajectory_SendGoal_Response_
            #define TSeq FollowJointTrajectory_SendGoal_Response_Seq

            #define T_initialize_w_params control_msgs::action::dds_::FollowJointTrajectory_SendGoal_Response__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::FollowJointTrajectory_SendGoal_Response__finalize_w_params
            #define T_copy       control_msgs::action::dds_::FollowJointTrajectory_SendGoal_Response__copy

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
            namespace FollowJointTrajectory_Result_Constants {
            } /* namespace FollowJointTrajectory_Result_Constants  */

            /* ========================================================================= */
            const char *FollowJointTrajectory_Result_TYPENAME = "control_msgs::action::dds_::FollowJointTrajectory_Result_";

            DDS_TypeCode* FollowJointTrajectory_Result__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode FollowJointTrajectory_Result__g_tc_error_string__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member FollowJointTrajectory_Result__g_tc_members[2]=
                {

                    {
                        (char *)"error_code_",/* Member name */
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
                        (char *)"error_string_",/* Member name */
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

                static DDS_TypeCode FollowJointTrajectory_Result__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::FollowJointTrajectory_Result_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        FollowJointTrajectory_Result__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for FollowJointTrajectory_Result_*/

                if (is_initialized) {
                    return &FollowJointTrajectory_Result__g_tc;
                }

                FollowJointTrajectory_Result__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                FollowJointTrajectory_Result__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&FollowJointTrajectory_Result__g_tc_error_string__string;

                is_initialized = RTI_TRUE;

                return &FollowJointTrajectory_Result__g_tc;
            }

            RTIBool FollowJointTrajectory_Result__initialize(
                FollowJointTrajectory_Result_* sample) {
                return control_msgs::action::dds_::FollowJointTrajectory_Result__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool FollowJointTrajectory_Result__initialize_ex(
                FollowJointTrajectory_Result_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::FollowJointTrajectory_Result__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool FollowJointTrajectory_Result__initialize_w_params(
                FollowJointTrajectory_Result_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->error_code_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->error_string_= DDS_String_alloc ((0));
                    if (sample->error_string_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->error_string_!= NULL) { 
                        sample->error_string_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void FollowJointTrajectory_Result__finalize(
                FollowJointTrajectory_Result_* sample)
            {

                control_msgs::action::dds_::FollowJointTrajectory_Result__finalize_ex(sample,RTI_TRUE);
            }

            void FollowJointTrajectory_Result__finalize_ex(
                FollowJointTrajectory_Result_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::FollowJointTrajectory_Result__finalize_w_params(
                    sample,&deallocParams);
            }

            void FollowJointTrajectory_Result__finalize_w_params(
                FollowJointTrajectory_Result_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->error_string_ != NULL) {
                    DDS_String_free(sample->error_string_);
                    sample->error_string_=NULL;

                }
            }

            void FollowJointTrajectory_Result__finalize_optional_members(
                FollowJointTrajectory_Result_* sample, RTIBool deletePointers)
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

            RTIBool FollowJointTrajectory_Result__copy(
                FollowJointTrajectory_Result_* dst,
                const FollowJointTrajectory_Result_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyLong (
                        &dst->error_code_, &src->error_code_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->error_string_, src->error_string_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
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
            * Configure and implement 'FollowJointTrajectory_Result_' sequence class.
            */
            #define T FollowJointTrajectory_Result_
            #define TSeq FollowJointTrajectory_Result_Seq

            #define T_initialize_w_params control_msgs::action::dds_::FollowJointTrajectory_Result__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::FollowJointTrajectory_Result__finalize_w_params
            #define T_copy       control_msgs::action::dds_::FollowJointTrajectory_Result__copy

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
            const char *FollowJointTrajectory_GetResult_Request_TYPENAME = "control_msgs::action::dds_::FollowJointTrajectory_GetResult_Request_";

            DDS_TypeCode* FollowJointTrajectory_GetResult_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FollowJointTrajectory_GetResult_Request__g_tc_members[1]=
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

                static DDS_TypeCode FollowJointTrajectory_GetResult_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::FollowJointTrajectory_GetResult_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        FollowJointTrajectory_GetResult_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for FollowJointTrajectory_GetResult_Request_*/

                if (is_initialized) {
                    return &FollowJointTrajectory_GetResult_Request__g_tc;
                }

                FollowJointTrajectory_GetResult_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                is_initialized = RTI_TRUE;

                return &FollowJointTrajectory_GetResult_Request__g_tc;
            }

            RTIBool FollowJointTrajectory_GetResult_Request__initialize(
                FollowJointTrajectory_GetResult_Request_* sample) {
                return control_msgs::action::dds_::FollowJointTrajectory_GetResult_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool FollowJointTrajectory_GetResult_Request__initialize_ex(
                FollowJointTrajectory_GetResult_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::FollowJointTrajectory_GetResult_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool FollowJointTrajectory_GetResult_Request__initialize_w_params(
                FollowJointTrajectory_GetResult_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void FollowJointTrajectory_GetResult_Request__finalize(
                FollowJointTrajectory_GetResult_Request_* sample)
            {

                control_msgs::action::dds_::FollowJointTrajectory_GetResult_Request__finalize_ex(sample,RTI_TRUE);
            }

            void FollowJointTrajectory_GetResult_Request__finalize_ex(
                FollowJointTrajectory_GetResult_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::FollowJointTrajectory_GetResult_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void FollowJointTrajectory_GetResult_Request__finalize_w_params(
                FollowJointTrajectory_GetResult_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

            }

            void FollowJointTrajectory_GetResult_Request__finalize_optional_members(
                FollowJointTrajectory_GetResult_Request_* sample, RTIBool deletePointers)
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

            RTIBool FollowJointTrajectory_GetResult_Request__copy(
                FollowJointTrajectory_GetResult_Request_* dst,
                const FollowJointTrajectory_GetResult_Request_* src)
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
            * Configure and implement 'FollowJointTrajectory_GetResult_Request_' sequence class.
            */
            #define T FollowJointTrajectory_GetResult_Request_
            #define TSeq FollowJointTrajectory_GetResult_Request_Seq

            #define T_initialize_w_params control_msgs::action::dds_::FollowJointTrajectory_GetResult_Request__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::FollowJointTrajectory_GetResult_Request__finalize_w_params
            #define T_copy       control_msgs::action::dds_::FollowJointTrajectory_GetResult_Request__copy

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
            const char *FollowJointTrajectory_GetResult_Response_TYPENAME = "control_msgs::action::dds_::FollowJointTrajectory_GetResult_Response_";

            DDS_TypeCode* FollowJointTrajectory_GetResult_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FollowJointTrajectory_GetResult_Response__g_tc_members[2]=
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

                static DDS_TypeCode FollowJointTrajectory_GetResult_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::FollowJointTrajectory_GetResult_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        FollowJointTrajectory_GetResult_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for FollowJointTrajectory_GetResult_Response_*/

                if (is_initialized) {
                    return &FollowJointTrajectory_GetResult_Response__g_tc;
                }

                FollowJointTrajectory_GetResult_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                FollowJointTrajectory_GetResult_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)control_msgs::action::dds_::FollowJointTrajectory_Result__get_typecode();

                is_initialized = RTI_TRUE;

                return &FollowJointTrajectory_GetResult_Response__g_tc;
            }

            RTIBool FollowJointTrajectory_GetResult_Response__initialize(
                FollowJointTrajectory_GetResult_Response_* sample) {
                return control_msgs::action::dds_::FollowJointTrajectory_GetResult_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool FollowJointTrajectory_GetResult_Response__initialize_ex(
                FollowJointTrajectory_GetResult_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::FollowJointTrajectory_GetResult_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool FollowJointTrajectory_GetResult_Response__initialize_w_params(
                FollowJointTrajectory_GetResult_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                if (!control_msgs::action::dds_::FollowJointTrajectory_Result__initialize_w_params(&sample->result_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void FollowJointTrajectory_GetResult_Response__finalize(
                FollowJointTrajectory_GetResult_Response_* sample)
            {

                control_msgs::action::dds_::FollowJointTrajectory_GetResult_Response__finalize_ex(sample,RTI_TRUE);
            }

            void FollowJointTrajectory_GetResult_Response__finalize_ex(
                FollowJointTrajectory_GetResult_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::FollowJointTrajectory_GetResult_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void FollowJointTrajectory_GetResult_Response__finalize_w_params(
                FollowJointTrajectory_GetResult_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                control_msgs::action::dds_::FollowJointTrajectory_Result__finalize_w_params(&sample->result_,deallocParams);

            }

            void FollowJointTrajectory_GetResult_Response__finalize_optional_members(
                FollowJointTrajectory_GetResult_Response_* sample, RTIBool deletePointers)
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

                control_msgs::action::dds_::FollowJointTrajectory_Result__finalize_optional_members(&sample->result_, deallocParams->delete_pointers);
            }

            RTIBool FollowJointTrajectory_GetResult_Response__copy(
                FollowJointTrajectory_GetResult_Response_* dst,
                const FollowJointTrajectory_GetResult_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->status_, &src->status_)) { 
                        return RTI_FALSE;
                    }
                    if (!control_msgs::action::dds_::FollowJointTrajectory_Result__copy(
                        &dst->result_,(const control_msgs::action::dds_::FollowJointTrajectory_Result_*)&src->result_)) {
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
            * Configure and implement 'FollowJointTrajectory_GetResult_Response_' sequence class.
            */
            #define T FollowJointTrajectory_GetResult_Response_
            #define TSeq FollowJointTrajectory_GetResult_Response_Seq

            #define T_initialize_w_params control_msgs::action::dds_::FollowJointTrajectory_GetResult_Response__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::FollowJointTrajectory_GetResult_Response__finalize_w_params
            #define T_copy       control_msgs::action::dds_::FollowJointTrajectory_GetResult_Response__copy

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
            const char *FollowJointTrajectory_Feedback_TYPENAME = "control_msgs::action::dds_::FollowJointTrajectory_Feedback_";

            DDS_TypeCode* FollowJointTrajectory_Feedback__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode FollowJointTrajectory_Feedback__g_tc_joint_names__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode FollowJointTrajectory_Feedback__g_tc_joint_names__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member FollowJointTrajectory_Feedback__g_tc_members[5]=
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
                        (char *)"joint_names_",/* Member name */
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
                        (char *)"desired_",/* Member name */
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
                        (char *)"actual_",/* Member name */
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
                        (char *)"error_",/* Member name */
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
                    }
                };

                static DDS_TypeCode FollowJointTrajectory_Feedback__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::FollowJointTrajectory_Feedback_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        FollowJointTrajectory_Feedback__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for FollowJointTrajectory_Feedback_*/

                if (is_initialized) {
                    return &FollowJointTrajectory_Feedback__g_tc;
                }

                FollowJointTrajectory_Feedback__g_tc_joint_names__sequence._data._typeCode = (RTICdrTypeCode *)&FollowJointTrajectory_Feedback__g_tc_joint_names__string;

                FollowJointTrajectory_Feedback__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                FollowJointTrajectory_Feedback__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& FollowJointTrajectory_Feedback__g_tc_joint_names__sequence;
                FollowJointTrajectory_Feedback__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)trajectory_msgs::msg::dds_::JointTrajectoryPoint__get_typecode();

                FollowJointTrajectory_Feedback__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)trajectory_msgs::msg::dds_::JointTrajectoryPoint__get_typecode();

                FollowJointTrajectory_Feedback__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)trajectory_msgs::msg::dds_::JointTrajectoryPoint__get_typecode();

                is_initialized = RTI_TRUE;

                return &FollowJointTrajectory_Feedback__g_tc;
            }

            RTIBool FollowJointTrajectory_Feedback__initialize(
                FollowJointTrajectory_Feedback_* sample) {
                return control_msgs::action::dds_::FollowJointTrajectory_Feedback__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool FollowJointTrajectory_Feedback__initialize_ex(
                FollowJointTrajectory_Feedback_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::FollowJointTrajectory_Feedback__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool FollowJointTrajectory_Feedback__initialize_w_params(
                FollowJointTrajectory_Feedback_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                if (allocParams->allocate_memory) {
                    DDS_StringSeq_initialize(&sample->joint_names_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->joint_names_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->joint_names_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->joint_names_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->joint_names_, 0);
                }
                if (!trajectory_msgs::msg::dds_::JointTrajectoryPoint__initialize_w_params(&sample->desired_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!trajectory_msgs::msg::dds_::JointTrajectoryPoint__initialize_w_params(&sample->actual_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!trajectory_msgs::msg::dds_::JointTrajectoryPoint__initialize_w_params(&sample->error_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void FollowJointTrajectory_Feedback__finalize(
                FollowJointTrajectory_Feedback_* sample)
            {

                control_msgs::action::dds_::FollowJointTrajectory_Feedback__finalize_ex(sample,RTI_TRUE);
            }

            void FollowJointTrajectory_Feedback__finalize_ex(
                FollowJointTrajectory_Feedback_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::FollowJointTrajectory_Feedback__finalize_w_params(
                    sample,&deallocParams);
            }

            void FollowJointTrajectory_Feedback__finalize_w_params(
                FollowJointTrajectory_Feedback_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                DDS_StringSeq_finalize(&sample->joint_names_);

                trajectory_msgs::msg::dds_::JointTrajectoryPoint__finalize_w_params(&sample->desired_,deallocParams);

                trajectory_msgs::msg::dds_::JointTrajectoryPoint__finalize_w_params(&sample->actual_,deallocParams);

                trajectory_msgs::msg::dds_::JointTrajectoryPoint__finalize_w_params(&sample->error_,deallocParams);

            }

            void FollowJointTrajectory_Feedback__finalize_optional_members(
                FollowJointTrajectory_Feedback_* sample, RTIBool deletePointers)
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
                trajectory_msgs::msg::dds_::JointTrajectoryPoint__finalize_optional_members(&sample->desired_, deallocParams->delete_pointers);
                trajectory_msgs::msg::dds_::JointTrajectoryPoint__finalize_optional_members(&sample->actual_, deallocParams->delete_pointers);
                trajectory_msgs::msg::dds_::JointTrajectoryPoint__finalize_optional_members(&sample->error_, deallocParams->delete_pointers);
            }

            RTIBool FollowJointTrajectory_Feedback__copy(
                FollowJointTrajectory_Feedback_* dst,
                const FollowJointTrajectory_Feedback_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!DDS_StringSeq_copy(&dst->joint_names_ ,
                    &src->joint_names_ )) {
                        return RTI_FALSE;
                    }
                    if (!trajectory_msgs::msg::dds_::JointTrajectoryPoint__copy(
                        &dst->desired_,(const trajectory_msgs::msg::dds_::JointTrajectoryPoint_*)&src->desired_)) {
                        return RTI_FALSE;
                    } 
                    if (!trajectory_msgs::msg::dds_::JointTrajectoryPoint__copy(
                        &dst->actual_,(const trajectory_msgs::msg::dds_::JointTrajectoryPoint_*)&src->actual_)) {
                        return RTI_FALSE;
                    } 
                    if (!trajectory_msgs::msg::dds_::JointTrajectoryPoint__copy(
                        &dst->error_,(const trajectory_msgs::msg::dds_::JointTrajectoryPoint_*)&src->error_)) {
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
            * Configure and implement 'FollowJointTrajectory_Feedback_' sequence class.
            */
            #define T FollowJointTrajectory_Feedback_
            #define TSeq FollowJointTrajectory_Feedback_Seq

            #define T_initialize_w_params control_msgs::action::dds_::FollowJointTrajectory_Feedback__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::FollowJointTrajectory_Feedback__finalize_w_params
            #define T_copy       control_msgs::action::dds_::FollowJointTrajectory_Feedback__copy

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
            const char *FollowJointTrajectory_FeedbackMessage_TYPENAME = "control_msgs::action::dds_::FollowJointTrajectory_FeedbackMessage_";

            DDS_TypeCode* FollowJointTrajectory_FeedbackMessage__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FollowJointTrajectory_FeedbackMessage__g_tc_members[2]=
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

                static DDS_TypeCode FollowJointTrajectory_FeedbackMessage__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::FollowJointTrajectory_FeedbackMessage_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        FollowJointTrajectory_FeedbackMessage__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for FollowJointTrajectory_FeedbackMessage_*/

                if (is_initialized) {
                    return &FollowJointTrajectory_FeedbackMessage__g_tc;
                }

                FollowJointTrajectory_FeedbackMessage__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                FollowJointTrajectory_FeedbackMessage__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)control_msgs::action::dds_::FollowJointTrajectory_Feedback__get_typecode();

                is_initialized = RTI_TRUE;

                return &FollowJointTrajectory_FeedbackMessage__g_tc;
            }

            RTIBool FollowJointTrajectory_FeedbackMessage__initialize(
                FollowJointTrajectory_FeedbackMessage_* sample) {
                return control_msgs::action::dds_::FollowJointTrajectory_FeedbackMessage__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool FollowJointTrajectory_FeedbackMessage__initialize_ex(
                FollowJointTrajectory_FeedbackMessage_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::FollowJointTrajectory_FeedbackMessage__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool FollowJointTrajectory_FeedbackMessage__initialize_w_params(
                FollowJointTrajectory_FeedbackMessage_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                if (!control_msgs::action::dds_::FollowJointTrajectory_Feedback__initialize_w_params(&sample->feedback_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void FollowJointTrajectory_FeedbackMessage__finalize(
                FollowJointTrajectory_FeedbackMessage_* sample)
            {

                control_msgs::action::dds_::FollowJointTrajectory_FeedbackMessage__finalize_ex(sample,RTI_TRUE);
            }

            void FollowJointTrajectory_FeedbackMessage__finalize_ex(
                FollowJointTrajectory_FeedbackMessage_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::FollowJointTrajectory_FeedbackMessage__finalize_w_params(
                    sample,&deallocParams);
            }

            void FollowJointTrajectory_FeedbackMessage__finalize_w_params(
                FollowJointTrajectory_FeedbackMessage_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                control_msgs::action::dds_::FollowJointTrajectory_Feedback__finalize_w_params(&sample->feedback_,deallocParams);

            }

            void FollowJointTrajectory_FeedbackMessage__finalize_optional_members(
                FollowJointTrajectory_FeedbackMessage_* sample, RTIBool deletePointers)
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
                control_msgs::action::dds_::FollowJointTrajectory_Feedback__finalize_optional_members(&sample->feedback_, deallocParams->delete_pointers);
            }

            RTIBool FollowJointTrajectory_FeedbackMessage__copy(
                FollowJointTrajectory_FeedbackMessage_* dst,
                const FollowJointTrajectory_FeedbackMessage_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!control_msgs::action::dds_::FollowJointTrajectory_Feedback__copy(
                        &dst->feedback_,(const control_msgs::action::dds_::FollowJointTrajectory_Feedback_*)&src->feedback_)) {
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
            * Configure and implement 'FollowJointTrajectory_FeedbackMessage_' sequence class.
            */
            #define T FollowJointTrajectory_FeedbackMessage_
            #define TSeq FollowJointTrajectory_FeedbackMessage_Seq

            #define T_initialize_w_params control_msgs::action::dds_::FollowJointTrajectory_FeedbackMessage__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::FollowJointTrajectory_FeedbackMessage__finalize_w_params
            #define T_copy       control_msgs::action::dds_::FollowJointTrajectory_FeedbackMessage__copy

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

