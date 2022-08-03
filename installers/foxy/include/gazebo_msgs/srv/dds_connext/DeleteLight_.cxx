

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DeleteLight_.idl using "rtiddsgen".
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

#include "DeleteLight_.h"

#include <new>

namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *DeleteLight_Request_TYPENAME = "gazebo_msgs::srv::dds_::DeleteLight_Request_";

            DDS_TypeCode* DeleteLight_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DeleteLight_Request__g_tc_light_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member DeleteLight_Request__g_tc_members[1]=
                {

                    {
                        (char *)"light_name_",/* Member name */
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

                static DDS_TypeCode DeleteLight_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::DeleteLight_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        DeleteLight_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for DeleteLight_Request_*/

                if (is_initialized) {
                    return &DeleteLight_Request__g_tc;
                }

                DeleteLight_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DeleteLight_Request__g_tc_light_name__string;

                is_initialized = RTI_TRUE;

                return &DeleteLight_Request__g_tc;
            }

            RTIBool DeleteLight_Request__initialize(
                DeleteLight_Request_* sample) {
                return gazebo_msgs::srv::dds_::DeleteLight_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool DeleteLight_Request__initialize_ex(
                DeleteLight_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::DeleteLight_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool DeleteLight_Request__initialize_w_params(
                DeleteLight_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->light_name_= DDS_String_alloc ((0));
                    if (sample->light_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->light_name_!= NULL) { 
                        sample->light_name_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void DeleteLight_Request__finalize(
                DeleteLight_Request_* sample)
            {

                gazebo_msgs::srv::dds_::DeleteLight_Request__finalize_ex(sample,RTI_TRUE);
            }

            void DeleteLight_Request__finalize_ex(
                DeleteLight_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::DeleteLight_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void DeleteLight_Request__finalize_w_params(
                DeleteLight_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->light_name_ != NULL) {
                    DDS_String_free(sample->light_name_);
                    sample->light_name_=NULL;

                }
            }

            void DeleteLight_Request__finalize_optional_members(
                DeleteLight_Request_* sample, RTIBool deletePointers)
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

            RTIBool DeleteLight_Request__copy(
                DeleteLight_Request_* dst,
                const DeleteLight_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->light_name_, src->light_name_, 
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
            * Configure and implement 'DeleteLight_Request_' sequence class.
            */
            #define T DeleteLight_Request_
            #define TSeq DeleteLight_Request_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::DeleteLight_Request__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::DeleteLight_Request__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::DeleteLight_Request__copy

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
            const char *DeleteLight_Response_TYPENAME = "gazebo_msgs::srv::dds_::DeleteLight_Response_";

            DDS_TypeCode* DeleteLight_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DeleteLight_Response__g_tc_status_message__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member DeleteLight_Response__g_tc_members[2]=
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

                static DDS_TypeCode DeleteLight_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::DeleteLight_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DeleteLight_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for DeleteLight_Response_*/

                if (is_initialized) {
                    return &DeleteLight_Response__g_tc;
                }

                DeleteLight_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                DeleteLight_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DeleteLight_Response__g_tc_status_message__string;

                is_initialized = RTI_TRUE;

                return &DeleteLight_Response__g_tc;
            }

            RTIBool DeleteLight_Response__initialize(
                DeleteLight_Response_* sample) {
                return gazebo_msgs::srv::dds_::DeleteLight_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool DeleteLight_Response__initialize_ex(
                DeleteLight_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::DeleteLight_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool DeleteLight_Response__initialize_w_params(
                DeleteLight_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void DeleteLight_Response__finalize(
                DeleteLight_Response_* sample)
            {

                gazebo_msgs::srv::dds_::DeleteLight_Response__finalize_ex(sample,RTI_TRUE);
            }

            void DeleteLight_Response__finalize_ex(
                DeleteLight_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::DeleteLight_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void DeleteLight_Response__finalize_w_params(
                DeleteLight_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

            void DeleteLight_Response__finalize_optional_members(
                DeleteLight_Response_* sample, RTIBool deletePointers)
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

            RTIBool DeleteLight_Response__copy(
                DeleteLight_Response_* dst,
                const DeleteLight_Response_* src)
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
            * Configure and implement 'DeleteLight_Response_' sequence class.
            */
            #define T DeleteLight_Response_
            #define TSeq DeleteLight_Response_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::DeleteLight_Response__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::DeleteLight_Response__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::DeleteLight_Response__copy

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

