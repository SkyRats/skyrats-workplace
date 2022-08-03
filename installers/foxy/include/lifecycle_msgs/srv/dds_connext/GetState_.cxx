

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetState_.idl using "rtiddsgen".
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

#include "GetState_.h"

#include <new>

namespace lifecycle_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetState_Request_TYPENAME = "lifecycle_msgs::srv::dds_::GetState_Request_";

            DDS_TypeCode* GetState_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GetState_Request__g_tc_members[1]=
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

                static DDS_TypeCode GetState_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"lifecycle_msgs::srv::dds_::GetState_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GetState_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetState_Request_*/

                if (is_initialized) {
                    return &GetState_Request__g_tc;
                }

                GetState_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &GetState_Request__g_tc;
            }

            RTIBool GetState_Request__initialize(
                GetState_Request_* sample) {
                return lifecycle_msgs::srv::dds_::GetState_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetState_Request__initialize_ex(
                GetState_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return lifecycle_msgs::srv::dds_::GetState_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetState_Request__initialize_w_params(
                GetState_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void GetState_Request__finalize(
                GetState_Request_* sample)
            {

                lifecycle_msgs::srv::dds_::GetState_Request__finalize_ex(sample,RTI_TRUE);
            }

            void GetState_Request__finalize_ex(
                GetState_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                lifecycle_msgs::srv::dds_::GetState_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetState_Request__finalize_w_params(
                GetState_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void GetState_Request__finalize_optional_members(
                GetState_Request_* sample, RTIBool deletePointers)
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

            RTIBool GetState_Request__copy(
                GetState_Request_* dst,
                const GetState_Request_* src)
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
            * Configure and implement 'GetState_Request_' sequence class.
            */
            #define T GetState_Request_
            #define TSeq GetState_Request_Seq

            #define T_initialize_w_params lifecycle_msgs::srv::dds_::GetState_Request__initialize_w_params

            #define T_finalize_w_params   lifecycle_msgs::srv::dds_::GetState_Request__finalize_w_params
            #define T_copy       lifecycle_msgs::srv::dds_::GetState_Request__copy

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
            const char *GetState_Response_TYPENAME = "lifecycle_msgs::srv::dds_::GetState_Response_";

            DDS_TypeCode* GetState_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GetState_Response__g_tc_members[1]=
                {

                    {
                        (char *)"current_state_",/* Member name */
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

                static DDS_TypeCode GetState_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"lifecycle_msgs::srv::dds_::GetState_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GetState_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetState_Response_*/

                if (is_initialized) {
                    return &GetState_Response__g_tc;
                }

                GetState_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)lifecycle_msgs::msg::dds_::State__get_typecode();

                is_initialized = RTI_TRUE;

                return &GetState_Response__g_tc;
            }

            RTIBool GetState_Response__initialize(
                GetState_Response_* sample) {
                return lifecycle_msgs::srv::dds_::GetState_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetState_Response__initialize_ex(
                GetState_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return lifecycle_msgs::srv::dds_::GetState_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetState_Response__initialize_w_params(
                GetState_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!lifecycle_msgs::msg::dds_::State__initialize_w_params(&sample->current_state_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void GetState_Response__finalize(
                GetState_Response_* sample)
            {

                lifecycle_msgs::srv::dds_::GetState_Response__finalize_ex(sample,RTI_TRUE);
            }

            void GetState_Response__finalize_ex(
                GetState_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                lifecycle_msgs::srv::dds_::GetState_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetState_Response__finalize_w_params(
                GetState_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                lifecycle_msgs::msg::dds_::State__finalize_w_params(&sample->current_state_,deallocParams);

            }

            void GetState_Response__finalize_optional_members(
                GetState_Response_* sample, RTIBool deletePointers)
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

                lifecycle_msgs::msg::dds_::State__finalize_optional_members(&sample->current_state_, deallocParams->delete_pointers);
            }

            RTIBool GetState_Response__copy(
                GetState_Response_* dst,
                const GetState_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!lifecycle_msgs::msg::dds_::State__copy(
                        &dst->current_state_,(const lifecycle_msgs::msg::dds_::State_*)&src->current_state_)) {
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
            * Configure and implement 'GetState_Response_' sequence class.
            */
            #define T GetState_Response_
            #define TSeq GetState_Response_Seq

            #define T_initialize_w_params lifecycle_msgs::srv::dds_::GetState_Response__initialize_w_params

            #define T_finalize_w_params   lifecycle_msgs::srv::dds_::GetState_Response__finalize_w_params
            #define T_copy       lifecycle_msgs::srv::dds_::GetState_Response__copy

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

