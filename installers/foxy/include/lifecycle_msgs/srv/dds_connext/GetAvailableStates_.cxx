

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetAvailableStates_.idl using "rtiddsgen".
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

#include "GetAvailableStates_.h"

#include <new>

namespace lifecycle_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetAvailableStates_Request_TYPENAME = "lifecycle_msgs::srv::dds_::GetAvailableStates_Request_";

            DDS_TypeCode* GetAvailableStates_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GetAvailableStates_Request__g_tc_members[1]=
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

                static DDS_TypeCode GetAvailableStates_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"lifecycle_msgs::srv::dds_::GetAvailableStates_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GetAvailableStates_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetAvailableStates_Request_*/

                if (is_initialized) {
                    return &GetAvailableStates_Request__g_tc;
                }

                GetAvailableStates_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &GetAvailableStates_Request__g_tc;
            }

            RTIBool GetAvailableStates_Request__initialize(
                GetAvailableStates_Request_* sample) {
                return lifecycle_msgs::srv::dds_::GetAvailableStates_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetAvailableStates_Request__initialize_ex(
                GetAvailableStates_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return lifecycle_msgs::srv::dds_::GetAvailableStates_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetAvailableStates_Request__initialize_w_params(
                GetAvailableStates_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void GetAvailableStates_Request__finalize(
                GetAvailableStates_Request_* sample)
            {

                lifecycle_msgs::srv::dds_::GetAvailableStates_Request__finalize_ex(sample,RTI_TRUE);
            }

            void GetAvailableStates_Request__finalize_ex(
                GetAvailableStates_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                lifecycle_msgs::srv::dds_::GetAvailableStates_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetAvailableStates_Request__finalize_w_params(
                GetAvailableStates_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void GetAvailableStates_Request__finalize_optional_members(
                GetAvailableStates_Request_* sample, RTIBool deletePointers)
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

            RTIBool GetAvailableStates_Request__copy(
                GetAvailableStates_Request_* dst,
                const GetAvailableStates_Request_* src)
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
            * Configure and implement 'GetAvailableStates_Request_' sequence class.
            */
            #define T GetAvailableStates_Request_
            #define TSeq GetAvailableStates_Request_Seq

            #define T_initialize_w_params lifecycle_msgs::srv::dds_::GetAvailableStates_Request__initialize_w_params

            #define T_finalize_w_params   lifecycle_msgs::srv::dds_::GetAvailableStates_Request__finalize_w_params
            #define T_copy       lifecycle_msgs::srv::dds_::GetAvailableStates_Request__copy

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
} /* namespace lifecycle_msgs  */
namespace lifecycle_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetAvailableStates_Response_TYPENAME = "lifecycle_msgs::srv::dds_::GetAvailableStates_Response_";

            DDS_TypeCode* GetAvailableStates_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GetAvailableStates_Response__g_tc_available_states__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member GetAvailableStates_Response__g_tc_members[1]=
                {

                    {
                        (char *)"available_states_",/* Member name */
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

                static DDS_TypeCode GetAvailableStates_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"lifecycle_msgs::srv::dds_::GetAvailableStates_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GetAvailableStates_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetAvailableStates_Response_*/

                if (is_initialized) {
                    return &GetAvailableStates_Response__g_tc;
                }

                GetAvailableStates_Response__g_tc_available_states__sequence._data._typeCode = (RTICdrTypeCode *)lifecycle_msgs::msg::dds_::State__get_typecode();

                GetAvailableStates_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& GetAvailableStates_Response__g_tc_available_states__sequence;

                is_initialized = RTI_TRUE;

                return &GetAvailableStates_Response__g_tc;
            }

            RTIBool GetAvailableStates_Response__initialize(
                GetAvailableStates_Response_* sample) {
                return lifecycle_msgs::srv::dds_::GetAvailableStates_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetAvailableStates_Response__initialize_ex(
                GetAvailableStates_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return lifecycle_msgs::srv::dds_::GetAvailableStates_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetAvailableStates_Response__initialize_w_params(
                GetAvailableStates_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    lifecycle_msgs::msg::dds_::State_Seq_initialize(&sample->available_states_ );
                    lifecycle_msgs::msg::dds_::State_Seq_set_element_allocation_params(&sample->available_states_ ,allocParams);
                    lifecycle_msgs::msg::dds_::State_Seq_set_absolute_maximum(&sample->available_states_ , RTI_INT32_MAX);
                    if (!lifecycle_msgs::msg::dds_::State_Seq_set_maximum(&sample->available_states_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    lifecycle_msgs::msg::dds_::State_Seq_set_length(&sample->available_states_, 0);
                }
                return RTI_TRUE;
            }

            void GetAvailableStates_Response__finalize(
                GetAvailableStates_Response_* sample)
            {

                lifecycle_msgs::srv::dds_::GetAvailableStates_Response__finalize_ex(sample,RTI_TRUE);
            }

            void GetAvailableStates_Response__finalize_ex(
                GetAvailableStates_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                lifecycle_msgs::srv::dds_::GetAvailableStates_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetAvailableStates_Response__finalize_w_params(
                GetAvailableStates_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                lifecycle_msgs::msg::dds_::State_Seq_set_element_deallocation_params(
                    &sample->available_states_,deallocParams);
                lifecycle_msgs::msg::dds_::State_Seq_finalize(&sample->available_states_);

            }

            void GetAvailableStates_Response__finalize_optional_members(
                GetAvailableStates_Response_* sample, RTIBool deletePointers)
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
                    length = lifecycle_msgs::msg::dds_::State_Seq_get_length(
                        &sample->available_states_);

                    for (i = 0; i < length; i++) {
                        lifecycle_msgs::msg::dds_::State__finalize_optional_members(
                            lifecycle_msgs::msg::dds_::State_Seq_get_reference(
                                &sample->available_states_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool GetAvailableStates_Response__copy(
                GetAvailableStates_Response_* dst,
                const GetAvailableStates_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!lifecycle_msgs::msg::dds_::State_Seq_copy(&dst->available_states_ ,
                    &src->available_states_ )) {
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
            * Configure and implement 'GetAvailableStates_Response_' sequence class.
            */
            #define T GetAvailableStates_Response_
            #define TSeq GetAvailableStates_Response_Seq

            #define T_initialize_w_params lifecycle_msgs::srv::dds_::GetAvailableStates_Response__initialize_w_params

            #define T_finalize_w_params   lifecycle_msgs::srv::dds_::GetAvailableStates_Response__finalize_w_params
            #define T_copy       lifecycle_msgs::srv::dds_::GetAvailableStates_Response__copy

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
} /* namespace lifecycle_msgs  */

