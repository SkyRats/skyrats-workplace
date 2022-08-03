

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConfigLogger_.idl using "rtiddsgen".
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

#include "ConfigLogger_.h"

#include <new>

namespace logging_demo {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *ConfigLogger_Request_TYPENAME = "logging_demo::srv::dds_::ConfigLogger_Request_";

            DDS_TypeCode* ConfigLogger_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ConfigLogger_Request__g_tc_logger_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ConfigLogger_Request__g_tc_level__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member ConfigLogger_Request__g_tc_members[2]=
                {

                    {
                        (char *)"logger_name_",/* Member name */
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
                        (char *)"level_",/* Member name */
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

                static DDS_TypeCode ConfigLogger_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"logging_demo::srv::dds_::ConfigLogger_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ConfigLogger_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ConfigLogger_Request_*/

                if (is_initialized) {
                    return &ConfigLogger_Request__g_tc;
                }

                ConfigLogger_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&ConfigLogger_Request__g_tc_logger_name__string;

                ConfigLogger_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&ConfigLogger_Request__g_tc_level__string;

                is_initialized = RTI_TRUE;

                return &ConfigLogger_Request__g_tc;
            }

            RTIBool ConfigLogger_Request__initialize(
                ConfigLogger_Request_* sample) {
                return logging_demo::srv::dds_::ConfigLogger_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ConfigLogger_Request__initialize_ex(
                ConfigLogger_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return logging_demo::srv::dds_::ConfigLogger_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ConfigLogger_Request__initialize_w_params(
                ConfigLogger_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->logger_name_= DDS_String_alloc ((0));
                    if (sample->logger_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->logger_name_!= NULL) { 
                        sample->logger_name_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->level_= DDS_String_alloc ((0));
                    if (sample->level_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->level_!= NULL) { 
                        sample->level_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void ConfigLogger_Request__finalize(
                ConfigLogger_Request_* sample)
            {

                logging_demo::srv::dds_::ConfigLogger_Request__finalize_ex(sample,RTI_TRUE);
            }

            void ConfigLogger_Request__finalize_ex(
                ConfigLogger_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                logging_demo::srv::dds_::ConfigLogger_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void ConfigLogger_Request__finalize_w_params(
                ConfigLogger_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->logger_name_ != NULL) {
                    DDS_String_free(sample->logger_name_);
                    sample->logger_name_=NULL;

                }
                if (sample->level_ != NULL) {
                    DDS_String_free(sample->level_);
                    sample->level_=NULL;

                }
            }

            void ConfigLogger_Request__finalize_optional_members(
                ConfigLogger_Request_* sample, RTIBool deletePointers)
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

            RTIBool ConfigLogger_Request__copy(
                ConfigLogger_Request_* dst,
                const ConfigLogger_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->logger_name_, src->logger_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->level_, src->level_, 
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
            * Configure and implement 'ConfigLogger_Request_' sequence class.
            */
            #define T ConfigLogger_Request_
            #define TSeq ConfigLogger_Request_Seq

            #define T_initialize_w_params logging_demo::srv::dds_::ConfigLogger_Request__initialize_w_params

            #define T_finalize_w_params   logging_demo::srv::dds_::ConfigLogger_Request__finalize_w_params
            #define T_copy       logging_demo::srv::dds_::ConfigLogger_Request__copy

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
} /* namespace logging_demo  */
namespace logging_demo {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *ConfigLogger_Response_TYPENAME = "logging_demo::srv::dds_::ConfigLogger_Response_";

            DDS_TypeCode* ConfigLogger_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ConfigLogger_Response__g_tc_members[1]=
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
                    }
                };

                static DDS_TypeCode ConfigLogger_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"logging_demo::srv::dds_::ConfigLogger_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ConfigLogger_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ConfigLogger_Response_*/

                if (is_initialized) {
                    return &ConfigLogger_Response__g_tc;
                }

                ConfigLogger_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &ConfigLogger_Response__g_tc;
            }

            RTIBool ConfigLogger_Response__initialize(
                ConfigLogger_Response_* sample) {
                return logging_demo::srv::dds_::ConfigLogger_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ConfigLogger_Response__initialize_ex(
                ConfigLogger_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return logging_demo::srv::dds_::ConfigLogger_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ConfigLogger_Response__initialize_w_params(
                ConfigLogger_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                return RTI_TRUE;
            }

            void ConfigLogger_Response__finalize(
                ConfigLogger_Response_* sample)
            {

                logging_demo::srv::dds_::ConfigLogger_Response__finalize_ex(sample,RTI_TRUE);
            }

            void ConfigLogger_Response__finalize_ex(
                ConfigLogger_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                logging_demo::srv::dds_::ConfigLogger_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void ConfigLogger_Response__finalize_w_params(
                ConfigLogger_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void ConfigLogger_Response__finalize_optional_members(
                ConfigLogger_Response_* sample, RTIBool deletePointers)
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

            RTIBool ConfigLogger_Response__copy(
                ConfigLogger_Response_* dst,
                const ConfigLogger_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->success_, &src->success_)) { 
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
            * Configure and implement 'ConfigLogger_Response_' sequence class.
            */
            #define T ConfigLogger_Response_
            #define TSeq ConfigLogger_Response_Seq

            #define T_initialize_w_params logging_demo::srv::dds_::ConfigLogger_Response__initialize_w_params

            #define T_finalize_w_params   logging_demo::srv::dds_::ConfigLogger_Response__finalize_w_params
            #define T_copy       logging_demo::srv::dds_::ConfigLogger_Response__copy

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
} /* namespace logging_demo  */

