

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointRequest_.idl using "rtiddsgen".
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

#include "JointRequest_.h"

#include <new>

namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *JointRequest_Request_TYPENAME = "gazebo_msgs::srv::dds_::JointRequest_Request_";

            DDS_TypeCode* JointRequest_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode JointRequest_Request__g_tc_joint_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member JointRequest_Request__g_tc_members[1]=
                {

                    {
                        (char *)"joint_name_",/* Member name */
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

                static DDS_TypeCode JointRequest_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::JointRequest_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        JointRequest_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for JointRequest_Request_*/

                if (is_initialized) {
                    return &JointRequest_Request__g_tc;
                }

                JointRequest_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&JointRequest_Request__g_tc_joint_name__string;

                is_initialized = RTI_TRUE;

                return &JointRequest_Request__g_tc;
            }

            RTIBool JointRequest_Request__initialize(
                JointRequest_Request_* sample) {
                return gazebo_msgs::srv::dds_::JointRequest_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool JointRequest_Request__initialize_ex(
                JointRequest_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::JointRequest_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool JointRequest_Request__initialize_w_params(
                JointRequest_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->joint_name_= DDS_String_alloc ((0));
                    if (sample->joint_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->joint_name_!= NULL) { 
                        sample->joint_name_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void JointRequest_Request__finalize(
                JointRequest_Request_* sample)
            {

                gazebo_msgs::srv::dds_::JointRequest_Request__finalize_ex(sample,RTI_TRUE);
            }

            void JointRequest_Request__finalize_ex(
                JointRequest_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::JointRequest_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void JointRequest_Request__finalize_w_params(
                JointRequest_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->joint_name_ != NULL) {
                    DDS_String_free(sample->joint_name_);
                    sample->joint_name_=NULL;

                }
            }

            void JointRequest_Request__finalize_optional_members(
                JointRequest_Request_* sample, RTIBool deletePointers)
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

            RTIBool JointRequest_Request__copy(
                JointRequest_Request_* dst,
                const JointRequest_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->joint_name_, src->joint_name_, 
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
            * Configure and implement 'JointRequest_Request_' sequence class.
            */
            #define T JointRequest_Request_
            #define TSeq JointRequest_Request_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::JointRequest_Request__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::JointRequest_Request__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::JointRequest_Request__copy

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
            const char *JointRequest_Response_TYPENAME = "gazebo_msgs::srv::dds_::JointRequest_Response_";

            DDS_TypeCode* JointRequest_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member JointRequest_Response__g_tc_members[1]=
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

                static DDS_TypeCode JointRequest_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::JointRequest_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        JointRequest_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for JointRequest_Response_*/

                if (is_initialized) {
                    return &JointRequest_Response__g_tc;
                }

                JointRequest_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &JointRequest_Response__g_tc;
            }

            RTIBool JointRequest_Response__initialize(
                JointRequest_Response_* sample) {
                return gazebo_msgs::srv::dds_::JointRequest_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool JointRequest_Response__initialize_ex(
                JointRequest_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::JointRequest_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool JointRequest_Response__initialize_w_params(
                JointRequest_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void JointRequest_Response__finalize(
                JointRequest_Response_* sample)
            {

                gazebo_msgs::srv::dds_::JointRequest_Response__finalize_ex(sample,RTI_TRUE);
            }

            void JointRequest_Response__finalize_ex(
                JointRequest_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::JointRequest_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void JointRequest_Response__finalize_w_params(
                JointRequest_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void JointRequest_Response__finalize_optional_members(
                JointRequest_Response_* sample, RTIBool deletePointers)
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

            RTIBool JointRequest_Response__copy(
                JointRequest_Response_* dst,
                const JointRequest_Response_* src)
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
            * Configure and implement 'JointRequest_Response_' sequence class.
            */
            #define T JointRequest_Response_
            #define TSeq JointRequest_Response_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::JointRequest_Response__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::JointRequest_Response__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::JointRequest_Response__copy

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

