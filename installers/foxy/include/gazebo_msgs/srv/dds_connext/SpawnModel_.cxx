

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpawnModel_.idl using "rtiddsgen".
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

#include "SpawnModel_.h"

#include <new>

namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SpawnModel_Request_TYPENAME = "gazebo_msgs::srv::dds_::SpawnModel_Request_";

            DDS_TypeCode* SpawnModel_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SpawnModel_Request__g_tc_model_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode SpawnModel_Request__g_tc_model_xml__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode SpawnModel_Request__g_tc_robot_namespace__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode SpawnModel_Request__g_tc_reference_frame__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member SpawnModel_Request__g_tc_members[5]=
                {

                    {
                        (char *)"model_name_",/* Member name */
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
                        (char *)"model_xml_",/* Member name */
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
                        (char *)"robot_namespace_",/* Member name */
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
                        (char *)"initial_pose_",/* Member name */
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
                        (char *)"reference_frame_",/* Member name */
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
                    }
                };

                static DDS_TypeCode SpawnModel_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::SpawnModel_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        SpawnModel_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SpawnModel_Request_*/

                if (is_initialized) {
                    return &SpawnModel_Request__g_tc;
                }

                SpawnModel_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&SpawnModel_Request__g_tc_model_name__string;

                SpawnModel_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&SpawnModel_Request__g_tc_model_xml__string;

                SpawnModel_Request__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&SpawnModel_Request__g_tc_robot_namespace__string;

                SpawnModel_Request__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Pose__get_typecode();

                SpawnModel_Request__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&SpawnModel_Request__g_tc_reference_frame__string;

                is_initialized = RTI_TRUE;

                return &SpawnModel_Request__g_tc;
            }

            RTIBool SpawnModel_Request__initialize(
                SpawnModel_Request_* sample) {
                return gazebo_msgs::srv::dds_::SpawnModel_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SpawnModel_Request__initialize_ex(
                SpawnModel_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::SpawnModel_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SpawnModel_Request__initialize_w_params(
                SpawnModel_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->model_name_= DDS_String_alloc ((0));
                    if (sample->model_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->model_name_!= NULL) { 
                        sample->model_name_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->model_xml_= DDS_String_alloc ((0));
                    if (sample->model_xml_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->model_xml_!= NULL) { 
                        sample->model_xml_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->robot_namespace_= DDS_String_alloc ((0));
                    if (sample->robot_namespace_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->robot_namespace_!= NULL) { 
                        sample->robot_namespace_[0] = '\0';
                    }
                }

                if (!geometry_msgs::msg::dds_::Pose__initialize_w_params(&sample->initial_pose_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory){
                    sample->reference_frame_= DDS_String_alloc ((0));
                    if (sample->reference_frame_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->reference_frame_!= NULL) { 
                        sample->reference_frame_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void SpawnModel_Request__finalize(
                SpawnModel_Request_* sample)
            {

                gazebo_msgs::srv::dds_::SpawnModel_Request__finalize_ex(sample,RTI_TRUE);
            }

            void SpawnModel_Request__finalize_ex(
                SpawnModel_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::SpawnModel_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void SpawnModel_Request__finalize_w_params(
                SpawnModel_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->model_name_ != NULL) {
                    DDS_String_free(sample->model_name_);
                    sample->model_name_=NULL;

                }
                if (sample->model_xml_ != NULL) {
                    DDS_String_free(sample->model_xml_);
                    sample->model_xml_=NULL;

                }
                if (sample->robot_namespace_ != NULL) {
                    DDS_String_free(sample->robot_namespace_);
                    sample->robot_namespace_=NULL;

                }
                geometry_msgs::msg::dds_::Pose__finalize_w_params(&sample->initial_pose_,deallocParams);

                if (sample->reference_frame_ != NULL) {
                    DDS_String_free(sample->reference_frame_);
                    sample->reference_frame_=NULL;

                }
            }

            void SpawnModel_Request__finalize_optional_members(
                SpawnModel_Request_* sample, RTIBool deletePointers)
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

                geometry_msgs::msg::dds_::Pose__finalize_optional_members(&sample->initial_pose_, deallocParams->delete_pointers);
            }

            RTIBool SpawnModel_Request__copy(
                SpawnModel_Request_* dst,
                const SpawnModel_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->model_name_, src->model_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->model_xml_, src->model_xml_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->robot_namespace_, src->robot_namespace_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Pose__copy(
                        &dst->initial_pose_,(const geometry_msgs::msg::dds_::Pose_*)&src->initial_pose_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyStringEx (
                        &dst->reference_frame_, src->reference_frame_, 
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
            * Configure and implement 'SpawnModel_Request_' sequence class.
            */
            #define T SpawnModel_Request_
            #define TSeq SpawnModel_Request_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::SpawnModel_Request__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::SpawnModel_Request__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::SpawnModel_Request__copy

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
            const char *SpawnModel_Response_TYPENAME = "gazebo_msgs::srv::dds_::SpawnModel_Response_";

            DDS_TypeCode* SpawnModel_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SpawnModel_Response__g_tc_status_message__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member SpawnModel_Response__g_tc_members[2]=
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

                static DDS_TypeCode SpawnModel_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::SpawnModel_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        SpawnModel_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SpawnModel_Response_*/

                if (is_initialized) {
                    return &SpawnModel_Response__g_tc;
                }

                SpawnModel_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                SpawnModel_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&SpawnModel_Response__g_tc_status_message__string;

                is_initialized = RTI_TRUE;

                return &SpawnModel_Response__g_tc;
            }

            RTIBool SpawnModel_Response__initialize(
                SpawnModel_Response_* sample) {
                return gazebo_msgs::srv::dds_::SpawnModel_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SpawnModel_Response__initialize_ex(
                SpawnModel_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::SpawnModel_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SpawnModel_Response__initialize_w_params(
                SpawnModel_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void SpawnModel_Response__finalize(
                SpawnModel_Response_* sample)
            {

                gazebo_msgs::srv::dds_::SpawnModel_Response__finalize_ex(sample,RTI_TRUE);
            }

            void SpawnModel_Response__finalize_ex(
                SpawnModel_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::SpawnModel_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void SpawnModel_Response__finalize_w_params(
                SpawnModel_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

            void SpawnModel_Response__finalize_optional_members(
                SpawnModel_Response_* sample, RTIBool deletePointers)
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

            RTIBool SpawnModel_Response__copy(
                SpawnModel_Response_* dst,
                const SpawnModel_Response_* src)
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
            * Configure and implement 'SpawnModel_Response_' sequence class.
            */
            #define T SpawnModel_Response_
            #define TSeq SpawnModel_Response_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::SpawnModel_Response__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::SpawnModel_Response__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::SpawnModel_Response__copy

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

