

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetJointProperties_.idl using "rtiddsgen".
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

#include "GetJointProperties_.h"

#include <new>

namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetJointProperties_Request_TYPENAME = "gazebo_msgs::srv::dds_::GetJointProperties_Request_";

            DDS_TypeCode* GetJointProperties_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GetJointProperties_Request__g_tc_joint_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member GetJointProperties_Request__g_tc_members[1]=
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

                static DDS_TypeCode GetJointProperties_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::GetJointProperties_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GetJointProperties_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetJointProperties_Request_*/

                if (is_initialized) {
                    return &GetJointProperties_Request__g_tc;
                }

                GetJointProperties_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&GetJointProperties_Request__g_tc_joint_name__string;

                is_initialized = RTI_TRUE;

                return &GetJointProperties_Request__g_tc;
            }

            RTIBool GetJointProperties_Request__initialize(
                GetJointProperties_Request_* sample) {
                return gazebo_msgs::srv::dds_::GetJointProperties_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetJointProperties_Request__initialize_ex(
                GetJointProperties_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::GetJointProperties_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetJointProperties_Request__initialize_w_params(
                GetJointProperties_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void GetJointProperties_Request__finalize(
                GetJointProperties_Request_* sample)
            {

                gazebo_msgs::srv::dds_::GetJointProperties_Request__finalize_ex(sample,RTI_TRUE);
            }

            void GetJointProperties_Request__finalize_ex(
                GetJointProperties_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::GetJointProperties_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetJointProperties_Request__finalize_w_params(
                GetJointProperties_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

            void GetJointProperties_Request__finalize_optional_members(
                GetJointProperties_Request_* sample, RTIBool deletePointers)
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

            RTIBool GetJointProperties_Request__copy(
                GetJointProperties_Request_* dst,
                const GetJointProperties_Request_* src)
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
            * Configure and implement 'GetJointProperties_Request_' sequence class.
            */
            #define T GetJointProperties_Request_
            #define TSeq GetJointProperties_Request_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::GetJointProperties_Request__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::GetJointProperties_Request__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::GetJointProperties_Request__copy

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
            namespace GetJointProperties_Response_Constants {
            } /* namespace GetJointProperties_Response_Constants  */

            /* ========================================================================= */
            const char *GetJointProperties_Response_TYPENAME = "gazebo_msgs::srv::dds_::GetJointProperties_Response_";

            DDS_TypeCode* GetJointProperties_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GetJointProperties_Response__g_tc_damping__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode GetJointProperties_Response__g_tc_position__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode GetJointProperties_Response__g_tc_rate__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode GetJointProperties_Response__g_tc_status_message__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member GetJointProperties_Response__g_tc_members[6]=
                {

                    {
                        (char *)"type_",/* Member name */
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
                        (char *)"damping_",/* Member name */
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
                        (char *)"position_",/* Member name */
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
                        (char *)"rate_",/* Member name */
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
                        (char *)"success_",/* Member name */
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
                        (char *)"status_message_",/* Member name */
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

                static DDS_TypeCode GetJointProperties_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::GetJointProperties_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        GetJointProperties_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetJointProperties_Response_*/

                if (is_initialized) {
                    return &GetJointProperties_Response__g_tc;
                }

                GetJointProperties_Response__g_tc_damping__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                GetJointProperties_Response__g_tc_position__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                GetJointProperties_Response__g_tc_rate__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                GetJointProperties_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                GetJointProperties_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& GetJointProperties_Response__g_tc_damping__sequence;
                GetJointProperties_Response__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& GetJointProperties_Response__g_tc_position__sequence;
                GetJointProperties_Response__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& GetJointProperties_Response__g_tc_rate__sequence;
                GetJointProperties_Response__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                GetJointProperties_Response__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&GetJointProperties_Response__g_tc_status_message__string;

                is_initialized = RTI_TRUE;

                return &GetJointProperties_Response__g_tc;
            }

            RTIBool GetJointProperties_Response__initialize(
                GetJointProperties_Response_* sample) {
                return gazebo_msgs::srv::dds_::GetJointProperties_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetJointProperties_Response__initialize_ex(
                GetJointProperties_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::GetJointProperties_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetJointProperties_Response__initialize_w_params(
                GetJointProperties_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->type_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->damping_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->damping_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->damping_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->damping_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->position_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->position_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->position_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->position_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->rate_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->rate_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->rate_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->rate_, 0);
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

            void GetJointProperties_Response__finalize(
                GetJointProperties_Response_* sample)
            {

                gazebo_msgs::srv::dds_::GetJointProperties_Response__finalize_ex(sample,RTI_TRUE);
            }

            void GetJointProperties_Response__finalize_ex(
                GetJointProperties_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::GetJointProperties_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetJointProperties_Response__finalize_w_params(
                GetJointProperties_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                DDS_DoubleSeq_finalize(&sample->damping_);

                DDS_DoubleSeq_finalize(&sample->position_);

                DDS_DoubleSeq_finalize(&sample->rate_);

                if (sample->status_message_ != NULL) {
                    DDS_String_free(sample->status_message_);
                    sample->status_message_=NULL;

                }
            }

            void GetJointProperties_Response__finalize_optional_members(
                GetJointProperties_Response_* sample, RTIBool deletePointers)
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

            RTIBool GetJointProperties_Response__copy(
                GetJointProperties_Response_* dst,
                const GetJointProperties_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->type_, &src->type_)) { 
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->damping_ ,
                    &src->damping_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->position_ ,
                    &src->position_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->rate_ ,
                    &src->rate_ )) {
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
            * Configure and implement 'GetJointProperties_Response_' sequence class.
            */
            #define T GetJointProperties_Response_
            #define TSeq GetJointProperties_Response_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::GetJointProperties_Response__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::GetJointProperties_Response__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::GetJointProperties_Response__copy

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

