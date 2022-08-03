

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetJointTrajectory_.idl using "rtiddsgen".
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

#include "SetJointTrajectory_.h"

#include <new>

namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SetJointTrajectory_Request_TYPENAME = "gazebo_msgs::srv::dds_::SetJointTrajectory_Request_";

            DDS_TypeCode* SetJointTrajectory_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SetJointTrajectory_Request__g_tc_model_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member SetJointTrajectory_Request__g_tc_members[5]=
                {

                    {
                        (char *)"model_name_",/* Member name */
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
                        (char *)"joint_trajectory_",/* Member name */
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
                        (char *)"model_pose_",/* Member name */
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
                        (char *)"set_model_pose_",/* Member name */
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
                        (char *)"disable_physics_updates_",/* Member name */
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

                static DDS_TypeCode SetJointTrajectory_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::SetJointTrajectory_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        SetJointTrajectory_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetJointTrajectory_Request_*/

                if (is_initialized) {
                    return &SetJointTrajectory_Request__g_tc;
                }

                SetJointTrajectory_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&SetJointTrajectory_Request__g_tc_model_name__string;

                SetJointTrajectory_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)trajectory_msgs::msg::dds_::JointTrajectory__get_typecode();

                SetJointTrajectory_Request__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Pose__get_typecode();

                SetJointTrajectory_Request__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                SetJointTrajectory_Request__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &SetJointTrajectory_Request__g_tc;
            }

            RTIBool SetJointTrajectory_Request__initialize(
                SetJointTrajectory_Request_* sample) {
                return gazebo_msgs::srv::dds_::SetJointTrajectory_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetJointTrajectory_Request__initialize_ex(
                SetJointTrajectory_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::SetJointTrajectory_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetJointTrajectory_Request__initialize_w_params(
                SetJointTrajectory_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->model_name_= DDS_String_alloc ((0));
                    if (sample->model_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->model_name_!= NULL) { 
                        sample->model_name_[0] = '\0';
                    }
                }

                if (!trajectory_msgs::msg::dds_::JointTrajectory__initialize_w_params(&sample->joint_trajectory_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!geometry_msgs::msg::dds_::Pose__initialize_w_params(&sample->model_pose_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->set_model_pose_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->disable_physics_updates_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void SetJointTrajectory_Request__finalize(
                SetJointTrajectory_Request_* sample)
            {

                gazebo_msgs::srv::dds_::SetJointTrajectory_Request__finalize_ex(sample,RTI_TRUE);
            }

            void SetJointTrajectory_Request__finalize_ex(
                SetJointTrajectory_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::SetJointTrajectory_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetJointTrajectory_Request__finalize_w_params(
                SetJointTrajectory_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->model_name_ != NULL) {
                    DDS_String_free(sample->model_name_);
                    sample->model_name_=NULL;

                }
                trajectory_msgs::msg::dds_::JointTrajectory__finalize_w_params(&sample->joint_trajectory_,deallocParams);

                geometry_msgs::msg::dds_::Pose__finalize_w_params(&sample->model_pose_,deallocParams);

            }

            void SetJointTrajectory_Request__finalize_optional_members(
                SetJointTrajectory_Request_* sample, RTIBool deletePointers)
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

                trajectory_msgs::msg::dds_::JointTrajectory__finalize_optional_members(&sample->joint_trajectory_, deallocParams->delete_pointers);
                geometry_msgs::msg::dds_::Pose__finalize_optional_members(&sample->model_pose_, deallocParams->delete_pointers);
            }

            RTIBool SetJointTrajectory_Request__copy(
                SetJointTrajectory_Request_* dst,
                const SetJointTrajectory_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->model_name_, src->model_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!trajectory_msgs::msg::dds_::JointTrajectory__copy(
                        &dst->joint_trajectory_,(const trajectory_msgs::msg::dds_::JointTrajectory_*)&src->joint_trajectory_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Pose__copy(
                        &dst->model_pose_,(const geometry_msgs::msg::dds_::Pose_*)&src->model_pose_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyBoolean (
                        &dst->set_model_pose_, &src->set_model_pose_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->disable_physics_updates_, &src->disable_physics_updates_)) { 
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
            * Configure and implement 'SetJointTrajectory_Request_' sequence class.
            */
            #define T SetJointTrajectory_Request_
            #define TSeq SetJointTrajectory_Request_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::SetJointTrajectory_Request__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::SetJointTrajectory_Request__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::SetJointTrajectory_Request__copy

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
    } /* namespace srv  */
} /* namespace gazebo_msgs  */
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SetJointTrajectory_Response_TYPENAME = "gazebo_msgs::srv::dds_::SetJointTrajectory_Response_";

            DDS_TypeCode* SetJointTrajectory_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SetJointTrajectory_Response__g_tc_status_message__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member SetJointTrajectory_Response__g_tc_members[2]=
                {

                    {
                        (char *)"success_",/* Member name */
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
                        (char *)"status_message_",/* Member name */
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

                static DDS_TypeCode SetJointTrajectory_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::SetJointTrajectory_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        SetJointTrajectory_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetJointTrajectory_Response_*/

                if (is_initialized) {
                    return &SetJointTrajectory_Response__g_tc;
                }

                SetJointTrajectory_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                SetJointTrajectory_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&SetJointTrajectory_Response__g_tc_status_message__string;

                is_initialized = RTI_TRUE;

                return &SetJointTrajectory_Response__g_tc;
            }

            RTIBool SetJointTrajectory_Response__initialize(
                SetJointTrajectory_Response_* sample) {
                return gazebo_msgs::srv::dds_::SetJointTrajectory_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetJointTrajectory_Response__initialize_ex(
                SetJointTrajectory_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::SetJointTrajectory_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetJointTrajectory_Response__initialize_w_params(
                SetJointTrajectory_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->success_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->status_message_= DDS_String_alloc ((0));
                    if (sample->status_message_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->status_message_!= NULL) { 
                        sample->status_message_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void SetJointTrajectory_Response__finalize(
                SetJointTrajectory_Response_* sample)
            {

                gazebo_msgs::srv::dds_::SetJointTrajectory_Response__finalize_ex(sample,RTI_TRUE);
            }

            void SetJointTrajectory_Response__finalize_ex(
                SetJointTrajectory_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::SetJointTrajectory_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetJointTrajectory_Response__finalize_w_params(
                SetJointTrajectory_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->status_message_ != NULL) {
                    DDS_String_free(sample->status_message_);
                    sample->status_message_=NULL;

                }
            }

            void SetJointTrajectory_Response__finalize_optional_members(
                SetJointTrajectory_Response_* sample, RTIBool deletePointers)
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

            RTIBool SetJointTrajectory_Response__copy(
                SetJointTrajectory_Response_* dst,
                const SetJointTrajectory_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->success_, &src->success_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->status_message_, src->status_message_, 
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
            * Configure and implement 'SetJointTrajectory_Response_' sequence class.
            */
            #define T SetJointTrajectory_Response_
            #define TSeq SetJointTrajectory_Response_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::SetJointTrajectory_Response__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::SetJointTrajectory_Response__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::SetJointTrajectory_Response__copy

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
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

