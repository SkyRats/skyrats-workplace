

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetPhysicsProperties_.idl using "rtiddsgen".
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

#include "SetPhysicsProperties_.h"

#include <new>

namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SetPhysicsProperties_Request_TYPENAME = "gazebo_msgs::srv::dds_::SetPhysicsProperties_Request_";

            DDS_TypeCode* SetPhysicsProperties_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SetPhysicsProperties_Request__g_tc_members[4]=
                {

                    {
                        (char *)"time_step_",/* Member name */
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
                        (char *)"max_update_rate_",/* Member name */
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
                        (char *)"gravity_",/* Member name */
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
                        (char *)"ode_config_",/* Member name */
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
                    }
                };

                static DDS_TypeCode SetPhysicsProperties_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::SetPhysicsProperties_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        SetPhysicsProperties_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetPhysicsProperties_Request_*/

                if (is_initialized) {
                    return &SetPhysicsProperties_Request__g_tc;
                }

                SetPhysicsProperties_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                SetPhysicsProperties_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                SetPhysicsProperties_Request__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Vector3__get_typecode();

                SetPhysicsProperties_Request__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)gazebo_msgs::msg::dds_::ODEPhysics__get_typecode();

                is_initialized = RTI_TRUE;

                return &SetPhysicsProperties_Request__g_tc;
            }

            RTIBool SetPhysicsProperties_Request__initialize(
                SetPhysicsProperties_Request_* sample) {
                return gazebo_msgs::srv::dds_::SetPhysicsProperties_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetPhysicsProperties_Request__initialize_ex(
                SetPhysicsProperties_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::SetPhysicsProperties_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetPhysicsProperties_Request__initialize_w_params(
                SetPhysicsProperties_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->time_step_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->max_update_rate_)) {
                    return RTI_FALSE;
                }

                if (!geometry_msgs::msg::dds_::Vector3__initialize_w_params(&sample->gravity_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!gazebo_msgs::msg::dds_::ODEPhysics__initialize_w_params(&sample->ode_config_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void SetPhysicsProperties_Request__finalize(
                SetPhysicsProperties_Request_* sample)
            {

                gazebo_msgs::srv::dds_::SetPhysicsProperties_Request__finalize_ex(sample,RTI_TRUE);
            }

            void SetPhysicsProperties_Request__finalize_ex(
                SetPhysicsProperties_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::SetPhysicsProperties_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetPhysicsProperties_Request__finalize_w_params(
                SetPhysicsProperties_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                geometry_msgs::msg::dds_::Vector3__finalize_w_params(&sample->gravity_,deallocParams);

                gazebo_msgs::msg::dds_::ODEPhysics__finalize_w_params(&sample->ode_config_,deallocParams);

            }

            void SetPhysicsProperties_Request__finalize_optional_members(
                SetPhysicsProperties_Request_* sample, RTIBool deletePointers)
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

                geometry_msgs::msg::dds_::Vector3__finalize_optional_members(&sample->gravity_, deallocParams->delete_pointers);
                gazebo_msgs::msg::dds_::ODEPhysics__finalize_optional_members(&sample->ode_config_, deallocParams->delete_pointers);
            }

            RTIBool SetPhysicsProperties_Request__copy(
                SetPhysicsProperties_Request_* dst,
                const SetPhysicsProperties_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyDouble (
                        &dst->time_step_, &src->time_step_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->max_update_rate_, &src->max_update_rate_)) { 
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Vector3__copy(
                        &dst->gravity_,(const geometry_msgs::msg::dds_::Vector3_*)&src->gravity_)) {
                        return RTI_FALSE;
                    } 
                    if (!gazebo_msgs::msg::dds_::ODEPhysics__copy(
                        &dst->ode_config_,(const gazebo_msgs::msg::dds_::ODEPhysics_*)&src->ode_config_)) {
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
            * Configure and implement 'SetPhysicsProperties_Request_' sequence class.
            */
            #define T SetPhysicsProperties_Request_
            #define TSeq SetPhysicsProperties_Request_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::SetPhysicsProperties_Request__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::SetPhysicsProperties_Request__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::SetPhysicsProperties_Request__copy

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
            const char *SetPhysicsProperties_Response_TYPENAME = "gazebo_msgs::srv::dds_::SetPhysicsProperties_Response_";

            DDS_TypeCode* SetPhysicsProperties_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SetPhysicsProperties_Response__g_tc_status_message__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member SetPhysicsProperties_Response__g_tc_members[2]=
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

                static DDS_TypeCode SetPhysicsProperties_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::SetPhysicsProperties_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        SetPhysicsProperties_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetPhysicsProperties_Response_*/

                if (is_initialized) {
                    return &SetPhysicsProperties_Response__g_tc;
                }

                SetPhysicsProperties_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                SetPhysicsProperties_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&SetPhysicsProperties_Response__g_tc_status_message__string;

                is_initialized = RTI_TRUE;

                return &SetPhysicsProperties_Response__g_tc;
            }

            RTIBool SetPhysicsProperties_Response__initialize(
                SetPhysicsProperties_Response_* sample) {
                return gazebo_msgs::srv::dds_::SetPhysicsProperties_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetPhysicsProperties_Response__initialize_ex(
                SetPhysicsProperties_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::SetPhysicsProperties_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetPhysicsProperties_Response__initialize_w_params(
                SetPhysicsProperties_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void SetPhysicsProperties_Response__finalize(
                SetPhysicsProperties_Response_* sample)
            {

                gazebo_msgs::srv::dds_::SetPhysicsProperties_Response__finalize_ex(sample,RTI_TRUE);
            }

            void SetPhysicsProperties_Response__finalize_ex(
                SetPhysicsProperties_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::SetPhysicsProperties_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetPhysicsProperties_Response__finalize_w_params(
                SetPhysicsProperties_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

            void SetPhysicsProperties_Response__finalize_optional_members(
                SetPhysicsProperties_Response_* sample, RTIBool deletePointers)
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

            RTIBool SetPhysicsProperties_Response__copy(
                SetPhysicsProperties_Response_* dst,
                const SetPhysicsProperties_Response_* src)
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
            * Configure and implement 'SetPhysicsProperties_Response_' sequence class.
            */
            #define T SetPhysicsProperties_Response_
            #define TSeq SetPhysicsProperties_Response_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::SetPhysicsProperties_Response__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::SetPhysicsProperties_Response__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::SetPhysicsProperties_Response__copy

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

