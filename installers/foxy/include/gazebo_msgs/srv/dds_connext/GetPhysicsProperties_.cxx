

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetPhysicsProperties_.idl using "rtiddsgen".
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

#include "GetPhysicsProperties_.h"

#include <new>

namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetPhysicsProperties_Request_TYPENAME = "gazebo_msgs::srv::dds_::GetPhysicsProperties_Request_";

            DDS_TypeCode* GetPhysicsProperties_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GetPhysicsProperties_Request__g_tc_members[1]=
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

                static DDS_TypeCode GetPhysicsProperties_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::GetPhysicsProperties_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GetPhysicsProperties_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetPhysicsProperties_Request_*/

                if (is_initialized) {
                    return &GetPhysicsProperties_Request__g_tc;
                }

                GetPhysicsProperties_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &GetPhysicsProperties_Request__g_tc;
            }

            RTIBool GetPhysicsProperties_Request__initialize(
                GetPhysicsProperties_Request_* sample) {
                return gazebo_msgs::srv::dds_::GetPhysicsProperties_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetPhysicsProperties_Request__initialize_ex(
                GetPhysicsProperties_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::GetPhysicsProperties_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetPhysicsProperties_Request__initialize_w_params(
                GetPhysicsProperties_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void GetPhysicsProperties_Request__finalize(
                GetPhysicsProperties_Request_* sample)
            {

                gazebo_msgs::srv::dds_::GetPhysicsProperties_Request__finalize_ex(sample,RTI_TRUE);
            }

            void GetPhysicsProperties_Request__finalize_ex(
                GetPhysicsProperties_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::GetPhysicsProperties_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetPhysicsProperties_Request__finalize_w_params(
                GetPhysicsProperties_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void GetPhysicsProperties_Request__finalize_optional_members(
                GetPhysicsProperties_Request_* sample, RTIBool deletePointers)
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

            RTIBool GetPhysicsProperties_Request__copy(
                GetPhysicsProperties_Request_* dst,
                const GetPhysicsProperties_Request_* src)
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
            * Configure and implement 'GetPhysicsProperties_Request_' sequence class.
            */
            #define T GetPhysicsProperties_Request_
            #define TSeq GetPhysicsProperties_Request_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::GetPhysicsProperties_Request__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::GetPhysicsProperties_Request__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::GetPhysicsProperties_Request__copy

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
            const char *GetPhysicsProperties_Response_TYPENAME = "gazebo_msgs::srv::dds_::GetPhysicsProperties_Response_";

            DDS_TypeCode* GetPhysicsProperties_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GetPhysicsProperties_Response__g_tc_status_message__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member GetPhysicsProperties_Response__g_tc_members[7]=
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
                        (char *)"pause_",/* Member name */
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
                        (char *)"max_update_rate_",/* Member name */
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
                        (char *)"gravity_",/* Member name */
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
                        (char *)"ode_config_",/* Member name */
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
                        (char *)"success_",/* Member name */
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
                    }, 
                    {
                        (char *)"status_message_",/* Member name */
                        {
                            6,/* Representation ID */          
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

                static DDS_TypeCode GetPhysicsProperties_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::GetPhysicsProperties_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        GetPhysicsProperties_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetPhysicsProperties_Response_*/

                if (is_initialized) {
                    return &GetPhysicsProperties_Response__g_tc;
                }

                GetPhysicsProperties_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                GetPhysicsProperties_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                GetPhysicsProperties_Response__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                GetPhysicsProperties_Response__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Vector3__get_typecode();

                GetPhysicsProperties_Response__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)gazebo_msgs::msg::dds_::ODEPhysics__get_typecode();

                GetPhysicsProperties_Response__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                GetPhysicsProperties_Response__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&GetPhysicsProperties_Response__g_tc_status_message__string;

                is_initialized = RTI_TRUE;

                return &GetPhysicsProperties_Response__g_tc;
            }

            RTIBool GetPhysicsProperties_Response__initialize(
                GetPhysicsProperties_Response_* sample) {
                return gazebo_msgs::srv::dds_::GetPhysicsProperties_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetPhysicsProperties_Response__initialize_ex(
                GetPhysicsProperties_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::GetPhysicsProperties_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetPhysicsProperties_Response__initialize_w_params(
                GetPhysicsProperties_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                if (!RTICdrType_initBoolean(&sample->pause_)) {
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

            void GetPhysicsProperties_Response__finalize(
                GetPhysicsProperties_Response_* sample)
            {

                gazebo_msgs::srv::dds_::GetPhysicsProperties_Response__finalize_ex(sample,RTI_TRUE);
            }

            void GetPhysicsProperties_Response__finalize_ex(
                GetPhysicsProperties_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::GetPhysicsProperties_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetPhysicsProperties_Response__finalize_w_params(
                GetPhysicsProperties_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                geometry_msgs::msg::dds_::Vector3__finalize_w_params(&sample->gravity_,deallocParams);

                gazebo_msgs::msg::dds_::ODEPhysics__finalize_w_params(&sample->ode_config_,deallocParams);

                if (sample->status_message_ != NULL) {
                    DDS_String_free(sample->status_message_);
                    sample->status_message_=NULL;

                }
            }

            void GetPhysicsProperties_Response__finalize_optional_members(
                GetPhysicsProperties_Response_* sample, RTIBool deletePointers)
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

            RTIBool GetPhysicsProperties_Response__copy(
                GetPhysicsProperties_Response_* dst,
                const GetPhysicsProperties_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyDouble (
                        &dst->time_step_, &src->time_step_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->pause_, &src->pause_)) { 
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
            * Configure and implement 'GetPhysicsProperties_Response_' sequence class.
            */
            #define T GetPhysicsProperties_Response_
            #define TSeq GetPhysicsProperties_Response_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::GetPhysicsProperties_Response__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::GetPhysicsProperties_Response__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::GetPhysicsProperties_Response__copy

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

