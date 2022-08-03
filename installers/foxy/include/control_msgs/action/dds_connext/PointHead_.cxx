

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointHead_.idl using "rtiddsgen".
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

#include "PointHead_.h"

#include <new>

namespace control_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *PointHead_Goal_TYPENAME = "control_msgs::action::dds_::PointHead_Goal_";

            DDS_TypeCode* PointHead_Goal__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PointHead_Goal__g_tc_pointing_frame__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member PointHead_Goal__g_tc_members[5]=
                {

                    {
                        (char *)"target_",/* Member name */
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
                        (char *)"pointing_axis_",/* Member name */
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
                        (char *)"pointing_frame_",/* Member name */
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
                        (char *)"min_duration_",/* Member name */
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
                        (char *)"max_velocity_",/* Member name */
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

                static DDS_TypeCode PointHead_Goal__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::PointHead_Goal_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        PointHead_Goal__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PointHead_Goal_*/

                if (is_initialized) {
                    return &PointHead_Goal__g_tc;
                }

                PointHead_Goal__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::PointStamped__get_typecode();

                PointHead_Goal__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Vector3__get_typecode();

                PointHead_Goal__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&PointHead_Goal__g_tc_pointing_frame__string;

                PointHead_Goal__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Duration__get_typecode();

                PointHead_Goal__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                is_initialized = RTI_TRUE;

                return &PointHead_Goal__g_tc;
            }

            RTIBool PointHead_Goal__initialize(
                PointHead_Goal_* sample) {
                return control_msgs::action::dds_::PointHead_Goal__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PointHead_Goal__initialize_ex(
                PointHead_Goal_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::PointHead_Goal__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PointHead_Goal__initialize_w_params(
                PointHead_Goal_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!geometry_msgs::msg::dds_::PointStamped__initialize_w_params(&sample->target_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!geometry_msgs::msg::dds_::Vector3__initialize_w_params(&sample->pointing_axis_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory){
                    sample->pointing_frame_= DDS_String_alloc ((0));
                    if (sample->pointing_frame_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->pointing_frame_!= NULL) { 
                        sample->pointing_frame_[0] = '\0';
                    }
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

            void PointHead_Goal__finalize(
                PointHead_Goal_* sample)
            {

                control_msgs::action::dds_::PointHead_Goal__finalize_ex(sample,RTI_TRUE);
            }

            void PointHead_Goal__finalize_ex(
                PointHead_Goal_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::PointHead_Goal__finalize_w_params(
                    sample,&deallocParams);
            }

            void PointHead_Goal__finalize_w_params(
                PointHead_Goal_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                geometry_msgs::msg::dds_::PointStamped__finalize_w_params(&sample->target_,deallocParams);

                geometry_msgs::msg::dds_::Vector3__finalize_w_params(&sample->pointing_axis_,deallocParams);

                if (sample->pointing_frame_ != NULL) {
                    DDS_String_free(sample->pointing_frame_);
                    sample->pointing_frame_=NULL;

                }
                builtin_interfaces::msg::dds_::Duration__finalize_w_params(&sample->min_duration_,deallocParams);

            }

            void PointHead_Goal__finalize_optional_members(
                PointHead_Goal_* sample, RTIBool deletePointers)
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

                geometry_msgs::msg::dds_::PointStamped__finalize_optional_members(&sample->target_, deallocParams->delete_pointers);
                geometry_msgs::msg::dds_::Vector3__finalize_optional_members(&sample->pointing_axis_, deallocParams->delete_pointers);
                builtin_interfaces::msg::dds_::Duration__finalize_optional_members(&sample->min_duration_, deallocParams->delete_pointers);
            }

            RTIBool PointHead_Goal__copy(
                PointHead_Goal_* dst,
                const PointHead_Goal_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!geometry_msgs::msg::dds_::PointStamped__copy(
                        &dst->target_,(const geometry_msgs::msg::dds_::PointStamped_*)&src->target_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Vector3__copy(
                        &dst->pointing_axis_,(const geometry_msgs::msg::dds_::Vector3_*)&src->pointing_axis_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyStringEx (
                        &dst->pointing_frame_, src->pointing_frame_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
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
            * Configure and implement 'PointHead_Goal_' sequence class.
            */
            #define T PointHead_Goal_
            #define TSeq PointHead_Goal_Seq

            #define T_initialize_w_params control_msgs::action::dds_::PointHead_Goal__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::PointHead_Goal__finalize_w_params
            #define T_copy       control_msgs::action::dds_::PointHead_Goal__copy

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
            const char *PointHead_SendGoal_Request_TYPENAME = "control_msgs::action::dds_::PointHead_SendGoal_Request_";

            DDS_TypeCode* PointHead_SendGoal_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PointHead_SendGoal_Request__g_tc_members[2]=
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

                static DDS_TypeCode PointHead_SendGoal_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::PointHead_SendGoal_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PointHead_SendGoal_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PointHead_SendGoal_Request_*/

                if (is_initialized) {
                    return &PointHead_SendGoal_Request__g_tc;
                }

                PointHead_SendGoal_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                PointHead_SendGoal_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)control_msgs::action::dds_::PointHead_Goal__get_typecode();

                is_initialized = RTI_TRUE;

                return &PointHead_SendGoal_Request__g_tc;
            }

            RTIBool PointHead_SendGoal_Request__initialize(
                PointHead_SendGoal_Request_* sample) {
                return control_msgs::action::dds_::PointHead_SendGoal_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PointHead_SendGoal_Request__initialize_ex(
                PointHead_SendGoal_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::PointHead_SendGoal_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PointHead_SendGoal_Request__initialize_w_params(
                PointHead_SendGoal_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                if (!control_msgs::action::dds_::PointHead_Goal__initialize_w_params(&sample->goal_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void PointHead_SendGoal_Request__finalize(
                PointHead_SendGoal_Request_* sample)
            {

                control_msgs::action::dds_::PointHead_SendGoal_Request__finalize_ex(sample,RTI_TRUE);
            }

            void PointHead_SendGoal_Request__finalize_ex(
                PointHead_SendGoal_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::PointHead_SendGoal_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void PointHead_SendGoal_Request__finalize_w_params(
                PointHead_SendGoal_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                control_msgs::action::dds_::PointHead_Goal__finalize_w_params(&sample->goal_,deallocParams);

            }

            void PointHead_SendGoal_Request__finalize_optional_members(
                PointHead_SendGoal_Request_* sample, RTIBool deletePointers)
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
                control_msgs::action::dds_::PointHead_Goal__finalize_optional_members(&sample->goal_, deallocParams->delete_pointers);
            }

            RTIBool PointHead_SendGoal_Request__copy(
                PointHead_SendGoal_Request_* dst,
                const PointHead_SendGoal_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!control_msgs::action::dds_::PointHead_Goal__copy(
                        &dst->goal_,(const control_msgs::action::dds_::PointHead_Goal_*)&src->goal_)) {
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
            * Configure and implement 'PointHead_SendGoal_Request_' sequence class.
            */
            #define T PointHead_SendGoal_Request_
            #define TSeq PointHead_SendGoal_Request_Seq

            #define T_initialize_w_params control_msgs::action::dds_::PointHead_SendGoal_Request__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::PointHead_SendGoal_Request__finalize_w_params
            #define T_copy       control_msgs::action::dds_::PointHead_SendGoal_Request__copy

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
            const char *PointHead_SendGoal_Response_TYPENAME = "control_msgs::action::dds_::PointHead_SendGoal_Response_";

            DDS_TypeCode* PointHead_SendGoal_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PointHead_SendGoal_Response__g_tc_members[2]=
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

                static DDS_TypeCode PointHead_SendGoal_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::PointHead_SendGoal_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PointHead_SendGoal_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PointHead_SendGoal_Response_*/

                if (is_initialized) {
                    return &PointHead_SendGoal_Response__g_tc;
                }

                PointHead_SendGoal_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                PointHead_SendGoal_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                is_initialized = RTI_TRUE;

                return &PointHead_SendGoal_Response__g_tc;
            }

            RTIBool PointHead_SendGoal_Response__initialize(
                PointHead_SendGoal_Response_* sample) {
                return control_msgs::action::dds_::PointHead_SendGoal_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PointHead_SendGoal_Response__initialize_ex(
                PointHead_SendGoal_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::PointHead_SendGoal_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PointHead_SendGoal_Response__initialize_w_params(
                PointHead_SendGoal_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void PointHead_SendGoal_Response__finalize(
                PointHead_SendGoal_Response_* sample)
            {

                control_msgs::action::dds_::PointHead_SendGoal_Response__finalize_ex(sample,RTI_TRUE);
            }

            void PointHead_SendGoal_Response__finalize_ex(
                PointHead_SendGoal_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::PointHead_SendGoal_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void PointHead_SendGoal_Response__finalize_w_params(
                PointHead_SendGoal_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->stamp_,deallocParams);

            }

            void PointHead_SendGoal_Response__finalize_optional_members(
                PointHead_SendGoal_Response_* sample, RTIBool deletePointers)
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

            RTIBool PointHead_SendGoal_Response__copy(
                PointHead_SendGoal_Response_* dst,
                const PointHead_SendGoal_Response_* src)
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
            * Configure and implement 'PointHead_SendGoal_Response_' sequence class.
            */
            #define T PointHead_SendGoal_Response_
            #define TSeq PointHead_SendGoal_Response_Seq

            #define T_initialize_w_params control_msgs::action::dds_::PointHead_SendGoal_Response__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::PointHead_SendGoal_Response__finalize_w_params
            #define T_copy       control_msgs::action::dds_::PointHead_SendGoal_Response__copy

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
            const char *PointHead_Result_TYPENAME = "control_msgs::action::dds_::PointHead_Result_";

            DDS_TypeCode* PointHead_Result__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PointHead_Result__g_tc_members[1]=
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

                static DDS_TypeCode PointHead_Result__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::PointHead_Result_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        PointHead_Result__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PointHead_Result_*/

                if (is_initialized) {
                    return &PointHead_Result__g_tc;
                }

                PointHead_Result__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &PointHead_Result__g_tc;
            }

            RTIBool PointHead_Result__initialize(
                PointHead_Result_* sample) {
                return control_msgs::action::dds_::PointHead_Result__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PointHead_Result__initialize_ex(
                PointHead_Result_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::PointHead_Result__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PointHead_Result__initialize_w_params(
                PointHead_Result_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void PointHead_Result__finalize(
                PointHead_Result_* sample)
            {

                control_msgs::action::dds_::PointHead_Result__finalize_ex(sample,RTI_TRUE);
            }

            void PointHead_Result__finalize_ex(
                PointHead_Result_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::PointHead_Result__finalize_w_params(
                    sample,&deallocParams);
            }

            void PointHead_Result__finalize_w_params(
                PointHead_Result_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void PointHead_Result__finalize_optional_members(
                PointHead_Result_* sample, RTIBool deletePointers)
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

            RTIBool PointHead_Result__copy(
                PointHead_Result_* dst,
                const PointHead_Result_* src)
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
            * Configure and implement 'PointHead_Result_' sequence class.
            */
            #define T PointHead_Result_
            #define TSeq PointHead_Result_Seq

            #define T_initialize_w_params control_msgs::action::dds_::PointHead_Result__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::PointHead_Result__finalize_w_params
            #define T_copy       control_msgs::action::dds_::PointHead_Result__copy

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
            const char *PointHead_GetResult_Request_TYPENAME = "control_msgs::action::dds_::PointHead_GetResult_Request_";

            DDS_TypeCode* PointHead_GetResult_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PointHead_GetResult_Request__g_tc_members[1]=
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

                static DDS_TypeCode PointHead_GetResult_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::PointHead_GetResult_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        PointHead_GetResult_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PointHead_GetResult_Request_*/

                if (is_initialized) {
                    return &PointHead_GetResult_Request__g_tc;
                }

                PointHead_GetResult_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                is_initialized = RTI_TRUE;

                return &PointHead_GetResult_Request__g_tc;
            }

            RTIBool PointHead_GetResult_Request__initialize(
                PointHead_GetResult_Request_* sample) {
                return control_msgs::action::dds_::PointHead_GetResult_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PointHead_GetResult_Request__initialize_ex(
                PointHead_GetResult_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::PointHead_GetResult_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PointHead_GetResult_Request__initialize_w_params(
                PointHead_GetResult_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void PointHead_GetResult_Request__finalize(
                PointHead_GetResult_Request_* sample)
            {

                control_msgs::action::dds_::PointHead_GetResult_Request__finalize_ex(sample,RTI_TRUE);
            }

            void PointHead_GetResult_Request__finalize_ex(
                PointHead_GetResult_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::PointHead_GetResult_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void PointHead_GetResult_Request__finalize_w_params(
                PointHead_GetResult_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

            }

            void PointHead_GetResult_Request__finalize_optional_members(
                PointHead_GetResult_Request_* sample, RTIBool deletePointers)
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

            RTIBool PointHead_GetResult_Request__copy(
                PointHead_GetResult_Request_* dst,
                const PointHead_GetResult_Request_* src)
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
            * Configure and implement 'PointHead_GetResult_Request_' sequence class.
            */
            #define T PointHead_GetResult_Request_
            #define TSeq PointHead_GetResult_Request_Seq

            #define T_initialize_w_params control_msgs::action::dds_::PointHead_GetResult_Request__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::PointHead_GetResult_Request__finalize_w_params
            #define T_copy       control_msgs::action::dds_::PointHead_GetResult_Request__copy

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
            const char *PointHead_GetResult_Response_TYPENAME = "control_msgs::action::dds_::PointHead_GetResult_Response_";

            DDS_TypeCode* PointHead_GetResult_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PointHead_GetResult_Response__g_tc_members[2]=
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

                static DDS_TypeCode PointHead_GetResult_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::PointHead_GetResult_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PointHead_GetResult_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PointHead_GetResult_Response_*/

                if (is_initialized) {
                    return &PointHead_GetResult_Response__g_tc;
                }

                PointHead_GetResult_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                PointHead_GetResult_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)control_msgs::action::dds_::PointHead_Result__get_typecode();

                is_initialized = RTI_TRUE;

                return &PointHead_GetResult_Response__g_tc;
            }

            RTIBool PointHead_GetResult_Response__initialize(
                PointHead_GetResult_Response_* sample) {
                return control_msgs::action::dds_::PointHead_GetResult_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PointHead_GetResult_Response__initialize_ex(
                PointHead_GetResult_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::PointHead_GetResult_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PointHead_GetResult_Response__initialize_w_params(
                PointHead_GetResult_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                if (!control_msgs::action::dds_::PointHead_Result__initialize_w_params(&sample->result_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void PointHead_GetResult_Response__finalize(
                PointHead_GetResult_Response_* sample)
            {

                control_msgs::action::dds_::PointHead_GetResult_Response__finalize_ex(sample,RTI_TRUE);
            }

            void PointHead_GetResult_Response__finalize_ex(
                PointHead_GetResult_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::PointHead_GetResult_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void PointHead_GetResult_Response__finalize_w_params(
                PointHead_GetResult_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                control_msgs::action::dds_::PointHead_Result__finalize_w_params(&sample->result_,deallocParams);

            }

            void PointHead_GetResult_Response__finalize_optional_members(
                PointHead_GetResult_Response_* sample, RTIBool deletePointers)
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

                control_msgs::action::dds_::PointHead_Result__finalize_optional_members(&sample->result_, deallocParams->delete_pointers);
            }

            RTIBool PointHead_GetResult_Response__copy(
                PointHead_GetResult_Response_* dst,
                const PointHead_GetResult_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->status_, &src->status_)) { 
                        return RTI_FALSE;
                    }
                    if (!control_msgs::action::dds_::PointHead_Result__copy(
                        &dst->result_,(const control_msgs::action::dds_::PointHead_Result_*)&src->result_)) {
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
            * Configure and implement 'PointHead_GetResult_Response_' sequence class.
            */
            #define T PointHead_GetResult_Response_
            #define TSeq PointHead_GetResult_Response_Seq

            #define T_initialize_w_params control_msgs::action::dds_::PointHead_GetResult_Response__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::PointHead_GetResult_Response__finalize_w_params
            #define T_copy       control_msgs::action::dds_::PointHead_GetResult_Response__copy

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
            const char *PointHead_Feedback_TYPENAME = "control_msgs::action::dds_::PointHead_Feedback_";

            DDS_TypeCode* PointHead_Feedback__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PointHead_Feedback__g_tc_members[1]=
                {

                    {
                        (char *)"pointing_angle_error_",/* Member name */
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

                static DDS_TypeCode PointHead_Feedback__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::PointHead_Feedback_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        PointHead_Feedback__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PointHead_Feedback_*/

                if (is_initialized) {
                    return &PointHead_Feedback__g_tc;
                }

                PointHead_Feedback__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                is_initialized = RTI_TRUE;

                return &PointHead_Feedback__g_tc;
            }

            RTIBool PointHead_Feedback__initialize(
                PointHead_Feedback_* sample) {
                return control_msgs::action::dds_::PointHead_Feedback__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PointHead_Feedback__initialize_ex(
                PointHead_Feedback_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::PointHead_Feedback__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PointHead_Feedback__initialize_w_params(
                PointHead_Feedback_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->pointing_angle_error_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void PointHead_Feedback__finalize(
                PointHead_Feedback_* sample)
            {

                control_msgs::action::dds_::PointHead_Feedback__finalize_ex(sample,RTI_TRUE);
            }

            void PointHead_Feedback__finalize_ex(
                PointHead_Feedback_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::PointHead_Feedback__finalize_w_params(
                    sample,&deallocParams);
            }

            void PointHead_Feedback__finalize_w_params(
                PointHead_Feedback_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void PointHead_Feedback__finalize_optional_members(
                PointHead_Feedback_* sample, RTIBool deletePointers)
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

            RTIBool PointHead_Feedback__copy(
                PointHead_Feedback_* dst,
                const PointHead_Feedback_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyDouble (
                        &dst->pointing_angle_error_, &src->pointing_angle_error_)) { 
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
            * Configure and implement 'PointHead_Feedback_' sequence class.
            */
            #define T PointHead_Feedback_
            #define TSeq PointHead_Feedback_Seq

            #define T_initialize_w_params control_msgs::action::dds_::PointHead_Feedback__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::PointHead_Feedback__finalize_w_params
            #define T_copy       control_msgs::action::dds_::PointHead_Feedback__copy

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
            const char *PointHead_FeedbackMessage_TYPENAME = "control_msgs::action::dds_::PointHead_FeedbackMessage_";

            DDS_TypeCode* PointHead_FeedbackMessage__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PointHead_FeedbackMessage__g_tc_members[2]=
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

                static DDS_TypeCode PointHead_FeedbackMessage__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::action::dds_::PointHead_FeedbackMessage_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PointHead_FeedbackMessage__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PointHead_FeedbackMessage_*/

                if (is_initialized) {
                    return &PointHead_FeedbackMessage__g_tc;
                }

                PointHead_FeedbackMessage__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                PointHead_FeedbackMessage__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)control_msgs::action::dds_::PointHead_Feedback__get_typecode();

                is_initialized = RTI_TRUE;

                return &PointHead_FeedbackMessage__g_tc;
            }

            RTIBool PointHead_FeedbackMessage__initialize(
                PointHead_FeedbackMessage_* sample) {
                return control_msgs::action::dds_::PointHead_FeedbackMessage__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PointHead_FeedbackMessage__initialize_ex(
                PointHead_FeedbackMessage_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::action::dds_::PointHead_FeedbackMessage__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PointHead_FeedbackMessage__initialize_w_params(
                PointHead_FeedbackMessage_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                if (!control_msgs::action::dds_::PointHead_Feedback__initialize_w_params(&sample->feedback_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void PointHead_FeedbackMessage__finalize(
                PointHead_FeedbackMessage_* sample)
            {

                control_msgs::action::dds_::PointHead_FeedbackMessage__finalize_ex(sample,RTI_TRUE);
            }

            void PointHead_FeedbackMessage__finalize_ex(
                PointHead_FeedbackMessage_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::action::dds_::PointHead_FeedbackMessage__finalize_w_params(
                    sample,&deallocParams);
            }

            void PointHead_FeedbackMessage__finalize_w_params(
                PointHead_FeedbackMessage_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                control_msgs::action::dds_::PointHead_Feedback__finalize_w_params(&sample->feedback_,deallocParams);

            }

            void PointHead_FeedbackMessage__finalize_optional_members(
                PointHead_FeedbackMessage_* sample, RTIBool deletePointers)
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
                control_msgs::action::dds_::PointHead_Feedback__finalize_optional_members(&sample->feedback_, deallocParams->delete_pointers);
            }

            RTIBool PointHead_FeedbackMessage__copy(
                PointHead_FeedbackMessage_* dst,
                const PointHead_FeedbackMessage_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!control_msgs::action::dds_::PointHead_Feedback__copy(
                        &dst->feedback_,(const control_msgs::action::dds_::PointHead_Feedback_*)&src->feedback_)) {
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
            * Configure and implement 'PointHead_FeedbackMessage_' sequence class.
            */
            #define T PointHead_FeedbackMessage_
            #define TSeq PointHead_FeedbackMessage_Seq

            #define T_initialize_w_params control_msgs::action::dds_::PointHead_FeedbackMessage__initialize_w_params

            #define T_finalize_w_params   control_msgs::action::dds_::PointHead_FeedbackMessage__finalize_w_params
            #define T_copy       control_msgs::action::dds_::PointHead_FeedbackMessage__copy

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

