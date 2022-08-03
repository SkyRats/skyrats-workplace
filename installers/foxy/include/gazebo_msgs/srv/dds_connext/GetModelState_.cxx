

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetModelState_.idl using "rtiddsgen".
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

#include "GetModelState_.h"

#include <new>

namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetModelState_Request_TYPENAME = "gazebo_msgs::srv::dds_::GetModelState_Request_";

            DDS_TypeCode* GetModelState_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GetModelState_Request__g_tc_model_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode GetModelState_Request__g_tc_relative_entity_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member GetModelState_Request__g_tc_members[2]=
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
                        (char *)"relative_entity_name_",/* Member name */
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

                static DDS_TypeCode GetModelState_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::GetModelState_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GetModelState_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetModelState_Request_*/

                if (is_initialized) {
                    return &GetModelState_Request__g_tc;
                }

                GetModelState_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&GetModelState_Request__g_tc_model_name__string;

                GetModelState_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&GetModelState_Request__g_tc_relative_entity_name__string;

                is_initialized = RTI_TRUE;

                return &GetModelState_Request__g_tc;
            }

            RTIBool GetModelState_Request__initialize(
                GetModelState_Request_* sample) {
                return gazebo_msgs::srv::dds_::GetModelState_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetModelState_Request__initialize_ex(
                GetModelState_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::GetModelState_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetModelState_Request__initialize_w_params(
                GetModelState_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                if (allocParams->allocate_memory){
                    sample->relative_entity_name_= DDS_String_alloc ((0));
                    if (sample->relative_entity_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->relative_entity_name_!= NULL) { 
                        sample->relative_entity_name_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void GetModelState_Request__finalize(
                GetModelState_Request_* sample)
            {

                gazebo_msgs::srv::dds_::GetModelState_Request__finalize_ex(sample,RTI_TRUE);
            }

            void GetModelState_Request__finalize_ex(
                GetModelState_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::GetModelState_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetModelState_Request__finalize_w_params(
                GetModelState_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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
                if (sample->relative_entity_name_ != NULL) {
                    DDS_String_free(sample->relative_entity_name_);
                    sample->relative_entity_name_=NULL;

                }
            }

            void GetModelState_Request__finalize_optional_members(
                GetModelState_Request_* sample, RTIBool deletePointers)
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

            RTIBool GetModelState_Request__copy(
                GetModelState_Request_* dst,
                const GetModelState_Request_* src)
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
                    if (!RTICdrType_copyStringEx (
                        &dst->relative_entity_name_, src->relative_entity_name_, 
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
            * Configure and implement 'GetModelState_Request_' sequence class.
            */
            #define T GetModelState_Request_
            #define TSeq GetModelState_Request_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::GetModelState_Request__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::GetModelState_Request__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::GetModelState_Request__copy

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
            const char *GetModelState_Response_TYPENAME = "gazebo_msgs::srv::dds_::GetModelState_Response_";

            DDS_TypeCode* GetModelState_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GetModelState_Response__g_tc_status_message__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member GetModelState_Response__g_tc_members[5]=
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
                        (char *)"pose_",/* Member name */
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
                        (char *)"twist_",/* Member name */
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
                        (char *)"success_",/* Member name */
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
                        (char *)"status_message_",/* Member name */
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

                static DDS_TypeCode GetModelState_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::GetModelState_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        GetModelState_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetModelState_Response_*/

                if (is_initialized) {
                    return &GetModelState_Response__g_tc;
                }

                GetModelState_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                GetModelState_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Pose__get_typecode();

                GetModelState_Response__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Twist__get_typecode();

                GetModelState_Response__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                GetModelState_Response__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&GetModelState_Response__g_tc_status_message__string;

                is_initialized = RTI_TRUE;

                return &GetModelState_Response__g_tc;
            }

            RTIBool GetModelState_Response__initialize(
                GetModelState_Response_* sample) {
                return gazebo_msgs::srv::dds_::GetModelState_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetModelState_Response__initialize_ex(
                GetModelState_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::GetModelState_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetModelState_Response__initialize_w_params(
                GetModelState_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                if (!geometry_msgs::msg::dds_::Pose__initialize_w_params(&sample->pose_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!geometry_msgs::msg::dds_::Twist__initialize_w_params(&sample->twist_,
                allocParams)) {
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

            void GetModelState_Response__finalize(
                GetModelState_Response_* sample)
            {

                gazebo_msgs::srv::dds_::GetModelState_Response__finalize_ex(sample,RTI_TRUE);
            }

            void GetModelState_Response__finalize_ex(
                GetModelState_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::GetModelState_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetModelState_Response__finalize_w_params(
                GetModelState_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                geometry_msgs::msg::dds_::Pose__finalize_w_params(&sample->pose_,deallocParams);

                geometry_msgs::msg::dds_::Twist__finalize_w_params(&sample->twist_,deallocParams);

                if (sample->status_message_ != NULL) {
                    DDS_String_free(sample->status_message_);
                    sample->status_message_=NULL;

                }
            }

            void GetModelState_Response__finalize_optional_members(
                GetModelState_Response_* sample, RTIBool deletePointers)
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
                geometry_msgs::msg::dds_::Pose__finalize_optional_members(&sample->pose_, deallocParams->delete_pointers);
                geometry_msgs::msg::dds_::Twist__finalize_optional_members(&sample->twist_, deallocParams->delete_pointers);
            }

            RTIBool GetModelState_Response__copy(
                GetModelState_Response_* dst,
                const GetModelState_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Pose__copy(
                        &dst->pose_,(const geometry_msgs::msg::dds_::Pose_*)&src->pose_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Twist__copy(
                        &dst->twist_,(const geometry_msgs::msg::dds_::Twist_*)&src->twist_)) {
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
            * Configure and implement 'GetModelState_Response_' sequence class.
            */
            #define T GetModelState_Response_
            #define TSeq GetModelState_Response_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::GetModelState_Response__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::GetModelState_Response__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::GetModelState_Response__copy

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

