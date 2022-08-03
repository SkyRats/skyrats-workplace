

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from QueryTrajectoryState_.idl using "rtiddsgen".
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

#include "QueryTrajectoryState_.h"

#include <new>

namespace control_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *QueryTrajectoryState_Request_TYPENAME = "control_msgs::srv::dds_::QueryTrajectoryState_Request_";

            DDS_TypeCode* QueryTrajectoryState_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member QueryTrajectoryState_Request__g_tc_members[1]=
                {

                    {
                        (char *)"time_",/* Member name */
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

                static DDS_TypeCode QueryTrajectoryState_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::srv::dds_::QueryTrajectoryState_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        QueryTrajectoryState_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for QueryTrajectoryState_Request_*/

                if (is_initialized) {
                    return &QueryTrajectoryState_Request__g_tc;
                }

                QueryTrajectoryState_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                is_initialized = RTI_TRUE;

                return &QueryTrajectoryState_Request__g_tc;
            }

            RTIBool QueryTrajectoryState_Request__initialize(
                QueryTrajectoryState_Request_* sample) {
                return control_msgs::srv::dds_::QueryTrajectoryState_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool QueryTrajectoryState_Request__initialize_ex(
                QueryTrajectoryState_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::srv::dds_::QueryTrajectoryState_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool QueryTrajectoryState_Request__initialize_w_params(
                QueryTrajectoryState_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->time_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void QueryTrajectoryState_Request__finalize(
                QueryTrajectoryState_Request_* sample)
            {

                control_msgs::srv::dds_::QueryTrajectoryState_Request__finalize_ex(sample,RTI_TRUE);
            }

            void QueryTrajectoryState_Request__finalize_ex(
                QueryTrajectoryState_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::srv::dds_::QueryTrajectoryState_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void QueryTrajectoryState_Request__finalize_w_params(
                QueryTrajectoryState_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->time_,deallocParams);

            }

            void QueryTrajectoryState_Request__finalize_optional_members(
                QueryTrajectoryState_Request_* sample, RTIBool deletePointers)
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

                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->time_, deallocParams->delete_pointers);
            }

            RTIBool QueryTrajectoryState_Request__copy(
                QueryTrajectoryState_Request_* dst,
                const QueryTrajectoryState_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->time_,(const builtin_interfaces::msg::dds_::Time_*)&src->time_)) {
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
            * Configure and implement 'QueryTrajectoryState_Request_' sequence class.
            */
            #define T QueryTrajectoryState_Request_
            #define TSeq QueryTrajectoryState_Request_Seq

            #define T_initialize_w_params control_msgs::srv::dds_::QueryTrajectoryState_Request__initialize_w_params

            #define T_finalize_w_params   control_msgs::srv::dds_::QueryTrajectoryState_Request__finalize_w_params
            #define T_copy       control_msgs::srv::dds_::QueryTrajectoryState_Request__copy

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
} /* namespace control_msgs  */
namespace control_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *QueryTrajectoryState_Response_TYPENAME = "control_msgs::srv::dds_::QueryTrajectoryState_Response_";

            DDS_TypeCode* QueryTrajectoryState_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode QueryTrajectoryState_Response__g_tc_message__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode QueryTrajectoryState_Response__g_tc_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode QueryTrajectoryState_Response__g_tc_name__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode QueryTrajectoryState_Response__g_tc_position__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode QueryTrajectoryState_Response__g_tc_velocity__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode QueryTrajectoryState_Response__g_tc_acceleration__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member QueryTrajectoryState_Response__g_tc_members[6]=
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
                    }, 
                    {
                        (char *)"name_",/* Member name */
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
                        (char *)"position_",/* Member name */
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
                        (char *)"velocity_",/* Member name */
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
                        (char *)"acceleration_",/* Member name */
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

                static DDS_TypeCode QueryTrajectoryState_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::srv::dds_::QueryTrajectoryState_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        QueryTrajectoryState_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for QueryTrajectoryState_Response_*/

                if (is_initialized) {
                    return &QueryTrajectoryState_Response__g_tc;
                }

                QueryTrajectoryState_Response__g_tc_name__sequence._data._typeCode = (RTICdrTypeCode *)&QueryTrajectoryState_Response__g_tc_name__string;

                QueryTrajectoryState_Response__g_tc_position__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                QueryTrajectoryState_Response__g_tc_velocity__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                QueryTrajectoryState_Response__g_tc_acceleration__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                QueryTrajectoryState_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                QueryTrajectoryState_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&QueryTrajectoryState_Response__g_tc_message__string;

                QueryTrajectoryState_Response__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& QueryTrajectoryState_Response__g_tc_name__sequence;
                QueryTrajectoryState_Response__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& QueryTrajectoryState_Response__g_tc_position__sequence;
                QueryTrajectoryState_Response__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& QueryTrajectoryState_Response__g_tc_velocity__sequence;
                QueryTrajectoryState_Response__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& QueryTrajectoryState_Response__g_tc_acceleration__sequence;

                is_initialized = RTI_TRUE;

                return &QueryTrajectoryState_Response__g_tc;
            }

            RTIBool QueryTrajectoryState_Response__initialize(
                QueryTrajectoryState_Response_* sample) {
                return control_msgs::srv::dds_::QueryTrajectoryState_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool QueryTrajectoryState_Response__initialize_ex(
                QueryTrajectoryState_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::srv::dds_::QueryTrajectoryState_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool QueryTrajectoryState_Response__initialize_w_params(
                QueryTrajectoryState_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

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

                if (allocParams->allocate_memory) {
                    DDS_StringSeq_initialize(&sample->name_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->name_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->name_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->name_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->name_, 0);
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
                    DDS_DoubleSeq_initialize(&sample->velocity_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->velocity_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->velocity_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->velocity_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->acceleration_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->acceleration_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->acceleration_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->acceleration_, 0);
                }
                return RTI_TRUE;
            }

            void QueryTrajectoryState_Response__finalize(
                QueryTrajectoryState_Response_* sample)
            {

                control_msgs::srv::dds_::QueryTrajectoryState_Response__finalize_ex(sample,RTI_TRUE);
            }

            void QueryTrajectoryState_Response__finalize_ex(
                QueryTrajectoryState_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::srv::dds_::QueryTrajectoryState_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void QueryTrajectoryState_Response__finalize_w_params(
                QueryTrajectoryState_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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
                DDS_StringSeq_finalize(&sample->name_);

                DDS_DoubleSeq_finalize(&sample->position_);

                DDS_DoubleSeq_finalize(&sample->velocity_);

                DDS_DoubleSeq_finalize(&sample->acceleration_);

            }

            void QueryTrajectoryState_Response__finalize_optional_members(
                QueryTrajectoryState_Response_* sample, RTIBool deletePointers)
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

            RTIBool QueryTrajectoryState_Response__copy(
                QueryTrajectoryState_Response_* dst,
                const QueryTrajectoryState_Response_* src)
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
                    if (!DDS_StringSeq_copy(&dst->name_ ,
                    &src->name_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->position_ ,
                    &src->position_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->velocity_ ,
                    &src->velocity_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->acceleration_ ,
                    &src->acceleration_ )) {
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
            * Configure and implement 'QueryTrajectoryState_Response_' sequence class.
            */
            #define T QueryTrajectoryState_Response_
            #define TSeq QueryTrajectoryState_Response_Seq

            #define T_initialize_w_params control_msgs::srv::dds_::QueryTrajectoryState_Response__initialize_w_params

            #define T_finalize_w_params   control_msgs::srv::dds_::QueryTrajectoryState_Response__finalize_w_params
            #define T_copy       control_msgs::srv::dds_::QueryTrajectoryState_Response__copy

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
} /* namespace control_msgs  */

