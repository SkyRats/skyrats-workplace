

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AddDiagnostics_.idl using "rtiddsgen".
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

#include "AddDiagnostics_.h"

#include <new>

namespace diagnostic_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *AddDiagnostics_Request_TYPENAME = "diagnostic_msgs::srv::dds_::AddDiagnostics_Request_";

            DDS_TypeCode* AddDiagnostics_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode AddDiagnostics_Request__g_tc_load_namespace__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member AddDiagnostics_Request__g_tc_members[1]=
                {

                    {
                        (char *)"load_namespace_",/* Member name */
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

                static DDS_TypeCode AddDiagnostics_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"diagnostic_msgs::srv::dds_::AddDiagnostics_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        AddDiagnostics_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for AddDiagnostics_Request_*/

                if (is_initialized) {
                    return &AddDiagnostics_Request__g_tc;
                }

                AddDiagnostics_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&AddDiagnostics_Request__g_tc_load_namespace__string;

                is_initialized = RTI_TRUE;

                return &AddDiagnostics_Request__g_tc;
            }

            RTIBool AddDiagnostics_Request__initialize(
                AddDiagnostics_Request_* sample) {
                return diagnostic_msgs::srv::dds_::AddDiagnostics_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool AddDiagnostics_Request__initialize_ex(
                AddDiagnostics_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return diagnostic_msgs::srv::dds_::AddDiagnostics_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool AddDiagnostics_Request__initialize_w_params(
                AddDiagnostics_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->load_namespace_= DDS_String_alloc ((0));
                    if (sample->load_namespace_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->load_namespace_!= NULL) { 
                        sample->load_namespace_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void AddDiagnostics_Request__finalize(
                AddDiagnostics_Request_* sample)
            {

                diagnostic_msgs::srv::dds_::AddDiagnostics_Request__finalize_ex(sample,RTI_TRUE);
            }

            void AddDiagnostics_Request__finalize_ex(
                AddDiagnostics_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                diagnostic_msgs::srv::dds_::AddDiagnostics_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void AddDiagnostics_Request__finalize_w_params(
                AddDiagnostics_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->load_namespace_ != NULL) {
                    DDS_String_free(sample->load_namespace_);
                    sample->load_namespace_=NULL;

                }
            }

            void AddDiagnostics_Request__finalize_optional_members(
                AddDiagnostics_Request_* sample, RTIBool deletePointers)
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

            RTIBool AddDiagnostics_Request__copy(
                AddDiagnostics_Request_* dst,
                const AddDiagnostics_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->load_namespace_, src->load_namespace_, 
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
            * Configure and implement 'AddDiagnostics_Request_' sequence class.
            */
            #define T AddDiagnostics_Request_
            #define TSeq AddDiagnostics_Request_Seq

            #define T_initialize_w_params diagnostic_msgs::srv::dds_::AddDiagnostics_Request__initialize_w_params

            #define T_finalize_w_params   diagnostic_msgs::srv::dds_::AddDiagnostics_Request__finalize_w_params
            #define T_copy       diagnostic_msgs::srv::dds_::AddDiagnostics_Request__copy

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
} /* namespace diagnostic_msgs  */
namespace diagnostic_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *AddDiagnostics_Response_TYPENAME = "diagnostic_msgs::srv::dds_::AddDiagnostics_Response_";

            DDS_TypeCode* AddDiagnostics_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode AddDiagnostics_Response__g_tc_message__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member AddDiagnostics_Response__g_tc_members[2]=
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
                        (char *)"message_",/* Member name */
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

                static DDS_TypeCode AddDiagnostics_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"diagnostic_msgs::srv::dds_::AddDiagnostics_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        AddDiagnostics_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for AddDiagnostics_Response_*/

                if (is_initialized) {
                    return &AddDiagnostics_Response__g_tc;
                }

                AddDiagnostics_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                AddDiagnostics_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&AddDiagnostics_Response__g_tc_message__string;

                is_initialized = RTI_TRUE;

                return &AddDiagnostics_Response__g_tc;
            }

            RTIBool AddDiagnostics_Response__initialize(
                AddDiagnostics_Response_* sample) {
                return diagnostic_msgs::srv::dds_::AddDiagnostics_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool AddDiagnostics_Response__initialize_ex(
                AddDiagnostics_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return diagnostic_msgs::srv::dds_::AddDiagnostics_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool AddDiagnostics_Response__initialize_w_params(
                AddDiagnostics_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    sample->message_= DDS_String_alloc ((0));
                    if (sample->message_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->message_!= NULL) { 
                        sample->message_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void AddDiagnostics_Response__finalize(
                AddDiagnostics_Response_* sample)
            {

                diagnostic_msgs::srv::dds_::AddDiagnostics_Response__finalize_ex(sample,RTI_TRUE);
            }

            void AddDiagnostics_Response__finalize_ex(
                AddDiagnostics_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                diagnostic_msgs::srv::dds_::AddDiagnostics_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void AddDiagnostics_Response__finalize_w_params(
                AddDiagnostics_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->message_ != NULL) {
                    DDS_String_free(sample->message_);
                    sample->message_=NULL;

                }
            }

            void AddDiagnostics_Response__finalize_optional_members(
                AddDiagnostics_Response_* sample, RTIBool deletePointers)
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

            RTIBool AddDiagnostics_Response__copy(
                AddDiagnostics_Response_* dst,
                const AddDiagnostics_Response_* src)
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
                        &dst->message_, src->message_, 
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
            * Configure and implement 'AddDiagnostics_Response_' sequence class.
            */
            #define T AddDiagnostics_Response_
            #define TSeq AddDiagnostics_Response_Seq

            #define T_initialize_w_params diagnostic_msgs::srv::dds_::AddDiagnostics_Response__initialize_w_params

            #define T_finalize_w_params   diagnostic_msgs::srv::dds_::AddDiagnostics_Response__finalize_w_params
            #define T_copy       diagnostic_msgs::srv::dds_::AddDiagnostics_Response__copy

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
} /* namespace diagnostic_msgs  */

