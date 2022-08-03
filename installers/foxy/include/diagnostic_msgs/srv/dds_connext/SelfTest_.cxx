

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SelfTest_.idl using "rtiddsgen".
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

#include "SelfTest_.h"

#include <new>

namespace diagnostic_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SelfTest_Request_TYPENAME = "diagnostic_msgs::srv::dds_::SelfTest_Request_";

            DDS_TypeCode* SelfTest_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SelfTest_Request__g_tc_members[1]=
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

                static DDS_TypeCode SelfTest_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"diagnostic_msgs::srv::dds_::SelfTest_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SelfTest_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SelfTest_Request_*/

                if (is_initialized) {
                    return &SelfTest_Request__g_tc;
                }

                SelfTest_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &SelfTest_Request__g_tc;
            }

            RTIBool SelfTest_Request__initialize(
                SelfTest_Request_* sample) {
                return diagnostic_msgs::srv::dds_::SelfTest_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SelfTest_Request__initialize_ex(
                SelfTest_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return diagnostic_msgs::srv::dds_::SelfTest_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SelfTest_Request__initialize_w_params(
                SelfTest_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void SelfTest_Request__finalize(
                SelfTest_Request_* sample)
            {

                diagnostic_msgs::srv::dds_::SelfTest_Request__finalize_ex(sample,RTI_TRUE);
            }

            void SelfTest_Request__finalize_ex(
                SelfTest_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                diagnostic_msgs::srv::dds_::SelfTest_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void SelfTest_Request__finalize_w_params(
                SelfTest_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void SelfTest_Request__finalize_optional_members(
                SelfTest_Request_* sample, RTIBool deletePointers)
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

            RTIBool SelfTest_Request__copy(
                SelfTest_Request_* dst,
                const SelfTest_Request_* src)
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
            * Configure and implement 'SelfTest_Request_' sequence class.
            */
            #define T SelfTest_Request_
            #define TSeq SelfTest_Request_Seq

            #define T_initialize_w_params diagnostic_msgs::srv::dds_::SelfTest_Request__initialize_w_params

            #define T_finalize_w_params   diagnostic_msgs::srv::dds_::SelfTest_Request__finalize_w_params
            #define T_copy       diagnostic_msgs::srv::dds_::SelfTest_Request__copy

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
            const char *SelfTest_Response_TYPENAME = "diagnostic_msgs::srv::dds_::SelfTest_Response_";

            DDS_TypeCode* SelfTest_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SelfTest_Response__g_tc_id__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode SelfTest_Response__g_tc_status__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member SelfTest_Response__g_tc_members[3]=
                {

                    {
                        (char *)"id_",/* Member name */
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
                        (char *)"passed_",/* Member name */
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
                        (char *)"status_",/* Member name */
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
                    }
                };

                static DDS_TypeCode SelfTest_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"diagnostic_msgs::srv::dds_::SelfTest_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        SelfTest_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SelfTest_Response_*/

                if (is_initialized) {
                    return &SelfTest_Response__g_tc;
                }

                SelfTest_Response__g_tc_status__sequence._data._typeCode = (RTICdrTypeCode *)diagnostic_msgs::msg::dds_::DiagnosticStatus__get_typecode();

                SelfTest_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&SelfTest_Response__g_tc_id__string;

                SelfTest_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                SelfTest_Response__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& SelfTest_Response__g_tc_status__sequence;

                is_initialized = RTI_TRUE;

                return &SelfTest_Response__g_tc;
            }

            RTIBool SelfTest_Response__initialize(
                SelfTest_Response_* sample) {
                return diagnostic_msgs::srv::dds_::SelfTest_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SelfTest_Response__initialize_ex(
                SelfTest_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return diagnostic_msgs::srv::dds_::SelfTest_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SelfTest_Response__initialize_w_params(
                SelfTest_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->id_= DDS_String_alloc ((0));
                    if (sample->id_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->id_!= NULL) { 
                        sample->id_[0] = '\0';
                    }
                }

                if (!RTICdrType_initOctet(&sample->passed_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_initialize(&sample->status_ );
                    diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_set_element_allocation_params(&sample->status_ ,allocParams);
                    diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_set_absolute_maximum(&sample->status_ , RTI_INT32_MAX);
                    if (!diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_set_maximum(&sample->status_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_set_length(&sample->status_, 0);
                }
                return RTI_TRUE;
            }

            void SelfTest_Response__finalize(
                SelfTest_Response_* sample)
            {

                diagnostic_msgs::srv::dds_::SelfTest_Response__finalize_ex(sample,RTI_TRUE);
            }

            void SelfTest_Response__finalize_ex(
                SelfTest_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                diagnostic_msgs::srv::dds_::SelfTest_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void SelfTest_Response__finalize_w_params(
                SelfTest_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->id_ != NULL) {
                    DDS_String_free(sample->id_);
                    sample->id_=NULL;

                }

                diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_set_element_deallocation_params(
                    &sample->status_,deallocParams);
                diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_finalize(&sample->status_);

            }

            void SelfTest_Response__finalize_optional_members(
                SelfTest_Response_* sample, RTIBool deletePointers)
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

                {
                    DDS_UnsignedLong i, length;
                    length = diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_get_length(
                        &sample->status_);

                    for (i = 0; i < length; i++) {
                        diagnostic_msgs::msg::dds_::DiagnosticStatus__finalize_optional_members(
                            diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_get_reference(
                                &sample->status_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool SelfTest_Response__copy(
                SelfTest_Response_* dst,
                const SelfTest_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->id_, src->id_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->passed_, &src->passed_)) { 
                        return RTI_FALSE;
                    }
                    if (!diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_copy(&dst->status_ ,
                    &src->status_ )) {
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
            * Configure and implement 'SelfTest_Response_' sequence class.
            */
            #define T SelfTest_Response_
            #define TSeq SelfTest_Response_Seq

            #define T_initialize_w_params diagnostic_msgs::srv::dds_::SelfTest_Response__initialize_w_params

            #define T_finalize_w_params   diagnostic_msgs::srv::dds_::SelfTest_Response__finalize_w_params
            #define T_copy       diagnostic_msgs::srv::dds_::SelfTest_Response__copy

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

