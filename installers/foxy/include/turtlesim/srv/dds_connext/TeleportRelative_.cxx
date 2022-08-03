

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TeleportRelative_.idl using "rtiddsgen".
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

#include "TeleportRelative_.h"

#include <new>

namespace turtlesim {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *TeleportRelative_Request_TYPENAME = "turtlesim::srv::dds_::TeleportRelative_Request_";

            DDS_TypeCode* TeleportRelative_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TeleportRelative_Request__g_tc_members[2]=
                {

                    {
                        (char *)"linear_",/* Member name */
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
                        (char *)"angular_",/* Member name */
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

                static DDS_TypeCode TeleportRelative_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"turtlesim::srv::dds_::TeleportRelative_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        TeleportRelative_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for TeleportRelative_Request_*/

                if (is_initialized) {
                    return &TeleportRelative_Request__g_tc;
                }

                TeleportRelative_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                TeleportRelative_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                is_initialized = RTI_TRUE;

                return &TeleportRelative_Request__g_tc;
            }

            RTIBool TeleportRelative_Request__initialize(
                TeleportRelative_Request_* sample) {
                return turtlesim::srv::dds_::TeleportRelative_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool TeleportRelative_Request__initialize_ex(
                TeleportRelative_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return turtlesim::srv::dds_::TeleportRelative_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool TeleportRelative_Request__initialize_w_params(
                TeleportRelative_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->linear_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->angular_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void TeleportRelative_Request__finalize(
                TeleportRelative_Request_* sample)
            {

                turtlesim::srv::dds_::TeleportRelative_Request__finalize_ex(sample,RTI_TRUE);
            }

            void TeleportRelative_Request__finalize_ex(
                TeleportRelative_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                turtlesim::srv::dds_::TeleportRelative_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void TeleportRelative_Request__finalize_w_params(
                TeleportRelative_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void TeleportRelative_Request__finalize_optional_members(
                TeleportRelative_Request_* sample, RTIBool deletePointers)
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

            RTIBool TeleportRelative_Request__copy(
                TeleportRelative_Request_* dst,
                const TeleportRelative_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyFloat (
                        &dst->linear_, &src->linear_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->angular_, &src->angular_)) { 
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
            * Configure and implement 'TeleportRelative_Request_' sequence class.
            */
            #define T TeleportRelative_Request_
            #define TSeq TeleportRelative_Request_Seq

            #define T_initialize_w_params turtlesim::srv::dds_::TeleportRelative_Request__initialize_w_params

            #define T_finalize_w_params   turtlesim::srv::dds_::TeleportRelative_Request__finalize_w_params
            #define T_copy       turtlesim::srv::dds_::TeleportRelative_Request__copy

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
} /* namespace turtlesim  */
namespace turtlesim {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *TeleportRelative_Response_TYPENAME = "turtlesim::srv::dds_::TeleportRelative_Response_";

            DDS_TypeCode* TeleportRelative_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TeleportRelative_Response__g_tc_members[1]=
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

                static DDS_TypeCode TeleportRelative_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"turtlesim::srv::dds_::TeleportRelative_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        TeleportRelative_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for TeleportRelative_Response_*/

                if (is_initialized) {
                    return &TeleportRelative_Response__g_tc;
                }

                TeleportRelative_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &TeleportRelative_Response__g_tc;
            }

            RTIBool TeleportRelative_Response__initialize(
                TeleportRelative_Response_* sample) {
                return turtlesim::srv::dds_::TeleportRelative_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool TeleportRelative_Response__initialize_ex(
                TeleportRelative_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return turtlesim::srv::dds_::TeleportRelative_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool TeleportRelative_Response__initialize_w_params(
                TeleportRelative_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void TeleportRelative_Response__finalize(
                TeleportRelative_Response_* sample)
            {

                turtlesim::srv::dds_::TeleportRelative_Response__finalize_ex(sample,RTI_TRUE);
            }

            void TeleportRelative_Response__finalize_ex(
                TeleportRelative_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                turtlesim::srv::dds_::TeleportRelative_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void TeleportRelative_Response__finalize_w_params(
                TeleportRelative_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void TeleportRelative_Response__finalize_optional_members(
                TeleportRelative_Response_* sample, RTIBool deletePointers)
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

            RTIBool TeleportRelative_Response__copy(
                TeleportRelative_Response_* dst,
                const TeleportRelative_Response_* src)
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
            * Configure and implement 'TeleportRelative_Response_' sequence class.
            */
            #define T TeleportRelative_Response_
            #define TSeq TeleportRelative_Response_Seq

            #define T_initialize_w_params turtlesim::srv::dds_::TeleportRelative_Response__initialize_w_params

            #define T_finalize_w_params   turtlesim::srv::dds_::TeleportRelative_Response__finalize_w_params
            #define T_copy       turtlesim::srv::dds_::TeleportRelative_Response__copy

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
} /* namespace turtlesim  */

