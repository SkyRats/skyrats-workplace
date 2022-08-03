

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UnloadNode_.idl using "rtiddsgen".
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

#include "UnloadNode_.h"

#include <new>

namespace composition_interfaces {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *UnloadNode_Request_TYPENAME = "composition_interfaces::srv::dds_::UnloadNode_Request_";

            DDS_TypeCode* UnloadNode_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member UnloadNode_Request__g_tc_members[1]=
                {

                    {
                        (char *)"unique_id_",/* Member name */
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

                static DDS_TypeCode UnloadNode_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"composition_interfaces::srv::dds_::UnloadNode_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        UnloadNode_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for UnloadNode_Request_*/

                if (is_initialized) {
                    return &UnloadNode_Request__g_tc;
                }

                UnloadNode_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                is_initialized = RTI_TRUE;

                return &UnloadNode_Request__g_tc;
            }

            RTIBool UnloadNode_Request__initialize(
                UnloadNode_Request_* sample) {
                return composition_interfaces::srv::dds_::UnloadNode_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool UnloadNode_Request__initialize_ex(
                UnloadNode_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return composition_interfaces::srv::dds_::UnloadNode_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool UnloadNode_Request__initialize_w_params(
                UnloadNode_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLongLong(&sample->unique_id_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void UnloadNode_Request__finalize(
                UnloadNode_Request_* sample)
            {

                composition_interfaces::srv::dds_::UnloadNode_Request__finalize_ex(sample,RTI_TRUE);
            }

            void UnloadNode_Request__finalize_ex(
                UnloadNode_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                composition_interfaces::srv::dds_::UnloadNode_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void UnloadNode_Request__finalize_w_params(
                UnloadNode_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void UnloadNode_Request__finalize_optional_members(
                UnloadNode_Request_* sample, RTIBool deletePointers)
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

            RTIBool UnloadNode_Request__copy(
                UnloadNode_Request_* dst,
                const UnloadNode_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyUnsignedLongLong (
                        &dst->unique_id_, &src->unique_id_)) { 
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
            * Configure and implement 'UnloadNode_Request_' sequence class.
            */
            #define T UnloadNode_Request_
            #define TSeq UnloadNode_Request_Seq

            #define T_initialize_w_params composition_interfaces::srv::dds_::UnloadNode_Request__initialize_w_params

            #define T_finalize_w_params   composition_interfaces::srv::dds_::UnloadNode_Request__finalize_w_params
            #define T_copy       composition_interfaces::srv::dds_::UnloadNode_Request__copy

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
} /* namespace composition_interfaces  */
namespace composition_interfaces {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *UnloadNode_Response_TYPENAME = "composition_interfaces::srv::dds_::UnloadNode_Response_";

            DDS_TypeCode* UnloadNode_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode UnloadNode_Response__g_tc_error_message__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member UnloadNode_Response__g_tc_members[2]=
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
                        (char *)"error_message_",/* Member name */
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

                static DDS_TypeCode UnloadNode_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"composition_interfaces::srv::dds_::UnloadNode_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        UnloadNode_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for UnloadNode_Response_*/

                if (is_initialized) {
                    return &UnloadNode_Response__g_tc;
                }

                UnloadNode_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                UnloadNode_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&UnloadNode_Response__g_tc_error_message__string;

                is_initialized = RTI_TRUE;

                return &UnloadNode_Response__g_tc;
            }

            RTIBool UnloadNode_Response__initialize(
                UnloadNode_Response_* sample) {
                return composition_interfaces::srv::dds_::UnloadNode_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool UnloadNode_Response__initialize_ex(
                UnloadNode_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return composition_interfaces::srv::dds_::UnloadNode_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool UnloadNode_Response__initialize_w_params(
                UnloadNode_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    sample->error_message_= DDS_String_alloc ((0));
                    if (sample->error_message_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->error_message_!= NULL) { 
                        sample->error_message_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void UnloadNode_Response__finalize(
                UnloadNode_Response_* sample)
            {

                composition_interfaces::srv::dds_::UnloadNode_Response__finalize_ex(sample,RTI_TRUE);
            }

            void UnloadNode_Response__finalize_ex(
                UnloadNode_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                composition_interfaces::srv::dds_::UnloadNode_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void UnloadNode_Response__finalize_w_params(
                UnloadNode_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->error_message_ != NULL) {
                    DDS_String_free(sample->error_message_);
                    sample->error_message_=NULL;

                }
            }

            void UnloadNode_Response__finalize_optional_members(
                UnloadNode_Response_* sample, RTIBool deletePointers)
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

            RTIBool UnloadNode_Response__copy(
                UnloadNode_Response_* dst,
                const UnloadNode_Response_* src)
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
                        &dst->error_message_, src->error_message_, 
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
            * Configure and implement 'UnloadNode_Response_' sequence class.
            */
            #define T UnloadNode_Response_
            #define TSeq UnloadNode_Response_Seq

            #define T_initialize_w_params composition_interfaces::srv::dds_::UnloadNode_Response__initialize_w_params

            #define T_finalize_w_params   composition_interfaces::srv::dds_::UnloadNode_Response__finalize_w_params
            #define T_copy       composition_interfaces::srv::dds_::UnloadNode_Response__copy

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
} /* namespace composition_interfaces  */

