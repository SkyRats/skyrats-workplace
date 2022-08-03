

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ApplyLinkWrench_.idl using "rtiddsgen".
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

#include "ApplyLinkWrench_.h"

#include <new>

namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *ApplyLinkWrench_Request_TYPENAME = "gazebo_msgs::srv::dds_::ApplyLinkWrench_Request_";

            DDS_TypeCode* ApplyLinkWrench_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ApplyLinkWrench_Request__g_tc_link_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ApplyLinkWrench_Request__g_tc_reference_frame__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member ApplyLinkWrench_Request__g_tc_members[6]=
                {

                    {
                        (char *)"link_name_",/* Member name */
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
                        (char *)"reference_frame_",/* Member name */
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
                        (char *)"reference_point_",/* Member name */
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
                        (char *)"wrench_",/* Member name */
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
                        (char *)"start_time_",/* Member name */
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
                        (char *)"duration_",/* Member name */
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
                    }
                };

                static DDS_TypeCode ApplyLinkWrench_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::ApplyLinkWrench_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        ApplyLinkWrench_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ApplyLinkWrench_Request_*/

                if (is_initialized) {
                    return &ApplyLinkWrench_Request__g_tc;
                }

                ApplyLinkWrench_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&ApplyLinkWrench_Request__g_tc_link_name__string;

                ApplyLinkWrench_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&ApplyLinkWrench_Request__g_tc_reference_frame__string;

                ApplyLinkWrench_Request__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Point__get_typecode();

                ApplyLinkWrench_Request__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Wrench__get_typecode();

                ApplyLinkWrench_Request__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                ApplyLinkWrench_Request__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Duration__get_typecode();

                is_initialized = RTI_TRUE;

                return &ApplyLinkWrench_Request__g_tc;
            }

            RTIBool ApplyLinkWrench_Request__initialize(
                ApplyLinkWrench_Request_* sample) {
                return gazebo_msgs::srv::dds_::ApplyLinkWrench_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ApplyLinkWrench_Request__initialize_ex(
                ApplyLinkWrench_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::ApplyLinkWrench_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ApplyLinkWrench_Request__initialize_w_params(
                ApplyLinkWrench_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->link_name_= DDS_String_alloc ((0));
                    if (sample->link_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->link_name_!= NULL) { 
                        sample->link_name_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->reference_frame_= DDS_String_alloc ((0));
                    if (sample->reference_frame_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->reference_frame_!= NULL) { 
                        sample->reference_frame_[0] = '\0';
                    }
                }

                if (!geometry_msgs::msg::dds_::Point__initialize_w_params(&sample->reference_point_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!geometry_msgs::msg::dds_::Wrench__initialize_w_params(&sample->wrench_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->start_time_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!builtin_interfaces::msg::dds_::Duration__initialize_w_params(&sample->duration_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void ApplyLinkWrench_Request__finalize(
                ApplyLinkWrench_Request_* sample)
            {

                gazebo_msgs::srv::dds_::ApplyLinkWrench_Request__finalize_ex(sample,RTI_TRUE);
            }

            void ApplyLinkWrench_Request__finalize_ex(
                ApplyLinkWrench_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::ApplyLinkWrench_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void ApplyLinkWrench_Request__finalize_w_params(
                ApplyLinkWrench_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->link_name_ != NULL) {
                    DDS_String_free(sample->link_name_);
                    sample->link_name_=NULL;

                }
                if (sample->reference_frame_ != NULL) {
                    DDS_String_free(sample->reference_frame_);
                    sample->reference_frame_=NULL;

                }
                geometry_msgs::msg::dds_::Point__finalize_w_params(&sample->reference_point_,deallocParams);

                geometry_msgs::msg::dds_::Wrench__finalize_w_params(&sample->wrench_,deallocParams);

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->start_time_,deallocParams);

                builtin_interfaces::msg::dds_::Duration__finalize_w_params(&sample->duration_,deallocParams);

            }

            void ApplyLinkWrench_Request__finalize_optional_members(
                ApplyLinkWrench_Request_* sample, RTIBool deletePointers)
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

                geometry_msgs::msg::dds_::Point__finalize_optional_members(&sample->reference_point_, deallocParams->delete_pointers);
                geometry_msgs::msg::dds_::Wrench__finalize_optional_members(&sample->wrench_, deallocParams->delete_pointers);
                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->start_time_, deallocParams->delete_pointers);
                builtin_interfaces::msg::dds_::Duration__finalize_optional_members(&sample->duration_, deallocParams->delete_pointers);
            }

            RTIBool ApplyLinkWrench_Request__copy(
                ApplyLinkWrench_Request_* dst,
                const ApplyLinkWrench_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->link_name_, src->link_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->reference_frame_, src->reference_frame_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Point__copy(
                        &dst->reference_point_,(const geometry_msgs::msg::dds_::Point_*)&src->reference_point_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Wrench__copy(
                        &dst->wrench_,(const geometry_msgs::msg::dds_::Wrench_*)&src->wrench_)) {
                        return RTI_FALSE;
                    } 
                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->start_time_,(const builtin_interfaces::msg::dds_::Time_*)&src->start_time_)) {
                        return RTI_FALSE;
                    } 
                    if (!builtin_interfaces::msg::dds_::Duration__copy(
                        &dst->duration_,(const builtin_interfaces::msg::dds_::Duration_*)&src->duration_)) {
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
            * Configure and implement 'ApplyLinkWrench_Request_' sequence class.
            */
            #define T ApplyLinkWrench_Request_
            #define TSeq ApplyLinkWrench_Request_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::ApplyLinkWrench_Request__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::ApplyLinkWrench_Request__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::ApplyLinkWrench_Request__copy

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
            const char *ApplyLinkWrench_Response_TYPENAME = "gazebo_msgs::srv::dds_::ApplyLinkWrench_Response_";

            DDS_TypeCode* ApplyLinkWrench_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ApplyLinkWrench_Response__g_tc_status_message__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member ApplyLinkWrench_Response__g_tc_members[2]=
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

                static DDS_TypeCode ApplyLinkWrench_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::ApplyLinkWrench_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ApplyLinkWrench_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ApplyLinkWrench_Response_*/

                if (is_initialized) {
                    return &ApplyLinkWrench_Response__g_tc;
                }

                ApplyLinkWrench_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                ApplyLinkWrench_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&ApplyLinkWrench_Response__g_tc_status_message__string;

                is_initialized = RTI_TRUE;

                return &ApplyLinkWrench_Response__g_tc;
            }

            RTIBool ApplyLinkWrench_Response__initialize(
                ApplyLinkWrench_Response_* sample) {
                return gazebo_msgs::srv::dds_::ApplyLinkWrench_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ApplyLinkWrench_Response__initialize_ex(
                ApplyLinkWrench_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::ApplyLinkWrench_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ApplyLinkWrench_Response__initialize_w_params(
                ApplyLinkWrench_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void ApplyLinkWrench_Response__finalize(
                ApplyLinkWrench_Response_* sample)
            {

                gazebo_msgs::srv::dds_::ApplyLinkWrench_Response__finalize_ex(sample,RTI_TRUE);
            }

            void ApplyLinkWrench_Response__finalize_ex(
                ApplyLinkWrench_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::ApplyLinkWrench_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void ApplyLinkWrench_Response__finalize_w_params(
                ApplyLinkWrench_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

            void ApplyLinkWrench_Response__finalize_optional_members(
                ApplyLinkWrench_Response_* sample, RTIBool deletePointers)
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

            RTIBool ApplyLinkWrench_Response__copy(
                ApplyLinkWrench_Response_* dst,
                const ApplyLinkWrench_Response_* src)
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
            * Configure and implement 'ApplyLinkWrench_Response_' sequence class.
            */
            #define T ApplyLinkWrench_Response_
            #define TSeq ApplyLinkWrench_Response_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::ApplyLinkWrench_Response__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::ApplyLinkWrench_Response__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::ApplyLinkWrench_Response__copy

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

